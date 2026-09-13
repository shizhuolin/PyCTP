
#include "PyCThostFtdcInputQuoteField.h"

///输入的报价

static int PyCThostFtdcInputQuoteFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "reserve1", "QuoteRef", "UserID", "AskPrice", "BidPrice", "AskVolume", "BidVolume", "RequestID", "BusinessUnit", "AskOffsetFlag", "BidOffsetFlag", "AskHedgeFlag", "BidHedgeFlag", "AskOrderRef", "BidOrderRef", "ForQuoteSysID", "ExchangeID", "InvestUnitID", "ClientID", "reserve2", "MacAddress", "InstrumentID", "IPAddress", "ReplaceSysID", "TimeCondition", "OrderMemo", "SessionReqSeq", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInputQuoteField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInputQuoteField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInputQuoteField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInputQuoteField_InvestorID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcInputQuoteField_reserve1 = NULL;
    Py_ssize_t CThostFtdcInputQuoteField_reserve1_length = 0;

    /// 报价引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcInputQuoteField_QuoteRef = NULL;
    Py_ssize_t CThostFtdcInputQuoteField_QuoteRef_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcInputQuoteField_UserID = NULL;
    Py_ssize_t CThostFtdcInputQuoteField_UserID_length = 0;

    /// 卖价格
    /// typedef double TThostFtdcPriceType
    double CThostFtdcInputQuoteField_AskPrice = 0.0;

    /// 买价格
    /// typedef double TThostFtdcPriceType
    double CThostFtdcInputQuoteField_BidPrice = 0.0;

    /// 卖数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcInputQuoteField_AskVolume = 0;

    /// 买数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcInputQuoteField_BidVolume = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcInputQuoteField_RequestID = 0;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    char *CThostFtdcInputQuoteField_BusinessUnit = NULL;
    Py_ssize_t CThostFtdcInputQuoteField_BusinessUnit_length = 0;

    /// 卖开平标志
    /// typedef char TThostFtdcOffsetFlagType
    char CThostFtdcInputQuoteField_AskOffsetFlag = 0;

    /// 买开平标志
    /// typedef char TThostFtdcOffsetFlagType
    char CThostFtdcInputQuoteField_BidOffsetFlag = 0;

    /// 卖投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcInputQuoteField_AskHedgeFlag = 0;

    /// 买投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcInputQuoteField_BidHedgeFlag = 0;

    /// 衍生卖报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcInputQuoteField_AskOrderRef = NULL;
    Py_ssize_t CThostFtdcInputQuoteField_AskOrderRef_length = 0;

    /// 衍生买报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcInputQuoteField_BidOrderRef = NULL;
    Py_ssize_t CThostFtdcInputQuoteField_BidOrderRef_length = 0;

    /// 应价编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcInputQuoteField_ForQuoteSysID = NULL;
    Py_ssize_t CThostFtdcInputQuoteField_ForQuoteSysID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcInputQuoteField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcInputQuoteField_ExchangeID_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcInputQuoteField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcInputQuoteField_InvestUnitID_length = 0;

    /// 交易编码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcInputQuoteField_ClientID = NULL;
    Py_ssize_t CThostFtdcInputQuoteField_ClientID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcInputQuoteField_reserve2 = NULL;
    Py_ssize_t CThostFtdcInputQuoteField_reserve2_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcInputQuoteField_MacAddress = NULL;
    Py_ssize_t CThostFtdcInputQuoteField_MacAddress_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcInputQuoteField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcInputQuoteField_InstrumentID_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcInputQuoteField_IPAddress = NULL;
    Py_ssize_t CThostFtdcInputQuoteField_IPAddress_length = 0;

    /// 被顶单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcInputQuoteField_ReplaceSysID = NULL;
    Py_ssize_t CThostFtdcInputQuoteField_ReplaceSysID_length = 0;

    /// 有效期类型
    /// typedef char TThostFtdcTimeConditionType
    char CThostFtdcInputQuoteField_TimeCondition = 0;

    /// 报单回显字段
    /// typedef char TThostFtdcOrderMemoType[13]
    char *CThostFtdcInputQuoteField_OrderMemo = NULL;
    Py_ssize_t CThostFtdcInputQuoteField_OrderMemo_length = 0;

    /// session上请求计数 api自动维护
    /// typedef int TThostFtdcSequenceNo12Type
    int CThostFtdcInputQuoteField_SessionReqSeq = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ddiiiy#ccccy#y#y#y#y#y#y#y#y#y#y#cy#i", (char **)kwlist
        , &CThostFtdcInputQuoteField_BrokerID, &CThostFtdcInputQuoteField_BrokerID_length
        , &CThostFtdcInputQuoteField_InvestorID, &CThostFtdcInputQuoteField_InvestorID_length
        , &CThostFtdcInputQuoteField_reserve1, &CThostFtdcInputQuoteField_reserve1_length
        , &CThostFtdcInputQuoteField_QuoteRef, &CThostFtdcInputQuoteField_QuoteRef_length
        , &CThostFtdcInputQuoteField_UserID, &CThostFtdcInputQuoteField_UserID_length
        , &CThostFtdcInputQuoteField_AskPrice
        , &CThostFtdcInputQuoteField_BidPrice
        , &CThostFtdcInputQuoteField_AskVolume
        , &CThostFtdcInputQuoteField_BidVolume
        , &CThostFtdcInputQuoteField_RequestID
        , &CThostFtdcInputQuoteField_BusinessUnit, &CThostFtdcInputQuoteField_BusinessUnit_length
        , &CThostFtdcInputQuoteField_AskOffsetFlag
        , &CThostFtdcInputQuoteField_BidOffsetFlag
        , &CThostFtdcInputQuoteField_AskHedgeFlag
        , &CThostFtdcInputQuoteField_BidHedgeFlag
        , &CThostFtdcInputQuoteField_AskOrderRef, &CThostFtdcInputQuoteField_AskOrderRef_length
        , &CThostFtdcInputQuoteField_BidOrderRef, &CThostFtdcInputQuoteField_BidOrderRef_length
        , &CThostFtdcInputQuoteField_ForQuoteSysID, &CThostFtdcInputQuoteField_ForQuoteSysID_length
        , &CThostFtdcInputQuoteField_ExchangeID, &CThostFtdcInputQuoteField_ExchangeID_length
        , &CThostFtdcInputQuoteField_InvestUnitID, &CThostFtdcInputQuoteField_InvestUnitID_length
        , &CThostFtdcInputQuoteField_ClientID, &CThostFtdcInputQuoteField_ClientID_length
        , &CThostFtdcInputQuoteField_reserve2, &CThostFtdcInputQuoteField_reserve2_length
        , &CThostFtdcInputQuoteField_MacAddress, &CThostFtdcInputQuoteField_MacAddress_length
        , &CThostFtdcInputQuoteField_InstrumentID, &CThostFtdcInputQuoteField_InstrumentID_length
        , &CThostFtdcInputQuoteField_IPAddress, &CThostFtdcInputQuoteField_IPAddress_length
        , &CThostFtdcInputQuoteField_ReplaceSysID, &CThostFtdcInputQuoteField_ReplaceSysID_length
        , &CThostFtdcInputQuoteField_TimeCondition
        , &CThostFtdcInputQuoteField_OrderMemo, &CThostFtdcInputQuoteField_OrderMemo_length
        , &CThostFtdcInputQuoteField_SessionReqSeq
    )) {
        return -1;
    }

    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInputQuoteField_BrokerID != NULL ) {
        if(CThostFtdcInputQuoteField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInputQuoteField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInputQuoteField_BrokerID, CThostFtdcInputQuoteField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInputQuoteField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInputQuoteField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInputQuoteField_InvestorID != NULL ) {
        if(CThostFtdcInputQuoteField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInputQuoteField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInputQuoteField_InvestorID, CThostFtdcInputQuoteField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInputQuoteField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInputQuoteField_InvestorID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcInputQuoteField_reserve1 != NULL ) {
        if(CThostFtdcInputQuoteField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcInputQuoteField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcInputQuoteField_reserve1, CThostFtdcInputQuoteField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcInputQuoteField_reserve1, sizeof(data->reserve1));
        CThostFtdcInputQuoteField_reserve1 = NULL;
    }

    /// 报价引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcInputQuoteField_QuoteRef != NULL ) {
        if(CThostFtdcInputQuoteField_QuoteRef_length >= (Py_ssize_t)sizeof(data->QuoteRef)) {
            PyErr_Format(PyExc_ValueError, "QuoteRef too long: length=%zd (max allowed is 12)", CThostFtdcInputQuoteField_QuoteRef_length);
            return -1;
        }
        // memset(data->QuoteRef, 0, sizeof(data->QuoteRef));
        // memcpy(data->QuoteRef, CThostFtdcInputQuoteField_QuoteRef, CThostFtdcInputQuoteField_QuoteRef_length);
        strncpy(data->QuoteRef, CThostFtdcInputQuoteField_QuoteRef, sizeof(data->QuoteRef));
        CThostFtdcInputQuoteField_QuoteRef = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcInputQuoteField_UserID != NULL ) {
        if(CThostFtdcInputQuoteField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcInputQuoteField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcInputQuoteField_UserID, CThostFtdcInputQuoteField_UserID_length);
        strncpy(data->UserID, CThostFtdcInputQuoteField_UserID, sizeof(data->UserID));
        CThostFtdcInputQuoteField_UserID = NULL;
    }

    /// 卖价格
    /// typedef double TThostFtdcPriceType
    data->AskPrice = CThostFtdcInputQuoteField_AskPrice;

    /// 买价格
    /// typedef double TThostFtdcPriceType
    data->BidPrice = CThostFtdcInputQuoteField_BidPrice;

    /// 卖数量
    /// typedef int TThostFtdcVolumeType
    data->AskVolume = CThostFtdcInputQuoteField_AskVolume;

    /// 买数量
    /// typedef int TThostFtdcVolumeType
    data->BidVolume = CThostFtdcInputQuoteField_BidVolume;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcInputQuoteField_RequestID;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    if( CThostFtdcInputQuoteField_BusinessUnit != NULL ) {
        if(CThostFtdcInputQuoteField_BusinessUnit_length >= (Py_ssize_t)sizeof(data->BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is 20)", CThostFtdcInputQuoteField_BusinessUnit_length);
            return -1;
        }
        // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
        // memcpy(data->BusinessUnit, CThostFtdcInputQuoteField_BusinessUnit, CThostFtdcInputQuoteField_BusinessUnit_length);
        strncpy(data->BusinessUnit, CThostFtdcInputQuoteField_BusinessUnit, sizeof(data->BusinessUnit));
        CThostFtdcInputQuoteField_BusinessUnit = NULL;
    }

    /// 卖开平标志
    /// typedef char TThostFtdcOffsetFlagType
    data->AskOffsetFlag = CThostFtdcInputQuoteField_AskOffsetFlag;

    /// 买开平标志
    /// typedef char TThostFtdcOffsetFlagType
    data->BidOffsetFlag = CThostFtdcInputQuoteField_BidOffsetFlag;

    /// 卖投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->AskHedgeFlag = CThostFtdcInputQuoteField_AskHedgeFlag;

    /// 买投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->BidHedgeFlag = CThostFtdcInputQuoteField_BidHedgeFlag;

    /// 衍生卖报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcInputQuoteField_AskOrderRef != NULL ) {
        if(CThostFtdcInputQuoteField_AskOrderRef_length >= (Py_ssize_t)sizeof(data->AskOrderRef)) {
            PyErr_Format(PyExc_ValueError, "AskOrderRef too long: length=%zd (max allowed is 12)", CThostFtdcInputQuoteField_AskOrderRef_length);
            return -1;
        }
        // memset(data->AskOrderRef, 0, sizeof(data->AskOrderRef));
        // memcpy(data->AskOrderRef, CThostFtdcInputQuoteField_AskOrderRef, CThostFtdcInputQuoteField_AskOrderRef_length);
        strncpy(data->AskOrderRef, CThostFtdcInputQuoteField_AskOrderRef, sizeof(data->AskOrderRef));
        CThostFtdcInputQuoteField_AskOrderRef = NULL;
    }

    /// 衍生买报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcInputQuoteField_BidOrderRef != NULL ) {
        if(CThostFtdcInputQuoteField_BidOrderRef_length >= (Py_ssize_t)sizeof(data->BidOrderRef)) {
            PyErr_Format(PyExc_ValueError, "BidOrderRef too long: length=%zd (max allowed is 12)", CThostFtdcInputQuoteField_BidOrderRef_length);
            return -1;
        }
        // memset(data->BidOrderRef, 0, sizeof(data->BidOrderRef));
        // memcpy(data->BidOrderRef, CThostFtdcInputQuoteField_BidOrderRef, CThostFtdcInputQuoteField_BidOrderRef_length);
        strncpy(data->BidOrderRef, CThostFtdcInputQuoteField_BidOrderRef, sizeof(data->BidOrderRef));
        CThostFtdcInputQuoteField_BidOrderRef = NULL;
    }

    /// 应价编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcInputQuoteField_ForQuoteSysID != NULL ) {
        if(CThostFtdcInputQuoteField_ForQuoteSysID_length >= (Py_ssize_t)sizeof(data->ForQuoteSysID)) {
            PyErr_Format(PyExc_ValueError, "ForQuoteSysID too long: length=%zd (max allowed is 20)", CThostFtdcInputQuoteField_ForQuoteSysID_length);
            return -1;
        }
        // memset(data->ForQuoteSysID, 0, sizeof(data->ForQuoteSysID));
        // memcpy(data->ForQuoteSysID, CThostFtdcInputQuoteField_ForQuoteSysID, CThostFtdcInputQuoteField_ForQuoteSysID_length);
        strncpy(data->ForQuoteSysID, CThostFtdcInputQuoteField_ForQuoteSysID, sizeof(data->ForQuoteSysID));
        CThostFtdcInputQuoteField_ForQuoteSysID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcInputQuoteField_ExchangeID != NULL ) {
        if(CThostFtdcInputQuoteField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcInputQuoteField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcInputQuoteField_ExchangeID, CThostFtdcInputQuoteField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcInputQuoteField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcInputQuoteField_ExchangeID = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcInputQuoteField_InvestUnitID != NULL ) {
        if(CThostFtdcInputQuoteField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcInputQuoteField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcInputQuoteField_InvestUnitID, CThostFtdcInputQuoteField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcInputQuoteField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcInputQuoteField_InvestUnitID = NULL;
    }

    /// 交易编码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcInputQuoteField_ClientID != NULL ) {
        if(CThostFtdcInputQuoteField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcInputQuoteField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcInputQuoteField_ClientID, CThostFtdcInputQuoteField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcInputQuoteField_ClientID, sizeof(data->ClientID));
        CThostFtdcInputQuoteField_ClientID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcInputQuoteField_reserve2 != NULL ) {
        if(CThostFtdcInputQuoteField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 15)", CThostFtdcInputQuoteField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcInputQuoteField_reserve2, CThostFtdcInputQuoteField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcInputQuoteField_reserve2, sizeof(data->reserve2));
        CThostFtdcInputQuoteField_reserve2 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcInputQuoteField_MacAddress != NULL ) {
        if(CThostFtdcInputQuoteField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcInputQuoteField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcInputQuoteField_MacAddress, CThostFtdcInputQuoteField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcInputQuoteField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcInputQuoteField_MacAddress = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcInputQuoteField_InstrumentID != NULL ) {
        if(CThostFtdcInputQuoteField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcInputQuoteField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcInputQuoteField_InstrumentID, CThostFtdcInputQuoteField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcInputQuoteField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcInputQuoteField_InstrumentID = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcInputQuoteField_IPAddress != NULL ) {
        if(CThostFtdcInputQuoteField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcInputQuoteField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcInputQuoteField_IPAddress, CThostFtdcInputQuoteField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcInputQuoteField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcInputQuoteField_IPAddress = NULL;
    }

    /// 被顶单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcInputQuoteField_ReplaceSysID != NULL ) {
        if(CThostFtdcInputQuoteField_ReplaceSysID_length >= (Py_ssize_t)sizeof(data->ReplaceSysID)) {
            PyErr_Format(PyExc_ValueError, "ReplaceSysID too long: length=%zd (max allowed is 20)", CThostFtdcInputQuoteField_ReplaceSysID_length);
            return -1;
        }
        // memset(data->ReplaceSysID, 0, sizeof(data->ReplaceSysID));
        // memcpy(data->ReplaceSysID, CThostFtdcInputQuoteField_ReplaceSysID, CThostFtdcInputQuoteField_ReplaceSysID_length);
        strncpy(data->ReplaceSysID, CThostFtdcInputQuoteField_ReplaceSysID, sizeof(data->ReplaceSysID));
        CThostFtdcInputQuoteField_ReplaceSysID = NULL;
    }

    /// 有效期类型
    /// typedef char TThostFtdcTimeConditionType
    data->TimeCondition = CThostFtdcInputQuoteField_TimeCondition;

    /// 报单回显字段
    /// typedef char TThostFtdcOrderMemoType[13]
    if( CThostFtdcInputQuoteField_OrderMemo != NULL ) {
        if(CThostFtdcInputQuoteField_OrderMemo_length >= (Py_ssize_t)sizeof(data->OrderMemo)) {
            PyErr_Format(PyExc_ValueError, "OrderMemo too long: length=%zd (max allowed is 12)", CThostFtdcInputQuoteField_OrderMemo_length);
            return -1;
        }
        // memset(data->OrderMemo, 0, sizeof(data->OrderMemo));
        // memcpy(data->OrderMemo, CThostFtdcInputQuoteField_OrderMemo, CThostFtdcInputQuoteField_OrderMemo_length);
        strncpy(data->OrderMemo, CThostFtdcInputQuoteField_OrderMemo, sizeof(data->OrderMemo));
        CThostFtdcInputQuoteField_OrderMemo = NULL;
    }

    /// session上请求计数 api自动维护
    /// typedef int TThostFtdcSequenceNo12Type
    data->SessionReqSeq = CThostFtdcInputQuoteField_SessionReqSeq;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInputQuoteFieldType_repr(PyObject *self) {

    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:d,s:d,s:i,s:i,s:i,s:y,s:c,s:c,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:i}"
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
        , "AskOrderRef", data->AskOrderRef//, (Py_ssize_t)sizeof(data->AskOrderRef)
        , "BidOrderRef", data->BidOrderRef//, (Py_ssize_t)sizeof(data->BidOrderRef)
        , "ForQuoteSysID", data->ForQuoteSysID//, (Py_ssize_t)sizeof(data->ForQuoteSysID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "ClientID", data->ClientID//, (Py_ssize_t)sizeof(data->ClientID)
        , "reserve2", data->reserve2//, (Py_ssize_t)sizeof(data->reserve2)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
        , "ReplaceSysID", data->ReplaceSysID//, (Py_ssize_t)sizeof(data->ReplaceSysID)
        , "TimeCondition", data->TimeCondition
        , "OrderMemo", data->OrderMemo//, (Py_ssize_t)sizeof(data->OrderMemo)
        , "SessionReqSeq", data->SessionReqSeq
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputQuoteField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputQuoteField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInputQuoteFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInputQuoteFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputQuoteField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInputQuoteFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInputQuoteFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputQuoteField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcInputQuoteFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcInputQuoteFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputQuoteField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报价引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcInputQuoteFieldType_get_QuoteRef(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->QuoteRef, (Py_ssize_t)sizeof(data->QuoteRef));
    return PyBytes_FromString(data->QuoteRef);
}

static int PyCThostFtdcInputQuoteFieldType_set_QuoteRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "QuoteRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputQuoteField::QuoteRef)) {
        PyErr_SetString(PyExc_ValueError, "QuoteRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    // memset(data->QuoteRef, 0, sizeof(data->QuoteRef));
    // memcpy(data->QuoteRef, buf, len);
    strncpy(data->QuoteRef, buf, sizeof(data->QuoteRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcInputQuoteFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcInputQuoteFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputQuoteField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 业务单元
/// typedef char TThostFtdcBusinessUnitType[21]
static PyObject *PyCThostFtdcInputQuoteFieldType_get_BusinessUnit(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BusinessUnit, (Py_ssize_t)sizeof(data->BusinessUnit));
    return PyBytes_FromString(data->BusinessUnit);
}

static int PyCThostFtdcInputQuoteFieldType_set_BusinessUnit(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BusinessUnit Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputQuoteField::BusinessUnit)) {
        PyErr_SetString(PyExc_ValueError, "BusinessUnit must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
    // memcpy(data->BusinessUnit, buf, len);
    strncpy(data->BusinessUnit, buf, sizeof(data->BusinessUnit));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 卖开平标志
/// typedef char TThostFtdcOffsetFlagType
static PyObject *PyCThostFtdcInputQuoteFieldType_get_AskOffsetFlag(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->AskOffsetFlag), 1);
}

static int PyCThostFtdcInputQuoteFieldType_set_AskOffsetFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AskOffsetFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInputQuoteField::AskOffsetFlag)) {
        PyErr_SetString(PyExc_ValueError, "AskOffsetFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    data->AskOffsetFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 买开平标志
/// typedef char TThostFtdcOffsetFlagType
static PyObject *PyCThostFtdcInputQuoteFieldType_get_BidOffsetFlag(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BidOffsetFlag), 1);
}

static int PyCThostFtdcInputQuoteFieldType_set_BidOffsetFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BidOffsetFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInputQuoteField::BidOffsetFlag)) {
        PyErr_SetString(PyExc_ValueError, "BidOffsetFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    data->BidOffsetFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 卖投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcInputQuoteFieldType_get_AskHedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->AskHedgeFlag), 1);
}

static int PyCThostFtdcInputQuoteFieldType_set_AskHedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AskHedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInputQuoteField::AskHedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "AskHedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    data->AskHedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 买投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcInputQuoteFieldType_get_BidHedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BidHedgeFlag), 1);
}

