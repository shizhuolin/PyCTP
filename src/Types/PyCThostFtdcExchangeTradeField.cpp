
#include "PyCThostFtdcExchangeTradeField.h"

///交易所成交

static int PyCThostFtdcExchangeTradeFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "TradeID", "Direction", "OrderSysID", "ParticipantID", "ClientID", "TradingRole", "reserve1", "OffsetFlag", "HedgeFlag", "Price", "Volume", "TradeDate", "TradeTime", "TradeType", "PriceSource", "TraderID", "OrderLocalID", "ClearingPartID", "BusinessUnit", "SequenceNo", "TradeSource", "ExchangeInstID", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcExchangeTradeField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcExchangeTradeField_ExchangeID_length = 0;

    /// 成交编号
    /// typedef char TThostFtdcTradeIDType[21]
    char *CThostFtdcExchangeTradeField_TradeID = NULL;
    Py_ssize_t CThostFtdcExchangeTradeField_TradeID_length = 0;

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    char CThostFtdcExchangeTradeField_Direction = 0;

    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcExchangeTradeField_OrderSysID = NULL;
    Py_ssize_t CThostFtdcExchangeTradeField_OrderSysID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcExchangeTradeField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcExchangeTradeField_ParticipantID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcExchangeTradeField_ClientID = NULL;
    Py_ssize_t CThostFtdcExchangeTradeField_ClientID_length = 0;

    /// 交易角色
    /// typedef char TThostFtdcTradingRoleType
    char CThostFtdcExchangeTradeField_TradingRole = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    char *CThostFtdcExchangeTradeField_reserve1 = NULL;
    Py_ssize_t CThostFtdcExchangeTradeField_reserve1_length = 0;

    /// 开平标志
    /// typedef char TThostFtdcOffsetFlagType
    char CThostFtdcExchangeTradeField_OffsetFlag = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcExchangeTradeField_HedgeFlag = 0;

    /// 价格
    /// typedef double TThostFtdcPriceType
    double CThostFtdcExchangeTradeField_Price = 0.0;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcExchangeTradeField_Volume = 0;

    /// 成交时期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcExchangeTradeField_TradeDate = NULL;
    Py_ssize_t CThostFtdcExchangeTradeField_TradeDate_length = 0;

    /// 成交时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcExchangeTradeField_TradeTime = NULL;
    Py_ssize_t CThostFtdcExchangeTradeField_TradeTime_length = 0;

    /// 成交类型
    /// typedef char TThostFtdcTradeTypeType
    char CThostFtdcExchangeTradeField_TradeType = 0;

    /// 成交价来源
    /// typedef char TThostFtdcPriceSourceType
    char CThostFtdcExchangeTradeField_PriceSource = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcExchangeTradeField_TraderID = NULL;
    Py_ssize_t CThostFtdcExchangeTradeField_TraderID_length = 0;

    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcExchangeTradeField_OrderLocalID = NULL;
    Py_ssize_t CThostFtdcExchangeTradeField_OrderLocalID_length = 0;

    /// 结算会员编号
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcExchangeTradeField_ClearingPartID = NULL;
    Py_ssize_t CThostFtdcExchangeTradeField_ClearingPartID_length = 0;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    char *CThostFtdcExchangeTradeField_BusinessUnit = NULL;
    Py_ssize_t CThostFtdcExchangeTradeField_BusinessUnit_length = 0;

    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcExchangeTradeField_SequenceNo = 0;

    /// 成交来源
    /// typedef char TThostFtdcTradeSourceType
    char CThostFtdcExchangeTradeField_TradeSource = 0;

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcExchangeTradeField_ExchangeInstID = NULL;
    Py_ssize_t CThostFtdcExchangeTradeField_ExchangeInstID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cy#y#y#cy#ccdiy#y#ccy#y#y#y#icy#", (char **)kwlist
        , &CThostFtdcExchangeTradeField_ExchangeID, &CThostFtdcExchangeTradeField_ExchangeID_length
        , &CThostFtdcExchangeTradeField_TradeID, &CThostFtdcExchangeTradeField_TradeID_length
        , &CThostFtdcExchangeTradeField_Direction
        , &CThostFtdcExchangeTradeField_OrderSysID, &CThostFtdcExchangeTradeField_OrderSysID_length
        , &CThostFtdcExchangeTradeField_ParticipantID, &CThostFtdcExchangeTradeField_ParticipantID_length
        , &CThostFtdcExchangeTradeField_ClientID, &CThostFtdcExchangeTradeField_ClientID_length
        , &CThostFtdcExchangeTradeField_TradingRole
        , &CThostFtdcExchangeTradeField_reserve1, &CThostFtdcExchangeTradeField_reserve1_length
        , &CThostFtdcExchangeTradeField_OffsetFlag
        , &CThostFtdcExchangeTradeField_HedgeFlag
        , &CThostFtdcExchangeTradeField_Price
        , &CThostFtdcExchangeTradeField_Volume
        , &CThostFtdcExchangeTradeField_TradeDate, &CThostFtdcExchangeTradeField_TradeDate_length
        , &CThostFtdcExchangeTradeField_TradeTime, &CThostFtdcExchangeTradeField_TradeTime_length
        , &CThostFtdcExchangeTradeField_TradeType
        , &CThostFtdcExchangeTradeField_PriceSource
        , &CThostFtdcExchangeTradeField_TraderID, &CThostFtdcExchangeTradeField_TraderID_length
        , &CThostFtdcExchangeTradeField_OrderLocalID, &CThostFtdcExchangeTradeField_OrderLocalID_length
        , &CThostFtdcExchangeTradeField_ClearingPartID, &CThostFtdcExchangeTradeField_ClearingPartID_length
        , &CThostFtdcExchangeTradeField_BusinessUnit, &CThostFtdcExchangeTradeField_BusinessUnit_length
        , &CThostFtdcExchangeTradeField_SequenceNo
        , &CThostFtdcExchangeTradeField_TradeSource
        , &CThostFtdcExchangeTradeField_ExchangeInstID, &CThostFtdcExchangeTradeField_ExchangeInstID_length
    )) {
        return -1;
    }

    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcExchangeTradeField_ExchangeID != NULL ) {
        if(CThostFtdcExchangeTradeField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcExchangeTradeField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcExchangeTradeField_ExchangeID, CThostFtdcExchangeTradeField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcExchangeTradeField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcExchangeTradeField_ExchangeID = NULL;
    }

    /// 成交编号
    /// typedef char TThostFtdcTradeIDType[21]
    if( CThostFtdcExchangeTradeField_TradeID != NULL ) {
        if(CThostFtdcExchangeTradeField_TradeID_length >= (Py_ssize_t)sizeof(data->TradeID)) {
            PyErr_Format(PyExc_ValueError, "TradeID too long: length=%zd (max allowed is 20)", CThostFtdcExchangeTradeField_TradeID_length);
            return -1;
        }
        // memset(data->TradeID, 0, sizeof(data->TradeID));
        // memcpy(data->TradeID, CThostFtdcExchangeTradeField_TradeID, CThostFtdcExchangeTradeField_TradeID_length);
        strncpy(data->TradeID, CThostFtdcExchangeTradeField_TradeID, sizeof(data->TradeID));
        CThostFtdcExchangeTradeField_TradeID = NULL;
    }

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    data->Direction = CThostFtdcExchangeTradeField_Direction;

    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcExchangeTradeField_OrderSysID != NULL ) {
        if(CThostFtdcExchangeTradeField_OrderSysID_length >= (Py_ssize_t)sizeof(data->OrderSysID)) {
            PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is 20)", CThostFtdcExchangeTradeField_OrderSysID_length);
            return -1;
        }
        // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
        // memcpy(data->OrderSysID, CThostFtdcExchangeTradeField_OrderSysID, CThostFtdcExchangeTradeField_OrderSysID_length);
        strncpy(data->OrderSysID, CThostFtdcExchangeTradeField_OrderSysID, sizeof(data->OrderSysID));
        CThostFtdcExchangeTradeField_OrderSysID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcExchangeTradeField_ParticipantID != NULL ) {
        if(CThostFtdcExchangeTradeField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcExchangeTradeField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcExchangeTradeField_ParticipantID, CThostFtdcExchangeTradeField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcExchangeTradeField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcExchangeTradeField_ParticipantID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcExchangeTradeField_ClientID != NULL ) {
        if(CThostFtdcExchangeTradeField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcExchangeTradeField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcExchangeTradeField_ClientID, CThostFtdcExchangeTradeField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcExchangeTradeField_ClientID, sizeof(data->ClientID));
        CThostFtdcExchangeTradeField_ClientID = NULL;
    }

    /// 交易角色
    /// typedef char TThostFtdcTradingRoleType
    data->TradingRole = CThostFtdcExchangeTradeField_TradingRole;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    if( CThostFtdcExchangeTradeField_reserve1 != NULL ) {
        if(CThostFtdcExchangeTradeField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcExchangeTradeField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcExchangeTradeField_reserve1, CThostFtdcExchangeTradeField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcExchangeTradeField_reserve1, sizeof(data->reserve1));
        CThostFtdcExchangeTradeField_reserve1 = NULL;
    }

    /// 开平标志
    /// typedef char TThostFtdcOffsetFlagType
    data->OffsetFlag = CThostFtdcExchangeTradeField_OffsetFlag;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcExchangeTradeField_HedgeFlag;

    /// 价格
    /// typedef double TThostFtdcPriceType
    data->Price = CThostFtdcExchangeTradeField_Price;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    data->Volume = CThostFtdcExchangeTradeField_Volume;

    /// 成交时期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcExchangeTradeField_TradeDate != NULL ) {
        if(CThostFtdcExchangeTradeField_TradeDate_length >= (Py_ssize_t)sizeof(data->TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is 8)", CThostFtdcExchangeTradeField_TradeDate_length);
            return -1;
        }
        // memset(data->TradeDate, 0, sizeof(data->TradeDate));
        // memcpy(data->TradeDate, CThostFtdcExchangeTradeField_TradeDate, CThostFtdcExchangeTradeField_TradeDate_length);
        strncpy(data->TradeDate, CThostFtdcExchangeTradeField_TradeDate, sizeof(data->TradeDate));
        CThostFtdcExchangeTradeField_TradeDate = NULL;
    }

    /// 成交时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcExchangeTradeField_TradeTime != NULL ) {
        if(CThostFtdcExchangeTradeField_TradeTime_length >= (Py_ssize_t)sizeof(data->TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is 8)", CThostFtdcExchangeTradeField_TradeTime_length);
            return -1;
        }
        // memset(data->TradeTime, 0, sizeof(data->TradeTime));
        // memcpy(data->TradeTime, CThostFtdcExchangeTradeField_TradeTime, CThostFtdcExchangeTradeField_TradeTime_length);
        strncpy(data->TradeTime, CThostFtdcExchangeTradeField_TradeTime, sizeof(data->TradeTime));
        CThostFtdcExchangeTradeField_TradeTime = NULL;
    }

    /// 成交类型
    /// typedef char TThostFtdcTradeTypeType
    data->TradeType = CThostFtdcExchangeTradeField_TradeType;

    /// 成交价来源
    /// typedef char TThostFtdcPriceSourceType
    data->PriceSource = CThostFtdcExchangeTradeField_PriceSource;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcExchangeTradeField_TraderID != NULL ) {
        if(CThostFtdcExchangeTradeField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcExchangeTradeField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcExchangeTradeField_TraderID, CThostFtdcExchangeTradeField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcExchangeTradeField_TraderID, sizeof(data->TraderID));
        CThostFtdcExchangeTradeField_TraderID = NULL;
    }

    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcExchangeTradeField_OrderLocalID != NULL ) {
        if(CThostFtdcExchangeTradeField_OrderLocalID_length >= (Py_ssize_t)sizeof(data->OrderLocalID)) {
            PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is 12)", CThostFtdcExchangeTradeField_OrderLocalID_length);
            return -1;
        }
        // memset(data->OrderLocalID, 0, sizeof(data->OrderLocalID));
        // memcpy(data->OrderLocalID, CThostFtdcExchangeTradeField_OrderLocalID, CThostFtdcExchangeTradeField_OrderLocalID_length);
        strncpy(data->OrderLocalID, CThostFtdcExchangeTradeField_OrderLocalID, sizeof(data->OrderLocalID));
        CThostFtdcExchangeTradeField_OrderLocalID = NULL;
    }

    /// 结算会员编号
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcExchangeTradeField_ClearingPartID != NULL ) {
        if(CThostFtdcExchangeTradeField_ClearingPartID_length >= (Py_ssize_t)sizeof(data->ClearingPartID)) {
            PyErr_Format(PyExc_ValueError, "ClearingPartID too long: length=%zd (max allowed is 10)", CThostFtdcExchangeTradeField_ClearingPartID_length);
            return -1;
        }
        // memset(data->ClearingPartID, 0, sizeof(data->ClearingPartID));
        // memcpy(data->ClearingPartID, CThostFtdcExchangeTradeField_ClearingPartID, CThostFtdcExchangeTradeField_ClearingPartID_length);
        strncpy(data->ClearingPartID, CThostFtdcExchangeTradeField_ClearingPartID, sizeof(data->ClearingPartID));
        CThostFtdcExchangeTradeField_ClearingPartID = NULL;
    }

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    if( CThostFtdcExchangeTradeField_BusinessUnit != NULL ) {
        if(CThostFtdcExchangeTradeField_BusinessUnit_length >= (Py_ssize_t)sizeof(data->BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is 20)", CThostFtdcExchangeTradeField_BusinessUnit_length);
            return -1;
        }
        // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
        // memcpy(data->BusinessUnit, CThostFtdcExchangeTradeField_BusinessUnit, CThostFtdcExchangeTradeField_BusinessUnit_length);
        strncpy(data->BusinessUnit, CThostFtdcExchangeTradeField_BusinessUnit, sizeof(data->BusinessUnit));
        CThostFtdcExchangeTradeField_BusinessUnit = NULL;
    }

    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    data->SequenceNo = CThostFtdcExchangeTradeField_SequenceNo;

    /// 成交来源
    /// typedef char TThostFtdcTradeSourceType
    data->TradeSource = CThostFtdcExchangeTradeField_TradeSource;

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcExchangeTradeField_ExchangeInstID != NULL ) {
        if(CThostFtdcExchangeTradeField_ExchangeInstID_length >= (Py_ssize_t)sizeof(data->ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is 80)", CThostFtdcExchangeTradeField_ExchangeInstID_length);
            return -1;
        }
        // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
        // memcpy(data->ExchangeInstID, CThostFtdcExchangeTradeField_ExchangeInstID, CThostFtdcExchangeTradeField_ExchangeInstID_length);
        strncpy(data->ExchangeInstID, CThostFtdcExchangeTradeField_ExchangeInstID, sizeof(data->ExchangeInstID));
        CThostFtdcExchangeTradeField_ExchangeInstID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcExchangeTradeFieldType_repr(PyObject *self) {

    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:c,s:y,s:y,s:y,s:c,s:y,s:c,s:c,s:d,s:i,s:y,s:y,s:c,s:c,s:y,s:y,s:y,s:y,s:i,s:c,s:y}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "TradeID", data->TradeID//, (Py_ssize_t)sizeof(data->TradeID)
        , "Direction", data->Direction
        , "OrderSysID", data->OrderSysID//, (Py_ssize_t)sizeof(data->OrderSysID)
        , "ParticipantID", data->ParticipantID//, (Py_ssize_t)sizeof(data->ParticipantID)
        , "ClientID", data->ClientID//, (Py_ssize_t)sizeof(data->ClientID)
        , "TradingRole", data->TradingRole
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
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
        , "TradeSource", data->TradeSource
        , "ExchangeInstID", data->ExchangeInstID//, (Py_ssize_t)sizeof(data->ExchangeInstID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeTradeField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeTradeField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcExchangeTradeFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcExchangeTradeFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeTradeField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 成交编号
/// typedef char TThostFtdcTradeIDType[21]
static PyObject *PyCThostFtdcExchangeTradeFieldType_get_TradeID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeID, (Py_ssize_t)sizeof(data->TradeID));
    return PyBytes_FromString(data->TradeID);
}

