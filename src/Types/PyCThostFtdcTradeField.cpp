
#include "PyCThostFtdcTradeField.h"

///成交

static int PyCThostFtdcTradeFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "reserve1", "OrderRef", "UserID", "ExchangeID", "TradeID", "Direction", "OrderSysID", "ParticipantID", "ClientID", "TradingRole", "reserve2", "OffsetFlag", "HedgeFlag", "Price", "Volume", "TradeDate", "TradeTime", "TradeType", "PriceSource", "TraderID", "OrderLocalID", "ClearingPartID", "BusinessUnit", "SequenceNo", "TradingDay", "SettlementID", "BrokerOrderSeq", "TradeSource", "InvestUnitID", "InstrumentID", "ExchangeInstID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcTradeField_BrokerID = NULL;
    Py_ssize_t CThostFtdcTradeField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcTradeField_InvestorID = NULL;
    Py_ssize_t CThostFtdcTradeField_InvestorID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcTradeField_reserve1 = NULL;
    Py_ssize_t CThostFtdcTradeField_reserve1_length = 0;

    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcTradeField_OrderRef = NULL;
    Py_ssize_t CThostFtdcTradeField_OrderRef_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcTradeField_UserID = NULL;
    Py_ssize_t CThostFtdcTradeField_UserID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcTradeField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcTradeField_ExchangeID_length = 0;

    /// 成交编号
    /// typedef char TThostFtdcTradeIDType[21]
    char *CThostFtdcTradeField_TradeID = NULL;
    Py_ssize_t CThostFtdcTradeField_TradeID_length = 0;

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    char CThostFtdcTradeField_Direction = 0;

    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcTradeField_OrderSysID = NULL;
    Py_ssize_t CThostFtdcTradeField_OrderSysID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcTradeField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcTradeField_ParticipantID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcTradeField_ClientID = NULL;
    Py_ssize_t CThostFtdcTradeField_ClientID_length = 0;

    /// 交易角色
    /// typedef char TThostFtdcTradingRoleType
    char CThostFtdcTradeField_TradingRole = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    char *CThostFtdcTradeField_reserve2 = NULL;
    Py_ssize_t CThostFtdcTradeField_reserve2_length = 0;

    /// 开平标志
    /// typedef char TThostFtdcOffsetFlagType
    char CThostFtdcTradeField_OffsetFlag = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcTradeField_HedgeFlag = 0;

    /// 价格
    /// typedef double TThostFtdcPriceType
    double CThostFtdcTradeField_Price = 0.0;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcTradeField_Volume = 0;

    /// 成交时期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcTradeField_TradeDate = NULL;
    Py_ssize_t CThostFtdcTradeField_TradeDate_length = 0;

    /// 成交时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcTradeField_TradeTime = NULL;
    Py_ssize_t CThostFtdcTradeField_TradeTime_length = 0;

    /// 成交类型
    /// typedef char TThostFtdcTradeTypeType
    char CThostFtdcTradeField_TradeType = 0;

    /// 成交价来源
    /// typedef char TThostFtdcPriceSourceType
    char CThostFtdcTradeField_PriceSource = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcTradeField_TraderID = NULL;
    Py_ssize_t CThostFtdcTradeField_TraderID_length = 0;

    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcTradeField_OrderLocalID = NULL;
    Py_ssize_t CThostFtdcTradeField_OrderLocalID_length = 0;

    /// 结算会员编号
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcTradeField_ClearingPartID = NULL;
    Py_ssize_t CThostFtdcTradeField_ClearingPartID_length = 0;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    char *CThostFtdcTradeField_BusinessUnit = NULL;
    Py_ssize_t CThostFtdcTradeField_BusinessUnit_length = 0;

    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcTradeField_SequenceNo = 0;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcTradeField_TradingDay = NULL;
    Py_ssize_t CThostFtdcTradeField_TradingDay_length = 0;

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    int CThostFtdcTradeField_SettlementID = 0;

    /// 经纪公司报单编号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcTradeField_BrokerOrderSeq = 0;

    /// 成交来源
    /// typedef char TThostFtdcTradeSourceType
    char CThostFtdcTradeField_TradeSource = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcTradeField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcTradeField_InvestUnitID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcTradeField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcTradeField_InstrumentID_length = 0;

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcTradeField_ExchangeInstID = NULL;
    Py_ssize_t CThostFtdcTradeField_ExchangeInstID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#cy#y#y#cy#ccdiy#y#ccy#y#y#y#iy#iicy#y#y#", (char **)kwlist
        , &CThostFtdcTradeField_BrokerID, &CThostFtdcTradeField_BrokerID_length
        , &CThostFtdcTradeField_InvestorID, &CThostFtdcTradeField_InvestorID_length
        , &CThostFtdcTradeField_reserve1, &CThostFtdcTradeField_reserve1_length
        , &CThostFtdcTradeField_OrderRef, &CThostFtdcTradeField_OrderRef_length
        , &CThostFtdcTradeField_UserID, &CThostFtdcTradeField_UserID_length
        , &CThostFtdcTradeField_ExchangeID, &CThostFtdcTradeField_ExchangeID_length
        , &CThostFtdcTradeField_TradeID, &CThostFtdcTradeField_TradeID_length
        , &CThostFtdcTradeField_Direction
        , &CThostFtdcTradeField_OrderSysID, &CThostFtdcTradeField_OrderSysID_length
        , &CThostFtdcTradeField_ParticipantID, &CThostFtdcTradeField_ParticipantID_length
        , &CThostFtdcTradeField_ClientID, &CThostFtdcTradeField_ClientID_length
        , &CThostFtdcTradeField_TradingRole
        , &CThostFtdcTradeField_reserve2, &CThostFtdcTradeField_reserve2_length
        , &CThostFtdcTradeField_OffsetFlag
        , &CThostFtdcTradeField_HedgeFlag
        , &CThostFtdcTradeField_Price
        , &CThostFtdcTradeField_Volume
        , &CThostFtdcTradeField_TradeDate, &CThostFtdcTradeField_TradeDate_length
        , &CThostFtdcTradeField_TradeTime, &CThostFtdcTradeField_TradeTime_length
        , &CThostFtdcTradeField_TradeType
        , &CThostFtdcTradeField_PriceSource
        , &CThostFtdcTradeField_TraderID, &CThostFtdcTradeField_TraderID_length
        , &CThostFtdcTradeField_OrderLocalID, &CThostFtdcTradeField_OrderLocalID_length
        , &CThostFtdcTradeField_ClearingPartID, &CThostFtdcTradeField_ClearingPartID_length
        , &CThostFtdcTradeField_BusinessUnit, &CThostFtdcTradeField_BusinessUnit_length
        , &CThostFtdcTradeField_SequenceNo
        , &CThostFtdcTradeField_TradingDay, &CThostFtdcTradeField_TradingDay_length
        , &CThostFtdcTradeField_SettlementID
        , &CThostFtdcTradeField_BrokerOrderSeq
        , &CThostFtdcTradeField_TradeSource
        , &CThostFtdcTradeField_InvestUnitID, &CThostFtdcTradeField_InvestUnitID_length
        , &CThostFtdcTradeField_InstrumentID, &CThostFtdcTradeField_InstrumentID_length
        , &CThostFtdcTradeField_ExchangeInstID, &CThostFtdcTradeField_ExchangeInstID_length
    )) {
        return -1;
    }

    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcTradeField_BrokerID != NULL ) {
        if(CThostFtdcTradeField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcTradeField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcTradeField_BrokerID, CThostFtdcTradeField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcTradeField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcTradeField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcTradeField_InvestorID != NULL ) {
        if(CThostFtdcTradeField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcTradeField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcTradeField_InvestorID, CThostFtdcTradeField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcTradeField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcTradeField_InvestorID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcTradeField_reserve1 != NULL ) {
        if(CThostFtdcTradeField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcTradeField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcTradeField_reserve1, CThostFtdcTradeField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcTradeField_reserve1, sizeof(data->reserve1));
        CThostFtdcTradeField_reserve1 = NULL;
    }

    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcTradeField_OrderRef != NULL ) {
        if(CThostFtdcTradeField_OrderRef_length >= (Py_ssize_t)sizeof(data->OrderRef)) {
            PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is 12)", CThostFtdcTradeField_OrderRef_length);
            return -1;
        }
        // memset(data->OrderRef, 0, sizeof(data->OrderRef));
        // memcpy(data->OrderRef, CThostFtdcTradeField_OrderRef, CThostFtdcTradeField_OrderRef_length);
        strncpy(data->OrderRef, CThostFtdcTradeField_OrderRef, sizeof(data->OrderRef));
        CThostFtdcTradeField_OrderRef = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcTradeField_UserID != NULL ) {
        if(CThostFtdcTradeField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcTradeField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcTradeField_UserID, CThostFtdcTradeField_UserID_length);
        strncpy(data->UserID, CThostFtdcTradeField_UserID, sizeof(data->UserID));
        CThostFtdcTradeField_UserID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcTradeField_ExchangeID != NULL ) {
        if(CThostFtdcTradeField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcTradeField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcTradeField_ExchangeID, CThostFtdcTradeField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcTradeField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcTradeField_ExchangeID = NULL;
    }

    /// 成交编号
    /// typedef char TThostFtdcTradeIDType[21]
    if( CThostFtdcTradeField_TradeID != NULL ) {
        if(CThostFtdcTradeField_TradeID_length >= (Py_ssize_t)sizeof(data->TradeID)) {
            PyErr_Format(PyExc_ValueError, "TradeID too long: length=%zd (max allowed is 20)", CThostFtdcTradeField_TradeID_length);
            return -1;
        }
        // memset(data->TradeID, 0, sizeof(data->TradeID));
        // memcpy(data->TradeID, CThostFtdcTradeField_TradeID, CThostFtdcTradeField_TradeID_length);
        strncpy(data->TradeID, CThostFtdcTradeField_TradeID, sizeof(data->TradeID));
        CThostFtdcTradeField_TradeID = NULL;
    }

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    data->Direction = CThostFtdcTradeField_Direction;

    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcTradeField_OrderSysID != NULL ) {
        if(CThostFtdcTradeField_OrderSysID_length >= (Py_ssize_t)sizeof(data->OrderSysID)) {
            PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is 20)", CThostFtdcTradeField_OrderSysID_length);
            return -1;
        }
        // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
        // memcpy(data->OrderSysID, CThostFtdcTradeField_OrderSysID, CThostFtdcTradeField_OrderSysID_length);
        strncpy(data->OrderSysID, CThostFtdcTradeField_OrderSysID, sizeof(data->OrderSysID));
        CThostFtdcTradeField_OrderSysID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcTradeField_ParticipantID != NULL ) {
        if(CThostFtdcTradeField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcTradeField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcTradeField_ParticipantID, CThostFtdcTradeField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcTradeField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcTradeField_ParticipantID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcTradeField_ClientID != NULL ) {
        if(CThostFtdcTradeField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcTradeField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcTradeField_ClientID, CThostFtdcTradeField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcTradeField_ClientID, sizeof(data->ClientID));
        CThostFtdcTradeField_ClientID = NULL;
    }

    /// 交易角色
    /// typedef char TThostFtdcTradingRoleType
    data->TradingRole = CThostFtdcTradeField_TradingRole;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    if( CThostFtdcTradeField_reserve2 != NULL ) {
        if(CThostFtdcTradeField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 30)", CThostFtdcTradeField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcTradeField_reserve2, CThostFtdcTradeField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcTradeField_reserve2, sizeof(data->reserve2));
        CThostFtdcTradeField_reserve2 = NULL;
    }

    /// 开平标志
    /// typedef char TThostFtdcOffsetFlagType
    data->OffsetFlag = CThostFtdcTradeField_OffsetFlag;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcTradeField_HedgeFlag;

    /// 价格
    /// typedef double TThostFtdcPriceType
    data->Price = CThostFtdcTradeField_Price;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    data->Volume = CThostFtdcTradeField_Volume;

    /// 成交时期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcTradeField_TradeDate != NULL ) {
        if(CThostFtdcTradeField_TradeDate_length >= (Py_ssize_t)sizeof(data->TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is 8)", CThostFtdcTradeField_TradeDate_length);
            return -1;
        }
        // memset(data->TradeDate, 0, sizeof(data->TradeDate));
        // memcpy(data->TradeDate, CThostFtdcTradeField_TradeDate, CThostFtdcTradeField_TradeDate_length);
        strncpy(data->TradeDate, CThostFtdcTradeField_TradeDate, sizeof(data->TradeDate));
        CThostFtdcTradeField_TradeDate = NULL;
    }

    /// 成交时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcTradeField_TradeTime != NULL ) {
        if(CThostFtdcTradeField_TradeTime_length >= (Py_ssize_t)sizeof(data->TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is 8)", CThostFtdcTradeField_TradeTime_length);
            return -1;
        }
        // memset(data->TradeTime, 0, sizeof(data->TradeTime));
        // memcpy(data->TradeTime, CThostFtdcTradeField_TradeTime, CThostFtdcTradeField_TradeTime_length);
        strncpy(data->TradeTime, CThostFtdcTradeField_TradeTime, sizeof(data->TradeTime));
        CThostFtdcTradeField_TradeTime = NULL;
    }

    /// 成交类型
    /// typedef char TThostFtdcTradeTypeType
    data->TradeType = CThostFtdcTradeField_TradeType;

    /// 成交价来源
    /// typedef char TThostFtdcPriceSourceType
    data->PriceSource = CThostFtdcTradeField_PriceSource;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcTradeField_TraderID != NULL ) {
        if(CThostFtdcTradeField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcTradeField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcTradeField_TraderID, CThostFtdcTradeField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcTradeField_TraderID, sizeof(data->TraderID));
        CThostFtdcTradeField_TraderID = NULL;
    }

    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcTradeField_OrderLocalID != NULL ) {
        if(CThostFtdcTradeField_OrderLocalID_length >= (Py_ssize_t)sizeof(data->OrderLocalID)) {
            PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is 12)", CThostFtdcTradeField_OrderLocalID_length);
            return -1;
        }
        // memset(data->OrderLocalID, 0, sizeof(data->OrderLocalID));
        // memcpy(data->OrderLocalID, CThostFtdcTradeField_OrderLocalID, CThostFtdcTradeField_OrderLocalID_length);
        strncpy(data->OrderLocalID, CThostFtdcTradeField_OrderLocalID, sizeof(data->OrderLocalID));
        CThostFtdcTradeField_OrderLocalID = NULL;
    }

    /// 结算会员编号
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcTradeField_ClearingPartID != NULL ) {
        if(CThostFtdcTradeField_ClearingPartID_length >= (Py_ssize_t)sizeof(data->ClearingPartID)) {
            PyErr_Format(PyExc_ValueError, "ClearingPartID too long: length=%zd (max allowed is 10)", CThostFtdcTradeField_ClearingPartID_length);
            return -1;
        }
        // memset(data->ClearingPartID, 0, sizeof(data->ClearingPartID));
        // memcpy(data->ClearingPartID, CThostFtdcTradeField_ClearingPartID, CThostFtdcTradeField_ClearingPartID_length);
        strncpy(data->ClearingPartID, CThostFtdcTradeField_ClearingPartID, sizeof(data->ClearingPartID));
        CThostFtdcTradeField_ClearingPartID = NULL;
    }

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    if( CThostFtdcTradeField_BusinessUnit != NULL ) {
        if(CThostFtdcTradeField_BusinessUnit_length >= (Py_ssize_t)sizeof(data->BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is 20)", CThostFtdcTradeField_BusinessUnit_length);
            return -1;
        }
        // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
        // memcpy(data->BusinessUnit, CThostFtdcTradeField_BusinessUnit, CThostFtdcTradeField_BusinessUnit_length);
        strncpy(data->BusinessUnit, CThostFtdcTradeField_BusinessUnit, sizeof(data->BusinessUnit));
        CThostFtdcTradeField_BusinessUnit = NULL;
    }

    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    data->SequenceNo = CThostFtdcTradeField_SequenceNo;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcTradeField_TradingDay != NULL ) {
        if(CThostFtdcTradeField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcTradeField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcTradeField_TradingDay, CThostFtdcTradeField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcTradeField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcTradeField_TradingDay = NULL;
    }

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    data->SettlementID = CThostFtdcTradeField_SettlementID;

    /// 经纪公司报单编号
    /// typedef int TThostFtdcSequenceNoType
    data->BrokerOrderSeq = CThostFtdcTradeField_BrokerOrderSeq;

    /// 成交来源
    /// typedef char TThostFtdcTradeSourceType
    data->TradeSource = CThostFtdcTradeField_TradeSource;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcTradeField_InvestUnitID != NULL ) {
        if(CThostFtdcTradeField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcTradeField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcTradeField_InvestUnitID, CThostFtdcTradeField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcTradeField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcTradeField_InvestUnitID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcTradeField_InstrumentID != NULL ) {
        if(CThostFtdcTradeField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcTradeField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcTradeField_InstrumentID, CThostFtdcTradeField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcTradeField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcTradeField_InstrumentID = NULL;
    }

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcTradeField_ExchangeInstID != NULL ) {
        if(CThostFtdcTradeField_ExchangeInstID_length >= (Py_ssize_t)sizeof(data->ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is 80)", CThostFtdcTradeField_ExchangeInstID_length);
            return -1;
        }
        // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
        // memcpy(data->ExchangeInstID, CThostFtdcTradeField_ExchangeInstID, CThostFtdcTradeField_ExchangeInstID_length);
        strncpy(data->ExchangeInstID, CThostFtdcTradeField_ExchangeInstID, sizeof(data->ExchangeInstID));
        CThostFtdcTradeField_ExchangeInstID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcTradeFieldType_repr(PyObject *self) {

    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:c,s:y,s:c,s:c,s:d,s:i,s:y,s:y,s:c,s:c,s:y,s:y,s:y,s:y,s:i,s:y,s:i,s:i,s:c,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "OrderRef", data->OrderRef//, (Py_ssize_t)sizeof(data->OrderRef)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "TradeID", data->TradeID//, (Py_ssize_t)sizeof(data->TradeID)
        , "Direction", data->Direction
        , "OrderSysID", data->OrderSysID//, (Py_ssize_t)sizeof(data->OrderSysID)
        , "ParticipantID", data->ParticipantID//, (Py_ssize_t)sizeof(data->ParticipantID)
        , "ClientID", data->ClientID//, (Py_ssize_t)sizeof(data->ClientID)
        , "TradingRole", data->TradingRole
        , "reserve2", data->reserve2//, (Py_ssize_t)sizeof(data->reserve2)
        , "OffsetFlag", data->OffsetFlag
        , "HedgeFlag", data->HedgeFlag
        , "Price", data->Price
        , "Volume", data->Volume
        , "TradeDate", data->TradeDate//, (Py_ssize_t)sizeof(data->TradeDate)
        , "TradeTime", data->TradeTime//, (Py_ssize_t)sizeof(data->TradeTime)
        , "TradeType", data->TradeType
        , "PriceSource", data->PriceSource
        , "TraderID", data->TraderID//, (Py_ssize_t)sizeof(data->TraderID)
        , "OrderLocalID", data->OrderLocalID//, (Py_ssize_t)sizeof(data->OrderLocalID)
        , "ClearingPartID", data->ClearingPartID//, (Py_ssize_t)sizeof(data->ClearingPartID)
        , "BusinessUnit", data->BusinessUnit//, (Py_ssize_t)sizeof(data->BusinessUnit)
        , "SequenceNo", data->SequenceNo
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "SettlementID", data->SettlementID
        , "BrokerOrderSeq", data->BrokerOrderSeq
        , "TradeSource", data->TradeSource
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "ExchangeInstID", data->ExchangeInstID//, (Py_ssize_t)sizeof(data->ExchangeInstID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradeField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradeField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcTradeFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcTradeFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradeField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcTradeFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcTradeFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradeField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcTradeFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcTradeFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradeField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcTradeFieldType_get_OrderRef(PyObject *self, void *closure) {
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderRef, (Py_ssize_t)sizeof(data->OrderRef));
    return PyBytes_FromString(data->OrderRef);
}

static int PyCThostFtdcTradeFieldType_set_OrderRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradeField::OrderRef)) {
        PyErr_SetString(PyExc_ValueError, "OrderRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // memset(data->OrderRef, 0, sizeof(data->OrderRef));
    // memcpy(data->OrderRef, buf, len);
    strncpy(data->OrderRef, buf, sizeof(data->OrderRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcTradeFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcTradeFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradeField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcTradeFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcTradeFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradeField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 成交编号
/// typedef char TThostFtdcTradeIDType[21]
static PyObject *PyCThostFtdcTradeFieldType_get_TradeID(PyObject *self, void *closure) {
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeID, (Py_ssize_t)sizeof(data->TradeID));
    return PyBytes_FromString(data->TradeID);
}

static int PyCThostFtdcTradeFieldType_set_TradeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradeField::TradeID)) {
        PyErr_SetString(PyExc_ValueError, "TradeID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // memset(data->TradeID, 0, sizeof(data->TradeID));
    // memcpy(data->TradeID, buf, len);
    strncpy(data->TradeID, buf, sizeof(data->TradeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 买卖方向
/// typedef char TThostFtdcDirectionType
static PyObject *PyCThostFtdcTradeFieldType_get_Direction(PyObject *self, void *closure) {
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Direction), 1);
}

static int PyCThostFtdcTradeFieldType_set_Direction(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcTradeField::Direction)) {
        PyErr_SetString(PyExc_ValueError, "Direction must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    data->Direction = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcTradeFieldType_get_OrderSysID(PyObject *self, void *closure) {
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderSysID, (Py_ssize_t)sizeof(data->OrderSysID));
    return PyBytes_FromString(data->OrderSysID);
}

static int PyCThostFtdcTradeFieldType_set_OrderSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradeField::OrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "OrderSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
    // memcpy(data->OrderSysID, buf, len);
    strncpy(data->OrderSysID, buf, sizeof(data->OrderSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcTradeFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcTradeFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradeField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcTradeFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcTradeFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradeField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易角色
/// typedef char TThostFtdcTradingRoleType
static PyObject *PyCThostFtdcTradeFieldType_get_TradingRole(PyObject *self, void *closure) {
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->TradingRole), 1);
}

static int PyCThostFtdcTradeFieldType_set_TradingRole(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingRole Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcTradeField::TradingRole)) {
        PyErr_SetString(PyExc_ValueError, "TradingRole must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    data->TradingRole = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldExchangeInstIDType[31]
static PyObject *PyCThostFtdcTradeFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcTradeFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradeField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 开平标志
/// typedef char TThostFtdcOffsetFlagType
static PyObject *PyCThostFtdcTradeFieldType_get_OffsetFlag(PyObject *self, void *closure) {
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OffsetFlag), 1);
}

static int PyCThostFtdcTradeFieldType_set_OffsetFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OffsetFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcTradeField::OffsetFlag)) {
        PyErr_SetString(PyExc_ValueError, "OffsetFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    data->OffsetFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcTradeFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcTradeFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcTradeField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 成交时期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcTradeFieldType_get_TradeDate(PyObject *self, void *closure) {
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeDate, (Py_ssize_t)sizeof(data->TradeDate));
    return PyBytes_FromString(data->TradeDate);
}

