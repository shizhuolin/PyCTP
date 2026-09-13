
#include "PyCThostFtdcErrOrderField.h"

///错误报单

static int PyCThostFtdcErrOrderFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "reserve1", "OrderRef", "UserID", "OrderPriceType", "Direction", "CombOffsetFlag", "CombHedgeFlag", "LimitPrice", "VolumeTotalOriginal", "TimeCondition", "GTDDate", "VolumeCondition", "MinVolume", "ContingentCondition", "StopPrice", "ForceCloseReason", "IsAutoSuspend", "BusinessUnit", "RequestID", "UserForceClose", "ErrorID", "ErrorMsg", "IsSwapOrder", "ExchangeID", "InvestUnitID", "AccountID", "CurrencyID", "ClientID", "reserve2", "MacAddress", "InstrumentID", "IPAddress", "OrderMemo", "SessionReqSeq", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcErrOrderField_BrokerID = NULL;
    Py_ssize_t CThostFtdcErrOrderField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcErrOrderField_InvestorID = NULL;
    Py_ssize_t CThostFtdcErrOrderField_InvestorID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcErrOrderField_reserve1 = NULL;
    Py_ssize_t CThostFtdcErrOrderField_reserve1_length = 0;

    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcErrOrderField_OrderRef = NULL;
    Py_ssize_t CThostFtdcErrOrderField_OrderRef_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcErrOrderField_UserID = NULL;
    Py_ssize_t CThostFtdcErrOrderField_UserID_length = 0;

    /// 报单价格条件
    /// typedef char TThostFtdcOrderPriceTypeType
    char CThostFtdcErrOrderField_OrderPriceType = 0;

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    char CThostFtdcErrOrderField_Direction = 0;

    /// 组合开平标志
    /// typedef char TThostFtdcCombOffsetFlagType[5]
    char *CThostFtdcErrOrderField_CombOffsetFlag = NULL;
    Py_ssize_t CThostFtdcErrOrderField_CombOffsetFlag_length = 0;

    /// 组合投机套保标志
    /// typedef char TThostFtdcCombHedgeFlagType[5]
    char *CThostFtdcErrOrderField_CombHedgeFlag = NULL;
    Py_ssize_t CThostFtdcErrOrderField_CombHedgeFlag_length = 0;

    /// 价格
    /// typedef double TThostFtdcPriceType
    double CThostFtdcErrOrderField_LimitPrice = 0.0;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcErrOrderField_VolumeTotalOriginal = 0;

    /// 有效期类型
    /// typedef char TThostFtdcTimeConditionType
    char CThostFtdcErrOrderField_TimeCondition = 0;

    /// GTD日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcErrOrderField_GTDDate = NULL;
    Py_ssize_t CThostFtdcErrOrderField_GTDDate_length = 0;

    /// 成交量类型
    /// typedef char TThostFtdcVolumeConditionType
    char CThostFtdcErrOrderField_VolumeCondition = 0;

    /// 最小成交量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcErrOrderField_MinVolume = 0;

    /// 触发条件
    /// typedef char TThostFtdcContingentConditionType
    char CThostFtdcErrOrderField_ContingentCondition = 0;

    /// 止损价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcErrOrderField_StopPrice = 0.0;

    /// 强平原因
    /// typedef char TThostFtdcForceCloseReasonType
    char CThostFtdcErrOrderField_ForceCloseReason = 0;

    /// 自动挂起标志
    /// typedef int TThostFtdcBoolType
    int CThostFtdcErrOrderField_IsAutoSuspend = 0;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    char *CThostFtdcErrOrderField_BusinessUnit = NULL;
    Py_ssize_t CThostFtdcErrOrderField_BusinessUnit_length = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcErrOrderField_RequestID = 0;

    /// 用户强平标志
    /// typedef int TThostFtdcBoolType
    int CThostFtdcErrOrderField_UserForceClose = 0;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    int CThostFtdcErrOrderField_ErrorID = 0;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcErrOrderField_ErrorMsg = NULL;
    Py_ssize_t CThostFtdcErrOrderField_ErrorMsg_length = 0;

    /// 互换单标志
    /// typedef int TThostFtdcBoolType
    int CThostFtdcErrOrderField_IsSwapOrder = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcErrOrderField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcErrOrderField_ExchangeID_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcErrOrderField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcErrOrderField_InvestUnitID_length = 0;

    /// 资金账号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcErrOrderField_AccountID = NULL;
    Py_ssize_t CThostFtdcErrOrderField_AccountID_length = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcErrOrderField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcErrOrderField_CurrencyID_length = 0;

    /// 交易编码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcErrOrderField_ClientID = NULL;
    Py_ssize_t CThostFtdcErrOrderField_ClientID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcErrOrderField_reserve2 = NULL;
    Py_ssize_t CThostFtdcErrOrderField_reserve2_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcErrOrderField_MacAddress = NULL;
    Py_ssize_t CThostFtdcErrOrderField_MacAddress_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcErrOrderField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcErrOrderField_InstrumentID_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcErrOrderField_IPAddress = NULL;
    Py_ssize_t CThostFtdcErrOrderField_IPAddress_length = 0;

    /// 报单回显字段
    /// typedef char TThostFtdcOrderMemoType[13]
    char *CThostFtdcErrOrderField_OrderMemo = NULL;
    Py_ssize_t CThostFtdcErrOrderField_OrderMemo_length = 0;

    /// session上请求计数 api自动维护
    /// typedef int TThostFtdcSequenceNo12Type
    int CThostFtdcErrOrderField_SessionReqSeq = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ccy#y#dicy#cicdciy#iiiy#iy#y#y#y#y#y#y#y#y#y#i", (char **)kwlist
        , &CThostFtdcErrOrderField_BrokerID, &CThostFtdcErrOrderField_BrokerID_length
        , &CThostFtdcErrOrderField_InvestorID, &CThostFtdcErrOrderField_InvestorID_length
        , &CThostFtdcErrOrderField_reserve1, &CThostFtdcErrOrderField_reserve1_length
        , &CThostFtdcErrOrderField_OrderRef, &CThostFtdcErrOrderField_OrderRef_length
        , &CThostFtdcErrOrderField_UserID, &CThostFtdcErrOrderField_UserID_length
        , &CThostFtdcErrOrderField_OrderPriceType
        , &CThostFtdcErrOrderField_Direction
        , &CThostFtdcErrOrderField_CombOffsetFlag, &CThostFtdcErrOrderField_CombOffsetFlag_length
        , &CThostFtdcErrOrderField_CombHedgeFlag, &CThostFtdcErrOrderField_CombHedgeFlag_length
        , &CThostFtdcErrOrderField_LimitPrice
        , &CThostFtdcErrOrderField_VolumeTotalOriginal
        , &CThostFtdcErrOrderField_TimeCondition
        , &CThostFtdcErrOrderField_GTDDate, &CThostFtdcErrOrderField_GTDDate_length
        , &CThostFtdcErrOrderField_VolumeCondition
        , &CThostFtdcErrOrderField_MinVolume
        , &CThostFtdcErrOrderField_ContingentCondition
        , &CThostFtdcErrOrderField_StopPrice
        , &CThostFtdcErrOrderField_ForceCloseReason
        , &CThostFtdcErrOrderField_IsAutoSuspend
        , &CThostFtdcErrOrderField_BusinessUnit, &CThostFtdcErrOrderField_BusinessUnit_length
        , &CThostFtdcErrOrderField_RequestID
        , &CThostFtdcErrOrderField_UserForceClose
        , &CThostFtdcErrOrderField_ErrorID
        , &CThostFtdcErrOrderField_ErrorMsg, &CThostFtdcErrOrderField_ErrorMsg_length
        , &CThostFtdcErrOrderField_IsSwapOrder
        , &CThostFtdcErrOrderField_ExchangeID, &CThostFtdcErrOrderField_ExchangeID_length
        , &CThostFtdcErrOrderField_InvestUnitID, &CThostFtdcErrOrderField_InvestUnitID_length
        , &CThostFtdcErrOrderField_AccountID, &CThostFtdcErrOrderField_AccountID_length
        , &CThostFtdcErrOrderField_CurrencyID, &CThostFtdcErrOrderField_CurrencyID_length
        , &CThostFtdcErrOrderField_ClientID, &CThostFtdcErrOrderField_ClientID_length
        , &CThostFtdcErrOrderField_reserve2, &CThostFtdcErrOrderField_reserve2_length
        , &CThostFtdcErrOrderField_MacAddress, &CThostFtdcErrOrderField_MacAddress_length
        , &CThostFtdcErrOrderField_InstrumentID, &CThostFtdcErrOrderField_InstrumentID_length
        , &CThostFtdcErrOrderField_IPAddress, &CThostFtdcErrOrderField_IPAddress_length
        , &CThostFtdcErrOrderField_OrderMemo, &CThostFtdcErrOrderField_OrderMemo_length
        , &CThostFtdcErrOrderField_SessionReqSeq
    )) {
        return -1;
    }

    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcErrOrderField_BrokerID != NULL ) {
        if(CThostFtdcErrOrderField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcErrOrderField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcErrOrderField_BrokerID, CThostFtdcErrOrderField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcErrOrderField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcErrOrderField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcErrOrderField_InvestorID != NULL ) {
        if(CThostFtdcErrOrderField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcErrOrderField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcErrOrderField_InvestorID, CThostFtdcErrOrderField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcErrOrderField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcErrOrderField_InvestorID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcErrOrderField_reserve1 != NULL ) {
        if(CThostFtdcErrOrderField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcErrOrderField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcErrOrderField_reserve1, CThostFtdcErrOrderField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcErrOrderField_reserve1, sizeof(data->reserve1));
        CThostFtdcErrOrderField_reserve1 = NULL;
    }

    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcErrOrderField_OrderRef != NULL ) {
        if(CThostFtdcErrOrderField_OrderRef_length >= (Py_ssize_t)sizeof(data->OrderRef)) {
            PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is 12)", CThostFtdcErrOrderField_OrderRef_length);
            return -1;
        }
        // memset(data->OrderRef, 0, sizeof(data->OrderRef));
        // memcpy(data->OrderRef, CThostFtdcErrOrderField_OrderRef, CThostFtdcErrOrderField_OrderRef_length);
        strncpy(data->OrderRef, CThostFtdcErrOrderField_OrderRef, sizeof(data->OrderRef));
        CThostFtdcErrOrderField_OrderRef = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcErrOrderField_UserID != NULL ) {
        if(CThostFtdcErrOrderField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcErrOrderField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcErrOrderField_UserID, CThostFtdcErrOrderField_UserID_length);
        strncpy(data->UserID, CThostFtdcErrOrderField_UserID, sizeof(data->UserID));
        CThostFtdcErrOrderField_UserID = NULL;
    }

    /// 报单价格条件
    /// typedef char TThostFtdcOrderPriceTypeType
    data->OrderPriceType = CThostFtdcErrOrderField_OrderPriceType;

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    data->Direction = CThostFtdcErrOrderField_Direction;

    /// 组合开平标志
    /// typedef char TThostFtdcCombOffsetFlagType[5]
    if( CThostFtdcErrOrderField_CombOffsetFlag != NULL ) {
        if(CThostFtdcErrOrderField_CombOffsetFlag_length >= (Py_ssize_t)sizeof(data->CombOffsetFlag)) {
            PyErr_Format(PyExc_ValueError, "CombOffsetFlag too long: length=%zd (max allowed is 4)", CThostFtdcErrOrderField_CombOffsetFlag_length);
            return -1;
        }
        // memset(data->CombOffsetFlag, 0, sizeof(data->CombOffsetFlag));
        // memcpy(data->CombOffsetFlag, CThostFtdcErrOrderField_CombOffsetFlag, CThostFtdcErrOrderField_CombOffsetFlag_length);
        strncpy(data->CombOffsetFlag, CThostFtdcErrOrderField_CombOffsetFlag, sizeof(data->CombOffsetFlag));
        CThostFtdcErrOrderField_CombOffsetFlag = NULL;
    }

    /// 组合投机套保标志
    /// typedef char TThostFtdcCombHedgeFlagType[5]
    if( CThostFtdcErrOrderField_CombHedgeFlag != NULL ) {
        if(CThostFtdcErrOrderField_CombHedgeFlag_length >= (Py_ssize_t)sizeof(data->CombHedgeFlag)) {
            PyErr_Format(PyExc_ValueError, "CombHedgeFlag too long: length=%zd (max allowed is 4)", CThostFtdcErrOrderField_CombHedgeFlag_length);
            return -1;
        }
        // memset(data->CombHedgeFlag, 0, sizeof(data->CombHedgeFlag));
        // memcpy(data->CombHedgeFlag, CThostFtdcErrOrderField_CombHedgeFlag, CThostFtdcErrOrderField_CombHedgeFlag_length);
        strncpy(data->CombHedgeFlag, CThostFtdcErrOrderField_CombHedgeFlag, sizeof(data->CombHedgeFlag));
        CThostFtdcErrOrderField_CombHedgeFlag = NULL;
    }

    /// 价格
    /// typedef double TThostFtdcPriceType
    data->LimitPrice = CThostFtdcErrOrderField_LimitPrice;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    data->VolumeTotalOriginal = CThostFtdcErrOrderField_VolumeTotalOriginal;

    /// 有效期类型
    /// typedef char TThostFtdcTimeConditionType
    data->TimeCondition = CThostFtdcErrOrderField_TimeCondition;

    /// GTD日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcErrOrderField_GTDDate != NULL ) {
        if(CThostFtdcErrOrderField_GTDDate_length >= (Py_ssize_t)sizeof(data->GTDDate)) {
            PyErr_Format(PyExc_ValueError, "GTDDate too long: length=%zd (max allowed is 8)", CThostFtdcErrOrderField_GTDDate_length);
            return -1;
        }
        // memset(data->GTDDate, 0, sizeof(data->GTDDate));
        // memcpy(data->GTDDate, CThostFtdcErrOrderField_GTDDate, CThostFtdcErrOrderField_GTDDate_length);
        strncpy(data->GTDDate, CThostFtdcErrOrderField_GTDDate, sizeof(data->GTDDate));
        CThostFtdcErrOrderField_GTDDate = NULL;
    }

    /// 成交量类型
    /// typedef char TThostFtdcVolumeConditionType
    data->VolumeCondition = CThostFtdcErrOrderField_VolumeCondition;

    /// 最小成交量
    /// typedef int TThostFtdcVolumeType
    data->MinVolume = CThostFtdcErrOrderField_MinVolume;

    /// 触发条件
    /// typedef char TThostFtdcContingentConditionType
    data->ContingentCondition = CThostFtdcErrOrderField_ContingentCondition;

    /// 止损价
    /// typedef double TThostFtdcPriceType
    data->StopPrice = CThostFtdcErrOrderField_StopPrice;

    /// 强平原因
    /// typedef char TThostFtdcForceCloseReasonType
    data->ForceCloseReason = CThostFtdcErrOrderField_ForceCloseReason;

    /// 自动挂起标志
    /// typedef int TThostFtdcBoolType
    data->IsAutoSuspend = CThostFtdcErrOrderField_IsAutoSuspend;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    if( CThostFtdcErrOrderField_BusinessUnit != NULL ) {
        if(CThostFtdcErrOrderField_BusinessUnit_length >= (Py_ssize_t)sizeof(data->BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is 20)", CThostFtdcErrOrderField_BusinessUnit_length);
            return -1;
        }
        // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
        // memcpy(data->BusinessUnit, CThostFtdcErrOrderField_BusinessUnit, CThostFtdcErrOrderField_BusinessUnit_length);
        strncpy(data->BusinessUnit, CThostFtdcErrOrderField_BusinessUnit, sizeof(data->BusinessUnit));
        CThostFtdcErrOrderField_BusinessUnit = NULL;
    }

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcErrOrderField_RequestID;

    /// 用户强平标志
    /// typedef int TThostFtdcBoolType
    data->UserForceClose = CThostFtdcErrOrderField_UserForceClose;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    data->ErrorID = CThostFtdcErrOrderField_ErrorID;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcErrOrderField_ErrorMsg != NULL ) {
        if(CThostFtdcErrOrderField_ErrorMsg_length >= (Py_ssize_t)sizeof(data->ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is 80)", CThostFtdcErrOrderField_ErrorMsg_length);
            return -1;
        }
        // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
        // memcpy(data->ErrorMsg, CThostFtdcErrOrderField_ErrorMsg, CThostFtdcErrOrderField_ErrorMsg_length);
        strncpy(data->ErrorMsg, CThostFtdcErrOrderField_ErrorMsg, sizeof(data->ErrorMsg));
        CThostFtdcErrOrderField_ErrorMsg = NULL;
    }

    /// 互换单标志
    /// typedef int TThostFtdcBoolType
    data->IsSwapOrder = CThostFtdcErrOrderField_IsSwapOrder;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcErrOrderField_ExchangeID != NULL ) {
        if(CThostFtdcErrOrderField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcErrOrderField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcErrOrderField_ExchangeID, CThostFtdcErrOrderField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcErrOrderField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcErrOrderField_ExchangeID = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcErrOrderField_InvestUnitID != NULL ) {
        if(CThostFtdcErrOrderField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcErrOrderField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcErrOrderField_InvestUnitID, CThostFtdcErrOrderField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcErrOrderField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcErrOrderField_InvestUnitID = NULL;
    }

    /// 资金账号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcErrOrderField_AccountID != NULL ) {
        if(CThostFtdcErrOrderField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcErrOrderField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcErrOrderField_AccountID, CThostFtdcErrOrderField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcErrOrderField_AccountID, sizeof(data->AccountID));
        CThostFtdcErrOrderField_AccountID = NULL;
    }

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcErrOrderField_CurrencyID != NULL ) {
        if(CThostFtdcErrOrderField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcErrOrderField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcErrOrderField_CurrencyID, CThostFtdcErrOrderField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcErrOrderField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcErrOrderField_CurrencyID = NULL;
    }

    /// 交易编码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcErrOrderField_ClientID != NULL ) {
        if(CThostFtdcErrOrderField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcErrOrderField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcErrOrderField_ClientID, CThostFtdcErrOrderField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcErrOrderField_ClientID, sizeof(data->ClientID));
        CThostFtdcErrOrderField_ClientID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcErrOrderField_reserve2 != NULL ) {
        if(CThostFtdcErrOrderField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 15)", CThostFtdcErrOrderField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcErrOrderField_reserve2, CThostFtdcErrOrderField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcErrOrderField_reserve2, sizeof(data->reserve2));
        CThostFtdcErrOrderField_reserve2 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcErrOrderField_MacAddress != NULL ) {
        if(CThostFtdcErrOrderField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcErrOrderField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcErrOrderField_MacAddress, CThostFtdcErrOrderField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcErrOrderField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcErrOrderField_MacAddress = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcErrOrderField_InstrumentID != NULL ) {
        if(CThostFtdcErrOrderField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcErrOrderField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcErrOrderField_InstrumentID, CThostFtdcErrOrderField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcErrOrderField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcErrOrderField_InstrumentID = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcErrOrderField_IPAddress != NULL ) {
        if(CThostFtdcErrOrderField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcErrOrderField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcErrOrderField_IPAddress, CThostFtdcErrOrderField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcErrOrderField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcErrOrderField_IPAddress = NULL;
    }

    /// 报单回显字段
    /// typedef char TThostFtdcOrderMemoType[13]
    if( CThostFtdcErrOrderField_OrderMemo != NULL ) {
        if(CThostFtdcErrOrderField_OrderMemo_length >= (Py_ssize_t)sizeof(data->OrderMemo)) {
            PyErr_Format(PyExc_ValueError, "OrderMemo too long: length=%zd (max allowed is 12)", CThostFtdcErrOrderField_OrderMemo_length);
            return -1;
        }
        // memset(data->OrderMemo, 0, sizeof(data->OrderMemo));
        // memcpy(data->OrderMemo, CThostFtdcErrOrderField_OrderMemo, CThostFtdcErrOrderField_OrderMemo_length);
        strncpy(data->OrderMemo, CThostFtdcErrOrderField_OrderMemo, sizeof(data->OrderMemo));
        CThostFtdcErrOrderField_OrderMemo = NULL;
    }

    /// session上请求计数 api自动维护
    /// typedef int TThostFtdcSequenceNo12Type
    data->SessionReqSeq = CThostFtdcErrOrderField_SessionReqSeq;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcErrOrderFieldType_repr(PyObject *self) {

    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:c,s:c,s:y,s:y,s:d,s:i,s:c,s:y,s:c,s:i,s:c,s:d,s:c,s:i,s:y,s:i,s:i,s:i,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "OrderRef", data->OrderRef//, (Py_ssize_t)sizeof(data->OrderRef)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "OrderPriceType", data->OrderPriceType
        , "Direction", data->Direction
        , "CombOffsetFlag", data->CombOffsetFlag//, (Py_ssize_t)sizeof(data->CombOffsetFlag)
        , "CombHedgeFlag", data->CombHedgeFlag//, (Py_ssize_t)sizeof(data->CombHedgeFlag)
        , "LimitPrice", data->LimitPrice
        , "VolumeTotalOriginal", data->VolumeTotalOriginal
        , "TimeCondition", data->TimeCondition
        , "GTDDate", data->GTDDate//, (Py_ssize_t)sizeof(data->GTDDate)
        , "VolumeCondition", data->VolumeCondition
        , "MinVolume", data->MinVolume
        , "ContingentCondition", data->ContingentCondition
        , "StopPrice", data->StopPrice
        , "ForceCloseReason", data->ForceCloseReason
        , "IsAutoSuspend", data->IsAutoSuspend
        , "BusinessUnit", data->BusinessUnit//, (Py_ssize_t)sizeof(data->BusinessUnit)
        , "RequestID", data->RequestID
        , "UserForceClose", data->UserForceClose
        , "ErrorID", data->ErrorID
        , "ErrorMsg", data->ErrorMsg//, (Py_ssize_t)sizeof(data->ErrorMsg)
        , "IsSwapOrder", data->IsSwapOrder
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
        , "ClientID", data->ClientID//, (Py_ssize_t)sizeof(data->ClientID)
        , "reserve2", data->reserve2//, (Py_ssize_t)sizeof(data->reserve2)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
        , "OrderMemo", data->OrderMemo//, (Py_ssize_t)sizeof(data->OrderMemo)
        , "SessionReqSeq", data->SessionReqSeq
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcErrOrderField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcErrOrderField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcErrOrderFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcErrOrderFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcErrOrderFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcErrOrderFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcErrOrderFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcErrOrderFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcErrOrderFieldType_get_OrderRef(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderRef, (Py_ssize_t)sizeof(data->OrderRef));
    return PyBytes_FromString(data->OrderRef);
}

static int PyCThostFtdcErrOrderFieldType_set_OrderRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderField::OrderRef)) {
        PyErr_SetString(PyExc_ValueError, "OrderRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // memset(data->OrderRef, 0, sizeof(data->OrderRef));
    // memcpy(data->OrderRef, buf, len);
    strncpy(data->OrderRef, buf, sizeof(data->OrderRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcErrOrderFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcErrOrderFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单价格条件
/// typedef char TThostFtdcOrderPriceTypeType
static PyObject *PyCThostFtdcErrOrderFieldType_get_OrderPriceType(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderPriceType), 1);
}

static int PyCThostFtdcErrOrderFieldType_set_OrderPriceType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderPriceType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcErrOrderField::OrderPriceType)) {
        PyErr_SetString(PyExc_ValueError, "OrderPriceType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    data->OrderPriceType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 买卖方向
/// typedef char TThostFtdcDirectionType
static PyObject *PyCThostFtdcErrOrderFieldType_get_Direction(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Direction), 1);
}

static int PyCThostFtdcErrOrderFieldType_set_Direction(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcErrOrderField::Direction)) {
        PyErr_SetString(PyExc_ValueError, "Direction must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    data->Direction = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 组合开平标志
/// typedef char TThostFtdcCombOffsetFlagType[5]
static PyObject *PyCThostFtdcErrOrderFieldType_get_CombOffsetFlag(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombOffsetFlag, (Py_ssize_t)sizeof(data->CombOffsetFlag));
    return PyBytes_FromString(data->CombOffsetFlag);
}

static int PyCThostFtdcErrOrderFieldType_set_CombOffsetFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombOffsetFlag Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderField::CombOffsetFlag)) {
        PyErr_SetString(PyExc_ValueError, "CombOffsetFlag must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // memset(data->CombOffsetFlag, 0, sizeof(data->CombOffsetFlag));
    // memcpy(data->CombOffsetFlag, buf, len);
    strncpy(data->CombOffsetFlag, buf, sizeof(data->CombOffsetFlag));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 组合投机套保标志
/// typedef char TThostFtdcCombHedgeFlagType[5]
static PyObject *PyCThostFtdcErrOrderFieldType_get_CombHedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombHedgeFlag, (Py_ssize_t)sizeof(data->CombHedgeFlag));
    return PyBytes_FromString(data->CombHedgeFlag);
}