static int PyCThostFtdcExchangeTradeFieldType_set_TradeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeTradeField::TradeID)) {
        PyErr_SetString(PyExc_ValueError, "TradeID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    // memset(data->TradeID, 0, sizeof(data->TradeID));
    // memcpy(data->TradeID, buf, len);
    strncpy(data->TradeID, buf, sizeof(data->TradeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 买卖方向
/// typedef char TThostFtdcDirectionType
static PyObject *PyCThostFtdcExchangeTradeFieldType_get_Direction(PyObject *self, void *closure) {
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Direction), 1);
}

static int PyCThostFtdcExchangeTradeFieldType_set_Direction(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeTradeField::Direction)) {
        PyErr_SetString(PyExc_ValueError, "Direction must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    data->Direction = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcExchangeTradeFieldType_get_OrderSysID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderSysID, (Py_ssize_t)sizeof(data->OrderSysID));
    return PyBytes_FromString(data->OrderSysID);
}

static int PyCThostFtdcExchangeTradeFieldType_set_OrderSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeTradeField::OrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "OrderSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
    // memcpy(data->OrderSysID, buf, len);
    strncpy(data->OrderSysID, buf, sizeof(data->OrderSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcExchangeTradeFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcExchangeTradeFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeTradeField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcExchangeTradeFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcExchangeTradeFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeTradeField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易角色
/// typedef char TThostFtdcTradingRoleType
static PyObject *PyCThostFtdcExchangeTradeFieldType_get_TradingRole(PyObject *self, void *closure) {
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->TradingRole), 1);
}

static int PyCThostFtdcExchangeTradeFieldType_set_TradingRole(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingRole Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeTradeField::TradingRole)) {
        PyErr_SetString(PyExc_ValueError, "TradingRole must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    data->TradingRole = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldExchangeInstIDType[31]
static PyObject *PyCThostFtdcExchangeTradeFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcExchangeTradeFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeTradeField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 开平标志
/// typedef char TThostFtdcOffsetFlagType
static PyObject *PyCThostFtdcExchangeTradeFieldType_get_OffsetFlag(PyObject *self, void *closure) {
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OffsetFlag), 1);
}

static int PyCThostFtdcExchangeTradeFieldType_set_OffsetFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OffsetFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeTradeField::OffsetFlag)) {
        PyErr_SetString(PyExc_ValueError, "OffsetFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    data->OffsetFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcExchangeTradeFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcExchangeTradeFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeTradeField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 成交时期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcExchangeTradeFieldType_get_TradeDate(PyObject *self, void *closure) {
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeDate, (Py_ssize_t)sizeof(data->TradeDate));
    return PyBytes_FromString(data->TradeDate);
}

