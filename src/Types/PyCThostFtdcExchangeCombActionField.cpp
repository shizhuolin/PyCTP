
#include "PyCThostFtdcExchangeCombActionField.h"

///交易所申请组合信息

static int PyCThostFtdcExchangeCombActionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "Direction", "Volume", "CombDirection", "HedgeFlag", "ActionLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve1", "TraderID", "InstallID", "ActionStatus", "NotifySequence", "TradingDay", "SettlementID", "SequenceNo", "reserve2", "MacAddress", "ComTradeID", "BranchID", "ExchangeInstID", "IPAddress", NULL };


    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    char CThostFtdcExchangeCombActionField_Direction = 0;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcExchangeCombActionField_Volume = 0;

    /// 组合指令方向
    /// typedef char TThostFtdcCombDirectionType
    char CThostFtdcExchangeCombActionField_CombDirection = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcExchangeCombActionField_HedgeFlag = 0;

    /// 本地申请组合编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcExchangeCombActionField_ActionLocalID = NULL;
    Py_ssize_t CThostFtdcExchangeCombActionField_ActionLocalID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcExchangeCombActionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcExchangeCombActionField_ExchangeID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcExchangeCombActionField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcExchangeCombActionField_ParticipantID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcExchangeCombActionField_ClientID = NULL;
    Py_ssize_t CThostFtdcExchangeCombActionField_ClientID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    char *CThostFtdcExchangeCombActionField_reserve1 = NULL;
    Py_ssize_t CThostFtdcExchangeCombActionField_reserve1_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcExchangeCombActionField_TraderID = NULL;
    Py_ssize_t CThostFtdcExchangeCombActionField_TraderID_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcExchangeCombActionField_InstallID = 0;

    /// 组合状态
    /// typedef char TThostFtdcOrderActionStatusType
    char CThostFtdcExchangeCombActionField_ActionStatus = 0;

    /// 报单提示序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcExchangeCombActionField_NotifySequence = 0;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcExchangeCombActionField_TradingDay = NULL;
    Py_ssize_t CThostFtdcExchangeCombActionField_TradingDay_length = 0;

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    int CThostFtdcExchangeCombActionField_SettlementID = 0;

    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcExchangeCombActionField_SequenceNo = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcExchangeCombActionField_reserve2 = NULL;
    Py_ssize_t CThostFtdcExchangeCombActionField_reserve2_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcExchangeCombActionField_MacAddress = NULL;
    Py_ssize_t CThostFtdcExchangeCombActionField_MacAddress_length = 0;

    /// 组合编号
    /// typedef char TThostFtdcTradeIDType[21]
    char *CThostFtdcExchangeCombActionField_ComTradeID = NULL;
    Py_ssize_t CThostFtdcExchangeCombActionField_ComTradeID_length = 0;

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    char *CThostFtdcExchangeCombActionField_BranchID = NULL;
    Py_ssize_t CThostFtdcExchangeCombActionField_BranchID_length = 0;

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcExchangeCombActionField_ExchangeInstID = NULL;
    Py_ssize_t CThostFtdcExchangeCombActionField_ExchangeInstID_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcExchangeCombActionField_IPAddress = NULL;
    Py_ssize_t CThostFtdcExchangeCombActionField_IPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|ciccy#y#y#y#y#y#iciy#iiy#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcExchangeCombActionField_Direction
        , &CThostFtdcExchangeCombActionField_Volume
        , &CThostFtdcExchangeCombActionField_CombDirection
        , &CThostFtdcExchangeCombActionField_HedgeFlag
        , &CThostFtdcExchangeCombActionField_ActionLocalID, &CThostFtdcExchangeCombActionField_ActionLocalID_length
        , &CThostFtdcExchangeCombActionField_ExchangeID, &CThostFtdcExchangeCombActionField_ExchangeID_length
        , &CThostFtdcExchangeCombActionField_ParticipantID, &CThostFtdcExchangeCombActionField_ParticipantID_length
        , &CThostFtdcExchangeCombActionField_ClientID, &CThostFtdcExchangeCombActionField_ClientID_length
        , &CThostFtdcExchangeCombActionField_reserve1, &CThostFtdcExchangeCombActionField_reserve1_length
        , &CThostFtdcExchangeCombActionField_TraderID, &CThostFtdcExchangeCombActionField_TraderID_length
        , &CThostFtdcExchangeCombActionField_InstallID
        , &CThostFtdcExchangeCombActionField_ActionStatus
        , &CThostFtdcExchangeCombActionField_NotifySequence
        , &CThostFtdcExchangeCombActionField_TradingDay, &CThostFtdcExchangeCombActionField_TradingDay_length
        , &CThostFtdcExchangeCombActionField_SettlementID
        , &CThostFtdcExchangeCombActionField_SequenceNo
        , &CThostFtdcExchangeCombActionField_reserve2, &CThostFtdcExchangeCombActionField_reserve2_length
        , &CThostFtdcExchangeCombActionField_MacAddress, &CThostFtdcExchangeCombActionField_MacAddress_length
        , &CThostFtdcExchangeCombActionField_ComTradeID, &CThostFtdcExchangeCombActionField_ComTradeID_length
        , &CThostFtdcExchangeCombActionField_BranchID, &CThostFtdcExchangeCombActionField_BranchID_length
        , &CThostFtdcExchangeCombActionField_ExchangeInstID, &CThostFtdcExchangeCombActionField_ExchangeInstID_length
        , &CThostFtdcExchangeCombActionField_IPAddress, &CThostFtdcExchangeCombActionField_IPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcExchangeCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeCombActionFieldData>(self);
    CThostFtdcExchangeCombActionField *data = &(extra->data);


    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    data->Direction = CThostFtdcExchangeCombActionField_Direction;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    data->Volume = CThostFtdcExchangeCombActionField_Volume;

    /// 组合指令方向
    /// typedef char TThostFtdcCombDirectionType
    data->CombDirection = CThostFtdcExchangeCombActionField_CombDirection;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcExchangeCombActionField_HedgeFlag;

    /// 本地申请组合编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcExchangeCombActionField_ActionLocalID != NULL ) {
        if(CThostFtdcExchangeCombActionField_ActionLocalID_length >= (Py_ssize_t)sizeof(data->ActionLocalID)) {
            PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is 12)", CThostFtdcExchangeCombActionField_ActionLocalID_length);
            return -1;
        }
        // memset(data->ActionLocalID, 0, sizeof(data->ActionLocalID));
        // memcpy(data->ActionLocalID, CThostFtdcExchangeCombActionField_ActionLocalID, CThostFtdcExchangeCombActionField_ActionLocalID_length);
        strncpy(data->ActionLocalID, CThostFtdcExchangeCombActionField_ActionLocalID, sizeof(data->ActionLocalID));
        CThostFtdcExchangeCombActionField_ActionLocalID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcExchangeCombActionField_ExchangeID != NULL ) {
        if(CThostFtdcExchangeCombActionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcExchangeCombActionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcExchangeCombActionField_ExchangeID, CThostFtdcExchangeCombActionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcExchangeCombActionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcExchangeCombActionField_ExchangeID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcExchangeCombActionField_ParticipantID != NULL ) {
        if(CThostFtdcExchangeCombActionField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcExchangeCombActionField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcExchangeCombActionField_ParticipantID, CThostFtdcExchangeCombActionField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcExchangeCombActionField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcExchangeCombActionField_ParticipantID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcExchangeCombActionField_ClientID != NULL ) {
        if(CThostFtdcExchangeCombActionField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcExchangeCombActionField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcExchangeCombActionField_ClientID, CThostFtdcExchangeCombActionField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcExchangeCombActionField_ClientID, sizeof(data->ClientID));
        CThostFtdcExchangeCombActionField_ClientID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    if( CThostFtdcExchangeCombActionField_reserve1 != NULL ) {
        if(CThostFtdcExchangeCombActionField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcExchangeCombActionField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcExchangeCombActionField_reserve1, CThostFtdcExchangeCombActionField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcExchangeCombActionField_reserve1, sizeof(data->reserve1));
        CThostFtdcExchangeCombActionField_reserve1 = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcExchangeCombActionField_TraderID != NULL ) {
        if(CThostFtdcExchangeCombActionField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcExchangeCombActionField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcExchangeCombActionField_TraderID, CThostFtdcExchangeCombActionField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcExchangeCombActionField_TraderID, sizeof(data->TraderID));
        CThostFtdcExchangeCombActionField_TraderID = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcExchangeCombActionField_InstallID;

    /// 组合状态
    /// typedef char TThostFtdcOrderActionStatusType
    data->ActionStatus = CThostFtdcExchangeCombActionField_ActionStatus;

    /// 报单提示序号
    /// typedef int TThostFtdcSequenceNoType
    data->NotifySequence = CThostFtdcExchangeCombActionField_NotifySequence;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcExchangeCombActionField_TradingDay != NULL ) {
        if(CThostFtdcExchangeCombActionField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcExchangeCombActionField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcExchangeCombActionField_TradingDay, CThostFtdcExchangeCombActionField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcExchangeCombActionField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcExchangeCombActionField_TradingDay = NULL;
    }

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    data->SettlementID = CThostFtdcExchangeCombActionField_SettlementID;

    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    data->SequenceNo = CThostFtdcExchangeCombActionField_SequenceNo;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcExchangeCombActionField_reserve2 != NULL ) {
        if(CThostFtdcExchangeCombActionField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 15)", CThostFtdcExchangeCombActionField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcExchangeCombActionField_reserve2, CThostFtdcExchangeCombActionField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcExchangeCombActionField_reserve2, sizeof(data->reserve2));
        CThostFtdcExchangeCombActionField_reserve2 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcExchangeCombActionField_MacAddress != NULL ) {
        if(CThostFtdcExchangeCombActionField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcExchangeCombActionField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcExchangeCombActionField_MacAddress, CThostFtdcExchangeCombActionField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcExchangeCombActionField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcExchangeCombActionField_MacAddress = NULL;
    }

    /// 组合编号
    /// typedef char TThostFtdcTradeIDType[21]
    if( CThostFtdcExchangeCombActionField_ComTradeID != NULL ) {
        if(CThostFtdcExchangeCombActionField_ComTradeID_length >= (Py_ssize_t)sizeof(data->ComTradeID)) {
            PyErr_Format(PyExc_ValueError, "ComTradeID too long: length=%zd (max allowed is 20)", CThostFtdcExchangeCombActionField_ComTradeID_length);
            return -1;
        }
        // memset(data->ComTradeID, 0, sizeof(data->ComTradeID));
        // memcpy(data->ComTradeID, CThostFtdcExchangeCombActionField_ComTradeID, CThostFtdcExchangeCombActionField_ComTradeID_length);
        strncpy(data->ComTradeID, CThostFtdcExchangeCombActionField_ComTradeID, sizeof(data->ComTradeID));
        CThostFtdcExchangeCombActionField_ComTradeID = NULL;
    }

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    if( CThostFtdcExchangeCombActionField_BranchID != NULL ) {
        if(CThostFtdcExchangeCombActionField_BranchID_length >= (Py_ssize_t)sizeof(data->BranchID)) {
            PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is 8)", CThostFtdcExchangeCombActionField_BranchID_length);
            return -1;
        }
        // memset(data->BranchID, 0, sizeof(data->BranchID));
        // memcpy(data->BranchID, CThostFtdcExchangeCombActionField_BranchID, CThostFtdcExchangeCombActionField_BranchID_length);
        strncpy(data->BranchID, CThostFtdcExchangeCombActionField_BranchID, sizeof(data->BranchID));
        CThostFtdcExchangeCombActionField_BranchID = NULL;
    }

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcExchangeCombActionField_ExchangeInstID != NULL ) {
        if(CThostFtdcExchangeCombActionField_ExchangeInstID_length >= (Py_ssize_t)sizeof(data->ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is 80)", CThostFtdcExchangeCombActionField_ExchangeInstID_length);
            return -1;
        }
        // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
        // memcpy(data->ExchangeInstID, CThostFtdcExchangeCombActionField_ExchangeInstID, CThostFtdcExchangeCombActionField_ExchangeInstID_length);
        strncpy(data->ExchangeInstID, CThostFtdcExchangeCombActionField_ExchangeInstID, sizeof(data->ExchangeInstID));
        CThostFtdcExchangeCombActionField_ExchangeInstID = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcExchangeCombActionField_IPAddress != NULL ) {
        if(CThostFtdcExchangeCombActionField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcExchangeCombActionField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcExchangeCombActionField_IPAddress, CThostFtdcExchangeCombActionField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcExchangeCombActionField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcExchangeCombActionField_IPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcExchangeCombActionFieldType_repr(PyObject *self) {

    PyCThostFtdcExchangeCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeCombActionFieldData>(self);
    CThostFtdcExchangeCombActionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:c,s:i,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y}"
        , "Direction", data->Direction
        , "Volume", data->Volume
        , "CombDirection", data->CombDirection
        , "HedgeFlag", data->HedgeFlag
        , "ActionLocalID", data->ActionLocalID//, (Py_ssize_t)sizeof(data->ActionLocalID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ParticipantID", data->ParticipantID//, (Py_ssize_t)sizeof(data->ParticipantID)
        , "ClientID", data->ClientID//, (Py_ssize_t)sizeof(data->ClientID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "TraderID", data->TraderID//, (Py_ssize_t)sizeof(data->TraderID)
        , "InstallID", data->InstallID
        , "ActionStatus", data->ActionStatus
        , "NotifySequence", data->NotifySequence
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "SettlementID", data->SettlementID
        , "SequenceNo", data->SequenceNo
        , "reserve2", data->reserve2//, (Py_ssize_t)sizeof(data->reserve2)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
        , "ComTradeID", data->ComTradeID//, (Py_ssize_t)sizeof(data->ComTradeID)
        , "BranchID", data->BranchID//, (Py_ssize_t)sizeof(data->BranchID)
        , "ExchangeInstID", data->ExchangeInstID//, (Py_ssize_t)sizeof(data->ExchangeInstID)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeCombActionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeCombActionField repr");
        return NULL;
    }

    return repr;
}


/// 买卖方向
/// typedef char TThostFtdcDirectionType
static PyObject *PyCThostFtdcExchangeCombActionFieldType_get_Direction(PyObject *self, void *closure) {
    PyCThostFtdcExchangeCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeCombActionFieldData>(self);
    CThostFtdcExchangeCombActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Direction), 1);
}