static int PyCThostFtdcErrOrderFieldType_set_CombHedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombHedgeFlag Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderField::CombHedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "CombHedgeFlag must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // memset(data->CombHedgeFlag, 0, sizeof(data->CombHedgeFlag));
    // memcpy(data->CombHedgeFlag, buf, len);
    strncpy(data->CombHedgeFlag, buf, sizeof(data->CombHedgeFlag));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 有效期类型
/// typedef char TThostFtdcTimeConditionType
static PyObject *PyCThostFtdcErrOrderFieldType_get_TimeCondition(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->TimeCondition), 1);
}

static int PyCThostFtdcErrOrderFieldType_set_TimeCondition(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TimeCondition Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcErrOrderField::TimeCondition)) {
        PyErr_SetString(PyExc_ValueError, "TimeCondition must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    data->TimeCondition = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// GTD日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcErrOrderFieldType_get_GTDDate(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->GTDDate, (Py_ssize_t)sizeof(data->GTDDate));
    return PyBytes_FromString(data->GTDDate);
}

static int PyCThostFtdcErrOrderFieldType_set_GTDDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "GTDDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderField::GTDDate)) {
        PyErr_SetString(PyExc_ValueError, "GTDDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // memset(data->GTDDate, 0, sizeof(data->GTDDate));
    // memcpy(data->GTDDate, buf, len);
    strncpy(data->GTDDate, buf, sizeof(data->GTDDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 成交量类型
/// typedef char TThostFtdcVolumeConditionType
static PyObject *PyCThostFtdcErrOrderFieldType_get_VolumeCondition(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->VolumeCondition), 1);
}

static int PyCThostFtdcErrOrderFieldType_set_VolumeCondition(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "VolumeCondition Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcErrOrderField::VolumeCondition)) {
        PyErr_SetString(PyExc_ValueError, "VolumeCondition must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    data->VolumeCondition = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 触发条件
/// typedef char TThostFtdcContingentConditionType
static PyObject *PyCThostFtdcErrOrderFieldType_get_ContingentCondition(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ContingentCondition), 1);
}

static int PyCThostFtdcErrOrderFieldType_set_ContingentCondition(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ContingentCondition Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcErrOrderField::ContingentCondition)) {
        PyErr_SetString(PyExc_ValueError, "ContingentCondition must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    data->ContingentCondition = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 强平原因
/// typedef char TThostFtdcForceCloseReasonType
static PyObject *PyCThostFtdcErrOrderFieldType_get_ForceCloseReason(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ForceCloseReason), 1);
}

static int PyCThostFtdcErrOrderFieldType_set_ForceCloseReason(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ForceCloseReason Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcErrOrderField::ForceCloseReason)) {
        PyErr_SetString(PyExc_ValueError, "ForceCloseReason must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    data->ForceCloseReason = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 业务单元
/// typedef char TThostFtdcBusinessUnitType[21]
static PyObject *PyCThostFtdcErrOrderFieldType_get_BusinessUnit(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BusinessUnit, (Py_ssize_t)sizeof(data->BusinessUnit));
    return PyBytes_FromString(data->BusinessUnit);
}

static int PyCThostFtdcErrOrderFieldType_set_BusinessUnit(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BusinessUnit Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderField::BusinessUnit)) {
        PyErr_SetString(PyExc_ValueError, "BusinessUnit must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
    // memcpy(data->BusinessUnit, buf, len);
    strncpy(data->BusinessUnit, buf, sizeof(data->BusinessUnit));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 错误信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcErrOrderFieldType_get_ErrorMsg(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ErrorMsg, (Py_ssize_t)sizeof(data->ErrorMsg));
    return PyBytes_FromString(data->ErrorMsg);
}

static int PyCThostFtdcErrOrderFieldType_set_ErrorMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ErrorMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderField::ErrorMsg)) {
        PyErr_SetString(PyExc_ValueError, "ErrorMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
    // memcpy(data->ErrorMsg, buf, len);
    strncpy(data->ErrorMsg, buf, sizeof(data->ErrorMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcErrOrderFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcErrOrderFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcErrOrderFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcErrOrderFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 资金账号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcErrOrderFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcErrOrderFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcErrOrderFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcErrOrderFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易编码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcErrOrderFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcErrOrderFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcErrOrderFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcErrOrderFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcErrOrderFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcErrOrderFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcErrOrderFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcErrOrderFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcErrOrderFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcErrOrderFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单回显字段
/// typedef char TThostFtdcOrderMemoType[13]
static PyObject *PyCThostFtdcErrOrderFieldType_get_OrderMemo(PyObject *self, void *closure) {
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderMemo, (Py_ssize_t)sizeof(data->OrderMemo));
    return PyBytes_FromString(data->OrderMemo);
}

static int PyCThostFtdcErrOrderFieldType_set_OrderMemo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderMemo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcErrOrderField::OrderMemo)) {
        PyErr_SetString(PyExc_ValueError, "OrderMemo must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcErrOrderFieldData>(self);
    CThostFtdcErrOrderField *data = &(extra->data);
    // memset(data->OrderMemo, 0, sizeof(data->OrderMemo));
    // memcpy(data->OrderMemo, buf, len);
    strncpy(data->OrderMemo, buf, sizeof(data->OrderMemo));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcErrOrderFieldType_members[] = {
    /// 价格
    /// typedef double TThostFtdcPriceType
    {
        .name = "LimitPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcErrOrderFieldData, data.LimitPrice),
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
        .name = "VolumeTotalOriginal",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcErrOrderFieldData, data.VolumeTotalOriginal),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("数量")
    },
    /// 最小成交量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "MinVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcErrOrderFieldData, data.MinVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("最小成交量")
    },
    /// 止损价
    /// typedef double TThostFtdcPriceType
    {
        .name = "StopPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcErrOrderFieldData, data.StopPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("止损价")
    },
    /// 自动挂起标志
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsAutoSuspend",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcErrOrderFieldData, data.IsAutoSuspend),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("自动挂起标志")
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
        .offset = offsetof(PyCThostFtdcErrOrderFieldData, data.RequestID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("请求编号")
    },
    /// 用户强平标志
    /// typedef int TThostFtdcBoolType
    {
        .name = "UserForceClose",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcErrOrderFieldData, data.UserForceClose),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("用户强平标志")
    },
    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    {
        .name = "ErrorID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcErrOrderFieldData, data.ErrorID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("错误代码")
    },
    /// 互换单标志
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsSwapOrder",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcErrOrderFieldData, data.IsSwapOrder),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("互换单标志")
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
        .offset = offsetof(PyCThostFtdcErrOrderFieldData, data.SessionReqSeq),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("session上请求计数 api自动维护")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcErrOrderFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcErrOrderFieldType_get_BrokerID,
    .set = PyCThostFtdcErrOrderFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcErrOrderFieldType_get_InvestorID,
    .set = PyCThostFtdcErrOrderFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcErrOrderFieldType_get_reserve1,
    .set = PyCThostFtdcErrOrderFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "OrderRef",
    .get = PyCThostFtdcErrOrderFieldType_get_OrderRef,
    .set = PyCThostFtdcErrOrderFieldType_set_OrderRef,
    .doc = PyDoc_STR("报单引用"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcErrOrderFieldType_get_UserID,
    .set = PyCThostFtdcErrOrderFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 报单价格条件
    /// typedef char TThostFtdcOrderPriceTypeType
    {
    .name = "OrderPriceType",
    .get = PyCThostFtdcErrOrderFieldType_get_OrderPriceType,
    .set = PyCThostFtdcErrOrderFieldType_set_OrderPriceType,
    .doc = PyDoc_STR("报单价格条件"),
    },
    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    {
    .name = "Direction",
    .get = PyCThostFtdcErrOrderFieldType_get_Direction,
    .set = PyCThostFtdcErrOrderFieldType_set_Direction,
    .doc = PyDoc_STR("买卖方向"),
    },
    /// 组合开平标志
    /// typedef char TThostFtdcCombOffsetFlagType[5]
    {
    .name = "CombOffsetFlag",
    .get = PyCThostFtdcErrOrderFieldType_get_CombOffsetFlag,
    .set = PyCThostFtdcErrOrderFieldType_set_CombOffsetFlag,
    .doc = PyDoc_STR("组合开平标志"),
    },
    /// 组合投机套保标志
    /// typedef char TThostFtdcCombHedgeFlagType[5]
    {
    .name = "CombHedgeFlag",
    .get = PyCThostFtdcErrOrderFieldType_get_CombHedgeFlag,
    .set = PyCThostFtdcErrOrderFieldType_set_CombHedgeFlag,
    .doc = PyDoc_STR("组合投机套保标志"),
    },
    /// 有效期类型
    /// typedef char TThostFtdcTimeConditionType
    {
    .name = "TimeCondition",
    .get = PyCThostFtdcErrOrderFieldType_get_TimeCondition,
    .set = PyCThostFtdcErrOrderFieldType_set_TimeCondition,
    .doc = PyDoc_STR("有效期类型"),
    },
    /// GTD日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "GTDDate",
    .get = PyCThostFtdcErrOrderFieldType_get_GTDDate,
    .set = PyCThostFtdcErrOrderFieldType_set_GTDDate,
    .doc = PyDoc_STR("GTD日期"),
    },
    /// 成交量类型
    /// typedef char TThostFtdcVolumeConditionType
    {
    .name = "VolumeCondition",
    .get = PyCThostFtdcErrOrderFieldType_get_VolumeCondition,
    .set = PyCThostFtdcErrOrderFieldType_set_VolumeCondition,
    .doc = PyDoc_STR("成交量类型"),
    },
    /// 触发条件
    /// typedef char TThostFtdcContingentConditionType
    {
    .name = "ContingentCondition",
    .get = PyCThostFtdcErrOrderFieldType_get_ContingentCondition,
    .set = PyCThostFtdcErrOrderFieldType_set_ContingentCondition,
    .doc = PyDoc_STR("触发条件"),
    },
    /// 强平原因
    /// typedef char TThostFtdcForceCloseReasonType
    {
    .name = "ForceCloseReason",
    .get = PyCThostFtdcErrOrderFieldType_get_ForceCloseReason,
    .set = PyCThostFtdcErrOrderFieldType_set_ForceCloseReason,
    .doc = PyDoc_STR("强平原因"),
    },
    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    {
    .name = "BusinessUnit",
    .get = PyCThostFtdcErrOrderFieldType_get_BusinessUnit,
    .set = PyCThostFtdcErrOrderFieldType_set_BusinessUnit,
    .doc = PyDoc_STR("业务单元"),
    },
    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "ErrorMsg",
    .get = PyCThostFtdcErrOrderFieldType_get_ErrorMsg,
    .set = PyCThostFtdcErrOrderFieldType_set_ErrorMsg,
    .doc = PyDoc_STR("错误信息"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcErrOrderFieldType_get_ExchangeID,
    .set = PyCThostFtdcErrOrderFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcErrOrderFieldType_get_InvestUnitID,
    .set = PyCThostFtdcErrOrderFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 资金账号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcErrOrderFieldType_get_AccountID,
    .set = PyCThostFtdcErrOrderFieldType_set_AccountID,
    .doc = PyDoc_STR("资金账号"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcErrOrderFieldType_get_CurrencyID,
    .set = PyCThostFtdcErrOrderFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 交易编码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcErrOrderFieldType_get_ClientID,
    .set = PyCThostFtdcErrOrderFieldType_set_ClientID,
    .doc = PyDoc_STR("交易编码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve2",
    .get = PyCThostFtdcErrOrderFieldType_get_reserve2,
    .set = PyCThostFtdcErrOrderFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcErrOrderFieldType_get_MacAddress,
    .set = PyCThostFtdcErrOrderFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcErrOrderFieldType_get_InstrumentID,
    .set = PyCThostFtdcErrOrderFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcErrOrderFieldType_get_IPAddress,
    .set = PyCThostFtdcErrOrderFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    /// 报单回显字段
    /// typedef char TThostFtdcOrderMemoType[13]
    {
    .name = "OrderMemo",
    .get = PyCThostFtdcErrOrderFieldType_get_OrderMemo,
    .set = PyCThostFtdcErrOrderFieldType_set_OrderMemo,
    .doc = PyDoc_STR("报单回显字段"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcErrOrderFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcErrOrderField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("错误报单")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcErrOrderFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcErrOrderFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcErrOrderFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcErrOrderFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcErrOrderFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcErrOrderFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("错误报单")},
    {Py_tp_members, PyCThostFtdcErrOrderFieldType_members},
    {Py_tp_getset, PyCThostFtdcErrOrderFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcErrOrderFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcErrOrderFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcErrOrderFieldType_spec = {
    .name = "PyCTP.CThostFtdcErrOrderField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcErrOrderFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcErrOrderFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcErrOrderFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcErrOrderFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcErrOrderFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcErrOrderFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcErrOrderFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcErrOrderFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcErrOrderField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcErrOrderField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}