static int PyCThostFtdcTradeFieldType_set_TradeDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradeField::TradeDate)) {
        PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // memset(data->TradeDate, 0, sizeof(data->TradeDate));
    // memcpy(data->TradeDate, buf, len);
    strncpy(data->TradeDate, buf, sizeof(data->TradeDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 成交时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcTradeFieldType_get_TradeTime(PyObject *self, void *closure) {
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeTime, (Py_ssize_t)sizeof(data->TradeTime));
    return PyBytes_FromString(data->TradeTime);
}

static int PyCThostFtdcTradeFieldType_set_TradeTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradeField::TradeTime)) {
        PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // memset(data->TradeTime, 0, sizeof(data->TradeTime));
    // memcpy(data->TradeTime, buf, len);
    strncpy(data->TradeTime, buf, sizeof(data->TradeTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 成交类型
/// typedef char TThostFtdcTradeTypeType
static PyObject *PyCThostFtdcTradeFieldType_get_TradeType(PyObject *self, void *closure) {
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->TradeType), 1);
}

static int PyCThostFtdcTradeFieldType_set_TradeType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcTradeField::TradeType)) {
        PyErr_SetString(PyExc_ValueError, "TradeType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    data->TradeType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 成交价来源
/// typedef char TThostFtdcPriceSourceType
static PyObject *PyCThostFtdcTradeFieldType_get_PriceSource(PyObject *self, void *closure) {
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->PriceSource), 1);
}