static int PyCThostFtdcExchangeCombActionFieldType_set_Direction(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeCombActionField::Direction)) {
        PyErr_SetString(PyExc_ValueError, "Direction must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeCombActionFieldData>(self);
    CThostFtdcExchangeCombActionField *data = &(extra->data);
    data->Direction = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 组合指令方向
/// typedef char TThostFtdcCombDirectionType
static PyObject *PyCThostFtdcExchangeCombActionFieldType_get_CombDirection(PyObject *self, void *closure) {
    PyCThostFtdcExchangeCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeCombActionFieldData>(self);
    CThostFtdcExchangeCombActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->CombDirection), 1);
}

static int PyCThostFtdcExchangeCombActionFieldType_set_CombDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeCombActionField::CombDirection)) {
        PyErr_SetString(PyExc_ValueError, "CombDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeCombActionFieldData>(self);
    CThostFtdcExchangeCombActionField *data = &(extra->data);
    data->CombDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcExchangeCombActionFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcExchangeCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeCombActionFieldData>(self);
    CThostFtdcExchangeCombActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcExchangeCombActionFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeCombActionField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeCombActionFieldData>(self);
    CThostFtdcExchangeCombActionField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 本地申请组合编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcExchangeCombActionFieldType_get_ActionLocalID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeCombActionFieldData>(self);
    CThostFtdcExchangeCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionLocalID, (Py_ssize_t)sizeof(data->ActionLocalID));
    return PyBytes_FromString(data->ActionLocalID);
}

