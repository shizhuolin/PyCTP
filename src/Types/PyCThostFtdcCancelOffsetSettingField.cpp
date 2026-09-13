
#include "PyCThostFtdcCancelOffsetSettingField.h"

///撤销对冲设置

static int PyCThostFtdcCancelOffsetSettingFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "InstrumentID", "UnderlyingInstrID", "ProductID", "OffsetType", "Volume", "IsOffset", "RequestID", "UserID", "ExchangeID", "IPAddress", "MacAddress", "ExchangeInstID", "ExchangeSerialNo", "ExchangeProductID", "TraderID", "InstallID", "ParticipantID", "ClientID", "OrderActionStatus", "StatusMsg", "ActionLocalID", "ActionDate", "ActionTime", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcCancelOffsetSettingField_BrokerID = NULL;
    Py_ssize_t CThostFtdcCancelOffsetSettingField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcCancelOffsetSettingField_InvestorID = NULL;
    Py_ssize_t CThostFtdcCancelOffsetSettingField_InvestorID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcCancelOffsetSettingField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcCancelOffsetSettingField_InstrumentID_length = 0;

    /// 标的期货合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcCancelOffsetSettingField_UnderlyingInstrID = NULL;
    Py_ssize_t CThostFtdcCancelOffsetSettingField_UnderlyingInstrID_length = 0;

    /// 产品代码
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcCancelOffsetSettingField_ProductID = NULL;
    Py_ssize_t CThostFtdcCancelOffsetSettingField_ProductID_length = 0;

    /// 对冲类型
    /// typedef char TThostFtdcOffsetTypeType
    char CThostFtdcCancelOffsetSettingField_OffsetType = 0;

    /// 申请对冲的合约数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcCancelOffsetSettingField_Volume = 0;

    /// 是否对冲
    /// typedef int TThostFtdcBoolType
    int CThostFtdcCancelOffsetSettingField_IsOffset = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcCancelOffsetSettingField_RequestID = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcCancelOffsetSettingField_UserID = NULL;
    Py_ssize_t CThostFtdcCancelOffsetSettingField_UserID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcCancelOffsetSettingField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcCancelOffsetSettingField_ExchangeID_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcCancelOffsetSettingField_IPAddress = NULL;
    Py_ssize_t CThostFtdcCancelOffsetSettingField_IPAddress_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcCancelOffsetSettingField_MacAddress = NULL;
    Py_ssize_t CThostFtdcCancelOffsetSettingField_MacAddress_length = 0;

    /// 交易所合约代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcCancelOffsetSettingField_ExchangeInstID = NULL;
    Py_ssize_t CThostFtdcCancelOffsetSettingField_ExchangeInstID_length = 0;

    /// 交易所期权系列号
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcCancelOffsetSettingField_ExchangeSerialNo = NULL;
    Py_ssize_t CThostFtdcCancelOffsetSettingField_ExchangeSerialNo_length = 0;

    /// 交易所产品代码
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcCancelOffsetSettingField_ExchangeProductID = NULL;
    Py_ssize_t CThostFtdcCancelOffsetSettingField_ExchangeProductID_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcCancelOffsetSettingField_TraderID = NULL;
    Py_ssize_t CThostFtdcCancelOffsetSettingField_TraderID_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcCancelOffsetSettingField_InstallID = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcCancelOffsetSettingField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcCancelOffsetSettingField_ParticipantID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcCancelOffsetSettingField_ClientID = NULL;
    Py_ssize_t CThostFtdcCancelOffsetSettingField_ClientID_length = 0;

    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    char CThostFtdcCancelOffsetSettingField_OrderActionStatus = 0;

    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcCancelOffsetSettingField_StatusMsg = NULL;
    Py_ssize_t CThostFtdcCancelOffsetSettingField_StatusMsg_length = 0;

    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcCancelOffsetSettingField_ActionLocalID = NULL;
    Py_ssize_t CThostFtdcCancelOffsetSettingField_ActionLocalID_length = 0;

    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcCancelOffsetSettingField_ActionDate = NULL;
    Py_ssize_t CThostFtdcCancelOffsetSettingField_ActionDate_length = 0;

    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcCancelOffsetSettingField_ActionTime = NULL;
    Py_ssize_t CThostFtdcCancelOffsetSettingField_ActionTime_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ciiiy#y#y#y#y#y#y#y#iy#y#cy#y#y#y#", (char **)kwlist
        , &CThostFtdcCancelOffsetSettingField_BrokerID, &CThostFtdcCancelOffsetSettingField_BrokerID_length
        , &CThostFtdcCancelOffsetSettingField_InvestorID, &CThostFtdcCancelOffsetSettingField_InvestorID_length
        , &CThostFtdcCancelOffsetSettingField_InstrumentID, &CThostFtdcCancelOffsetSettingField_InstrumentID_length
        , &CThostFtdcCancelOffsetSettingField_UnderlyingInstrID, &CThostFtdcCancelOffsetSettingField_UnderlyingInstrID_length
        , &CThostFtdcCancelOffsetSettingField_ProductID, &CThostFtdcCancelOffsetSettingField_ProductID_length
        , &CThostFtdcCancelOffsetSettingField_OffsetType
        , &CThostFtdcCancelOffsetSettingField_Volume
        , &CThostFtdcCancelOffsetSettingField_IsOffset
        , &CThostFtdcCancelOffsetSettingField_RequestID
        , &CThostFtdcCancelOffsetSettingField_UserID, &CThostFtdcCancelOffsetSettingField_UserID_length
        , &CThostFtdcCancelOffsetSettingField_ExchangeID, &CThostFtdcCancelOffsetSettingField_ExchangeID_length
        , &CThostFtdcCancelOffsetSettingField_IPAddress, &CThostFtdcCancelOffsetSettingField_IPAddress_length
        , &CThostFtdcCancelOffsetSettingField_MacAddress, &CThostFtdcCancelOffsetSettingField_MacAddress_length
        , &CThostFtdcCancelOffsetSettingField_ExchangeInstID, &CThostFtdcCancelOffsetSettingField_ExchangeInstID_length
        , &CThostFtdcCancelOffsetSettingField_ExchangeSerialNo, &CThostFtdcCancelOffsetSettingField_ExchangeSerialNo_length
        , &CThostFtdcCancelOffsetSettingField_ExchangeProductID, &CThostFtdcCancelOffsetSettingField_ExchangeProductID_length
        , &CThostFtdcCancelOffsetSettingField_TraderID, &CThostFtdcCancelOffsetSettingField_TraderID_length
        , &CThostFtdcCancelOffsetSettingField_InstallID
        , &CThostFtdcCancelOffsetSettingField_ParticipantID, &CThostFtdcCancelOffsetSettingField_ParticipantID_length
        , &CThostFtdcCancelOffsetSettingField_ClientID, &CThostFtdcCancelOffsetSettingField_ClientID_length
        , &CThostFtdcCancelOffsetSettingField_OrderActionStatus
        , &CThostFtdcCancelOffsetSettingField_StatusMsg, &CThostFtdcCancelOffsetSettingField_StatusMsg_length
        , &CThostFtdcCancelOffsetSettingField_ActionLocalID, &CThostFtdcCancelOffsetSettingField_ActionLocalID_length
        , &CThostFtdcCancelOffsetSettingField_ActionDate, &CThostFtdcCancelOffsetSettingField_ActionDate_length
        , &CThostFtdcCancelOffsetSettingField_ActionTime, &CThostFtdcCancelOffsetSettingField_ActionTime_length
    )) {
        return -1;
    }

    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcCancelOffsetSettingField_BrokerID != NULL ) {
        if(CThostFtdcCancelOffsetSettingField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcCancelOffsetSettingField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcCancelOffsetSettingField_BrokerID, CThostFtdcCancelOffsetSettingField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcCancelOffsetSettingField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcCancelOffsetSettingField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcCancelOffsetSettingField_InvestorID != NULL ) {
        if(CThostFtdcCancelOffsetSettingField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcCancelOffsetSettingField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcCancelOffsetSettingField_InvestorID, CThostFtdcCancelOffsetSettingField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcCancelOffsetSettingField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcCancelOffsetSettingField_InvestorID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcCancelOffsetSettingField_InstrumentID != NULL ) {
        if(CThostFtdcCancelOffsetSettingField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcCancelOffsetSettingField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcCancelOffsetSettingField_InstrumentID, CThostFtdcCancelOffsetSettingField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcCancelOffsetSettingField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcCancelOffsetSettingField_InstrumentID = NULL;
    }

    /// 标的期货合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcCancelOffsetSettingField_UnderlyingInstrID != NULL ) {
        if(CThostFtdcCancelOffsetSettingField_UnderlyingInstrID_length >= (Py_ssize_t)sizeof(data->UnderlyingInstrID)) {
            PyErr_Format(PyExc_ValueError, "UnderlyingInstrID too long: length=%zd (max allowed is 80)", CThostFtdcCancelOffsetSettingField_UnderlyingInstrID_length);
            return -1;
        }
        // memset(data->UnderlyingInstrID, 0, sizeof(data->UnderlyingInstrID));
        // memcpy(data->UnderlyingInstrID, CThostFtdcCancelOffsetSettingField_UnderlyingInstrID, CThostFtdcCancelOffsetSettingField_UnderlyingInstrID_length);
        strncpy(data->UnderlyingInstrID, CThostFtdcCancelOffsetSettingField_UnderlyingInstrID, sizeof(data->UnderlyingInstrID));
        CThostFtdcCancelOffsetSettingField_UnderlyingInstrID = NULL;
    }

    /// 产品代码
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcCancelOffsetSettingField_ProductID != NULL ) {
        if(CThostFtdcCancelOffsetSettingField_ProductID_length >= (Py_ssize_t)sizeof(data->ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is 40)", CThostFtdcCancelOffsetSettingField_ProductID_length);
            return -1;
        }
        // memset(data->ProductID, 0, sizeof(data->ProductID));
        // memcpy(data->ProductID, CThostFtdcCancelOffsetSettingField_ProductID, CThostFtdcCancelOffsetSettingField_ProductID_length);
        strncpy(data->ProductID, CThostFtdcCancelOffsetSettingField_ProductID, sizeof(data->ProductID));
        CThostFtdcCancelOffsetSettingField_ProductID = NULL;
    }

    /// 对冲类型
    /// typedef char TThostFtdcOffsetTypeType
    data->OffsetType = CThostFtdcCancelOffsetSettingField_OffsetType;

    /// 申请对冲的合约数量
    /// typedef int TThostFtdcVolumeType
    data->Volume = CThostFtdcCancelOffsetSettingField_Volume;

    /// 是否对冲
    /// typedef int TThostFtdcBoolType
    data->IsOffset = CThostFtdcCancelOffsetSettingField_IsOffset;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcCancelOffsetSettingField_RequestID;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcCancelOffsetSettingField_UserID != NULL ) {
        if(CThostFtdcCancelOffsetSettingField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcCancelOffsetSettingField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcCancelOffsetSettingField_UserID, CThostFtdcCancelOffsetSettingField_UserID_length);
        strncpy(data->UserID, CThostFtdcCancelOffsetSettingField_UserID, sizeof(data->UserID));
        CThostFtdcCancelOffsetSettingField_UserID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcCancelOffsetSettingField_ExchangeID != NULL ) {
        if(CThostFtdcCancelOffsetSettingField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcCancelOffsetSettingField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcCancelOffsetSettingField_ExchangeID, CThostFtdcCancelOffsetSettingField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcCancelOffsetSettingField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcCancelOffsetSettingField_ExchangeID = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcCancelOffsetSettingField_IPAddress != NULL ) {
        if(CThostFtdcCancelOffsetSettingField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcCancelOffsetSettingField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcCancelOffsetSettingField_IPAddress, CThostFtdcCancelOffsetSettingField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcCancelOffsetSettingField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcCancelOffsetSettingField_IPAddress = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcCancelOffsetSettingField_MacAddress != NULL ) {
        if(CThostFtdcCancelOffsetSettingField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcCancelOffsetSettingField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcCancelOffsetSettingField_MacAddress, CThostFtdcCancelOffsetSettingField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcCancelOffsetSettingField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcCancelOffsetSettingField_MacAddress = NULL;
    }

    /// 交易所合约代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcCancelOffsetSettingField_ExchangeInstID != NULL ) {
        if(CThostFtdcCancelOffsetSettingField_ExchangeInstID_length >= (Py_ssize_t)sizeof(data->ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is 80)", CThostFtdcCancelOffsetSettingField_ExchangeInstID_length);
            return -1;
        }
        // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
        // memcpy(data->ExchangeInstID, CThostFtdcCancelOffsetSettingField_ExchangeInstID, CThostFtdcCancelOffsetSettingField_ExchangeInstID_length);
        strncpy(data->ExchangeInstID, CThostFtdcCancelOffsetSettingField_ExchangeInstID, sizeof(data->ExchangeInstID));
        CThostFtdcCancelOffsetSettingField_ExchangeInstID = NULL;
    }

    /// 交易所期权系列号
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcCancelOffsetSettingField_ExchangeSerialNo != NULL ) {
        if(CThostFtdcCancelOffsetSettingField_ExchangeSerialNo_length >= (Py_ssize_t)sizeof(data->ExchangeSerialNo)) {
            PyErr_Format(PyExc_ValueError, "ExchangeSerialNo too long: length=%zd (max allowed is 80)", CThostFtdcCancelOffsetSettingField_ExchangeSerialNo_length);
            return -1;
        }
        // memset(data->ExchangeSerialNo, 0, sizeof(data->ExchangeSerialNo));
        // memcpy(data->ExchangeSerialNo, CThostFtdcCancelOffsetSettingField_ExchangeSerialNo, CThostFtdcCancelOffsetSettingField_ExchangeSerialNo_length);
        strncpy(data->ExchangeSerialNo, CThostFtdcCancelOffsetSettingField_ExchangeSerialNo, sizeof(data->ExchangeSerialNo));
        CThostFtdcCancelOffsetSettingField_ExchangeSerialNo = NULL;
    }

    /// 交易所产品代码
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcCancelOffsetSettingField_ExchangeProductID != NULL ) {
        if(CThostFtdcCancelOffsetSettingField_ExchangeProductID_length >= (Py_ssize_t)sizeof(data->ExchangeProductID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeProductID too long: length=%zd (max allowed is 40)", CThostFtdcCancelOffsetSettingField_ExchangeProductID_length);
            return -1;
        }
        // memset(data->ExchangeProductID, 0, sizeof(data->ExchangeProductID));
        // memcpy(data->ExchangeProductID, CThostFtdcCancelOffsetSettingField_ExchangeProductID, CThostFtdcCancelOffsetSettingField_ExchangeProductID_length);
        strncpy(data->ExchangeProductID, CThostFtdcCancelOffsetSettingField_ExchangeProductID, sizeof(data->ExchangeProductID));
        CThostFtdcCancelOffsetSettingField_ExchangeProductID = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcCancelOffsetSettingField_TraderID != NULL ) {
        if(CThostFtdcCancelOffsetSettingField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcCancelOffsetSettingField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcCancelOffsetSettingField_TraderID, CThostFtdcCancelOffsetSettingField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcCancelOffsetSettingField_TraderID, sizeof(data->TraderID));
        CThostFtdcCancelOffsetSettingField_TraderID = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcCancelOffsetSettingField_InstallID;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcCancelOffsetSettingField_ParticipantID != NULL ) {
        if(CThostFtdcCancelOffsetSettingField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcCancelOffsetSettingField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcCancelOffsetSettingField_ParticipantID, CThostFtdcCancelOffsetSettingField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcCancelOffsetSettingField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcCancelOffsetSettingField_ParticipantID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcCancelOffsetSettingField_ClientID != NULL ) {
        if(CThostFtdcCancelOffsetSettingField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcCancelOffsetSettingField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcCancelOffsetSettingField_ClientID, CThostFtdcCancelOffsetSettingField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcCancelOffsetSettingField_ClientID, sizeof(data->ClientID));
        CThostFtdcCancelOffsetSettingField_ClientID = NULL;
    }

    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    data->OrderActionStatus = CThostFtdcCancelOffsetSettingField_OrderActionStatus;

    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcCancelOffsetSettingField_StatusMsg != NULL ) {
        if(CThostFtdcCancelOffsetSettingField_StatusMsg_length >= (Py_ssize_t)sizeof(data->StatusMsg)) {
            PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is 80)", CThostFtdcCancelOffsetSettingField_StatusMsg_length);
            return -1;
        }
        // memset(data->StatusMsg, 0, sizeof(data->StatusMsg));
        // memcpy(data->StatusMsg, CThostFtdcCancelOffsetSettingField_StatusMsg, CThostFtdcCancelOffsetSettingField_StatusMsg_length);
        strncpy(data->StatusMsg, CThostFtdcCancelOffsetSettingField_StatusMsg, sizeof(data->StatusMsg));
        CThostFtdcCancelOffsetSettingField_StatusMsg = NULL;
    }

    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcCancelOffsetSettingField_ActionLocalID != NULL ) {
        if(CThostFtdcCancelOffsetSettingField_ActionLocalID_length >= (Py_ssize_t)sizeof(data->ActionLocalID)) {
            PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is 12)", CThostFtdcCancelOffsetSettingField_ActionLocalID_length);
            return -1;
        }
        // memset(data->ActionLocalID, 0, sizeof(data->ActionLocalID));
        // memcpy(data->ActionLocalID, CThostFtdcCancelOffsetSettingField_ActionLocalID, CThostFtdcCancelOffsetSettingField_ActionLocalID_length);
        strncpy(data->ActionLocalID, CThostFtdcCancelOffsetSettingField_ActionLocalID, sizeof(data->ActionLocalID));
        CThostFtdcCancelOffsetSettingField_ActionLocalID = NULL;
    }

    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcCancelOffsetSettingField_ActionDate != NULL ) {
        if(CThostFtdcCancelOffsetSettingField_ActionDate_length >= (Py_ssize_t)sizeof(data->ActionDate)) {
            PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is 8)", CThostFtdcCancelOffsetSettingField_ActionDate_length);
            return -1;
        }
        // memset(data->ActionDate, 0, sizeof(data->ActionDate));
        // memcpy(data->ActionDate, CThostFtdcCancelOffsetSettingField_ActionDate, CThostFtdcCancelOffsetSettingField_ActionDate_length);
        strncpy(data->ActionDate, CThostFtdcCancelOffsetSettingField_ActionDate, sizeof(data->ActionDate));
        CThostFtdcCancelOffsetSettingField_ActionDate = NULL;
    }

    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcCancelOffsetSettingField_ActionTime != NULL ) {
        if(CThostFtdcCancelOffsetSettingField_ActionTime_length >= (Py_ssize_t)sizeof(data->ActionTime)) {
            PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is 8)", CThostFtdcCancelOffsetSettingField_ActionTime_length);
            return -1;
        }
        // memset(data->ActionTime, 0, sizeof(data->ActionTime));
        // memcpy(data->ActionTime, CThostFtdcCancelOffsetSettingField_ActionTime, CThostFtdcCancelOffsetSettingField_ActionTime_length);
        strncpy(data->ActionTime, CThostFtdcCancelOffsetSettingField_ActionTime, sizeof(data->ActionTime));
        CThostFtdcCancelOffsetSettingField_ActionTime = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcCancelOffsetSettingFieldType_repr(PyObject *self) {

    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:c,s:i,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:y,s:y,s:c,s:y,s:y,s:y,s:y}"
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
        , "TraderID", data->TraderID//, (Py_ssize_t)sizeof(data->TraderID)
        , "InstallID", data->InstallID
        , "ParticipantID", data->ParticipantID//, (Py_ssize_t)sizeof(data->ParticipantID)
        , "ClientID", data->ClientID//, (Py_ssize_t)sizeof(data->ClientID)
        , "OrderActionStatus", data->OrderActionStatus
        , "StatusMsg", data->StatusMsg//, (Py_ssize_t)sizeof(data->StatusMsg)
        , "ActionLocalID", data->ActionLocalID//, (Py_ssize_t)sizeof(data->ActionLocalID)
        , "ActionDate", data->ActionDate//, (Py_ssize_t)sizeof(data->ActionDate)
        , "ActionTime", data->ActionTime//, (Py_ssize_t)sizeof(data->ActionTime)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCancelOffsetSettingField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCancelOffsetSettingField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcCancelOffsetSettingFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcCancelOffsetSettingFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelOffsetSettingField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcCancelOffsetSettingFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcCancelOffsetSettingFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelOffsetSettingField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcCancelOffsetSettingFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcCancelOffsetSettingFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelOffsetSettingField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 标的期货合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcCancelOffsetSettingFieldType_get_UnderlyingInstrID(PyObject *self, void *closure) {
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UnderlyingInstrID, (Py_ssize_t)sizeof(data->UnderlyingInstrID));
    return PyBytes_FromString(data->UnderlyingInstrID);
}