static int PyCThostFtdcExchangeTradeFieldType_set_TradeDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeTradeField::TradeDate)) {
        PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    // memset(data->TradeDate, 0, sizeof(data->TradeDate));
    // memcpy(data->TradeDate, buf, len);
    strncpy(data->TradeDate, buf, sizeof(data->TradeDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 成交时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcExchangeTradeFieldType_get_TradeTime(PyObject *self, void *closure) {
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeTime, (Py_ssize_t)sizeof(data->TradeTime));
    return PyBytes_FromString(data->TradeTime);
}

static int PyCThostFtdcExchangeTradeFieldType_set_TradeTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeTradeField::TradeTime)) {
        PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    // memset(data->TradeTime, 0, sizeof(data->TradeTime));
    // memcpy(data->TradeTime, buf, len);
    strncpy(data->TradeTime, buf, sizeof(data->TradeTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 成交类型
/// typedef char TThostFtdcTradeTypeType
static PyObject *PyCThostFtdcExchangeTradeFieldType_get_TradeType(PyObject *self, void *closure) {
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->TradeType), 1);
}

static int PyCThostFtdcExchangeTradeFieldType_set_TradeType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeTradeField::TradeType)) {
        PyErr_SetString(PyExc_ValueError, "TradeType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    data->TradeType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 成交价来源
/// typedef char TThostFtdcPriceSourceType
static PyObject *PyCThostFtdcExchangeTradeFieldType_get_PriceSource(PyObject *self, void *closure) {
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->PriceSource), 1);
}