static int PyCThostFtdcExchangeCombActionFieldType_set_ActionLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeCombActionField::ActionLocalID)) {
        PyErr_SetString(PyExc_ValueError, "ActionLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeCombActionFieldData>(self);
    CThostFtdcExchangeCombActionField *data = &(extra->data);
    // memset(data->ActionLocalID, 0, sizeof(data->ActionLocalID));
    // memcpy(data->ActionLocalID, buf, len);
    strncpy(data->ActionLocalID, buf, sizeof(data->ActionLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcExchangeCombActionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeCombActionFieldData>(self);
    CThostFtdcExchangeCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcExchangeCombActionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeCombActionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeCombActionFieldData>(self);
    CThostFtdcExchangeCombActionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcExchangeCombActionFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeCombActionFieldData>(self);
    CThostFtdcExchangeCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcExchangeCombActionFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeCombActionField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeCombActionFieldData>(self);
    CThostFtdcExchangeCombActionField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcExchangeCombActionFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeCombActionFieldData>(self);
    CThostFtdcExchangeCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcExchangeCombActionFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeCombActionField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeCombActionFieldData>(self);
    CThostFtdcExchangeCombActionField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldExchangeInstIDType[31]
static PyObject *PyCThostFtdcExchangeCombActionFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcExchangeCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeCombActionFieldData>(self);
    CThostFtdcExchangeCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcExchangeCombActionFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeCombActionField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeCombActionFieldData>(self);
    CThostFtdcExchangeCombActionField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcExchangeCombActionFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeCombActionFieldData>(self);
    CThostFtdcExchangeCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcExchangeCombActionFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeCombActionField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeCombActionFieldData>(self);
    CThostFtdcExchangeCombActionField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 组合状态
/// typedef char TThostFtdcOrderActionStatusType
static PyObject *PyCThostFtdcExchangeCombActionFieldType_get_ActionStatus(PyObject *self, void *closure) {
    PyCThostFtdcExchangeCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeCombActionFieldData>(self);
    CThostFtdcExchangeCombActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionStatus), 1);
}

static int PyCThostFtdcExchangeCombActionFieldType_set_ActionStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeCombActionField::ActionStatus)) {
        PyErr_SetString(PyExc_ValueError, "ActionStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeCombActionFieldData>(self);
    CThostFtdcExchangeCombActionField *data = &(extra->data);
    data->ActionStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcExchangeCombActionFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcExchangeCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeCombActionFieldData>(self);
    CThostFtdcExchangeCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcExchangeCombActionFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeCombActionField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeCombActionFieldData>(self);
    CThostFtdcExchangeCombActionField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcExchangeCombActionFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcExchangeCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeCombActionFieldData>(self);
    CThostFtdcExchangeCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcExchangeCombActionFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeCombActionField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeCombActionFieldData>(self);
    CThostFtdcExchangeCombActionField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcExchangeCombActionFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcExchangeCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeCombActionFieldData>(self);
    CThostFtdcExchangeCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcExchangeCombActionFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeCombActionField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeCombActionFieldData>(self);
    CThostFtdcExchangeCombActionField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 组合编号
/// typedef char TThostFtdcTradeIDType[21]
static PyObject *PyCThostFtdcExchangeCombActionFieldType_get_ComTradeID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeCombActionFieldData>(self);
    CThostFtdcExchangeCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ComTradeID, (Py_ssize_t)sizeof(data->ComTradeID));
    return PyBytes_FromString(data->ComTradeID);
}