static int PyCThostFtdcCancelOffsetSettingFieldType_set_UnderlyingInstrID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UnderlyingInstrID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelOffsetSettingField::UnderlyingInstrID)) {
        PyErr_SetString(PyExc_ValueError, "UnderlyingInstrID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // memset(data->UnderlyingInstrID, 0, sizeof(data->UnderlyingInstrID));
    // memcpy(data->UnderlyingInstrID, buf, len);
    strncpy(data->UnderlyingInstrID, buf, sizeof(data->UnderlyingInstrID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品代码
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcCancelOffsetSettingFieldType_get_ProductID(PyObject *self, void *closure) {
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductID, (Py_ssize_t)sizeof(data->ProductID));
    return PyBytes_FromString(data->ProductID);
}

static int PyCThostFtdcCancelOffsetSettingFieldType_set_ProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelOffsetSettingField::ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // memset(data->ProductID, 0, sizeof(data->ProductID));
    // memcpy(data->ProductID, buf, len);
    strncpy(data->ProductID, buf, sizeof(data->ProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 对冲类型
/// typedef char TThostFtdcOffsetTypeType
static PyObject *PyCThostFtdcCancelOffsetSettingFieldType_get_OffsetType(PyObject *self, void *closure) {
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OffsetType), 1);
}

static int PyCThostFtdcCancelOffsetSettingFieldType_set_OffsetType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OffsetType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcCancelOffsetSettingField::OffsetType)) {
        PyErr_SetString(PyExc_ValueError, "OffsetType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    data->OffsetType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcCancelOffsetSettingFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcCancelOffsetSettingFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelOffsetSettingField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcCancelOffsetSettingFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcCancelOffsetSettingFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelOffsetSettingField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcCancelOffsetSettingFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcCancelOffsetSettingFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelOffsetSettingField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcCancelOffsetSettingFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcCancelOffsetSettingFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelOffsetSettingField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所合约代码
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcCancelOffsetSettingFieldType_get_ExchangeInstID(PyObject *self, void *closure) {
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeInstID, (Py_ssize_t)sizeof(data->ExchangeInstID));
    return PyBytes_FromString(data->ExchangeInstID);
}

static int PyCThostFtdcCancelOffsetSettingFieldType_set_ExchangeInstID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelOffsetSettingField::ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
    // memcpy(data->ExchangeInstID, buf, len);
    strncpy(data->ExchangeInstID, buf, sizeof(data->ExchangeInstID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所期权系列号
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcCancelOffsetSettingFieldType_get_ExchangeSerialNo(PyObject *self, void *closure) {
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeSerialNo, (Py_ssize_t)sizeof(data->ExchangeSerialNo));
    return PyBytes_FromString(data->ExchangeSerialNo);
}

static int PyCThostFtdcCancelOffsetSettingFieldType_set_ExchangeSerialNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeSerialNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelOffsetSettingField::ExchangeSerialNo)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeSerialNo must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // memset(data->ExchangeSerialNo, 0, sizeof(data->ExchangeSerialNo));
    // memcpy(data->ExchangeSerialNo, buf, len);
    strncpy(data->ExchangeSerialNo, buf, sizeof(data->ExchangeSerialNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所产品代码
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcCancelOffsetSettingFieldType_get_ExchangeProductID(PyObject *self, void *closure) {
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeProductID, (Py_ssize_t)sizeof(data->ExchangeProductID));
    return PyBytes_FromString(data->ExchangeProductID);
}

static int PyCThostFtdcCancelOffsetSettingFieldType_set_ExchangeProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelOffsetSettingField::ExchangeProductID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeProductID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // memset(data->ExchangeProductID, 0, sizeof(data->ExchangeProductID));
    // memcpy(data->ExchangeProductID, buf, len);
    strncpy(data->ExchangeProductID, buf, sizeof(data->ExchangeProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcCancelOffsetSettingFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcCancelOffsetSettingFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelOffsetSettingField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcCancelOffsetSettingFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcCancelOffsetSettingFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelOffsetSettingField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcCancelOffsetSettingFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcCancelOffsetSettingFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelOffsetSettingField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单操作状态
/// typedef char TThostFtdcOrderActionStatusType
static PyObject *PyCThostFtdcCancelOffsetSettingFieldType_get_OrderActionStatus(PyObject *self, void *closure) {
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderActionStatus), 1);
}

static int PyCThostFtdcCancelOffsetSettingFieldType_set_OrderActionStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderActionStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcCancelOffsetSettingField::OrderActionStatus)) {
        PyErr_SetString(PyExc_ValueError, "OrderActionStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    data->OrderActionStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 状态信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcCancelOffsetSettingFieldType_get_StatusMsg(PyObject *self, void *closure) {
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->StatusMsg, (Py_ssize_t)sizeof(data->StatusMsg));
    return PyBytes_FromString(data->StatusMsg);
}

static int PyCThostFtdcCancelOffsetSettingFieldType_set_StatusMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "StatusMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelOffsetSettingField::StatusMsg)) {
        PyErr_SetString(PyExc_ValueError, "StatusMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // memset(data->StatusMsg, 0, sizeof(data->StatusMsg));
    // memcpy(data->StatusMsg, buf, len);
    strncpy(data->StatusMsg, buf, sizeof(data->StatusMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作本地编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcCancelOffsetSettingFieldType_get_ActionLocalID(PyObject *self, void *closure) {
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionLocalID, (Py_ssize_t)sizeof(data->ActionLocalID));
    return PyBytes_FromString(data->ActionLocalID);
}

static int PyCThostFtdcCancelOffsetSettingFieldType_set_ActionLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelOffsetSettingField::ActionLocalID)) {
        PyErr_SetString(PyExc_ValueError, "ActionLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // memset(data->ActionLocalID, 0, sizeof(data->ActionLocalID));
    // memcpy(data->ActionLocalID, buf, len);
    strncpy(data->ActionLocalID, buf, sizeof(data->ActionLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcCancelOffsetSettingFieldType_get_ActionDate(PyObject *self, void *closure) {
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionDate, (Py_ssize_t)sizeof(data->ActionDate));
    return PyBytes_FromString(data->ActionDate);
}

static int PyCThostFtdcCancelOffsetSettingFieldType_set_ActionDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelOffsetSettingField::ActionDate)) {
        PyErr_SetString(PyExc_ValueError, "ActionDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // memset(data->ActionDate, 0, sizeof(data->ActionDate));
    // memcpy(data->ActionDate, buf, len);
    strncpy(data->ActionDate, buf, sizeof(data->ActionDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcCancelOffsetSettingFieldType_get_ActionTime(PyObject *self, void *closure) {
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionTime, (Py_ssize_t)sizeof(data->ActionTime));
    return PyBytes_FromString(data->ActionTime);
}

static int PyCThostFtdcCancelOffsetSettingFieldType_set_ActionTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelOffsetSettingField::ActionTime)) {
        PyErr_SetString(PyExc_ValueError, "ActionTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(self);
    CThostFtdcCancelOffsetSettingField *data = &(extra->data);
    // memset(data->ActionTime, 0, sizeof(data->ActionTime));
    // memcpy(data->ActionTime, buf, len);
    strncpy(data->ActionTime, buf, sizeof(data->ActionTime));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcCancelOffsetSettingFieldType_members[] = {
    /// 申请对冲的合约数量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "Volume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcCancelOffsetSettingFieldData, data.Volume),
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
        .offset = offsetof(PyCThostFtdcCancelOffsetSettingFieldData, data.IsOffset),
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
        .offset = offsetof(PyCThostFtdcCancelOffsetSettingFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcCancelOffsetSettingFieldData, data.InstallID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("安装编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcCancelOffsetSettingFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcCancelOffsetSettingFieldType_get_BrokerID,
    .set = PyCThostFtdcCancelOffsetSettingFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcCancelOffsetSettingFieldType_get_InvestorID,
    .set = PyCThostFtdcCancelOffsetSettingFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcCancelOffsetSettingFieldType_get_InstrumentID,
    .set = PyCThostFtdcCancelOffsetSettingFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 标的期货合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "UnderlyingInstrID",
    .get = PyCThostFtdcCancelOffsetSettingFieldType_get_UnderlyingInstrID,
    .set = PyCThostFtdcCancelOffsetSettingFieldType_set_UnderlyingInstrID,
    .doc = PyDoc_STR("标的期货合约代码"),
    },
    /// 产品代码
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "ProductID",
    .get = PyCThostFtdcCancelOffsetSettingFieldType_get_ProductID,
    .set = PyCThostFtdcCancelOffsetSettingFieldType_set_ProductID,
    .doc = PyDoc_STR("产品代码"),
    },
    /// 对冲类型
    /// typedef char TThostFtdcOffsetTypeType
    {
    .name = "OffsetType",
    .get = PyCThostFtdcCancelOffsetSettingFieldType_get_OffsetType,
    .set = PyCThostFtdcCancelOffsetSettingFieldType_set_OffsetType,
    .doc = PyDoc_STR("对冲类型"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcCancelOffsetSettingFieldType_get_UserID,
    .set = PyCThostFtdcCancelOffsetSettingFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcCancelOffsetSettingFieldType_get_ExchangeID,
    .set = PyCThostFtdcCancelOffsetSettingFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcCancelOffsetSettingFieldType_get_IPAddress,
    .set = PyCThostFtdcCancelOffsetSettingFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcCancelOffsetSettingFieldType_get_MacAddress,
    .set = PyCThostFtdcCancelOffsetSettingFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 交易所合约代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "ExchangeInstID",
    .get = PyCThostFtdcCancelOffsetSettingFieldType_get_ExchangeInstID,
    .set = PyCThostFtdcCancelOffsetSettingFieldType_set_ExchangeInstID,
    .doc = PyDoc_STR("交易所合约代码"),
    },
    /// 交易所期权系列号
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "ExchangeSerialNo",
    .get = PyCThostFtdcCancelOffsetSettingFieldType_get_ExchangeSerialNo,
    .set = PyCThostFtdcCancelOffsetSettingFieldType_set_ExchangeSerialNo,
    .doc = PyDoc_STR("交易所期权系列号"),
    },
    /// 交易所产品代码
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "ExchangeProductID",
    .get = PyCThostFtdcCancelOffsetSettingFieldType_get_ExchangeProductID,
    .set = PyCThostFtdcCancelOffsetSettingFieldType_set_ExchangeProductID,
    .doc = PyDoc_STR("交易所产品代码"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcCancelOffsetSettingFieldType_get_TraderID,
    .set = PyCThostFtdcCancelOffsetSettingFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcCancelOffsetSettingFieldType_get_ParticipantID,
    .set = PyCThostFtdcCancelOffsetSettingFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcCancelOffsetSettingFieldType_get_ClientID,
    .set = PyCThostFtdcCancelOffsetSettingFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    {
    .name = "OrderActionStatus",
    .get = PyCThostFtdcCancelOffsetSettingFieldType_get_OrderActionStatus,
    .set = PyCThostFtdcCancelOffsetSettingFieldType_set_OrderActionStatus,
    .doc = PyDoc_STR("报单操作状态"),
    },
    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "StatusMsg",
    .get = PyCThostFtdcCancelOffsetSettingFieldType_get_StatusMsg,
    .set = PyCThostFtdcCancelOffsetSettingFieldType_set_StatusMsg,
    .doc = PyDoc_STR("状态信息"),
    },
    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "ActionLocalID",
    .get = PyCThostFtdcCancelOffsetSettingFieldType_get_ActionLocalID,
    .set = PyCThostFtdcCancelOffsetSettingFieldType_set_ActionLocalID,
    .doc = PyDoc_STR("操作本地编号"),
    },
    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "ActionDate",
    .get = PyCThostFtdcCancelOffsetSettingFieldType_get_ActionDate,
    .set = PyCThostFtdcCancelOffsetSettingFieldType_set_ActionDate,
    .doc = PyDoc_STR("操作日期"),
    },
    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "ActionTime",
    .get = PyCThostFtdcCancelOffsetSettingFieldType_get_ActionTime,
    .set = PyCThostFtdcCancelOffsetSettingFieldType_set_ActionTime,
    .doc = PyDoc_STR("操作时间"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcCancelOffsetSettingFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcCancelOffsetSettingField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("撤销对冲设置")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcCancelOffsetSettingFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcCancelOffsetSettingFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcCancelOffsetSettingFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcCancelOffsetSettingFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcCancelOffsetSettingFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcCancelOffsetSettingFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("撤销对冲设置")},
    {Py_tp_members, PyCThostFtdcCancelOffsetSettingFieldType_members},
    {Py_tp_getset, PyCThostFtdcCancelOffsetSettingFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcCancelOffsetSettingFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcCancelOffsetSettingFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcCancelOffsetSettingFieldType_spec = {
    .name = "PyCTP.CThostFtdcCancelOffsetSettingField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcCancelOffsetSettingFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcCancelOffsetSettingFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcCancelOffsetSettingFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcCancelOffsetSettingFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcCancelOffsetSettingFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcCancelOffsetSettingFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcCancelOffsetSettingFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcCancelOffsetSettingFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcCancelOffsetSettingField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcCancelOffsetSettingField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}