static int PyCThostFtdcExchangeTradeFieldType_set_PriceSource(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "PriceSource Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeTradeField::PriceSource)) {
        PyErr_SetString(PyExc_ValueError, "PriceSource must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    data->PriceSource = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcExchangeTradeFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcExchangeTradeFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeTradeField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 本地报单编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcExchangeTradeFieldType_get_OrderLocalID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderLocalID, (Py_ssize_t)sizeof(data->OrderLocalID));
    return PyBytes_FromString(data->OrderLocalID);
}

static int PyCThostFtdcExchangeTradeFieldType_set_OrderLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeTradeField::OrderLocalID)) {
        PyErr_SetString(PyExc_ValueError, "OrderLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    // memset(data->OrderLocalID, 0, sizeof(data->OrderLocalID));
    // memcpy(data->OrderLocalID, buf, len);
    strncpy(data->OrderLocalID, buf, sizeof(data->OrderLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 结算会员编号
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcExchangeTradeFieldType_get_ClearingPartID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClearingPartID, (Py_ssize_t)sizeof(data->ClearingPartID));
    return PyBytes_FromString(data->ClearingPartID);
}

static int PyCThostFtdcExchangeTradeFieldType_set_ClearingPartID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClearingPartID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeTradeField::ClearingPartID)) {
        PyErr_SetString(PyExc_ValueError, "ClearingPartID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    // memset(data->ClearingPartID, 0, sizeof(data->ClearingPartID));
    // memcpy(data->ClearingPartID, buf, len);
    strncpy(data->ClearingPartID, buf, sizeof(data->ClearingPartID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 业务单元
/// typedef char TThostFtdcBusinessUnitType[21]
static PyObject *PyCThostFtdcExchangeTradeFieldType_get_BusinessUnit(PyObject *self, void *closure) {
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BusinessUnit, (Py_ssize_t)sizeof(data->BusinessUnit));
    return PyBytes_FromString(data->BusinessUnit);
}

static int PyCThostFtdcExchangeTradeFieldType_set_BusinessUnit(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BusinessUnit Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeTradeField::BusinessUnit)) {
        PyErr_SetString(PyExc_ValueError, "BusinessUnit must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
    // memcpy(data->BusinessUnit, buf, len);
    strncpy(data->BusinessUnit, buf, sizeof(data->BusinessUnit));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 成交来源
/// typedef char TThostFtdcTradeSourceType
static PyObject *PyCThostFtdcExchangeTradeFieldType_get_TradeSource(PyObject *self, void *closure) {
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->TradeSource), 1);
}

static int PyCThostFtdcExchangeTradeFieldType_set_TradeSource(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeSource Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeTradeField::TradeSource)) {
        PyErr_SetString(PyExc_ValueError, "TradeSource must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    data->TradeSource = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约在交易所的代码
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcExchangeTradeFieldType_get_ExchangeInstID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeInstID, (Py_ssize_t)sizeof(data->ExchangeInstID));
    return PyBytes_FromString(data->ExchangeInstID);
}

static int PyCThostFtdcExchangeTradeFieldType_set_ExchangeInstID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeTradeField::ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeTradeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeTradeFieldData>(self);
    CThostFtdcExchangeTradeField *data = &(extra->data);
    // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
    // memcpy(data->ExchangeInstID, buf, len);
    strncpy(data->ExchangeInstID, buf, sizeof(data->ExchangeInstID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcExchangeTradeFieldType_members[] = {
    /// 价格
    /// typedef double TThostFtdcPriceType
    {
        .name = "Price",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeTradeFieldData, data.Price),
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
        .offset = offsetof(PyCThostFtdcExchangeTradeFieldData, data.Volume),
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
        .offset = offsetof(PyCThostFtdcExchangeTradeFieldData, data.SequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcExchangeTradeFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcExchangeTradeFieldType_get_ExchangeID,
    .set = PyCThostFtdcExchangeTradeFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 成交编号
    /// typedef char TThostFtdcTradeIDType[21]
    {
    .name = "TradeID",
    .get = PyCThostFtdcExchangeTradeFieldType_get_TradeID,
    .set = PyCThostFtdcExchangeTradeFieldType_set_TradeID,
    .doc = PyDoc_STR("成交编号"),
    },
    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    {
    .name = "Direction",
    .get = PyCThostFtdcExchangeTradeFieldType_get_Direction,
    .set = PyCThostFtdcExchangeTradeFieldType_set_Direction,
    .doc = PyDoc_STR("买卖方向"),
    },
    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "OrderSysID",
    .get = PyCThostFtdcExchangeTradeFieldType_get_OrderSysID,
    .set = PyCThostFtdcExchangeTradeFieldType_set_OrderSysID,
    .doc = PyDoc_STR("报单编号"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcExchangeTradeFieldType_get_ParticipantID,
    .set = PyCThostFtdcExchangeTradeFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcExchangeTradeFieldType_get_ClientID,
    .set = PyCThostFtdcExchangeTradeFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 交易角色
    /// typedef char TThostFtdcTradingRoleType
    {
    .name = "TradingRole",
    .get = PyCThostFtdcExchangeTradeFieldType_get_TradingRole,
    .set = PyCThostFtdcExchangeTradeFieldType_set_TradingRole,
    .doc = PyDoc_STR("交易角色"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcExchangeTradeFieldType_get_reserve1,
    .set = PyCThostFtdcExchangeTradeFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 开平标志
    /// typedef char TThostFtdcOffsetFlagType
    {
    .name = "OffsetFlag",
    .get = PyCThostFtdcExchangeTradeFieldType_get_OffsetFlag,
    .set = PyCThostFtdcExchangeTradeFieldType_set_OffsetFlag,
    .doc = PyDoc_STR("开平标志"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcExchangeTradeFieldType_get_HedgeFlag,
    .set = PyCThostFtdcExchangeTradeFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 成交时期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradeDate",
    .get = PyCThostFtdcExchangeTradeFieldType_get_TradeDate,
    .set = PyCThostFtdcExchangeTradeFieldType_set_TradeDate,
    .doc = PyDoc_STR("成交时期"),
    },
    /// 成交时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "TradeTime",
    .get = PyCThostFtdcExchangeTradeFieldType_get_TradeTime,
    .set = PyCThostFtdcExchangeTradeFieldType_set_TradeTime,
    .doc = PyDoc_STR("成交时间"),
    },
    /// 成交类型
    /// typedef char TThostFtdcTradeTypeType
    {
    .name = "TradeType",
    .get = PyCThostFtdcExchangeTradeFieldType_get_TradeType,
    .set = PyCThostFtdcExchangeTradeFieldType_set_TradeType,
    .doc = PyDoc_STR("成交类型"),
    },
    /// 成交价来源
    /// typedef char TThostFtdcPriceSourceType
    {
    .name = "PriceSource",
    .get = PyCThostFtdcExchangeTradeFieldType_get_PriceSource,
    .set = PyCThostFtdcExchangeTradeFieldType_set_PriceSource,
    .doc = PyDoc_STR("成交价来源"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcExchangeTradeFieldType_get_TraderID,
    .set = PyCThostFtdcExchangeTradeFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "OrderLocalID",
    .get = PyCThostFtdcExchangeTradeFieldType_get_OrderLocalID,
    .set = PyCThostFtdcExchangeTradeFieldType_set_OrderLocalID,
    .doc = PyDoc_STR("本地报单编号"),
    },
    /// 结算会员编号
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ClearingPartID",
    .get = PyCThostFtdcExchangeTradeFieldType_get_ClearingPartID,
    .set = PyCThostFtdcExchangeTradeFieldType_set_ClearingPartID,
    .doc = PyDoc_STR("结算会员编号"),
    },
    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    {
    .name = "BusinessUnit",
    .get = PyCThostFtdcExchangeTradeFieldType_get_BusinessUnit,
    .set = PyCThostFtdcExchangeTradeFieldType_set_BusinessUnit,
    .doc = PyDoc_STR("业务单元"),
    },
    /// 成交来源
    /// typedef char TThostFtdcTradeSourceType
    {
    .name = "TradeSource",
    .get = PyCThostFtdcExchangeTradeFieldType_get_TradeSource,
    .set = PyCThostFtdcExchangeTradeFieldType_set_TradeSource,
    .doc = PyDoc_STR("成交来源"),
    },
    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "ExchangeInstID",
    .get = PyCThostFtdcExchangeTradeFieldType_get_ExchangeInstID,
    .set = PyCThostFtdcExchangeTradeFieldType_set_ExchangeInstID,
    .doc = PyDoc_STR("合约在交易所的代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcExchangeTradeFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcExchangeTradeField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("交易所成交")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcExchangeTradeFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcExchangeTradeFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcExchangeTradeFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcExchangeTradeFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcExchangeTradeFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcExchangeTradeFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("交易所成交")},
    {Py_tp_members, PyCThostFtdcExchangeTradeFieldType_members},
    {Py_tp_getset, PyCThostFtdcExchangeTradeFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcExchangeTradeFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcExchangeTradeFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcExchangeTradeFieldType_spec = {
    .name = "PyCTP.CThostFtdcExchangeTradeField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcExchangeTradeFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcExchangeTradeFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcExchangeTradeFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcExchangeTradeFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcExchangeTradeFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcExchangeTradeFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcExchangeTradeFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcExchangeTradeFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcExchangeTradeField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeTradeField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}