static int PyCThostFtdcInputQuoteFieldType_set_BidHedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BidHedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInputQuoteField::BidHedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "BidHedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    data->BidHedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 衍生卖报单引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcInputQuoteFieldType_get_AskOrderRef(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AskOrderRef, (Py_ssize_t)sizeof(data->AskOrderRef));
    return PyBytes_FromString(data->AskOrderRef);
}

static int PyCThostFtdcInputQuoteFieldType_set_AskOrderRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AskOrderRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputQuoteField::AskOrderRef)) {
        PyErr_SetString(PyExc_ValueError, "AskOrderRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    // memset(data->AskOrderRef, 0, sizeof(data->AskOrderRef));
    // memcpy(data->AskOrderRef, buf, len);
    strncpy(data->AskOrderRef, buf, sizeof(data->AskOrderRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 衍生买报单引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcInputQuoteFieldType_get_BidOrderRef(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BidOrderRef, (Py_ssize_t)sizeof(data->BidOrderRef));
    return PyBytes_FromString(data->BidOrderRef);
}

static int PyCThostFtdcInputQuoteFieldType_set_BidOrderRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BidOrderRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputQuoteField::BidOrderRef)) {
        PyErr_SetString(PyExc_ValueError, "BidOrderRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    // memset(data->BidOrderRef, 0, sizeof(data->BidOrderRef));
    // memcpy(data->BidOrderRef, buf, len);
    strncpy(data->BidOrderRef, buf, sizeof(data->BidOrderRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 应价编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcInputQuoteFieldType_get_ForQuoteSysID(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ForQuoteSysID, (Py_ssize_t)sizeof(data->ForQuoteSysID));
    return PyBytes_FromString(data->ForQuoteSysID);
}

static int PyCThostFtdcInputQuoteFieldType_set_ForQuoteSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ForQuoteSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputQuoteField::ForQuoteSysID)) {
        PyErr_SetString(PyExc_ValueError, "ForQuoteSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    // memset(data->ForQuoteSysID, 0, sizeof(data->ForQuoteSysID));
    // memcpy(data->ForQuoteSysID, buf, len);
    strncpy(data->ForQuoteSysID, buf, sizeof(data->ForQuoteSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcInputQuoteFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcInputQuoteFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputQuoteField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcInputQuoteFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcInputQuoteFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputQuoteField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易编码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcInputQuoteFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcInputQuoteFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputQuoteField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcInputQuoteFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcInputQuoteFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputQuoteField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcInputQuoteFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcInputQuoteFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputQuoteField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcInputQuoteFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcInputQuoteFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputQuoteField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcInputQuoteFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcInputQuoteFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputQuoteField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 被顶单编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcInputQuoteFieldType_get_ReplaceSysID(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ReplaceSysID, (Py_ssize_t)sizeof(data->ReplaceSysID));
    return PyBytes_FromString(data->ReplaceSysID);
}

static int PyCThostFtdcInputQuoteFieldType_set_ReplaceSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ReplaceSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputQuoteField::ReplaceSysID)) {
        PyErr_SetString(PyExc_ValueError, "ReplaceSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    // memset(data->ReplaceSysID, 0, sizeof(data->ReplaceSysID));
    // memcpy(data->ReplaceSysID, buf, len);
    strncpy(data->ReplaceSysID, buf, sizeof(data->ReplaceSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 有效期类型
/// typedef char TThostFtdcTimeConditionType
static PyObject *PyCThostFtdcInputQuoteFieldType_get_TimeCondition(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->TimeCondition), 1);
}

static int PyCThostFtdcInputQuoteFieldType_set_TimeCondition(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TimeCondition Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInputQuoteField::TimeCondition)) {
        PyErr_SetString(PyExc_ValueError, "TimeCondition must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    data->TimeCondition = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单回显字段
/// typedef char TThostFtdcOrderMemoType[13]
static PyObject *PyCThostFtdcInputQuoteFieldType_get_OrderMemo(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderMemo, (Py_ssize_t)sizeof(data->OrderMemo));
    return PyBytes_FromString(data->OrderMemo);
}

static int PyCThostFtdcInputQuoteFieldType_set_OrderMemo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderMemo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputQuoteField::OrderMemo)) {
        PyErr_SetString(PyExc_ValueError, "OrderMemo must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(self);
    CThostFtdcInputQuoteField *data = &(extra->data);
    // memset(data->OrderMemo, 0, sizeof(data->OrderMemo));
    // memcpy(data->OrderMemo, buf, len);
    strncpy(data->OrderMemo, buf, sizeof(data->OrderMemo));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInputQuoteFieldType_members[] = {
    /// 卖价格
    /// typedef double TThostFtdcPriceType
    {
        .name = "AskPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInputQuoteFieldData, data.AskPrice),
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
        .offset = offsetof(PyCThostFtdcInputQuoteFieldData, data.BidPrice),
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
        .offset = offsetof(PyCThostFtdcInputQuoteFieldData, data.AskVolume),
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
        .offset = offsetof(PyCThostFtdcInputQuoteFieldData, data.BidVolume),
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
        .offset = offsetof(PyCThostFtdcInputQuoteFieldData, data.RequestID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("请求编号")
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
        .offset = offsetof(PyCThostFtdcInputQuoteFieldData, data.SessionReqSeq),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("session上请求计数 api自动维护")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInputQuoteFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInputQuoteFieldType_get_BrokerID,
    .set = PyCThostFtdcInputQuoteFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInputQuoteFieldType_get_InvestorID,
    .set = PyCThostFtdcInputQuoteFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcInputQuoteFieldType_get_reserve1,
    .set = PyCThostFtdcInputQuoteFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 报价引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "QuoteRef",
    .get = PyCThostFtdcInputQuoteFieldType_get_QuoteRef,
    .set = PyCThostFtdcInputQuoteFieldType_set_QuoteRef,
    .doc = PyDoc_STR("报价引用"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcInputQuoteFieldType_get_UserID,
    .set = PyCThostFtdcInputQuoteFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    {
    .name = "BusinessUnit",
    .get = PyCThostFtdcInputQuoteFieldType_get_BusinessUnit,
    .set = PyCThostFtdcInputQuoteFieldType_set_BusinessUnit,
    .doc = PyDoc_STR("业务单元"),
    },
    /// 卖开平标志
    /// typedef char TThostFtdcOffsetFlagType
    {
    .name = "AskOffsetFlag",
    .get = PyCThostFtdcInputQuoteFieldType_get_AskOffsetFlag,
    .set = PyCThostFtdcInputQuoteFieldType_set_AskOffsetFlag,
    .doc = PyDoc_STR("卖开平标志"),
    },
    /// 买开平标志
    /// typedef char TThostFtdcOffsetFlagType
    {
    .name = "BidOffsetFlag",
    .get = PyCThostFtdcInputQuoteFieldType_get_BidOffsetFlag,
    .set = PyCThostFtdcInputQuoteFieldType_set_BidOffsetFlag,
    .doc = PyDoc_STR("买开平标志"),
    },
    /// 卖投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "AskHedgeFlag",
    .get = PyCThostFtdcInputQuoteFieldType_get_AskHedgeFlag,
    .set = PyCThostFtdcInputQuoteFieldType_set_AskHedgeFlag,
    .doc = PyDoc_STR("卖投机套保标志"),
    },
    /// 买投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "BidHedgeFlag",
    .get = PyCThostFtdcInputQuoteFieldType_get_BidHedgeFlag,
    .set = PyCThostFtdcInputQuoteFieldType_set_BidHedgeFlag,
    .doc = PyDoc_STR("买投机套保标志"),
    },
    /// 衍生卖报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "AskOrderRef",
    .get = PyCThostFtdcInputQuoteFieldType_get_AskOrderRef,
    .set = PyCThostFtdcInputQuoteFieldType_set_AskOrderRef,
    .doc = PyDoc_STR("衍生卖报单引用"),
    },
    /// 衍生买报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "BidOrderRef",
    .get = PyCThostFtdcInputQuoteFieldType_get_BidOrderRef,
    .set = PyCThostFtdcInputQuoteFieldType_set_BidOrderRef,
    .doc = PyDoc_STR("衍生买报单引用"),
    },
    /// 应价编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "ForQuoteSysID",
    .get = PyCThostFtdcInputQuoteFieldType_get_ForQuoteSysID,
    .set = PyCThostFtdcInputQuoteFieldType_set_ForQuoteSysID,
    .doc = PyDoc_STR("应价编号"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcInputQuoteFieldType_get_ExchangeID,
    .set = PyCThostFtdcInputQuoteFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcInputQuoteFieldType_get_InvestUnitID,
    .set = PyCThostFtdcInputQuoteFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 交易编码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcInputQuoteFieldType_get_ClientID,
    .set = PyCThostFtdcInputQuoteFieldType_set_ClientID,
    .doc = PyDoc_STR("交易编码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve2",
    .get = PyCThostFtdcInputQuoteFieldType_get_reserve2,
    .set = PyCThostFtdcInputQuoteFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcInputQuoteFieldType_get_MacAddress,
    .set = PyCThostFtdcInputQuoteFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcInputQuoteFieldType_get_InstrumentID,
    .set = PyCThostFtdcInputQuoteFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcInputQuoteFieldType_get_IPAddress,
    .set = PyCThostFtdcInputQuoteFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    /// 被顶单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "ReplaceSysID",
    .get = PyCThostFtdcInputQuoteFieldType_get_ReplaceSysID,
    .set = PyCThostFtdcInputQuoteFieldType_set_ReplaceSysID,
    .doc = PyDoc_STR("被顶单编号"),
    },
    /// 有效期类型
    /// typedef char TThostFtdcTimeConditionType
    {
    .name = "TimeCondition",
    .get = PyCThostFtdcInputQuoteFieldType_get_TimeCondition,
    .set = PyCThostFtdcInputQuoteFieldType_set_TimeCondition,
    .doc = PyDoc_STR("有效期类型"),
    },
    /// 报单回显字段
    /// typedef char TThostFtdcOrderMemoType[13]
    {
    .name = "OrderMemo",
    .get = PyCThostFtdcInputQuoteFieldType_get_OrderMemo,
    .set = PyCThostFtdcInputQuoteFieldType_set_OrderMemo,
    .doc = PyDoc_STR("报单回显字段"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInputQuoteFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInputQuoteField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("输入的报价")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInputQuoteFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInputQuoteFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInputQuoteFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInputQuoteFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInputQuoteFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInputQuoteFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("输入的报价")},
    {Py_tp_members, PyCThostFtdcInputQuoteFieldType_members},
    {Py_tp_getset, PyCThostFtdcInputQuoteFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInputQuoteFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInputQuoteFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInputQuoteFieldType_spec = {
    .name = "PyCTP.CThostFtdcInputQuoteField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInputQuoteFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInputQuoteFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInputQuoteFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInputQuoteFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInputQuoteFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInputQuoteFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInputQuoteFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInputQuoteFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInputQuoteField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputQuoteField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}