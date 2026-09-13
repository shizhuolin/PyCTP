
#include "PyCThostFtdcInvestorPositionCombineDetailField.h"

///投资者组合持仓明细

static int PyCThostFtdcInvestorPositionCombineDetailFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "OpenDate", "ExchangeID", "SettlementID", "BrokerID", "InvestorID", "ComTradeID", "TradeID", "reserve1", "HedgeFlag", "Direction", "TotalAmt", "Margin", "ExchMargin", "MarginRateByMoney", "MarginRateByVolume", "LegID", "LegMultiple", "reserve2", "TradeGroupID", "InvestUnitID", "InstrumentID", "CombInstrumentID", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcInvestorPositionCombineDetailField_TradingDay = NULL;
    Py_ssize_t CThostFtdcInvestorPositionCombineDetailField_TradingDay_length = 0;

    /// 开仓日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcInvestorPositionCombineDetailField_OpenDate = NULL;
    Py_ssize_t CThostFtdcInvestorPositionCombineDetailField_OpenDate_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcInvestorPositionCombineDetailField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcInvestorPositionCombineDetailField_ExchangeID_length = 0;

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    int CThostFtdcInvestorPositionCombineDetailField_SettlementID = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInvestorPositionCombineDetailField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInvestorPositionCombineDetailField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInvestorPositionCombineDetailField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInvestorPositionCombineDetailField_InvestorID_length = 0;

    /// 组合编号
    /// typedef char TThostFtdcTradeIDType[21]
    char *CThostFtdcInvestorPositionCombineDetailField_ComTradeID = NULL;
    Py_ssize_t CThostFtdcInvestorPositionCombineDetailField_ComTradeID_length = 0;

    /// 撮合编号
    /// typedef char TThostFtdcTradeIDType[21]
    char *CThostFtdcInvestorPositionCombineDetailField_TradeID = NULL;
    Py_ssize_t CThostFtdcInvestorPositionCombineDetailField_TradeID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcInvestorPositionCombineDetailField_reserve1 = NULL;
    Py_ssize_t CThostFtdcInvestorPositionCombineDetailField_reserve1_length = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcInvestorPositionCombineDetailField_HedgeFlag = 0;

    /// 买卖
    /// typedef char TThostFtdcDirectionType
    char CThostFtdcInvestorPositionCombineDetailField_Direction = 0;

    /// 持仓量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcInvestorPositionCombineDetailField_TotalAmt = 0;

    /// 投资者保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorPositionCombineDetailField_Margin = 0.0;

    /// 交易所保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorPositionCombineDetailField_ExchMargin = 0.0;

    /// 保证金率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcInvestorPositionCombineDetailField_MarginRateByMoney = 0.0;

    /// 保证金率(按手数)
    /// typedef double TThostFtdcRatioType
    double CThostFtdcInvestorPositionCombineDetailField_MarginRateByVolume = 0.0;

    /// 单腿编号
    /// typedef int TThostFtdcLegIDType
    int CThostFtdcInvestorPositionCombineDetailField_LegID = 0;

    /// 单腿乘数
    /// typedef int TThostFtdcLegMultipleType
    int CThostFtdcInvestorPositionCombineDetailField_LegMultiple = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcInvestorPositionCombineDetailField_reserve2 = NULL;
    Py_ssize_t CThostFtdcInvestorPositionCombineDetailField_reserve2_length = 0;

    /// 成交组号
    /// typedef int TThostFtdcTradeGroupIDType
    int CThostFtdcInvestorPositionCombineDetailField_TradeGroupID = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcInvestorPositionCombineDetailField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcInvestorPositionCombineDetailField_InvestUnitID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcInvestorPositionCombineDetailField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcInvestorPositionCombineDetailField_InstrumentID_length = 0;

    /// 组合持仓合约编码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcInvestorPositionCombineDetailField_CombInstrumentID = NULL;
    Py_ssize_t CThostFtdcInvestorPositionCombineDetailField_CombInstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#iy#y#y#y#y#cciddddiiy#iy#y#y#", (char **)kwlist
        , &CThostFtdcInvestorPositionCombineDetailField_TradingDay, &CThostFtdcInvestorPositionCombineDetailField_TradingDay_length
        , &CThostFtdcInvestorPositionCombineDetailField_OpenDate, &CThostFtdcInvestorPositionCombineDetailField_OpenDate_length
        , &CThostFtdcInvestorPositionCombineDetailField_ExchangeID, &CThostFtdcInvestorPositionCombineDetailField_ExchangeID_length
        , &CThostFtdcInvestorPositionCombineDetailField_SettlementID
        , &CThostFtdcInvestorPositionCombineDetailField_BrokerID, &CThostFtdcInvestorPositionCombineDetailField_BrokerID_length
        , &CThostFtdcInvestorPositionCombineDetailField_InvestorID, &CThostFtdcInvestorPositionCombineDetailField_InvestorID_length
        , &CThostFtdcInvestorPositionCombineDetailField_ComTradeID, &CThostFtdcInvestorPositionCombineDetailField_ComTradeID_length
        , &CThostFtdcInvestorPositionCombineDetailField_TradeID, &CThostFtdcInvestorPositionCombineDetailField_TradeID_length
        , &CThostFtdcInvestorPositionCombineDetailField_reserve1, &CThostFtdcInvestorPositionCombineDetailField_reserve1_length
        , &CThostFtdcInvestorPositionCombineDetailField_HedgeFlag
        , &CThostFtdcInvestorPositionCombineDetailField_Direction
        , &CThostFtdcInvestorPositionCombineDetailField_TotalAmt
        , &CThostFtdcInvestorPositionCombineDetailField_Margin
        , &CThostFtdcInvestorPositionCombineDetailField_ExchMargin
        , &CThostFtdcInvestorPositionCombineDetailField_MarginRateByMoney
        , &CThostFtdcInvestorPositionCombineDetailField_MarginRateByVolume
        , &CThostFtdcInvestorPositionCombineDetailField_LegID
        , &CThostFtdcInvestorPositionCombineDetailField_LegMultiple
        , &CThostFtdcInvestorPositionCombineDetailField_reserve2, &CThostFtdcInvestorPositionCombineDetailField_reserve2_length
        , &CThostFtdcInvestorPositionCombineDetailField_TradeGroupID
        , &CThostFtdcInvestorPositionCombineDetailField_InvestUnitID, &CThostFtdcInvestorPositionCombineDetailField_InvestUnitID_length
        , &CThostFtdcInvestorPositionCombineDetailField_InstrumentID, &CThostFtdcInvestorPositionCombineDetailField_InstrumentID_length
        , &CThostFtdcInvestorPositionCombineDetailField_CombInstrumentID, &CThostFtdcInvestorPositionCombineDetailField_CombInstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcInvestorPositionCombineDetailField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcInvestorPositionCombineDetailField_TradingDay != NULL ) {
        if(CThostFtdcInvestorPositionCombineDetailField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcInvestorPositionCombineDetailField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcInvestorPositionCombineDetailField_TradingDay, CThostFtdcInvestorPositionCombineDetailField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcInvestorPositionCombineDetailField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcInvestorPositionCombineDetailField_TradingDay = NULL;
    }

    /// 开仓日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcInvestorPositionCombineDetailField_OpenDate != NULL ) {
        if(CThostFtdcInvestorPositionCombineDetailField_OpenDate_length >= (Py_ssize_t)sizeof(data->OpenDate)) {
            PyErr_Format(PyExc_ValueError, "OpenDate too long: length=%zd (max allowed is 8)", CThostFtdcInvestorPositionCombineDetailField_OpenDate_length);
            return -1;
        }
        // memset(data->OpenDate, 0, sizeof(data->OpenDate));
        // memcpy(data->OpenDate, CThostFtdcInvestorPositionCombineDetailField_OpenDate, CThostFtdcInvestorPositionCombineDetailField_OpenDate_length);
        strncpy(data->OpenDate, CThostFtdcInvestorPositionCombineDetailField_OpenDate, sizeof(data->OpenDate));
        CThostFtdcInvestorPositionCombineDetailField_OpenDate = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcInvestorPositionCombineDetailField_ExchangeID != NULL ) {
        if(CThostFtdcInvestorPositionCombineDetailField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcInvestorPositionCombineDetailField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcInvestorPositionCombineDetailField_ExchangeID, CThostFtdcInvestorPositionCombineDetailField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcInvestorPositionCombineDetailField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcInvestorPositionCombineDetailField_ExchangeID = NULL;
    }

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    data->SettlementID = CThostFtdcInvestorPositionCombineDetailField_SettlementID;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInvestorPositionCombineDetailField_BrokerID != NULL ) {
        if(CThostFtdcInvestorPositionCombineDetailField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInvestorPositionCombineDetailField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInvestorPositionCombineDetailField_BrokerID, CThostFtdcInvestorPositionCombineDetailField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInvestorPositionCombineDetailField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInvestorPositionCombineDetailField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInvestorPositionCombineDetailField_InvestorID != NULL ) {
        if(CThostFtdcInvestorPositionCombineDetailField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInvestorPositionCombineDetailField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInvestorPositionCombineDetailField_InvestorID, CThostFtdcInvestorPositionCombineDetailField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInvestorPositionCombineDetailField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInvestorPositionCombineDetailField_InvestorID = NULL;
    }

    /// 组合编号
    /// typedef char TThostFtdcTradeIDType[21]
    if( CThostFtdcInvestorPositionCombineDetailField_ComTradeID != NULL ) {
        if(CThostFtdcInvestorPositionCombineDetailField_ComTradeID_length >= (Py_ssize_t)sizeof(data->ComTradeID)) {
            PyErr_Format(PyExc_ValueError, "ComTradeID too long: length=%zd (max allowed is 20)", CThostFtdcInvestorPositionCombineDetailField_ComTradeID_length);
            return -1;
        }
        // memset(data->ComTradeID, 0, sizeof(data->ComTradeID));
        // memcpy(data->ComTradeID, CThostFtdcInvestorPositionCombineDetailField_ComTradeID, CThostFtdcInvestorPositionCombineDetailField_ComTradeID_length);
        strncpy(data->ComTradeID, CThostFtdcInvestorPositionCombineDetailField_ComTradeID, sizeof(data->ComTradeID));
        CThostFtdcInvestorPositionCombineDetailField_ComTradeID = NULL;
    }

    /// 撮合编号
    /// typedef char TThostFtdcTradeIDType[21]
    if( CThostFtdcInvestorPositionCombineDetailField_TradeID != NULL ) {
        if(CThostFtdcInvestorPositionCombineDetailField_TradeID_length >= (Py_ssize_t)sizeof(data->TradeID)) {
            PyErr_Format(PyExc_ValueError, "TradeID too long: length=%zd (max allowed is 20)", CThostFtdcInvestorPositionCombineDetailField_TradeID_length);
            return -1;
        }
        // memset(data->TradeID, 0, sizeof(data->TradeID));
        // memcpy(data->TradeID, CThostFtdcInvestorPositionCombineDetailField_TradeID, CThostFtdcInvestorPositionCombineDetailField_TradeID_length);
        strncpy(data->TradeID, CThostFtdcInvestorPositionCombineDetailField_TradeID, sizeof(data->TradeID));
        CThostFtdcInvestorPositionCombineDetailField_TradeID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcInvestorPositionCombineDetailField_reserve1 != NULL ) {
        if(CThostFtdcInvestorPositionCombineDetailField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcInvestorPositionCombineDetailField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcInvestorPositionCombineDetailField_reserve1, CThostFtdcInvestorPositionCombineDetailField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcInvestorPositionCombineDetailField_reserve1, sizeof(data->reserve1));
        CThostFtdcInvestorPositionCombineDetailField_reserve1 = NULL;
    }

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcInvestorPositionCombineDetailField_HedgeFlag;

    /// 买卖
    /// typedef char TThostFtdcDirectionType
    data->Direction = CThostFtdcInvestorPositionCombineDetailField_Direction;

    /// 持仓量
    /// typedef int TThostFtdcVolumeType
    data->TotalAmt = CThostFtdcInvestorPositionCombineDetailField_TotalAmt;

    /// 投资者保证金
    /// typedef double TThostFtdcMoneyType
    data->Margin = CThostFtdcInvestorPositionCombineDetailField_Margin;

    /// 交易所保证金
    /// typedef double TThostFtdcMoneyType
    data->ExchMargin = CThostFtdcInvestorPositionCombineDetailField_ExchMargin;

    /// 保证金率
    /// typedef double TThostFtdcRatioType
    data->MarginRateByMoney = CThostFtdcInvestorPositionCombineDetailField_MarginRateByMoney;

    /// 保证金率(按手数)
    /// typedef double TThostFtdcRatioType
    data->MarginRateByVolume = CThostFtdcInvestorPositionCombineDetailField_MarginRateByVolume;

    /// 单腿编号
    /// typedef int TThostFtdcLegIDType
    data->LegID = CThostFtdcInvestorPositionCombineDetailField_LegID;

    /// 单腿乘数
    /// typedef int TThostFtdcLegMultipleType
    data->LegMultiple = CThostFtdcInvestorPositionCombineDetailField_LegMultiple;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcInvestorPositionCombineDetailField_reserve2 != NULL ) {
        if(CThostFtdcInvestorPositionCombineDetailField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 30)", CThostFtdcInvestorPositionCombineDetailField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcInvestorPositionCombineDetailField_reserve2, CThostFtdcInvestorPositionCombineDetailField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcInvestorPositionCombineDetailField_reserve2, sizeof(data->reserve2));
        CThostFtdcInvestorPositionCombineDetailField_reserve2 = NULL;
    }

    /// 成交组号
    /// typedef int TThostFtdcTradeGroupIDType
    data->TradeGroupID = CThostFtdcInvestorPositionCombineDetailField_TradeGroupID;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcInvestorPositionCombineDetailField_InvestUnitID != NULL ) {
        if(CThostFtdcInvestorPositionCombineDetailField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcInvestorPositionCombineDetailField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcInvestorPositionCombineDetailField_InvestUnitID, CThostFtdcInvestorPositionCombineDetailField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcInvestorPositionCombineDetailField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcInvestorPositionCombineDetailField_InvestUnitID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcInvestorPositionCombineDetailField_InstrumentID != NULL ) {
        if(CThostFtdcInvestorPositionCombineDetailField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcInvestorPositionCombineDetailField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcInvestorPositionCombineDetailField_InstrumentID, CThostFtdcInvestorPositionCombineDetailField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcInvestorPositionCombineDetailField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcInvestorPositionCombineDetailField_InstrumentID = NULL;
    }

    /// 组合持仓合约编码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcInvestorPositionCombineDetailField_CombInstrumentID != NULL ) {
        if(CThostFtdcInvestorPositionCombineDetailField_CombInstrumentID_length >= (Py_ssize_t)sizeof(data->CombInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "CombInstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcInvestorPositionCombineDetailField_CombInstrumentID_length);
            return -1;
        }
        // memset(data->CombInstrumentID, 0, sizeof(data->CombInstrumentID));
        // memcpy(data->CombInstrumentID, CThostFtdcInvestorPositionCombineDetailField_CombInstrumentID, CThostFtdcInvestorPositionCombineDetailField_CombInstrumentID_length);
        strncpy(data->CombInstrumentID, CThostFtdcInvestorPositionCombineDetailField_CombInstrumentID, sizeof(data->CombInstrumentID));
        CThostFtdcInvestorPositionCombineDetailField_CombInstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInvestorPositionCombineDetailFieldType_repr(PyObject *self) {

    PyCThostFtdcInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcInvestorPositionCombineDetailField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:c,s:c,s:i,s:d,s:d,s:d,s:d,s:i,s:i,s:y,s:i,s:y,s:y,s:y}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "OpenDate", data->OpenDate//, (Py_ssize_t)sizeof(data->OpenDate)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "SettlementID", data->SettlementID
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "ComTradeID", data->ComTradeID//, (Py_ssize_t)sizeof(data->ComTradeID)
        , "TradeID", data->TradeID//, (Py_ssize_t)sizeof(data->TradeID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "HedgeFlag", data->HedgeFlag
        , "Direction", data->Direction
        , "TotalAmt", data->TotalAmt
        , "Margin", data->Margin
        , "ExchMargin", data->ExchMargin
        , "MarginRateByMoney", data->MarginRateByMoney
        , "MarginRateByVolume", data->MarginRateByVolume
        , "LegID", data->LegID
        , "LegMultiple", data->LegMultiple
        , "reserve2", data->reserve2//, (Py_ssize_t)sizeof(data->reserve2)
        , "TradeGroupID", data->TradeGroupID
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "CombInstrumentID", data->CombInstrumentID//, (Py_ssize_t)sizeof(data->CombInstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorPositionCombineDetailField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorPositionCombineDetailField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcInvestorPositionCombineDetailFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcInvestorPositionCombineDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcInvestorPositionCombineDetailFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPositionCombineDetailField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcInvestorPositionCombineDetailField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 开仓日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcInvestorPositionCombineDetailFieldType_get_OpenDate(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcInvestorPositionCombineDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OpenDate, (Py_ssize_t)sizeof(data->OpenDate));
    return PyBytes_FromString(data->OpenDate);
}

static int PyCThostFtdcInvestorPositionCombineDetailFieldType_set_OpenDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OpenDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPositionCombineDetailField::OpenDate)) {
        PyErr_SetString(PyExc_ValueError, "OpenDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcInvestorPositionCombineDetailField *data = &(extra->data);
    // memset(data->OpenDate, 0, sizeof(data->OpenDate));
    // memcpy(data->OpenDate, buf, len);
    strncpy(data->OpenDate, buf, sizeof(data->OpenDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcInvestorPositionCombineDetailFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcInvestorPositionCombineDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcInvestorPositionCombineDetailFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPositionCombineDetailField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcInvestorPositionCombineDetailField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInvestorPositionCombineDetailFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcInvestorPositionCombineDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInvestorPositionCombineDetailFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPositionCombineDetailField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcInvestorPositionCombineDetailField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInvestorPositionCombineDetailFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcInvestorPositionCombineDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInvestorPositionCombineDetailFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPositionCombineDetailField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcInvestorPositionCombineDetailField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 组合编号
/// typedef char TThostFtdcTradeIDType[21]
static PyObject *PyCThostFtdcInvestorPositionCombineDetailFieldType_get_ComTradeID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcInvestorPositionCombineDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ComTradeID, (Py_ssize_t)sizeof(data->ComTradeID));
    return PyBytes_FromString(data->ComTradeID);
}

static int PyCThostFtdcInvestorPositionCombineDetailFieldType_set_ComTradeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ComTradeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPositionCombineDetailField::ComTradeID)) {
        PyErr_SetString(PyExc_ValueError, "ComTradeID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcInvestorPositionCombineDetailField *data = &(extra->data);
    // memset(data->ComTradeID, 0, sizeof(data->ComTradeID));
    // memcpy(data->ComTradeID, buf, len);
    strncpy(data->ComTradeID, buf, sizeof(data->ComTradeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 撮合编号
/// typedef char TThostFtdcTradeIDType[21]
static PyObject *PyCThostFtdcInvestorPositionCombineDetailFieldType_get_TradeID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcInvestorPositionCombineDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeID, (Py_ssize_t)sizeof(data->TradeID));
    return PyBytes_FromString(data->TradeID);
}

static int PyCThostFtdcInvestorPositionCombineDetailFieldType_set_TradeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPositionCombineDetailField::TradeID)) {
        PyErr_SetString(PyExc_ValueError, "TradeID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcInvestorPositionCombineDetailField *data = &(extra->data);
    // memset(data->TradeID, 0, sizeof(data->TradeID));
    // memcpy(data->TradeID, buf, len);
    strncpy(data->TradeID, buf, sizeof(data->TradeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcInvestorPositionCombineDetailFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcInvestorPositionCombineDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcInvestorPositionCombineDetailFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPositionCombineDetailField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcInvestorPositionCombineDetailField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcInvestorPositionCombineDetailFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcInvestorPositionCombineDetailField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcInvestorPositionCombineDetailFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInvestorPositionCombineDetailField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcInvestorPositionCombineDetailField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 买卖
/// typedef char TThostFtdcDirectionType
static PyObject *PyCThostFtdcInvestorPositionCombineDetailFieldType_get_Direction(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcInvestorPositionCombineDetailField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Direction), 1);
}

static int PyCThostFtdcInvestorPositionCombineDetailFieldType_set_Direction(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInvestorPositionCombineDetailField::Direction)) {
        PyErr_SetString(PyExc_ValueError, "Direction must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcInvestorPositionCombineDetailField *data = &(extra->data);
    data->Direction = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcInvestorPositionCombineDetailFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcInvestorPositionCombineDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcInvestorPositionCombineDetailFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPositionCombineDetailField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcInvestorPositionCombineDetailField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcInvestorPositionCombineDetailFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcInvestorPositionCombineDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcInvestorPositionCombineDetailFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPositionCombineDetailField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcInvestorPositionCombineDetailField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcInvestorPositionCombineDetailFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcInvestorPositionCombineDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcInvestorPositionCombineDetailFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPositionCombineDetailField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcInvestorPositionCombineDetailField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 组合持仓合约编码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcInvestorPositionCombineDetailFieldType_get_CombInstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcInvestorPositionCombineDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombInstrumentID, (Py_ssize_t)sizeof(data->CombInstrumentID));
    return PyBytes_FromString(data->CombInstrumentID);
}

static int PyCThostFtdcInvestorPositionCombineDetailFieldType_set_CombInstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombInstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPositionCombineDetailField::CombInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "CombInstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcInvestorPositionCombineDetailField *data = &(extra->data);
    // memset(data->CombInstrumentID, 0, sizeof(data->CombInstrumentID));
    // memcpy(data->CombInstrumentID, buf, len);
    strncpy(data->CombInstrumentID, buf, sizeof(data->CombInstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInvestorPositionCombineDetailFieldType_members[] = {
    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    {
        .name = "SettlementID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorPositionCombineDetailFieldData, data.SettlementID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("结算编号")
    },
    /// 持仓量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "TotalAmt",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorPositionCombineDetailFieldData, data.TotalAmt),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("持仓量")
    },
    /// 投资者保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "Margin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorPositionCombineDetailFieldData, data.Margin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("投资者保证金")
    },
    /// 交易所保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "ExchMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorPositionCombineDetailFieldData, data.ExchMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易所保证金")
    },
    /// 保证金率
    /// typedef double TThostFtdcRatioType
    {
        .name = "MarginRateByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorPositionCombineDetailFieldData, data.MarginRateByMoney),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("保证金率")
    },
    /// 保证金率(按手数)
    /// typedef double TThostFtdcRatioType
    {
        .name = "MarginRateByVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorPositionCombineDetailFieldData, data.MarginRateByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("保证金率(按手数)")
    },
    /// 单腿编号
    /// typedef int TThostFtdcLegIDType
    {
        .name = "LegID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorPositionCombineDetailFieldData, data.LegID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("单腿编号")
    },
    /// 单腿乘数
    /// typedef int TThostFtdcLegMultipleType
    {
        .name = "LegMultiple",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorPositionCombineDetailFieldData, data.LegMultiple),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("单腿乘数")
    },
    /// 成交组号
    /// typedef int TThostFtdcTradeGroupIDType
    {
        .name = "TradeGroupID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorPositionCombineDetailFieldData, data.TradeGroupID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("成交组号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInvestorPositionCombineDetailFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcInvestorPositionCombineDetailFieldType_get_TradingDay,
    .set = PyCThostFtdcInvestorPositionCombineDetailFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 开仓日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "OpenDate",
    .get = PyCThostFtdcInvestorPositionCombineDetailFieldType_get_OpenDate,
    .set = PyCThostFtdcInvestorPositionCombineDetailFieldType_set_OpenDate,
    .doc = PyDoc_STR("开仓日期"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcInvestorPositionCombineDetailFieldType_get_ExchangeID,
    .set = PyCThostFtdcInvestorPositionCombineDetailFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInvestorPositionCombineDetailFieldType_get_BrokerID,
    .set = PyCThostFtdcInvestorPositionCombineDetailFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInvestorPositionCombineDetailFieldType_get_InvestorID,
    .set = PyCThostFtdcInvestorPositionCombineDetailFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 组合编号
    /// typedef char TThostFtdcTradeIDType[21]
    {
    .name = "ComTradeID",
    .get = PyCThostFtdcInvestorPositionCombineDetailFieldType_get_ComTradeID,
    .set = PyCThostFtdcInvestorPositionCombineDetailFieldType_set_ComTradeID,
    .doc = PyDoc_STR("组合编号"),
    },
    /// 撮合编号
    /// typedef char TThostFtdcTradeIDType[21]
    {
    .name = "TradeID",
    .get = PyCThostFtdcInvestorPositionCombineDetailFieldType_get_TradeID,
    .set = PyCThostFtdcInvestorPositionCombineDetailFieldType_set_TradeID,
    .doc = PyDoc_STR("撮合编号"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcInvestorPositionCombineDetailFieldType_get_reserve1,
    .set = PyCThostFtdcInvestorPositionCombineDetailFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcInvestorPositionCombineDetailFieldType_get_HedgeFlag,
    .set = PyCThostFtdcInvestorPositionCombineDetailFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 买卖
    /// typedef char TThostFtdcDirectionType
    {
    .name = "Direction",
    .get = PyCThostFtdcInvestorPositionCombineDetailFieldType_get_Direction,
    .set = PyCThostFtdcInvestorPositionCombineDetailFieldType_set_Direction,
    .doc = PyDoc_STR("买卖"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve2",
    .get = PyCThostFtdcInvestorPositionCombineDetailFieldType_get_reserve2,
    .set = PyCThostFtdcInvestorPositionCombineDetailFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcInvestorPositionCombineDetailFieldType_get_InvestUnitID,
    .set = PyCThostFtdcInvestorPositionCombineDetailFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcInvestorPositionCombineDetailFieldType_get_InstrumentID,
    .set = PyCThostFtdcInvestorPositionCombineDetailFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 组合持仓合约编码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "CombInstrumentID",
    .get = PyCThostFtdcInvestorPositionCombineDetailFieldType_get_CombInstrumentID,
    .set = PyCThostFtdcInvestorPositionCombineDetailFieldType_set_CombInstrumentID,
    .doc = PyDoc_STR("组合持仓合约编码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInvestorPositionCombineDetailFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInvestorPositionCombineDetailField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者组合持仓明细")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInvestorPositionCombineDetailFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInvestorPositionCombineDetailFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInvestorPositionCombineDetailFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInvestorPositionCombineDetailFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInvestorPositionCombineDetailFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInvestorPositionCombineDetailFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者组合持仓明细")},
    {Py_tp_members, PyCThostFtdcInvestorPositionCombineDetailFieldType_members},
    {Py_tp_getset, PyCThostFtdcInvestorPositionCombineDetailFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInvestorPositionCombineDetailFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInvestorPositionCombineDetailFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInvestorPositionCombineDetailFieldType_spec = {
    .name = "PyCTP.CThostFtdcInvestorPositionCombineDetailField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInvestorPositionCombineDetailFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInvestorPositionCombineDetailFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInvestorPositionCombineDetailFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInvestorPositionCombineDetailFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInvestorPositionCombineDetailFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInvestorPositionCombineDetailFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInvestorPositionCombineDetailFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInvestorPositionCombineDetailFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInvestorPositionCombineDetailField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorPositionCombineDetailField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}