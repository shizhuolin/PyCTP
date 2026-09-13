
#include "PyCThostFtdcOffsetSettingField.h"

///对冲设置

static int PyCThostFtdcOffsetSettingFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "InstrumentID", "UnderlyingInstrID", "ProductID", "OffsetType", "Volume", "IsOffset", "RequestID", "UserID", "ExchangeID", "IPAddress", "MacAddress", "ExchangeInstID", "ExchangeSerialNo", "ExchangeProductID", "ParticipantID", "ClientID", "TraderID", "InstallID", "OrderSubmitStatus", "TradingDay", "SettlementID", "InsertDate", "InsertTime", "CancelTime", "ExecResult", "SequenceNo", "FrontID", "SessionID", "StatusMsg", "ActiveUserID", "BrokerOffsetSettingSeq", "ApplySrc", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcOffsetSettingField_BrokerID = NULL;
    Py_ssize_t CThostFtdcOffsetSettingField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcOffsetSettingField_InvestorID = NULL;
    Py_ssize_t CThostFtdcOffsetSettingField_InvestorID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcOffsetSettingField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcOffsetSettingField_InstrumentID_length = 0;

    /// 标的期货合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcOffsetSettingField_UnderlyingInstrID = NULL;
    Py_ssize_t CThostFtdcOffsetSettingField_UnderlyingInstrID_length = 0;

    /// 产品代码
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcOffsetSettingField_ProductID = NULL;
    Py_ssize_t CThostFtdcOffsetSettingField_ProductID_length = 0;

    /// 对冲类型
    /// typedef char TThostFtdcOffsetTypeType
    char CThostFtdcOffsetSettingField_OffsetType = 0;

    /// 申请对冲的合约数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcOffsetSettingField_Volume = 0;

    /// 是否对冲
    /// typedef int TThostFtdcBoolType
    int CThostFtdcOffsetSettingField_IsOffset = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcOffsetSettingField_RequestID = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcOffsetSettingField_UserID = NULL;
    Py_ssize_t CThostFtdcOffsetSettingField_UserID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcOffsetSettingField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcOffsetSettingField_ExchangeID_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcOffsetSettingField_IPAddress = NULL;
    Py_ssize_t CThostFtdcOffsetSettingField_IPAddress_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcOffsetSettingField_MacAddress = NULL;
    Py_ssize_t CThostFtdcOffsetSettingField_MacAddress_length = 0;

    /// 交易所合约代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcOffsetSettingField_ExchangeInstID = NULL;
    Py_ssize_t CThostFtdcOffsetSettingField_ExchangeInstID_length = 0;

    /// 交易所期权系列号
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcOffsetSettingField_ExchangeSerialNo = NULL;
    Py_ssize_t CThostFtdcOffsetSettingField_ExchangeSerialNo_length = 0;

    /// 交易所产品代码
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcOffsetSettingField_ExchangeProductID = NULL;
    Py_ssize_t CThostFtdcOffsetSettingField_ExchangeProductID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcOffsetSettingField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcOffsetSettingField_ParticipantID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcOffsetSettingField_ClientID = NULL;
    Py_ssize_t CThostFtdcOffsetSettingField_ClientID_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcOffsetSettingField_TraderID = NULL;
    Py_ssize_t CThostFtdcOffsetSettingField_TraderID_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcOffsetSettingField_InstallID = 0;

    /// 对冲提交状态
    /// typedef char TThostFtdcOrderSubmitStatusType
    char CThostFtdcOffsetSettingField_OrderSubmitStatus = 0;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcOffsetSettingField_TradingDay = NULL;
    Py_ssize_t CThostFtdcOffsetSettingField_TradingDay_length = 0;

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    int CThostFtdcOffsetSettingField_SettlementID = 0;

    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcOffsetSettingField_InsertDate = NULL;
    Py_ssize_t CThostFtdcOffsetSettingField_InsertDate_length = 0;

    /// 插入时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcOffsetSettingField_InsertTime = NULL;
    Py_ssize_t CThostFtdcOffsetSettingField_InsertTime_length = 0;

    /// 撤销时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcOffsetSettingField_CancelTime = NULL;
    Py_ssize_t CThostFtdcOffsetSettingField_CancelTime_length = 0;

    /// 对冲设置结果
    /// typedef char TThostFtdcExecResultType
    char CThostFtdcOffsetSettingField_ExecResult = 0;

    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcOffsetSettingField_SequenceNo = 0;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    int CThostFtdcOffsetSettingField_FrontID = 0;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcOffsetSettingField_SessionID = 0;

    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcOffsetSettingField_StatusMsg = NULL;
    Py_ssize_t CThostFtdcOffsetSettingField_StatusMsg_length = 0;

    /// 操作用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcOffsetSettingField_ActiveUserID = NULL;
    Py_ssize_t CThostFtdcOffsetSettingField_ActiveUserID_length = 0;

    /// 经纪公司报单编号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcOffsetSettingField_BrokerOffsetSettingSeq = 0;

    /// 申请来源
    /// typedef char TThostFtdcApplySrcType
    char CThostFtdcOffsetSettingField_ApplySrc = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ciiiy#y#y#y#y#y#y#y#y#y#icy#iy#y#y#ciiiy#y#ic", (char **)kwlist
        , &CThostFtdcOffsetSettingField_BrokerID, &CThostFtdcOffsetSettingField_BrokerID_length
        , &CThostFtdcOffsetSettingField_InvestorID, &CThostFtdcOffsetSettingField_InvestorID_length
        , &CThostFtdcOffsetSettingField_InstrumentID, &CThostFtdcOffsetSettingField_InstrumentID_length
        , &CThostFtdcOffsetSettingField_UnderlyingInstrID, &CThostFtdcOffsetSettingField_UnderlyingInstrID_length
        , &CThostFtdcOffsetSettingField_ProductID, &CThostFtdcOffsetSettingField_ProductID_length
        , &CThostFtdcOffsetSettingField_OffsetType
        , &CThostFtdcOffsetSettingField_Volume
        , &CThostFtdcOffsetSettingField_IsOffset
        , &CThostFtdcOffsetSettingField_RequestID
        , &CThostFtdcOffsetSettingField_UserID, &CThostFtdcOffsetSettingField_UserID_length
        , &CThostFtdcOffsetSettingField_ExchangeID, &CThostFtdcOffsetSettingField_ExchangeID_length
        , &CThostFtdcOffsetSettingField_IPAddress, &CThostFtdcOffsetSettingField_IPAddress_length
        , &CThostFtdcOffsetSettingField_MacAddress, &CThostFtdcOffsetSettingField_MacAddress_length
        , &CThostFtdcOffsetSettingField_ExchangeInstID, &CThostFtdcOffsetSettingField_ExchangeInstID_length
        , &CThostFtdcOffsetSettingField_ExchangeSerialNo, &CThostFtdcOffsetSettingField_ExchangeSerialNo_length
        , &CThostFtdcOffsetSettingField_ExchangeProductID, &CThostFtdcOffsetSettingField_ExchangeProductID_length
        , &CThostFtdcOffsetSettingField_ParticipantID, &CThostFtdcOffsetSettingField_ParticipantID_length
        , &CThostFtdcOffsetSettingField_ClientID, &CThostFtdcOffsetSettingField_ClientID_length
        , &CThostFtdcOffsetSettingField_TraderID, &CThostFtdcOffsetSettingField_TraderID_length
        , &CThostFtdcOffsetSettingField_InstallID
        , &CThostFtdcOffsetSettingField_OrderSubmitStatus
        , &CThostFtdcOffsetSettingField_TradingDay, &CThostFtdcOffsetSettingField_TradingDay_length
        , &CThostFtdcOffsetSettingField_SettlementID
        , &CThostFtdcOffsetSettingField_InsertDate, &CThostFtdcOffsetSettingField_InsertDate_length
        , &CThostFtdcOffsetSettingField_InsertTime, &CThostFtdcOffsetSettingField_InsertTime_length
        , &CThostFtdcOffsetSettingField_CancelTime, &CThostFtdcOffsetSettingField_CancelTime_length
        , &CThostFtdcOffsetSettingField_ExecResult
        , &CThostFtdcOffsetSettingField_SequenceNo
        , &CThostFtdcOffsetSettingField_FrontID
        , &CThostFtdcOffsetSettingField_SessionID
        , &CThostFtdcOffsetSettingField_StatusMsg, &CThostFtdcOffsetSettingField_StatusMsg_length
        , &CThostFtdcOffsetSettingField_ActiveUserID, &CThostFtdcOffsetSettingField_ActiveUserID_length
        , &CThostFtdcOffsetSettingField_BrokerOffsetSettingSeq
        , &CThostFtdcOffsetSettingField_ApplySrc
    )) {
        return -1;
    }

    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcOffsetSettingField_BrokerID != NULL ) {
        if(CThostFtdcOffsetSettingField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcOffsetSettingField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcOffsetSettingField_BrokerID, CThostFtdcOffsetSettingField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcOffsetSettingField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcOffsetSettingField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcOffsetSettingField_InvestorID != NULL ) {
        if(CThostFtdcOffsetSettingField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcOffsetSettingField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcOffsetSettingField_InvestorID, CThostFtdcOffsetSettingField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcOffsetSettingField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcOffsetSettingField_InvestorID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcOffsetSettingField_InstrumentID != NULL ) {
        if(CThostFtdcOffsetSettingField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcOffsetSettingField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcOffsetSettingField_InstrumentID, CThostFtdcOffsetSettingField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcOffsetSettingField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcOffsetSettingField_InstrumentID = NULL;
    }

    /// 标的期货合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcOffsetSettingField_UnderlyingInstrID != NULL ) {
        if(CThostFtdcOffsetSettingField_UnderlyingInstrID_length >= (Py_ssize_t)sizeof(data->UnderlyingInstrID)) {
            PyErr_Format(PyExc_ValueError, "UnderlyingInstrID too long: length=%zd (max allowed is 80)", CThostFtdcOffsetSettingField_UnderlyingInstrID_length);
            return -1;
        }
        // memset(data->UnderlyingInstrID, 0, sizeof(data->UnderlyingInstrID));
        // memcpy(data->UnderlyingInstrID, CThostFtdcOffsetSettingField_UnderlyingInstrID, CThostFtdcOffsetSettingField_UnderlyingInstrID_length);
        strncpy(data->UnderlyingInstrID, CThostFtdcOffsetSettingField_UnderlyingInstrID, sizeof(data->UnderlyingInstrID));
        CThostFtdcOffsetSettingField_UnderlyingInstrID = NULL;
    }

    /// 产品代码
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcOffsetSettingField_ProductID != NULL ) {
        if(CThostFtdcOffsetSettingField_ProductID_length >= (Py_ssize_t)sizeof(data->ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is 40)", CThostFtdcOffsetSettingField_ProductID_length);
            return -1;
        }
        // memset(data->ProductID, 0, sizeof(data->ProductID));
        // memcpy(data->ProductID, CThostFtdcOffsetSettingField_ProductID, CThostFtdcOffsetSettingField_ProductID_length);
        strncpy(data->ProductID, CThostFtdcOffsetSettingField_ProductID, sizeof(data->ProductID));
        CThostFtdcOffsetSettingField_ProductID = NULL;
    }

    /// 对冲类型
    /// typedef char TThostFtdcOffsetTypeType
    data->OffsetType = CThostFtdcOffsetSettingField_OffsetType;

    /// 申请对冲的合约数量
    /// typedef int TThostFtdcVolumeType
    data->Volume = CThostFtdcOffsetSettingField_Volume;

    /// 是否对冲
    /// typedef int TThostFtdcBoolType
    data->IsOffset = CThostFtdcOffsetSettingField_IsOffset;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcOffsetSettingField_RequestID;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcOffsetSettingField_UserID != NULL ) {
        if(CThostFtdcOffsetSettingField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcOffsetSettingField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcOffsetSettingField_UserID, CThostFtdcOffsetSettingField_UserID_length);
        strncpy(data->UserID, CThostFtdcOffsetSettingField_UserID, sizeof(data->UserID));
        CThostFtdcOffsetSettingField_UserID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcOffsetSettingField_ExchangeID != NULL ) {
        if(CThostFtdcOffsetSettingField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcOffsetSettingField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcOffsetSettingField_ExchangeID, CThostFtdcOffsetSettingField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcOffsetSettingField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcOffsetSettingField_ExchangeID = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcOffsetSettingField_IPAddress != NULL ) {
        if(CThostFtdcOffsetSettingField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcOffsetSettingField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcOffsetSettingField_IPAddress, CThostFtdcOffsetSettingField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcOffsetSettingField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcOffsetSettingField_IPAddress = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcOffsetSettingField_MacAddress != NULL ) {
        if(CThostFtdcOffsetSettingField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcOffsetSettingField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcOffsetSettingField_MacAddress, CThostFtdcOffsetSettingField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcOffsetSettingField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcOffsetSettingField_MacAddress = NULL;
    }

    /// 交易所合约代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcOffsetSettingField_ExchangeInstID != NULL ) {
        if(CThostFtdcOffsetSettingField_ExchangeInstID_length >= (Py_ssize_t)sizeof(data->ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is 80)", CThostFtdcOffsetSettingField_ExchangeInstID_length);
            return -1;
        }
        // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
        // memcpy(data->ExchangeInstID, CThostFtdcOffsetSettingField_ExchangeInstID, CThostFtdcOffsetSettingField_ExchangeInstID_length);
        strncpy(data->ExchangeInstID, CThostFtdcOffsetSettingField_ExchangeInstID, sizeof(data->ExchangeInstID));
        CThostFtdcOffsetSettingField_ExchangeInstID = NULL;
    }

    /// 交易所期权系列号
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcOffsetSettingField_ExchangeSerialNo != NULL ) {
        if(CThostFtdcOffsetSettingField_ExchangeSerialNo_length >= (Py_ssize_t)sizeof(data->ExchangeSerialNo)) {
            PyErr_Format(PyExc_ValueError, "ExchangeSerialNo too long: length=%zd (max allowed is 80)", CThostFtdcOffsetSettingField_ExchangeSerialNo_length);
            return -1;
        }
        // memset(data->ExchangeSerialNo, 0, sizeof(data->ExchangeSerialNo));
        // memcpy(data->ExchangeSerialNo, CThostFtdcOffsetSettingField_ExchangeSerialNo, CThostFtdcOffsetSettingField_ExchangeSerialNo_length);
        strncpy(data->ExchangeSerialNo, CThostFtdcOffsetSettingField_ExchangeSerialNo, sizeof(data->ExchangeSerialNo));
        CThostFtdcOffsetSettingField_ExchangeSerialNo = NULL;
    }

    /// 交易所产品代码
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcOffsetSettingField_ExchangeProductID != NULL ) {
        if(CThostFtdcOffsetSettingField_ExchangeProductID_length >= (Py_ssize_t)sizeof(data->ExchangeProductID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeProductID too long: length=%zd (max allowed is 40)", CThostFtdcOffsetSettingField_ExchangeProductID_length);
            return -1;
        }
        // memset(data->ExchangeProductID, 0, sizeof(data->ExchangeProductID));
        // memcpy(data->ExchangeProductID, CThostFtdcOffsetSettingField_ExchangeProductID, CThostFtdcOffsetSettingField_ExchangeProductID_length);
        strncpy(data->ExchangeProductID, CThostFtdcOffsetSettingField_ExchangeProductID, sizeof(data->ExchangeProductID));
        CThostFtdcOffsetSettingField_ExchangeProductID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcOffsetSettingField_ParticipantID != NULL ) {
        if(CThostFtdcOffsetSettingField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcOffsetSettingField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcOffsetSettingField_ParticipantID, CThostFtdcOffsetSettingField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcOffsetSettingField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcOffsetSettingField_ParticipantID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcOffsetSettingField_ClientID != NULL ) {
        if(CThostFtdcOffsetSettingField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcOffsetSettingField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcOffsetSettingField_ClientID, CThostFtdcOffsetSettingField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcOffsetSettingField_ClientID, sizeof(data->ClientID));
        CThostFtdcOffsetSettingField_ClientID = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcOffsetSettingField_TraderID != NULL ) {
        if(CThostFtdcOffsetSettingField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcOffsetSettingField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcOffsetSettingField_TraderID, CThostFtdcOffsetSettingField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcOffsetSettingField_TraderID, sizeof(data->TraderID));
        CThostFtdcOffsetSettingField_TraderID = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcOffsetSettingField_InstallID;

    /// 对冲提交状态
    /// typedef char TThostFtdcOrderSubmitStatusType
    data->OrderSubmitStatus = CThostFtdcOffsetSettingField_OrderSubmitStatus;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcOffsetSettingField_TradingDay != NULL ) {
        if(CThostFtdcOffsetSettingField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcOffsetSettingField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcOffsetSettingField_TradingDay, CThostFtdcOffsetSettingField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcOffsetSettingField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcOffsetSettingField_TradingDay = NULL;
    }

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    data->SettlementID = CThostFtdcOffsetSettingField_SettlementID;

    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcOffsetSettingField_InsertDate != NULL ) {
        if(CThostFtdcOffsetSettingField_InsertDate_length >= (Py_ssize_t)sizeof(data->InsertDate)) {
            PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is 8)", CThostFtdcOffsetSettingField_InsertDate_length);
            return -1;
        }
        // memset(data->InsertDate, 0, sizeof(data->InsertDate));
        // memcpy(data->InsertDate, CThostFtdcOffsetSettingField_InsertDate, CThostFtdcOffsetSettingField_InsertDate_length);
        strncpy(data->InsertDate, CThostFtdcOffsetSettingField_InsertDate, sizeof(data->InsertDate));
        CThostFtdcOffsetSettingField_InsertDate = NULL;
    }

    /// 插入时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcOffsetSettingField_InsertTime != NULL ) {
        if(CThostFtdcOffsetSettingField_InsertTime_length >= (Py_ssize_t)sizeof(data->InsertTime)) {
            PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is 8)", CThostFtdcOffsetSettingField_InsertTime_length);
            return -1;
        }
        // memset(data->InsertTime, 0, sizeof(data->InsertTime));
        // memcpy(data->InsertTime, CThostFtdcOffsetSettingField_InsertTime, CThostFtdcOffsetSettingField_InsertTime_length);
        strncpy(data->InsertTime, CThostFtdcOffsetSettingField_InsertTime, sizeof(data->InsertTime));
        CThostFtdcOffsetSettingField_InsertTime = NULL;
    }

    /// 撤销时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcOffsetSettingField_CancelTime != NULL ) {
        if(CThostFtdcOffsetSettingField_CancelTime_length >= (Py_ssize_t)sizeof(data->CancelTime)) {
            PyErr_Format(PyExc_ValueError, "CancelTime too long: length=%zd (max allowed is 8)", CThostFtdcOffsetSettingField_CancelTime_length);
            return -1;
        }
        // memset(data->CancelTime, 0, sizeof(data->CancelTime));
        // memcpy(data->CancelTime, CThostFtdcOffsetSettingField_CancelTime, CThostFtdcOffsetSettingField_CancelTime_length);
        strncpy(data->CancelTime, CThostFtdcOffsetSettingField_CancelTime, sizeof(data->CancelTime));
        CThostFtdcOffsetSettingField_CancelTime = NULL;
    }

    /// 对冲设置结果
    /// typedef char TThostFtdcExecResultType
    data->ExecResult = CThostFtdcOffsetSettingField_ExecResult;

    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    data->SequenceNo = CThostFtdcOffsetSettingField_SequenceNo;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    data->FrontID = CThostFtdcOffsetSettingField_FrontID;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcOffsetSettingField_SessionID;

    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcOffsetSettingField_StatusMsg != NULL ) {
        if(CThostFtdcOffsetSettingField_StatusMsg_length >= (Py_ssize_t)sizeof(data->StatusMsg)) {
            PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is 80)", CThostFtdcOffsetSettingField_StatusMsg_length);
            return -1;
        }
        // memset(data->StatusMsg, 0, sizeof(data->StatusMsg));
        // memcpy(data->StatusMsg, CThostFtdcOffsetSettingField_StatusMsg, CThostFtdcOffsetSettingField_StatusMsg_length);
        strncpy(data->StatusMsg, CThostFtdcOffsetSettingField_StatusMsg, sizeof(data->StatusMsg));
        CThostFtdcOffsetSettingField_StatusMsg = NULL;
    }

    /// 操作用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcOffsetSettingField_ActiveUserID != NULL ) {
        if(CThostFtdcOffsetSettingField_ActiveUserID_length >= (Py_ssize_t)sizeof(data->ActiveUserID)) {
            PyErr_Format(PyExc_ValueError, "ActiveUserID too long: length=%zd (max allowed is 15)", CThostFtdcOffsetSettingField_ActiveUserID_length);
            return -1;
        }
        // memset(data->ActiveUserID, 0, sizeof(data->ActiveUserID));
        // memcpy(data->ActiveUserID, CThostFtdcOffsetSettingField_ActiveUserID, CThostFtdcOffsetSettingField_ActiveUserID_length);
        strncpy(data->ActiveUserID, CThostFtdcOffsetSettingField_ActiveUserID, sizeof(data->ActiveUserID));
        CThostFtdcOffsetSettingField_ActiveUserID = NULL;
    }

    /// 经纪公司报单编号
    /// typedef int TThostFtdcSequenceNoType
    data->BrokerOffsetSettingSeq = CThostFtdcOffsetSettingField_BrokerOffsetSettingSeq;

    /// 申请来源
    /// typedef char TThostFtdcApplySrcType
    data->ApplySrc = CThostFtdcOffsetSettingField_ApplySrc;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcOffsetSettingFieldType_repr(PyObject *self) {

    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:c,s:i,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:y,s:i,s:y,s:y,s:y,s:c,s:i,s:i,s:i,s:y,s:y,s:i,s:c}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "UnderlyingInstrID", data->UnderlyingInstrID//, (Py_ssize_t)sizeof(data->UnderlyingInstrID)
        , "ProductID", data->ProductID//, (Py_ssize_t)sizeof(data->ProductID)
        , "OffsetType", data->OffsetType
        , "Volume", data->Volume
        , "IsOffset", data->IsOffset
        , "RequestID", data->RequestID
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
        , "ExchangeInstID", data->ExchangeInstID//, (Py_ssize_t)sizeof(data->ExchangeInstID)
        , "ExchangeSerialNo", data->ExchangeSerialNo//, (Py_ssize_t)sizeof(data->ExchangeSerialNo)
        , "ExchangeProductID", data->ExchangeProductID//, (Py_ssize_t)sizeof(data->ExchangeProductID)
        , "ParticipantID", data->ParticipantID//, (Py_ssize_t)sizeof(data->ParticipantID)
        , "ClientID", data->ClientID//, (Py_ssize_t)sizeof(data->ClientID)
        , "TraderID", data->TraderID//, (Py_ssize_t)sizeof(data->TraderID)
        , "InstallID", data->InstallID
        , "OrderSubmitStatus", data->OrderSubmitStatus
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "SettlementID", data->SettlementID
        , "InsertDate", data->InsertDate//, (Py_ssize_t)sizeof(data->InsertDate)
        , "InsertTime", data->InsertTime//, (Py_ssize_t)sizeof(data->InsertTime)
        , "CancelTime", data->CancelTime//, (Py_ssize_t)sizeof(data->CancelTime)
        , "ExecResult", data->ExecResult
        , "SequenceNo", data->SequenceNo
        , "FrontID", data->FrontID
        , "SessionID", data->SessionID
        , "StatusMsg", data->StatusMsg//, (Py_ssize_t)sizeof(data->StatusMsg)
        , "ActiveUserID", data->ActiveUserID//, (Py_ssize_t)sizeof(data->ActiveUserID)
        , "BrokerOffsetSettingSeq", data->BrokerOffsetSettingSeq
        , "ApplySrc", data->ApplySrc
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOffsetSettingField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOffsetSettingField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcOffsetSettingFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcOffsetSettingFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOffsetSettingField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcOffsetSettingFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcOffsetSettingFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOffsetSettingField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcOffsetSettingFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcOffsetSettingFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOffsetSettingField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 标的期货合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcOffsetSettingFieldType_get_UnderlyingInstrID(PyObject *self, void *closure) {
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UnderlyingInstrID, (Py_ssize_t)sizeof(data->UnderlyingInstrID));
    return PyBytes_FromString(data->UnderlyingInstrID);
}

