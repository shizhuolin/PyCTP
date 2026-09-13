
#include "PyCThostFtdcParkedOrderField.h"

///预埋单

static int PyCThostFtdcParkedOrderFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "reserve1", "OrderRef", "UserID", "OrderPriceType", "Direction", "CombOffsetFlag", "CombHedgeFlag", "LimitPrice", "VolumeTotalOriginal", "TimeCondition", "GTDDate", "VolumeCondition", "MinVolume", "ContingentCondition", "StopPrice", "ForceCloseReason", "IsAutoSuspend", "BusinessUnit", "RequestID", "UserForceClose", "ExchangeID", "ParkedOrderID", "UserType", "Status", "ErrorID", "ErrorMsg", "IsSwapOrder", "AccountID", "CurrencyID", "ClientID", "InvestUnitID", "reserve2", "MacAddress", "InstrumentID", "IPAddress", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcParkedOrderField_BrokerID = NULL;
    Py_ssize_t CThostFtdcParkedOrderField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcParkedOrderField_InvestorID = NULL;
    Py_ssize_t CThostFtdcParkedOrderField_InvestorID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcParkedOrderField_reserve1 = NULL;
    Py_ssize_t CThostFtdcParkedOrderField_reserve1_length = 0;

    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcParkedOrderField_OrderRef = NULL;
    Py_ssize_t CThostFtdcParkedOrderField_OrderRef_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcParkedOrderField_UserID = NULL;
    Py_ssize_t CThostFtdcParkedOrderField_UserID_length = 0;

    /// 报单价格条件
    /// typedef char TThostFtdcOrderPriceTypeType
    char CThostFtdcParkedOrderField_OrderPriceType = 0;

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    char CThostFtdcParkedOrderField_Direction = 0;

    /// 组合开平标志
    /// typedef char TThostFtdcCombOffsetFlagType[5]
    char *CThostFtdcParkedOrderField_CombOffsetFlag = NULL;
    Py_ssize_t CThostFtdcParkedOrderField_CombOffsetFlag_length = 0;

    /// 组合投机套保标志
    /// typedef char TThostFtdcCombHedgeFlagType[5]
    char *CThostFtdcParkedOrderField_CombHedgeFlag = NULL;
    Py_ssize_t CThostFtdcParkedOrderField_CombHedgeFlag_length = 0;

    /// 价格
    /// typedef double TThostFtdcPriceType
    double CThostFtdcParkedOrderField_LimitPrice = 0.0;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcParkedOrderField_VolumeTotalOriginal = 0;

    /// 有效期类型
    /// typedef char TThostFtdcTimeConditionType
    char CThostFtdcParkedOrderField_TimeCondition = 0;

    /// GTD日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcParkedOrderField_GTDDate = NULL;
    Py_ssize_t CThostFtdcParkedOrderField_GTDDate_length = 0;

    /// 成交量类型
    /// typedef char TThostFtdcVolumeConditionType
    char CThostFtdcParkedOrderField_VolumeCondition = 0;

    /// 最小成交量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcParkedOrderField_MinVolume = 0;

    /// 触发条件
    /// typedef char TThostFtdcContingentConditionType
    char CThostFtdcParkedOrderField_ContingentCondition = 0;

    /// 止损价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcParkedOrderField_StopPrice = 0.0;

    /// 强平原因
    /// typedef char TThostFtdcForceCloseReasonType
    char CThostFtdcParkedOrderField_ForceCloseReason = 0;

    /// 自动挂起标志
    /// typedef int TThostFtdcBoolType
    int CThostFtdcParkedOrderField_IsAutoSuspend = 0;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    char *CThostFtdcParkedOrderField_BusinessUnit = NULL;
    Py_ssize_t CThostFtdcParkedOrderField_BusinessUnit_length = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcParkedOrderField_RequestID = 0;

    /// 用户强平标志
    /// typedef int TThostFtdcBoolType
    int CThostFtdcParkedOrderField_UserForceClose = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcParkedOrderField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcParkedOrderField_ExchangeID_length = 0;

    /// 预埋报单编号
    /// typedef char TThostFtdcParkedOrderIDType[13]
    char *CThostFtdcParkedOrderField_ParkedOrderID = NULL;
    Py_ssize_t CThostFtdcParkedOrderField_ParkedOrderID_length = 0;

    /// 用户类型
    /// typedef char TThostFtdcUserTypeType
    char CThostFtdcParkedOrderField_UserType = 0;

    /// 预埋单状态
    /// typedef char TThostFtdcParkedOrderStatusType
    char CThostFtdcParkedOrderField_Status = 0;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    int CThostFtdcParkedOrderField_ErrorID = 0;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcParkedOrderField_ErrorMsg = NULL;
    Py_ssize_t CThostFtdcParkedOrderField_ErrorMsg_length = 0;

    /// 互换单标志
    /// typedef int TThostFtdcBoolType
    int CThostFtdcParkedOrderField_IsSwapOrder = 0;

    /// 资金账号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcParkedOrderField_AccountID = NULL;
    Py_ssize_t CThostFtdcParkedOrderField_AccountID_length = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcParkedOrderField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcParkedOrderField_CurrencyID_length = 0;

    /// 交易编码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcParkedOrderField_ClientID = NULL;
    Py_ssize_t CThostFtdcParkedOrderField_ClientID_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcParkedOrderField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcParkedOrderField_InvestUnitID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcParkedOrderField_reserve2 = NULL;
    Py_ssize_t CThostFtdcParkedOrderField_reserve2_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcParkedOrderField_MacAddress = NULL;
    Py_ssize_t CThostFtdcParkedOrderField_MacAddress_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcParkedOrderField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcParkedOrderField_InstrumentID_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcParkedOrderField_IPAddress = NULL;
    Py_ssize_t CThostFtdcParkedOrderField_IPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ccy#y#dicy#cicdciy#iiy#y#cciy#iy#y#y#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcParkedOrderField_BrokerID, &CThostFtdcParkedOrderField_BrokerID_length
        , &CThostFtdcParkedOrderField_InvestorID, &CThostFtdcParkedOrderField_InvestorID_length
        , &CThostFtdcParkedOrderField_reserve1, &CThostFtdcParkedOrderField_reserve1_length
        , &CThostFtdcParkedOrderField_OrderRef, &CThostFtdcParkedOrderField_OrderRef_length
        , &CThostFtdcParkedOrderField_UserID, &CThostFtdcParkedOrderField_UserID_length
        , &CThostFtdcParkedOrderField_OrderPriceType
        , &CThostFtdcParkedOrderField_Direction
        , &CThostFtdcParkedOrderField_CombOffsetFlag, &CThostFtdcParkedOrderField_CombOffsetFlag_length
        , &CThostFtdcParkedOrderField_CombHedgeFlag, &CThostFtdcParkedOrderField_CombHedgeFlag_length
        , &CThostFtdcParkedOrderField_LimitPrice
        , &CThostFtdcParkedOrderField_VolumeTotalOriginal
        , &CThostFtdcParkedOrderField_TimeCondition
        , &CThostFtdcParkedOrderField_GTDDate, &CThostFtdcParkedOrderField_GTDDate_length
        , &CThostFtdcParkedOrderField_VolumeCondition
        , &CThostFtdcParkedOrderField_MinVolume
        , &CThostFtdcParkedOrderField_ContingentCondition
        , &CThostFtdcParkedOrderField_StopPrice
        , &CThostFtdcParkedOrderField_ForceCloseReason
        , &CThostFtdcParkedOrderField_IsAutoSuspend
        , &CThostFtdcParkedOrderField_BusinessUnit, &CThostFtdcParkedOrderField_BusinessUnit_length
        , &CThostFtdcParkedOrderField_RequestID
        , &CThostFtdcParkedOrderField_UserForceClose
        , &CThostFtdcParkedOrderField_ExchangeID, &CThostFtdcParkedOrderField_ExchangeID_length
        , &CThostFtdcParkedOrderField_ParkedOrderID, &CThostFtdcParkedOrderField_ParkedOrderID_length
        , &CThostFtdcParkedOrderField_UserType
        , &CThostFtdcParkedOrderField_Status
        , &CThostFtdcParkedOrderField_ErrorID
        , &CThostFtdcParkedOrderField_ErrorMsg, &CThostFtdcParkedOrderField_ErrorMsg_length
        , &CThostFtdcParkedOrderField_IsSwapOrder
        , &CThostFtdcParkedOrderField_AccountID, &CThostFtdcParkedOrderField_AccountID_length
        , &CThostFtdcParkedOrderField_CurrencyID, &CThostFtdcParkedOrderField_CurrencyID_length
        , &CThostFtdcParkedOrderField_ClientID, &CThostFtdcParkedOrderField_ClientID_length
        , &CThostFtdcParkedOrderField_InvestUnitID, &CThostFtdcParkedOrderField_InvestUnitID_length
        , &CThostFtdcParkedOrderField_reserve2, &CThostFtdcParkedOrderField_reserve2_length
        , &CThostFtdcParkedOrderField_MacAddress, &CThostFtdcParkedOrderField_MacAddress_length
        , &CThostFtdcParkedOrderField_InstrumentID, &CThostFtdcParkedOrderField_InstrumentID_length
        , &CThostFtdcParkedOrderField_IPAddress, &CThostFtdcParkedOrderField_IPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcParkedOrderField_BrokerID != NULL ) {
        if(CThostFtdcParkedOrderField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcParkedOrderField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcParkedOrderField_BrokerID, CThostFtdcParkedOrderField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcParkedOrderField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcParkedOrderField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcParkedOrderField_InvestorID != NULL ) {
        if(CThostFtdcParkedOrderField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcParkedOrderField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcParkedOrderField_InvestorID, CThostFtdcParkedOrderField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcParkedOrderField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcParkedOrderField_InvestorID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcParkedOrderField_reserve1 != NULL ) {
        if(CThostFtdcParkedOrderField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcParkedOrderField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcParkedOrderField_reserve1, CThostFtdcParkedOrderField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcParkedOrderField_reserve1, sizeof(data->reserve1));
        CThostFtdcParkedOrderField_reserve1 = NULL;
    }

    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcParkedOrderField_OrderRef != NULL ) {
        if(CThostFtdcParkedOrderField_OrderRef_length >= (Py_ssize_t)sizeof(data->OrderRef)) {
            PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is 12)", CThostFtdcParkedOrderField_OrderRef_length);
            return -1;
        }
        // memset(data->OrderRef, 0, sizeof(data->OrderRef));
        // memcpy(data->OrderRef, CThostFtdcParkedOrderField_OrderRef, CThostFtdcParkedOrderField_OrderRef_length);
        strncpy(data->OrderRef, CThostFtdcParkedOrderField_OrderRef, sizeof(data->OrderRef));
        CThostFtdcParkedOrderField_OrderRef = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcParkedOrderField_UserID != NULL ) {
        if(CThostFtdcParkedOrderField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcParkedOrderField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcParkedOrderField_UserID, CThostFtdcParkedOrderField_UserID_length);
        strncpy(data->UserID, CThostFtdcParkedOrderField_UserID, sizeof(data->UserID));
        CThostFtdcParkedOrderField_UserID = NULL;
    }

    /// 报单价格条件
    /// typedef char TThostFtdcOrderPriceTypeType
    data->OrderPriceType = CThostFtdcParkedOrderField_OrderPriceType;

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    data->Direction = CThostFtdcParkedOrderField_Direction;

    /// 组合开平标志
    /// typedef char TThostFtdcCombOffsetFlagType[5]
    if( CThostFtdcParkedOrderField_CombOffsetFlag != NULL ) {
        if(CThostFtdcParkedOrderField_CombOffsetFlag_length >= (Py_ssize_t)sizeof(data->CombOffsetFlag)) {
            PyErr_Format(PyExc_ValueError, "CombOffsetFlag too long: length=%zd (max allowed is 4)", CThostFtdcParkedOrderField_CombOffsetFlag_length);
            return -1;
        }
        // memset(data->CombOffsetFlag, 0, sizeof(data->CombOffsetFlag));
        // memcpy(data->CombOffsetFlag, CThostFtdcParkedOrderField_CombOffsetFlag, CThostFtdcParkedOrderField_CombOffsetFlag_length);
        strncpy(data->CombOffsetFlag, CThostFtdcParkedOrderField_CombOffsetFlag, sizeof(data->CombOffsetFlag));
        CThostFtdcParkedOrderField_CombOffsetFlag = NULL;
    }

    /// 组合投机套保标志
    /// typedef char TThostFtdcCombHedgeFlagType[5]
    if( CThostFtdcParkedOrderField_CombHedgeFlag != NULL ) {
        if(CThostFtdcParkedOrderField_CombHedgeFlag_length >= (Py_ssize_t)sizeof(data->CombHedgeFlag)) {
            PyErr_Format(PyExc_ValueError, "CombHedgeFlag too long: length=%zd (max allowed is 4)", CThostFtdcParkedOrderField_CombHedgeFlag_length);
            return -1;
        }
        // memset(data->CombHedgeFlag, 0, sizeof(data->CombHedgeFlag));
        // memcpy(data->CombHedgeFlag, CThostFtdcParkedOrderField_CombHedgeFlag, CThostFtdcParkedOrderField_CombHedgeFlag_length);
        strncpy(data->CombHedgeFlag, CThostFtdcParkedOrderField_CombHedgeFlag, sizeof(data->CombHedgeFlag));
        CThostFtdcParkedOrderField_CombHedgeFlag = NULL;
    }

    /// 价格
    /// typedef double TThostFtdcPriceType
    data->LimitPrice = CThostFtdcParkedOrderField_LimitPrice;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    data->VolumeTotalOriginal = CThostFtdcParkedOrderField_VolumeTotalOriginal;

    /// 有效期类型
    /// typedef char TThostFtdcTimeConditionType
    data->TimeCondition = CThostFtdcParkedOrderField_TimeCondition;

    /// GTD日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcParkedOrderField_GTDDate != NULL ) {
        if(CThostFtdcParkedOrderField_GTDDate_length >= (Py_ssize_t)sizeof(data->GTDDate)) {
            PyErr_Format(PyExc_ValueError, "GTDDate too long: length=%zd (max allowed is 8)", CThostFtdcParkedOrderField_GTDDate_length);
            return -1;
        }
        // memset(data->GTDDate, 0, sizeof(data->GTDDate));
        // memcpy(data->GTDDate, CThostFtdcParkedOrderField_GTDDate, CThostFtdcParkedOrderField_GTDDate_length);
        strncpy(data->GTDDate, CThostFtdcParkedOrderField_GTDDate, sizeof(data->GTDDate));
        CThostFtdcParkedOrderField_GTDDate = NULL;
    }

    /// 成交量类型
    /// typedef char TThostFtdcVolumeConditionType
    data->VolumeCondition = CThostFtdcParkedOrderField_VolumeCondition;

    /// 最小成交量
    /// typedef int TThostFtdcVolumeType
    data->MinVolume = CThostFtdcParkedOrderField_MinVolume;

    /// 触发条件
    /// typedef char TThostFtdcContingentConditionType
    data->ContingentCondition = CThostFtdcParkedOrderField_ContingentCondition;

    /// 止损价
    /// typedef double TThostFtdcPriceType
    data->StopPrice = CThostFtdcParkedOrderField_StopPrice;

    /// 强平原因
    /// typedef char TThostFtdcForceCloseReasonType
    data->ForceCloseReason = CThostFtdcParkedOrderField_ForceCloseReason;

    /// 自动挂起标志
    /// typedef int TThostFtdcBoolType
    data->IsAutoSuspend = CThostFtdcParkedOrderField_IsAutoSuspend;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    if( CThostFtdcParkedOrderField_BusinessUnit != NULL ) {
        if(CThostFtdcParkedOrderField_BusinessUnit_length >= (Py_ssize_t)sizeof(data->BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is 20)", CThostFtdcParkedOrderField_BusinessUnit_length);
            return -1;
        }
        // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
        // memcpy(data->BusinessUnit, CThostFtdcParkedOrderField_BusinessUnit, CThostFtdcParkedOrderField_BusinessUnit_length);
        strncpy(data->BusinessUnit, CThostFtdcParkedOrderField_BusinessUnit, sizeof(data->BusinessUnit));
        CThostFtdcParkedOrderField_BusinessUnit = NULL;
    }

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcParkedOrderField_RequestID;

    /// 用户强平标志
    /// typedef int TThostFtdcBoolType
    data->UserForceClose = CThostFtdcParkedOrderField_UserForceClose;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcParkedOrderField_ExchangeID != NULL ) {
        if(CThostFtdcParkedOrderField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcParkedOrderField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcParkedOrderField_ExchangeID, CThostFtdcParkedOrderField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcParkedOrderField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcParkedOrderField_ExchangeID = NULL;
    }

    /// 预埋报单编号
    /// typedef char TThostFtdcParkedOrderIDType[13]
    if( CThostFtdcParkedOrderField_ParkedOrderID != NULL ) {
        if(CThostFtdcParkedOrderField_ParkedOrderID_length >= (Py_ssize_t)sizeof(data->ParkedOrderID)) {
            PyErr_Format(PyExc_ValueError, "ParkedOrderID too long: length=%zd (max allowed is 12)", CThostFtdcParkedOrderField_ParkedOrderID_length);
            return -1;
        }
        // memset(data->ParkedOrderID, 0, sizeof(data->ParkedOrderID));
        // memcpy(data->ParkedOrderID, CThostFtdcParkedOrderField_ParkedOrderID, CThostFtdcParkedOrderField_ParkedOrderID_length);
        strncpy(data->ParkedOrderID, CThostFtdcParkedOrderField_ParkedOrderID, sizeof(data->ParkedOrderID));
        CThostFtdcParkedOrderField_ParkedOrderID = NULL;
    }

    /// 用户类型
    /// typedef char TThostFtdcUserTypeType
    data->UserType = CThostFtdcParkedOrderField_UserType;

    /// 预埋单状态
    /// typedef char TThostFtdcParkedOrderStatusType
    data->Status = CThostFtdcParkedOrderField_Status;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    data->ErrorID = CThostFtdcParkedOrderField_ErrorID;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcParkedOrderField_ErrorMsg != NULL ) {
        if(CThostFtdcParkedOrderField_ErrorMsg_length >= (Py_ssize_t)sizeof(data->ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is 80)", CThostFtdcParkedOrderField_ErrorMsg_length);
            return -1;
        }
        // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
        // memcpy(data->ErrorMsg, CThostFtdcParkedOrderField_ErrorMsg, CThostFtdcParkedOrderField_ErrorMsg_length);
        strncpy(data->ErrorMsg, CThostFtdcParkedOrderField_ErrorMsg, sizeof(data->ErrorMsg));
        CThostFtdcParkedOrderField_ErrorMsg = NULL;
    }

    /// 互换单标志
    /// typedef int TThostFtdcBoolType
    data->IsSwapOrder = CThostFtdcParkedOrderField_IsSwapOrder;

    /// 资金账号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcParkedOrderField_AccountID != NULL ) {
        if(CThostFtdcParkedOrderField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcParkedOrderField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcParkedOrderField_AccountID, CThostFtdcParkedOrderField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcParkedOrderField_AccountID, sizeof(data->AccountID));
        CThostFtdcParkedOrderField_AccountID = NULL;
    }

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcParkedOrderField_CurrencyID != NULL ) {
        if(CThostFtdcParkedOrderField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcParkedOrderField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcParkedOrderField_CurrencyID, CThostFtdcParkedOrderField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcParkedOrderField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcParkedOrderField_CurrencyID = NULL;
    }

    /// 交易编码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcParkedOrderField_ClientID != NULL ) {
        if(CThostFtdcParkedOrderField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcParkedOrderField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcParkedOrderField_ClientID, CThostFtdcParkedOrderField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcParkedOrderField_ClientID, sizeof(data->ClientID));
        CThostFtdcParkedOrderField_ClientID = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcParkedOrderField_InvestUnitID != NULL ) {
        if(CThostFtdcParkedOrderField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcParkedOrderField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcParkedOrderField_InvestUnitID, CThostFtdcParkedOrderField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcParkedOrderField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcParkedOrderField_InvestUnitID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcParkedOrderField_reserve2 != NULL ) {
        if(CThostFtdcParkedOrderField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 15)", CThostFtdcParkedOrderField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcParkedOrderField_reserve2, CThostFtdcParkedOrderField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcParkedOrderField_reserve2, sizeof(data->reserve2));
        CThostFtdcParkedOrderField_reserve2 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcParkedOrderField_MacAddress != NULL ) {
        if(CThostFtdcParkedOrderField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcParkedOrderField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcParkedOrderField_MacAddress, CThostFtdcParkedOrderField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcParkedOrderField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcParkedOrderField_MacAddress = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcParkedOrderField_InstrumentID != NULL ) {
        if(CThostFtdcParkedOrderField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcParkedOrderField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcParkedOrderField_InstrumentID, CThostFtdcParkedOrderField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcParkedOrderField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcParkedOrderField_InstrumentID = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcParkedOrderField_IPAddress != NULL ) {
        if(CThostFtdcParkedOrderField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcParkedOrderField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcParkedOrderField_IPAddress, CThostFtdcParkedOrderField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcParkedOrderField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcParkedOrderField_IPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcParkedOrderFieldType_repr(PyObject *self) {

    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:c,s:c,s:y,s:y,s:d,s:i,s:c,s:y,s:c,s:i,s:c,s:d,s:c,s:i,s:y,s:i,s:i,s:y,s:y,s:c,s:c,s:i,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
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
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ParkedOrderID", data->ParkedOrderID//, (Py_ssize_t)sizeof(data->ParkedOrderID)
        , "UserType", data->UserType
        , "Status", data->Status
        , "ErrorID", data->ErrorID
        , "ErrorMsg", data->ErrorMsg//, (Py_ssize_t)sizeof(data->ErrorMsg)
        , "IsSwapOrder", data->IsSwapOrder
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
        , "ClientID", data->ClientID//, (Py_ssize_t)sizeof(data->ClientID)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "reserve2", data->reserve2//, (Py_ssize_t)sizeof(data->reserve2)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcParkedOrderField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcParkedOrderField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcParkedOrderFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcParkedOrderFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcParkedOrderField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcParkedOrderFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcParkedOrderFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcParkedOrderField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcParkedOrderFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcParkedOrderFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcParkedOrderField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcParkedOrderFieldType_get_OrderRef(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderRef, (Py_ssize_t)sizeof(data->OrderRef));
    return PyBytes_FromString(data->OrderRef);
}

static int PyCThostFtdcParkedOrderFieldType_set_OrderRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcParkedOrderField::OrderRef)) {
        PyErr_SetString(PyExc_ValueError, "OrderRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // memset(data->OrderRef, 0, sizeof(data->OrderRef));
    // memcpy(data->OrderRef, buf, len);
    strncpy(data->OrderRef, buf, sizeof(data->OrderRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcParkedOrderFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcParkedOrderFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcParkedOrderField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单价格条件
/// typedef char TThostFtdcOrderPriceTypeType
static PyObject *PyCThostFtdcParkedOrderFieldType_get_OrderPriceType(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderPriceType), 1);
}

static int PyCThostFtdcParkedOrderFieldType_set_OrderPriceType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderPriceType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcParkedOrderField::OrderPriceType)) {
        PyErr_SetString(PyExc_ValueError, "OrderPriceType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    data->OrderPriceType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 买卖方向
/// typedef char TThostFtdcDirectionType
static PyObject *PyCThostFtdcParkedOrderFieldType_get_Direction(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Direction), 1);
}

static int PyCThostFtdcParkedOrderFieldType_set_Direction(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcParkedOrderField::Direction)) {
        PyErr_SetString(PyExc_ValueError, "Direction must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    data->Direction = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 组合开平标志
/// typedef char TThostFtdcCombOffsetFlagType[5]
static PyObject *PyCThostFtdcParkedOrderFieldType_get_CombOffsetFlag(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombOffsetFlag, (Py_ssize_t)sizeof(data->CombOffsetFlag));
    return PyBytes_FromString(data->CombOffsetFlag);
}

static int PyCThostFtdcParkedOrderFieldType_set_CombOffsetFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombOffsetFlag Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcParkedOrderField::CombOffsetFlag)) {
        PyErr_SetString(PyExc_ValueError, "CombOffsetFlag must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // memset(data->CombOffsetFlag, 0, sizeof(data->CombOffsetFlag));
    // memcpy(data->CombOffsetFlag, buf, len);
    strncpy(data->CombOffsetFlag, buf, sizeof(data->CombOffsetFlag));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 组合投机套保标志
/// typedef char TThostFtdcCombHedgeFlagType[5]
static PyObject *PyCThostFtdcParkedOrderFieldType_get_CombHedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombHedgeFlag, (Py_ssize_t)sizeof(data->CombHedgeFlag));
    return PyBytes_FromString(data->CombHedgeFlag);
}

static int PyCThostFtdcParkedOrderFieldType_set_CombHedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombHedgeFlag Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcParkedOrderField::CombHedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "CombHedgeFlag must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // memset(data->CombHedgeFlag, 0, sizeof(data->CombHedgeFlag));
    // memcpy(data->CombHedgeFlag, buf, len);
    strncpy(data->CombHedgeFlag, buf, sizeof(data->CombHedgeFlag));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 有效期类型
/// typedef char TThostFtdcTimeConditionType
static PyObject *PyCThostFtdcParkedOrderFieldType_get_TimeCondition(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->TimeCondition), 1);
}