static int PyCThostFtdcExchangeCombActionFieldType_set_ComTradeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ComTradeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeCombActionField::ComTradeID)) {
        PyErr_SetString(PyExc_ValueError, "ComTradeID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeCombActionFieldData>(self);
    CThostFtdcExchangeCombActionField *data = &(extra->data);
    // memset(data->ComTradeID, 0, sizeof(data->ComTradeID));
    // memcpy(data->ComTradeID, buf, len);
    strncpy(data->ComTradeID, buf, sizeof(data->ComTradeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 营业部编号
/// typedef char TThostFtdcBranchIDType[9]
static PyObject *PyCThostFtdcExchangeCombActionFieldType_get_BranchID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeCombActionFieldData>(self);
    CThostFtdcExchangeCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BranchID, (Py_ssize_t)sizeof(data->BranchID));
    return PyBytes_FromString(data->BranchID);
}

static int PyCThostFtdcExchangeCombActionFieldType_set_BranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeCombActionField::BranchID)) {
        PyErr_SetString(PyExc_ValueError, "BranchID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeCombActionFieldData>(self);
    CThostFtdcExchangeCombActionField *data = &(extra->data);
    // memset(data->BranchID, 0, sizeof(data->BranchID));
    // memcpy(data->BranchID, buf, len);
    strncpy(data->BranchID, buf, sizeof(data->BranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约在交易所的代码
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcExchangeCombActionFieldType_get_ExchangeInstID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeCombActionFieldData>(self);
    CThostFtdcExchangeCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeInstID, (Py_ssize_t)sizeof(data->ExchangeInstID));
    return PyBytes_FromString(data->ExchangeInstID);
}

static int PyCThostFtdcExchangeCombActionFieldType_set_ExchangeInstID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeCombActionField::ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeCombActionFieldData>(self);
    CThostFtdcExchangeCombActionField *data = &(extra->data);
    // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
    // memcpy(data->ExchangeInstID, buf, len);
    strncpy(data->ExchangeInstID, buf, sizeof(data->ExchangeInstID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcExchangeCombActionFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcExchangeCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeCombActionFieldData>(self);
    CThostFtdcExchangeCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcExchangeCombActionFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeCombActionField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeCombActionFieldData>(self);
    CThostFtdcExchangeCombActionField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcExchangeCombActionFieldType_members[] = {
    /// 数量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "Volume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeCombActionFieldData, data.Volume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("数量")
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
        .offset = offsetof(PyCThostFtdcExchangeCombActionFieldData, data.InstallID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("安装编号")
    },
    /// 报单提示序号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "NotifySequence",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeCombActionFieldData, data.NotifySequence),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("报单提示序号")
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
        .offset = offsetof(PyCThostFtdcExchangeCombActionFieldData, data.SettlementID),
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
        .offset = offsetof(PyCThostFtdcExchangeCombActionFieldData, data.SequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcExchangeCombActionFieldType_getsets[] = {
    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    {
    .name = "Direction",
    .get = PyCThostFtdcExchangeCombActionFieldType_get_Direction,
    .set = PyCThostFtdcExchangeCombActionFieldType_set_Direction,
    .doc = PyDoc_STR("买卖方向"),
    },
    /// 组合指令方向
    /// typedef char TThostFtdcCombDirectionType
    {
    .name = "CombDirection",
    .get = PyCThostFtdcExchangeCombActionFieldType_get_CombDirection,
    .set = PyCThostFtdcExchangeCombActionFieldType_set_CombDirection,
    .doc = PyDoc_STR("组合指令方向"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcExchangeCombActionFieldType_get_HedgeFlag,
    .set = PyCThostFtdcExchangeCombActionFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 本地申请组合编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "ActionLocalID",
    .get = PyCThostFtdcExchangeCombActionFieldType_get_ActionLocalID,
    .set = PyCThostFtdcExchangeCombActionFieldType_set_ActionLocalID,
    .doc = PyDoc_STR("本地申请组合编号"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcExchangeCombActionFieldType_get_ExchangeID,
    .set = PyCThostFtdcExchangeCombActionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcExchangeCombActionFieldType_get_ParticipantID,
    .set = PyCThostFtdcExchangeCombActionFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcExchangeCombActionFieldType_get_ClientID,
    .set = PyCThostFtdcExchangeCombActionFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcExchangeCombActionFieldType_get_reserve1,
    .set = PyCThostFtdcExchangeCombActionFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcExchangeCombActionFieldType_get_TraderID,
    .set = PyCThostFtdcExchangeCombActionFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    /// 组合状态
    /// typedef char TThostFtdcOrderActionStatusType
    {
    .name = "ActionStatus",
    .get = PyCThostFtdcExchangeCombActionFieldType_get_ActionStatus,
    .set = PyCThostFtdcExchangeCombActionFieldType_set_ActionStatus,
    .doc = PyDoc_STR("组合状态"),
    },
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcExchangeCombActionFieldType_get_TradingDay,
    .set = PyCThostFtdcExchangeCombActionFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve2",
    .get = PyCThostFtdcExchangeCombActionFieldType_get_reserve2,
    .set = PyCThostFtdcExchangeCombActionFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcExchangeCombActionFieldType_get_MacAddress,
    .set = PyCThostFtdcExchangeCombActionFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 组合编号
    /// typedef char TThostFtdcTradeIDType[21]
    {
    .name = "ComTradeID",
    .get = PyCThostFtdcExchangeCombActionFieldType_get_ComTradeID,
    .set = PyCThostFtdcExchangeCombActionFieldType_set_ComTradeID,
    .doc = PyDoc_STR("组合编号"),
    },
    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    {
    .name = "BranchID",
    .get = PyCThostFtdcExchangeCombActionFieldType_get_BranchID,
    .set = PyCThostFtdcExchangeCombActionFieldType_set_BranchID,
    .doc = PyDoc_STR("营业部编号"),
    },
    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "ExchangeInstID",
    .get = PyCThostFtdcExchangeCombActionFieldType_get_ExchangeInstID,
    .set = PyCThostFtdcExchangeCombActionFieldType_set_ExchangeInstID,
    .doc = PyDoc_STR("合约在交易所的代码"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcExchangeCombActionFieldType_get_IPAddress,
    .set = PyCThostFtdcExchangeCombActionFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcExchangeCombActionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcExchangeCombActionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("交易所申请组合信息")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcExchangeCombActionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcExchangeCombActionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcExchangeCombActionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcExchangeCombActionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcExchangeCombActionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcExchangeCombActionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("交易所申请组合信息")},
    {Py_tp_members, PyCThostFtdcExchangeCombActionFieldType_members},
    {Py_tp_getset, PyCThostFtdcExchangeCombActionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcExchangeCombActionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcExchangeCombActionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcExchangeCombActionFieldType_spec = {
    .name = "PyCTP.CThostFtdcExchangeCombActionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcExchangeCombActionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcExchangeCombActionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcExchangeCombActionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcExchangeCombActionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcExchangeCombActionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcExchangeCombActionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcExchangeCombActionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcExchangeCombActionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcExchangeCombActionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeCombActionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}