static int PyCThostFtdcOffsetSettingFieldType_set_UnderlyingInstrID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UnderlyingInstrID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOffsetSettingField::UnderlyingInstrID)) {
        PyErr_SetString(PyExc_ValueError, "UnderlyingInstrID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // memset(data->UnderlyingInstrID, 0, sizeof(data->UnderlyingInstrID));
    // memcpy(data->UnderlyingInstrID, buf, len);
    strncpy(data->UnderlyingInstrID, buf, sizeof(data->UnderlyingInstrID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品代码
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcOffsetSettingFieldType_get_ProductID(PyObject *self, void *closure) {
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductID, (Py_ssize_t)sizeof(data->ProductID));
    return PyBytes_FromString(data->ProductID);
}

static int PyCThostFtdcOffsetSettingFieldType_set_ProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOffsetSettingField::ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // memset(data->ProductID, 0, sizeof(data->ProductID));
    // memcpy(data->ProductID, buf, len);
    strncpy(data->ProductID, buf, sizeof(data->ProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 对冲类型
/// typedef char TThostFtdcOffsetTypeType
static PyObject *PyCThostFtdcOffsetSettingFieldType_get_OffsetType(PyObject *self, void *closure) {
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OffsetType), 1);
}

static int PyCThostFtdcOffsetSettingFieldType_set_OffsetType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OffsetType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOffsetSettingField::OffsetType)) {
        PyErr_SetString(PyExc_ValueError, "OffsetType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    data->OffsetType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcOffsetSettingFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcOffsetSettingFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOffsetSettingField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcOffsetSettingFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcOffsetSettingFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOffsetSettingField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcOffsetSettingFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcOffsetSettingFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOffsetSettingField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcOffsetSettingFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcOffsetSettingFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOffsetSettingField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所合约代码
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcOffsetSettingFieldType_get_ExchangeInstID(PyObject *self, void *closure) {
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeInstID, (Py_ssize_t)sizeof(data->ExchangeInstID));
    return PyBytes_FromString(data->ExchangeInstID);
}

static int PyCThostFtdcOffsetSettingFieldType_set_ExchangeInstID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOffsetSettingField::ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
    // memcpy(data->ExchangeInstID, buf, len);
    strncpy(data->ExchangeInstID, buf, sizeof(data->ExchangeInstID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所期权系列号
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcOffsetSettingFieldType_get_ExchangeSerialNo(PyObject *self, void *closure) {
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeSerialNo, (Py_ssize_t)sizeof(data->ExchangeSerialNo));
    return PyBytes_FromString(data->ExchangeSerialNo);
}

static int PyCThostFtdcOffsetSettingFieldType_set_ExchangeSerialNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeSerialNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOffsetSettingField::ExchangeSerialNo)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeSerialNo must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // memset(data->ExchangeSerialNo, 0, sizeof(data->ExchangeSerialNo));
    // memcpy(data->ExchangeSerialNo, buf, len);
    strncpy(data->ExchangeSerialNo, buf, sizeof(data->ExchangeSerialNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所产品代码
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcOffsetSettingFieldType_get_ExchangeProductID(PyObject *self, void *closure) {
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeProductID, (Py_ssize_t)sizeof(data->ExchangeProductID));
    return PyBytes_FromString(data->ExchangeProductID);
}

static int PyCThostFtdcOffsetSettingFieldType_set_ExchangeProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOffsetSettingField::ExchangeProductID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeProductID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // memset(data->ExchangeProductID, 0, sizeof(data->ExchangeProductID));
    // memcpy(data->ExchangeProductID, buf, len);
    strncpy(data->ExchangeProductID, buf, sizeof(data->ExchangeProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcOffsetSettingFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcOffsetSettingFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOffsetSettingField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcOffsetSettingFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcOffsetSettingFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOffsetSettingField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcOffsetSettingFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcOffsetSettingFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOffsetSettingField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 对冲提交状态
/// typedef char TThostFtdcOrderSubmitStatusType
static PyObject *PyCThostFtdcOffsetSettingFieldType_get_OrderSubmitStatus(PyObject *self, void *closure) {
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderSubmitStatus), 1);
}

static int PyCThostFtdcOffsetSettingFieldType_set_OrderSubmitStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderSubmitStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOffsetSettingField::OrderSubmitStatus)) {
        PyErr_SetString(PyExc_ValueError, "OrderSubmitStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    data->OrderSubmitStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcOffsetSettingFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcOffsetSettingFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOffsetSettingField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcOffsetSettingFieldType_get_InsertDate(PyObject *self, void *closure) {
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertDate, (Py_ssize_t)sizeof(data->InsertDate));
    return PyBytes_FromString(data->InsertDate);
}

static int PyCThostFtdcOffsetSettingFieldType_set_InsertDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOffsetSettingField::InsertDate)) {
        PyErr_SetString(PyExc_ValueError, "InsertDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // memset(data->InsertDate, 0, sizeof(data->InsertDate));
    // memcpy(data->InsertDate, buf, len);
    strncpy(data->InsertDate, buf, sizeof(data->InsertDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 插入时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcOffsetSettingFieldType_get_InsertTime(PyObject *self, void *closure) {
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertTime, (Py_ssize_t)sizeof(data->InsertTime));
    return PyBytes_FromString(data->InsertTime);
}

static int PyCThostFtdcOffsetSettingFieldType_set_InsertTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOffsetSettingField::InsertTime)) {
        PyErr_SetString(PyExc_ValueError, "InsertTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // memset(data->InsertTime, 0, sizeof(data->InsertTime));
    // memcpy(data->InsertTime, buf, len);
    strncpy(data->InsertTime, buf, sizeof(data->InsertTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 撤销时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcOffsetSettingFieldType_get_CancelTime(PyObject *self, void *closure) {
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CancelTime, (Py_ssize_t)sizeof(data->CancelTime));
    return PyBytes_FromString(data->CancelTime);
}

static int PyCThostFtdcOffsetSettingFieldType_set_CancelTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CancelTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOffsetSettingField::CancelTime)) {
        PyErr_SetString(PyExc_ValueError, "CancelTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // memset(data->CancelTime, 0, sizeof(data->CancelTime));
    // memcpy(data->CancelTime, buf, len);
    strncpy(data->CancelTime, buf, sizeof(data->CancelTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 对冲设置结果
/// typedef char TThostFtdcExecResultType
static PyObject *PyCThostFtdcOffsetSettingFieldType_get_ExecResult(PyObject *self, void *closure) {
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ExecResult), 1);
}

static int PyCThostFtdcOffsetSettingFieldType_set_ExecResult(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExecResult Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOffsetSettingField::ExecResult)) {
        PyErr_SetString(PyExc_ValueError, "ExecResult must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    data->ExecResult = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 状态信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcOffsetSettingFieldType_get_StatusMsg(PyObject *self, void *closure) {
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->StatusMsg, (Py_ssize_t)sizeof(data->StatusMsg));
    return PyBytes_FromString(data->StatusMsg);
}

static int PyCThostFtdcOffsetSettingFieldType_set_StatusMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "StatusMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOffsetSettingField::StatusMsg)) {
        PyErr_SetString(PyExc_ValueError, "StatusMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // memset(data->StatusMsg, 0, sizeof(data->StatusMsg));
    // memcpy(data->StatusMsg, buf, len);
    strncpy(data->StatusMsg, buf, sizeof(data->StatusMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcOffsetSettingFieldType_get_ActiveUserID(PyObject *self, void *closure) {
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActiveUserID, (Py_ssize_t)sizeof(data->ActiveUserID));
    return PyBytes_FromString(data->ActiveUserID);
}

static int PyCThostFtdcOffsetSettingFieldType_set_ActiveUserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActiveUserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOffsetSettingField::ActiveUserID)) {
        PyErr_SetString(PyExc_ValueError, "ActiveUserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    // memset(data->ActiveUserID, 0, sizeof(data->ActiveUserID));
    // memcpy(data->ActiveUserID, buf, len);
    strncpy(data->ActiveUserID, buf, sizeof(data->ActiveUserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 申请来源
/// typedef char TThostFtdcApplySrcType
static PyObject *PyCThostFtdcOffsetSettingFieldType_get_ApplySrc(PyObject *self, void *closure) {
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ApplySrc), 1);
}

static int PyCThostFtdcOffsetSettingFieldType_set_ApplySrc(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ApplySrc Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOffsetSettingField::ApplySrc)) {
        PyErr_SetString(PyExc_ValueError, "ApplySrc must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(self);
    CThostFtdcOffsetSettingField *data = &(extra->data);
    data->ApplySrc = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcOffsetSettingFieldType_members[] = {
    /// 申请对冲的合约数量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "Volume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcOffsetSettingFieldData, data.Volume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申请对冲的合约数量")
    },
    /// 是否对冲
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsOffset",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcOffsetSettingFieldData, data.IsOffset),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否对冲")
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
        .offset = offsetof(PyCThostFtdcOffsetSettingFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcOffsetSettingFieldData, data.InstallID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("安装编号")
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
        .offset = offsetof(PyCThostFtdcOffsetSettingFieldData, data.SettlementID),
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
        .offset = offsetof(PyCThostFtdcOffsetSettingFieldData, data.SequenceNo),
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
        .offset = offsetof(PyCThostFtdcOffsetSettingFieldData, data.FrontID),
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
        .offset = offsetof(PyCThostFtdcOffsetSettingFieldData, data.SessionID),
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
        .name = "BrokerOffsetSettingSeq",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcOffsetSettingFieldData, data.BrokerOffsetSettingSeq),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("经纪公司报单编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcOffsetSettingFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcOffsetSettingFieldType_get_BrokerID,
    .set = PyCThostFtdcOffsetSettingFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcOffsetSettingFieldType_get_InvestorID,
    .set = PyCThostFtdcOffsetSettingFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcOffsetSettingFieldType_get_InstrumentID,
    .set = PyCThostFtdcOffsetSettingFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 标的期货合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "UnderlyingInstrID",
    .get = PyCThostFtdcOffsetSettingFieldType_get_UnderlyingInstrID,
    .set = PyCThostFtdcOffsetSettingFieldType_set_UnderlyingInstrID,
    .doc = PyDoc_STR("标的期货合约代码"),
    },
    /// 产品代码
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "ProductID",
    .get = PyCThostFtdcOffsetSettingFieldType_get_ProductID,
    .set = PyCThostFtdcOffsetSettingFieldType_set_ProductID,
    .doc = PyDoc_STR("产品代码"),
    },
    /// 对冲类型
    /// typedef char TThostFtdcOffsetTypeType
    {
    .name = "OffsetType",
    .get = PyCThostFtdcOffsetSettingFieldType_get_OffsetType,
    .set = PyCThostFtdcOffsetSettingFieldType_set_OffsetType,
    .doc = PyDoc_STR("对冲类型"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcOffsetSettingFieldType_get_UserID,
    .set = PyCThostFtdcOffsetSettingFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcOffsetSettingFieldType_get_ExchangeID,
    .set = PyCThostFtdcOffsetSettingFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcOffsetSettingFieldType_get_IPAddress,
    .set = PyCThostFtdcOffsetSettingFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcOffsetSettingFieldType_get_MacAddress,
    .set = PyCThostFtdcOffsetSettingFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 交易所合约代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "ExchangeInstID",
    .get = PyCThostFtdcOffsetSettingFieldType_get_ExchangeInstID,
    .set = PyCThostFtdcOffsetSettingFieldType_set_ExchangeInstID,
    .doc = PyDoc_STR("交易所合约代码"),
    },
    /// 交易所期权系列号
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "ExchangeSerialNo",
    .get = PyCThostFtdcOffsetSettingFieldType_get_ExchangeSerialNo,
    .set = PyCThostFtdcOffsetSettingFieldType_set_ExchangeSerialNo,
    .doc = PyDoc_STR("交易所期权系列号"),
    },
    /// 交易所产品代码
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "ExchangeProductID",
    .get = PyCThostFtdcOffsetSettingFieldType_get_ExchangeProductID,
    .set = PyCThostFtdcOffsetSettingFieldType_set_ExchangeProductID,
    .doc = PyDoc_STR("交易所产品代码"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcOffsetSettingFieldType_get_ParticipantID,
    .set = PyCThostFtdcOffsetSettingFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcOffsetSettingFieldType_get_ClientID,
    .set = PyCThostFtdcOffsetSettingFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcOffsetSettingFieldType_get_TraderID,
    .set = PyCThostFtdcOffsetSettingFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    /// 对冲提交状态
    /// typedef char TThostFtdcOrderSubmitStatusType
    {
    .name = "OrderSubmitStatus",
    .get = PyCThostFtdcOffsetSettingFieldType_get_OrderSubmitStatus,
    .set = PyCThostFtdcOffsetSettingFieldType_set_OrderSubmitStatus,
    .doc = PyDoc_STR("对冲提交状态"),
    },
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcOffsetSettingFieldType_get_TradingDay,
    .set = PyCThostFtdcOffsetSettingFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "InsertDate",
    .get = PyCThostFtdcOffsetSettingFieldType_get_InsertDate,
    .set = PyCThostFtdcOffsetSettingFieldType_set_InsertDate,
    .doc = PyDoc_STR("报单日期"),
    },
    /// 插入时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "InsertTime",
    .get = PyCThostFtdcOffsetSettingFieldType_get_InsertTime,
    .set = PyCThostFtdcOffsetSettingFieldType_set_InsertTime,
    .doc = PyDoc_STR("插入时间"),
    },
    /// 撤销时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "CancelTime",
    .get = PyCThostFtdcOffsetSettingFieldType_get_CancelTime,
    .set = PyCThostFtdcOffsetSettingFieldType_set_CancelTime,
    .doc = PyDoc_STR("撤销时间"),
    },
    /// 对冲设置结果
    /// typedef char TThostFtdcExecResultType
    {
    .name = "ExecResult",
    .get = PyCThostFtdcOffsetSettingFieldType_get_ExecResult,
    .set = PyCThostFtdcOffsetSettingFieldType_set_ExecResult,
    .doc = PyDoc_STR("对冲设置结果"),
    },
    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "StatusMsg",
    .get = PyCThostFtdcOffsetSettingFieldType_get_StatusMsg,
    .set = PyCThostFtdcOffsetSettingFieldType_set_StatusMsg,
    .doc = PyDoc_STR("状态信息"),
    },
    /// 操作用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "ActiveUserID",
    .get = PyCThostFtdcOffsetSettingFieldType_get_ActiveUserID,
    .set = PyCThostFtdcOffsetSettingFieldType_set_ActiveUserID,
    .doc = PyDoc_STR("操作用户代码"),
    },
    /// 申请来源
    /// typedef char TThostFtdcApplySrcType
    {
    .name = "ApplySrc",
    .get = PyCThostFtdcOffsetSettingFieldType_get_ApplySrc,
    .set = PyCThostFtdcOffsetSettingFieldType_set_ApplySrc,
    .doc = PyDoc_STR("申请来源"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcOffsetSettingFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcOffsetSettingField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("对冲设置")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcOffsetSettingFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcOffsetSettingFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcOffsetSettingFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcOffsetSettingFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcOffsetSettingFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcOffsetSettingFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("对冲设置")},
    {Py_tp_members, PyCThostFtdcOffsetSettingFieldType_members},
    {Py_tp_getset, PyCThostFtdcOffsetSettingFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcOffsetSettingFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcOffsetSettingFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcOffsetSettingFieldType_spec = {
    .name = "PyCTP.CThostFtdcOffsetSettingField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcOffsetSettingFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcOffsetSettingFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcOffsetSettingFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcOffsetSettingFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcOffsetSettingFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcOffsetSettingFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcOffsetSettingFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcOffsetSettingFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcOffsetSettingField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcOffsetSettingField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}