static int PyCThostFtdcTradeFieldType_set_PriceSource(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "PriceSource Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcTradeField::PriceSource)) {
        PyErr_SetString(PyExc_ValueError, "PriceSource must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    data->PriceSource = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcTradeFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcTradeFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradeField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 本地报单编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcTradeFieldType_get_OrderLocalID(PyObject *self, void *closure) {
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderLocalID, (Py_ssize_t)sizeof(data->OrderLocalID));
    return PyBytes_FromString(data->OrderLocalID);
}

static int PyCThostFtdcTradeFieldType_set_OrderLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradeField::OrderLocalID)) {
        PyErr_SetString(PyExc_ValueError, "OrderLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // memset(data->OrderLocalID, 0, sizeof(data->OrderLocalID));
    // memcpy(data->OrderLocalID, buf, len);
    strncpy(data->OrderLocalID, buf, sizeof(data->OrderLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 结算会员编号
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcTradeFieldType_get_ClearingPartID(PyObject *self, void *closure) {
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClearingPartID, (Py_ssize_t)sizeof(data->ClearingPartID));
    return PyBytes_FromString(data->ClearingPartID);
}

static int PyCThostFtdcTradeFieldType_set_ClearingPartID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClearingPartID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradeField::ClearingPartID)) {
        PyErr_SetString(PyExc_ValueError, "ClearingPartID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // memset(data->ClearingPartID, 0, sizeof(data->ClearingPartID));
    // memcpy(data->ClearingPartID, buf, len);
    strncpy(data->ClearingPartID, buf, sizeof(data->ClearingPartID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 业务单元
/// typedef char TThostFtdcBusinessUnitType[21]
static PyObject *PyCThostFtdcTradeFieldType_get_BusinessUnit(PyObject *self, void *closure) {
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BusinessUnit, (Py_ssize_t)sizeof(data->BusinessUnit));
    return PyBytes_FromString(data->BusinessUnit);
}

static int PyCThostFtdcTradeFieldType_set_BusinessUnit(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BusinessUnit Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradeField::BusinessUnit)) {
        PyErr_SetString(PyExc_ValueError, "BusinessUnit must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
    // memcpy(data->BusinessUnit, buf, len);
    strncpy(data->BusinessUnit, buf, sizeof(data->BusinessUnit));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcTradeFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcTradeFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradeField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 成交来源
/// typedef char TThostFtdcTradeSourceType
static PyObject *PyCThostFtdcTradeFieldType_get_TradeSource(PyObject *self, void *closure) {
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->TradeSource), 1);
}

static int PyCThostFtdcTradeFieldType_set_TradeSource(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeSource Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcTradeField::TradeSource)) {
        PyErr_SetString(PyExc_ValueError, "TradeSource must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    data->TradeSource = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcTradeFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcTradeFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradeField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcTradeFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcTradeFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradeField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约在交易所的代码
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcTradeFieldType_get_ExchangeInstID(PyObject *self, void *closure) {
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeInstID, (Py_ssize_t)sizeof(data->ExchangeInstID));
    return PyBytes_FromString(data->ExchangeInstID);
}

static int PyCThostFtdcTradeFieldType_set_ExchangeInstID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradeField::ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(self);
    CThostFtdcTradeField *data = &(extra->data);
    // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
    // memcpy(data->ExchangeInstID, buf, len);
    strncpy(data->ExchangeInstID, buf, sizeof(data->ExchangeInstID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcTradeFieldType_members[] = {
    /// 价格
    /// typedef double TThostFtdcPriceType
    {
        .name = "Price",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcTradeFieldData, data.Price),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("价格")
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
        .offset = offsetof(PyCThostFtdcTradeFieldData, data.Volume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("数量")
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
        .offset = offsetof(PyCThostFtdcTradeFieldData, data.SequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("序号")
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
        .offset = offsetof(PyCThostFtdcTradeFieldData, data.SettlementID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("结算编号")
    },
    /// 经纪公司报单编号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "BrokerOrderSeq",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcTradeFieldData, data.BrokerOrderSeq),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("经纪公司报单编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcTradeFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcTradeFieldType_get_BrokerID,
    .set = PyCThostFtdcTradeFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcTradeFieldType_get_InvestorID,
    .set = PyCThostFtdcTradeFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcTradeFieldType_get_reserve1,
    .set = PyCThostFtdcTradeFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "OrderRef",
    .get = PyCThostFtdcTradeFieldType_get_OrderRef,
    .set = PyCThostFtdcTradeFieldType_set_OrderRef,
    .doc = PyDoc_STR("报单引用"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcTradeFieldType_get_UserID,
    .set = PyCThostFtdcTradeFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcTradeFieldType_get_ExchangeID,
    .set = PyCThostFtdcTradeFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 成交编号
    /// typedef char TThostFtdcTradeIDType[21]
    {
    .name = "TradeID",
    .get = PyCThostFtdcTradeFieldType_get_TradeID,
    .set = PyCThostFtdcTradeFieldType_set_TradeID,
    .doc = PyDoc_STR("成交编号"),
    },
    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    {
    .name = "Direction",
    .get = PyCThostFtdcTradeFieldType_get_Direction,
    .set = PyCThostFtdcTradeFieldType_set_Direction,
    .doc = PyDoc_STR("买卖方向"),
    },
    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "OrderSysID",
    .get = PyCThostFtdcTradeFieldType_get_OrderSysID,
    .set = PyCThostFtdcTradeFieldType_set_OrderSysID,
    .doc = PyDoc_STR("报单编号"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcTradeFieldType_get_ParticipantID,
    .set = PyCThostFtdcTradeFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcTradeFieldType_get_ClientID,
    .set = PyCThostFtdcTradeFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 交易角色
    /// typedef char TThostFtdcTradingRoleType
    {
    .name = "TradingRole",
    .get = PyCThostFtdcTradeFieldType_get_TradingRole,
    .set = PyCThostFtdcTradeFieldType_set_TradingRole,
    .doc = PyDoc_STR("交易角色"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    {
    .name = "reserve2",
    .get = PyCThostFtdcTradeFieldType_get_reserve2,
    .set = PyCThostFtdcTradeFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 开平标志
    /// typedef char TThostFtdcOffsetFlagType
    {
    .name = "OffsetFlag",
    .get = PyCThostFtdcTradeFieldType_get_OffsetFlag,
    .set = PyCThostFtdcTradeFieldType_set_OffsetFlag,
    .doc = PyDoc_STR("开平标志"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcTradeFieldType_get_HedgeFlag,
    .set = PyCThostFtdcTradeFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 成交时期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradeDate",
    .get = PyCThostFtdcTradeFieldType_get_TradeDate,
    .set = PyCThostFtdcTradeFieldType_set_TradeDate,
    .doc = PyDoc_STR("成交时期"),
    },
    /// 成交时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "TradeTime",
    .get = PyCThostFtdcTradeFieldType_get_TradeTime,
    .set = PyCThostFtdcTradeFieldType_set_TradeTime,
    .doc = PyDoc_STR("成交时间"),
    },
    /// 成交类型
    /// typedef char TThostFtdcTradeTypeType
    {
    .name = "TradeType",
    .get = PyCThostFtdcTradeFieldType_get_TradeType,
    .set = PyCThostFtdcTradeFieldType_set_TradeType,
    .doc = PyDoc_STR("成交类型"),
    },
    /// 成交价来源
    /// typedef char TThostFtdcPriceSourceType
    {
    .name = "PriceSource",
    .get = PyCThostFtdcTradeFieldType_get_PriceSource,
    .set = PyCThostFtdcTradeFieldType_set_PriceSource,
    .doc = PyDoc_STR("成交价来源"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcTradeFieldType_get_TraderID,
    .set = PyCThostFtdcTradeFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "OrderLocalID",
    .get = PyCThostFtdcTradeFieldType_get_OrderLocalID,
    .set = PyCThostFtdcTradeFieldType_set_OrderLocalID,
    .doc = PyDoc_STR("本地报单编号"),
    },
    /// 结算会员编号
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ClearingPartID",
    .get = PyCThostFtdcTradeFieldType_get_ClearingPartID,
    .set = PyCThostFtdcTradeFieldType_set_ClearingPartID,
    .doc = PyDoc_STR("结算会员编号"),
    },
    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    {
    .name = "BusinessUnit",
    .get = PyCThostFtdcTradeFieldType_get_BusinessUnit,
    .set = PyCThostFtdcTradeFieldType_set_BusinessUnit,
    .doc = PyDoc_STR("业务单元"),
    },
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcTradeFieldType_get_TradingDay,
    .set = PyCThostFtdcTradeFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 成交来源
    /// typedef char TThostFtdcTradeSourceType
    {
    .name = "TradeSource",
    .get = PyCThostFtdcTradeFieldType_get_TradeSource,
    .set = PyCThostFtdcTradeFieldType_set_TradeSource,
    .doc = PyDoc_STR("成交来源"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcTradeFieldType_get_InvestUnitID,
    .set = PyCThostFtdcTradeFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcTradeFieldType_get_InstrumentID,
    .set = PyCThostFtdcTradeFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "ExchangeInstID",
    .get = PyCThostFtdcTradeFieldType_get_ExchangeInstID,
    .set = PyCThostFtdcTradeFieldType_set_ExchangeInstID,
    .doc = PyDoc_STR("合约在交易所的代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcTradeFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcTradeField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("成交")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcTradeFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcTradeFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcTradeFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcTradeFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcTradeFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcTradeFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("成交")},
    {Py_tp_members, PyCThostFtdcTradeFieldType_members},
    {Py_tp_getset, PyCThostFtdcTradeFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcTradeFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcTradeFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcTradeFieldType_spec = {
    .name = "PyCTP.CThostFtdcTradeField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcTradeFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcTradeFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcTradeFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcTradeFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcTradeFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcTradeFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcTradeFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcTradeFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcTradeField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTradeField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}