static int PyCThostFtdcParkedOrderFieldType_set_TimeCondition(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TimeCondition Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcParkedOrderField::TimeCondition)) {
        PyErr_SetString(PyExc_ValueError, "TimeCondition must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    data->TimeCondition = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// GTD日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcParkedOrderFieldType_get_GTDDate(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->GTDDate, (Py_ssize_t)sizeof(data->GTDDate));
    return PyBytes_FromString(data->GTDDate);
}

static int PyCThostFtdcParkedOrderFieldType_set_GTDDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "GTDDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcParkedOrderField::GTDDate)) {
        PyErr_SetString(PyExc_ValueError, "GTDDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // memset(data->GTDDate, 0, sizeof(data->GTDDate));
    // memcpy(data->GTDDate, buf, len);
    strncpy(data->GTDDate, buf, sizeof(data->GTDDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 成交量类型
/// typedef char TThostFtdcVolumeConditionType
static PyObject *PyCThostFtdcParkedOrderFieldType_get_VolumeCondition(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->VolumeCondition), 1);
}

static int PyCThostFtdcParkedOrderFieldType_set_VolumeCondition(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "VolumeCondition Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcParkedOrderField::VolumeCondition)) {
        PyErr_SetString(PyExc_ValueError, "VolumeCondition must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    data->VolumeCondition = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 触发条件
/// typedef char TThostFtdcContingentConditionType
static PyObject *PyCThostFtdcParkedOrderFieldType_get_ContingentCondition(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ContingentCondition), 1);
}

static int PyCThostFtdcParkedOrderFieldType_set_ContingentCondition(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ContingentCondition Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcParkedOrderField::ContingentCondition)) {
        PyErr_SetString(PyExc_ValueError, "ContingentCondition must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    data->ContingentCondition = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 强平原因
/// typedef char TThostFtdcForceCloseReasonType
static PyObject *PyCThostFtdcParkedOrderFieldType_get_ForceCloseReason(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ForceCloseReason), 1);
}

static int PyCThostFtdcParkedOrderFieldType_set_ForceCloseReason(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ForceCloseReason Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcParkedOrderField::ForceCloseReason)) {
        PyErr_SetString(PyExc_ValueError, "ForceCloseReason must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    data->ForceCloseReason = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 业务单元
/// typedef char TThostFtdcBusinessUnitType[21]
static PyObject *PyCThostFtdcParkedOrderFieldType_get_BusinessUnit(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BusinessUnit, (Py_ssize_t)sizeof(data->BusinessUnit));
    return PyBytes_FromString(data->BusinessUnit);
}

static int PyCThostFtdcParkedOrderFieldType_set_BusinessUnit(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BusinessUnit Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcParkedOrderField::BusinessUnit)) {
        PyErr_SetString(PyExc_ValueError, "BusinessUnit must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
    // memcpy(data->BusinessUnit, buf, len);
    strncpy(data->BusinessUnit, buf, sizeof(data->BusinessUnit));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcParkedOrderFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcParkedOrderFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcParkedOrderField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 预埋报单编号
/// typedef char TThostFtdcParkedOrderIDType[13]
static PyObject *PyCThostFtdcParkedOrderFieldType_get_ParkedOrderID(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParkedOrderID, (Py_ssize_t)sizeof(data->ParkedOrderID));
    return PyBytes_FromString(data->ParkedOrderID);
}

static int PyCThostFtdcParkedOrderFieldType_set_ParkedOrderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParkedOrderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcParkedOrderField::ParkedOrderID)) {
        PyErr_SetString(PyExc_ValueError, "ParkedOrderID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // memset(data->ParkedOrderID, 0, sizeof(data->ParkedOrderID));
    // memcpy(data->ParkedOrderID, buf, len);
    strncpy(data->ParkedOrderID, buf, sizeof(data->ParkedOrderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户类型
/// typedef char TThostFtdcUserTypeType
static PyObject *PyCThostFtdcParkedOrderFieldType_get_UserType(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->UserType), 1);
}

static int PyCThostFtdcParkedOrderFieldType_set_UserType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcParkedOrderField::UserType)) {
        PyErr_SetString(PyExc_ValueError, "UserType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    data->UserType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 预埋单状态
/// typedef char TThostFtdcParkedOrderStatusType
static PyObject *PyCThostFtdcParkedOrderFieldType_get_Status(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Status), 1);
}

static int PyCThostFtdcParkedOrderFieldType_set_Status(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Status Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcParkedOrderField::Status)) {
        PyErr_SetString(PyExc_ValueError, "Status must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    data->Status = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 错误信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcParkedOrderFieldType_get_ErrorMsg(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ErrorMsg, (Py_ssize_t)sizeof(data->ErrorMsg));
    return PyBytes_FromString(data->ErrorMsg);
}

static int PyCThostFtdcParkedOrderFieldType_set_ErrorMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ErrorMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcParkedOrderField::ErrorMsg)) {
        PyErr_SetString(PyExc_ValueError, "ErrorMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
    // memcpy(data->ErrorMsg, buf, len);
    strncpy(data->ErrorMsg, buf, sizeof(data->ErrorMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 资金账号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcParkedOrderFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcParkedOrderFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcParkedOrderField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcParkedOrderFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcParkedOrderFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcParkedOrderField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易编码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcParkedOrderFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcParkedOrderFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcParkedOrderField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcParkedOrderFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcParkedOrderFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcParkedOrderField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcParkedOrderFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcParkedOrderFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcParkedOrderField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcParkedOrderFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcParkedOrderFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcParkedOrderField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcParkedOrderFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcParkedOrderFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcParkedOrderField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcParkedOrderFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcParkedOrderFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcParkedOrderField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(self);
    CThostFtdcParkedOrderField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcParkedOrderFieldType_members[] = {
    /// 价格
    /// typedef double TThostFtdcPriceType
    {
        .name = "LimitPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcParkedOrderFieldData, data.LimitPrice),
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
        .offset = offsetof(PyCThostFtdcParkedOrderFieldData, data.VolumeTotalOriginal),
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
        .offset = offsetof(PyCThostFtdcParkedOrderFieldData, data.MinVolume),
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
        .offset = offsetof(PyCThostFtdcParkedOrderFieldData, data.StopPrice),
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
        .offset = offsetof(PyCThostFtdcParkedOrderFieldData, data.IsAutoSuspend),
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
        .offset = offsetof(PyCThostFtdcParkedOrderFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcParkedOrderFieldData, data.UserForceClose),
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
        .offset = offsetof(PyCThostFtdcParkedOrderFieldData, data.ErrorID),
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
        .offset = offsetof(PyCThostFtdcParkedOrderFieldData, data.IsSwapOrder),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("互换单标志")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcParkedOrderFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcParkedOrderFieldType_get_BrokerID,
    .set = PyCThostFtdcParkedOrderFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcParkedOrderFieldType_get_InvestorID,
    .set = PyCThostFtdcParkedOrderFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcParkedOrderFieldType_get_reserve1,
    .set = PyCThostFtdcParkedOrderFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "OrderRef",
    .get = PyCThostFtdcParkedOrderFieldType_get_OrderRef,
    .set = PyCThostFtdcParkedOrderFieldType_set_OrderRef,
    .doc = PyDoc_STR("报单引用"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcParkedOrderFieldType_get_UserID,
    .set = PyCThostFtdcParkedOrderFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 报单价格条件
    /// typedef char TThostFtdcOrderPriceTypeType
    {
    .name = "OrderPriceType",
    .get = PyCThostFtdcParkedOrderFieldType_get_OrderPriceType,
    .set = PyCThostFtdcParkedOrderFieldType_set_OrderPriceType,
    .doc = PyDoc_STR("报单价格条件"),
    },
    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    {
    .name = "Direction",
    .get = PyCThostFtdcParkedOrderFieldType_get_Direction,
    .set = PyCThostFtdcParkedOrderFieldType_set_Direction,
    .doc = PyDoc_STR("买卖方向"),
    },
    /// 组合开平标志
    /// typedef char TThostFtdcCombOffsetFlagType[5]
    {
    .name = "CombOffsetFlag",
    .get = PyCThostFtdcParkedOrderFieldType_get_CombOffsetFlag,
    .set = PyCThostFtdcParkedOrderFieldType_set_CombOffsetFlag,
    .doc = PyDoc_STR("组合开平标志"),
    },
    /// 组合投机套保标志
    /// typedef char TThostFtdcCombHedgeFlagType[5]
    {
    .name = "CombHedgeFlag",
    .get = PyCThostFtdcParkedOrderFieldType_get_CombHedgeFlag,
    .set = PyCThostFtdcParkedOrderFieldType_set_CombHedgeFlag,
    .doc = PyDoc_STR("组合投机套保标志"),
    },
    /// 有效期类型
    /// typedef char TThostFtdcTimeConditionType
    {
    .name = "TimeCondition",
    .get = PyCThostFtdcParkedOrderFieldType_get_TimeCondition,
    .set = PyCThostFtdcParkedOrderFieldType_set_TimeCondition,
    .doc = PyDoc_STR("有效期类型"),
    },
    /// GTD日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "GTDDate",
    .get = PyCThostFtdcParkedOrderFieldType_get_GTDDate,
    .set = PyCThostFtdcParkedOrderFieldType_set_GTDDate,
    .doc = PyDoc_STR("GTD日期"),
    },
    /// 成交量类型
    /// typedef char TThostFtdcVolumeConditionType
    {
    .name = "VolumeCondition",
    .get = PyCThostFtdcParkedOrderFieldType_get_VolumeCondition,
    .set = PyCThostFtdcParkedOrderFieldType_set_VolumeCondition,
    .doc = PyDoc_STR("成交量类型"),
    },
    /// 触发条件
    /// typedef char TThostFtdcContingentConditionType
    {
    .name = "ContingentCondition",
    .get = PyCThostFtdcParkedOrderFieldType_get_ContingentCondition,
    .set = PyCThostFtdcParkedOrderFieldType_set_ContingentCondition,
    .doc = PyDoc_STR("触发条件"),
    },
    /// 强平原因
    /// typedef char TThostFtdcForceCloseReasonType
    {
    .name = "ForceCloseReason",
    .get = PyCThostFtdcParkedOrderFieldType_get_ForceCloseReason,
    .set = PyCThostFtdcParkedOrderFieldType_set_ForceCloseReason,
    .doc = PyDoc_STR("强平原因"),
    },
    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    {
    .name = "BusinessUnit",
    .get = PyCThostFtdcParkedOrderFieldType_get_BusinessUnit,
    .set = PyCThostFtdcParkedOrderFieldType_set_BusinessUnit,
    .doc = PyDoc_STR("业务单元"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcParkedOrderFieldType_get_ExchangeID,
    .set = PyCThostFtdcParkedOrderFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 预埋报单编号
    /// typedef char TThostFtdcParkedOrderIDType[13]
    {
    .name = "ParkedOrderID",
    .get = PyCThostFtdcParkedOrderFieldType_get_ParkedOrderID,
    .set = PyCThostFtdcParkedOrderFieldType_set_ParkedOrderID,
    .doc = PyDoc_STR("预埋报单编号"),
    },
    /// 用户类型
    /// typedef char TThostFtdcUserTypeType
    {
    .name = "UserType",
    .get = PyCThostFtdcParkedOrderFieldType_get_UserType,
    .set = PyCThostFtdcParkedOrderFieldType_set_UserType,
    .doc = PyDoc_STR("用户类型"),
    },
    /// 预埋单状态
    /// typedef char TThostFtdcParkedOrderStatusType
    {
    .name = "Status",
    .get = PyCThostFtdcParkedOrderFieldType_get_Status,
    .set = PyCThostFtdcParkedOrderFieldType_set_Status,
    .doc = PyDoc_STR("预埋单状态"),
    },
    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "ErrorMsg",
    .get = PyCThostFtdcParkedOrderFieldType_get_ErrorMsg,
    .set = PyCThostFtdcParkedOrderFieldType_set_ErrorMsg,
    .doc = PyDoc_STR("错误信息"),
    },
    /// 资金账号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcParkedOrderFieldType_get_AccountID,
    .set = PyCThostFtdcParkedOrderFieldType_set_AccountID,
    .doc = PyDoc_STR("资金账号"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcParkedOrderFieldType_get_CurrencyID,
    .set = PyCThostFtdcParkedOrderFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 交易编码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcParkedOrderFieldType_get_ClientID,
    .set = PyCThostFtdcParkedOrderFieldType_set_ClientID,
    .doc = PyDoc_STR("交易编码"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcParkedOrderFieldType_get_InvestUnitID,
    .set = PyCThostFtdcParkedOrderFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve2",
    .get = PyCThostFtdcParkedOrderFieldType_get_reserve2,
    .set = PyCThostFtdcParkedOrderFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcParkedOrderFieldType_get_MacAddress,
    .set = PyCThostFtdcParkedOrderFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcParkedOrderFieldType_get_InstrumentID,
    .set = PyCThostFtdcParkedOrderFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcParkedOrderFieldType_get_IPAddress,
    .set = PyCThostFtdcParkedOrderFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcParkedOrderFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcParkedOrderField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("预埋单")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcParkedOrderFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcParkedOrderFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcParkedOrderFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcParkedOrderFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcParkedOrderFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcParkedOrderFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("预埋单")},
    {Py_tp_members, PyCThostFtdcParkedOrderFieldType_members},
    {Py_tp_getset, PyCThostFtdcParkedOrderFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcParkedOrderFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcParkedOrderFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcParkedOrderFieldType_spec = {
    .name = "PyCTP.CThostFtdcParkedOrderField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcParkedOrderFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcParkedOrderFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcParkedOrderFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcParkedOrderFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcParkedOrderFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcParkedOrderFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcParkedOrderFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcParkedOrderFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcParkedOrderField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcParkedOrderField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}