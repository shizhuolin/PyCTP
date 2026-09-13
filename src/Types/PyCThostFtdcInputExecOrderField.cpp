
#include "PyCThostFtdcInputExecOrderField.h"

///输入的执行宣告

static int PyCThostFtdcInputExecOrderFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "reserve1", "ExecOrderRef", "UserID", "Volume", "RequestID", "BusinessUnit", "OffsetFlag", "HedgeFlag", "ActionType", "PosiDirection", "ReservePositionFlag", "CloseFlag", "ExchangeID", "InvestUnitID", "AccountID", "CurrencyID", "ClientID", "reserve2", "MacAddress", "InstrumentID", "IPAddress", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInputExecOrderField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInputExecOrderField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInputExecOrderField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInputExecOrderField_InvestorID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcInputExecOrderField_reserve1 = NULL;
    Py_ssize_t CThostFtdcInputExecOrderField_reserve1_length = 0;

    /// 执行宣告引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcInputExecOrderField_ExecOrderRef = NULL;
    Py_ssize_t CThostFtdcInputExecOrderField_ExecOrderRef_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcInputExecOrderField_UserID = NULL;
    Py_ssize_t CThostFtdcInputExecOrderField_UserID_length = 0;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcInputExecOrderField_Volume = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcInputExecOrderField_RequestID = 0;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    char *CThostFtdcInputExecOrderField_BusinessUnit = NULL;
    Py_ssize_t CThostFtdcInputExecOrderField_BusinessUnit_length = 0;

    /// 开平标志
    /// typedef char TThostFtdcOffsetFlagType
    char CThostFtdcInputExecOrderField_OffsetFlag = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcInputExecOrderField_HedgeFlag = 0;

    /// 执行类型
    /// typedef char TThostFtdcActionTypeType
    char CThostFtdcInputExecOrderField_ActionType = 0;

    /// 保留头寸申请的持仓方向
    /// typedef char TThostFtdcPosiDirectionType
    char CThostFtdcInputExecOrderField_PosiDirection = 0;

    /// 期权行权后是否保留期货头寸的标记,该字段已废弃
    /// typedef char TThostFtdcExecOrderPositionFlagType
    char CThostFtdcInputExecOrderField_ReservePositionFlag = 0;

    /// 期权行权后生成的头寸是否自动平仓
    /// typedef char TThostFtdcExecOrderCloseFlagType
    char CThostFtdcInputExecOrderField_CloseFlag = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcInputExecOrderField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcInputExecOrderField_ExchangeID_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcInputExecOrderField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcInputExecOrderField_InvestUnitID_length = 0;

    /// 资金账号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcInputExecOrderField_AccountID = NULL;
    Py_ssize_t CThostFtdcInputExecOrderField_AccountID_length = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcInputExecOrderField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcInputExecOrderField_CurrencyID_length = 0;

    /// 交易编码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcInputExecOrderField_ClientID = NULL;
    Py_ssize_t CThostFtdcInputExecOrderField_ClientID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcInputExecOrderField_reserve2 = NULL;
    Py_ssize_t CThostFtdcInputExecOrderField_reserve2_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcInputExecOrderField_MacAddress = NULL;
    Py_ssize_t CThostFtdcInputExecOrderField_MacAddress_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcInputExecOrderField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcInputExecOrderField_InstrumentID_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcInputExecOrderField_IPAddress = NULL;
    Py_ssize_t CThostFtdcInputExecOrderField_IPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#iiy#ccccccy#y#y#y#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcInputExecOrderField_BrokerID, &CThostFtdcInputExecOrderField_BrokerID_length
        , &CThostFtdcInputExecOrderField_InvestorID, &CThostFtdcInputExecOrderField_InvestorID_length
        , &CThostFtdcInputExecOrderField_reserve1, &CThostFtdcInputExecOrderField_reserve1_length
        , &CThostFtdcInputExecOrderField_ExecOrderRef, &CThostFtdcInputExecOrderField_ExecOrderRef_length
        , &CThostFtdcInputExecOrderField_UserID, &CThostFtdcInputExecOrderField_UserID_length
        , &CThostFtdcInputExecOrderField_Volume
        , &CThostFtdcInputExecOrderField_RequestID
        , &CThostFtdcInputExecOrderField_BusinessUnit, &CThostFtdcInputExecOrderField_BusinessUnit_length
        , &CThostFtdcInputExecOrderField_OffsetFlag
        , &CThostFtdcInputExecOrderField_HedgeFlag
        , &CThostFtdcInputExecOrderField_ActionType
        , &CThostFtdcInputExecOrderField_PosiDirection
        , &CThostFtdcInputExecOrderField_ReservePositionFlag
        , &CThostFtdcInputExecOrderField_CloseFlag
        , &CThostFtdcInputExecOrderField_ExchangeID, &CThostFtdcInputExecOrderField_ExchangeID_length
        , &CThostFtdcInputExecOrderField_InvestUnitID, &CThostFtdcInputExecOrderField_InvestUnitID_length
        , &CThostFtdcInputExecOrderField_AccountID, &CThostFtdcInputExecOrderField_AccountID_length
        , &CThostFtdcInputExecOrderField_CurrencyID, &CThostFtdcInputExecOrderField_CurrencyID_length
        , &CThostFtdcInputExecOrderField_ClientID, &CThostFtdcInputExecOrderField_ClientID_length
        , &CThostFtdcInputExecOrderField_reserve2, &CThostFtdcInputExecOrderField_reserve2_length
        , &CThostFtdcInputExecOrderField_MacAddress, &CThostFtdcInputExecOrderField_MacAddress_length
        , &CThostFtdcInputExecOrderField_InstrumentID, &CThostFtdcInputExecOrderField_InstrumentID_length
        , &CThostFtdcInputExecOrderField_IPAddress, &CThostFtdcInputExecOrderField_IPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInputExecOrderField_BrokerID != NULL ) {
        if(CThostFtdcInputExecOrderField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInputExecOrderField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInputExecOrderField_BrokerID, CThostFtdcInputExecOrderField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInputExecOrderField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInputExecOrderField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInputExecOrderField_InvestorID != NULL ) {
        if(CThostFtdcInputExecOrderField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInputExecOrderField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInputExecOrderField_InvestorID, CThostFtdcInputExecOrderField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInputExecOrderField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInputExecOrderField_InvestorID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcInputExecOrderField_reserve1 != NULL ) {
        if(CThostFtdcInputExecOrderField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcInputExecOrderField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcInputExecOrderField_reserve1, CThostFtdcInputExecOrderField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcInputExecOrderField_reserve1, sizeof(data->reserve1));
        CThostFtdcInputExecOrderField_reserve1 = NULL;
    }

    /// 执行宣告引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcInputExecOrderField_ExecOrderRef != NULL ) {
        if(CThostFtdcInputExecOrderField_ExecOrderRef_length >= (Py_ssize_t)sizeof(data->ExecOrderRef)) {
            PyErr_Format(PyExc_ValueError, "ExecOrderRef too long: length=%zd (max allowed is 12)", CThostFtdcInputExecOrderField_ExecOrderRef_length);
            return -1;
        }
        // memset(data->ExecOrderRef, 0, sizeof(data->ExecOrderRef));
        // memcpy(data->ExecOrderRef, CThostFtdcInputExecOrderField_ExecOrderRef, CThostFtdcInputExecOrderField_ExecOrderRef_length);
        strncpy(data->ExecOrderRef, CThostFtdcInputExecOrderField_ExecOrderRef, sizeof(data->ExecOrderRef));
        CThostFtdcInputExecOrderField_ExecOrderRef = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcInputExecOrderField_UserID != NULL ) {
        if(CThostFtdcInputExecOrderField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcInputExecOrderField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcInputExecOrderField_UserID, CThostFtdcInputExecOrderField_UserID_length);
        strncpy(data->UserID, CThostFtdcInputExecOrderField_UserID, sizeof(data->UserID));
        CThostFtdcInputExecOrderField_UserID = NULL;
    }

    /// 数量
    /// typedef int TThostFtdcVolumeType
    data->Volume = CThostFtdcInputExecOrderField_Volume;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcInputExecOrderField_RequestID;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    if( CThostFtdcInputExecOrderField_BusinessUnit != NULL ) {
        if(CThostFtdcInputExecOrderField_BusinessUnit_length >= (Py_ssize_t)sizeof(data->BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is 20)", CThostFtdcInputExecOrderField_BusinessUnit_length);
            return -1;
        }
        // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
        // memcpy(data->BusinessUnit, CThostFtdcInputExecOrderField_BusinessUnit, CThostFtdcInputExecOrderField_BusinessUnit_length);
        strncpy(data->BusinessUnit, CThostFtdcInputExecOrderField_BusinessUnit, sizeof(data->BusinessUnit));
        CThostFtdcInputExecOrderField_BusinessUnit = NULL;
    }

    /// 开平标志
    /// typedef char TThostFtdcOffsetFlagType
    data->OffsetFlag = CThostFtdcInputExecOrderField_OffsetFlag;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcInputExecOrderField_HedgeFlag;

    /// 执行类型
    /// typedef char TThostFtdcActionTypeType
    data->ActionType = CThostFtdcInputExecOrderField_ActionType;

    /// 保留头寸申请的持仓方向
    /// typedef char TThostFtdcPosiDirectionType
    data->PosiDirection = CThostFtdcInputExecOrderField_PosiDirection;

    /// 期权行权后是否保留期货头寸的标记,该字段已废弃
    /// typedef char TThostFtdcExecOrderPositionFlagType
    data->ReservePositionFlag = CThostFtdcInputExecOrderField_ReservePositionFlag;

    /// 期权行权后生成的头寸是否自动平仓
    /// typedef char TThostFtdcExecOrderCloseFlagType
    data->CloseFlag = CThostFtdcInputExecOrderField_CloseFlag;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcInputExecOrderField_ExchangeID != NULL ) {
        if(CThostFtdcInputExecOrderField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcInputExecOrderField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcInputExecOrderField_ExchangeID, CThostFtdcInputExecOrderField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcInputExecOrderField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcInputExecOrderField_ExchangeID = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcInputExecOrderField_InvestUnitID != NULL ) {
        if(CThostFtdcInputExecOrderField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcInputExecOrderField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcInputExecOrderField_InvestUnitID, CThostFtdcInputExecOrderField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcInputExecOrderField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcInputExecOrderField_InvestUnitID = NULL;
    }

    /// 资金账号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcInputExecOrderField_AccountID != NULL ) {
        if(CThostFtdcInputExecOrderField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcInputExecOrderField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcInputExecOrderField_AccountID, CThostFtdcInputExecOrderField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcInputExecOrderField_AccountID, sizeof(data->AccountID));
        CThostFtdcInputExecOrderField_AccountID = NULL;
    }

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcInputExecOrderField_CurrencyID != NULL ) {
        if(CThostFtdcInputExecOrderField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcInputExecOrderField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcInputExecOrderField_CurrencyID, CThostFtdcInputExecOrderField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcInputExecOrderField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcInputExecOrderField_CurrencyID = NULL;
    }

    /// 交易编码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcInputExecOrderField_ClientID != NULL ) {
        if(CThostFtdcInputExecOrderField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcInputExecOrderField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcInputExecOrderField_ClientID, CThostFtdcInputExecOrderField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcInputExecOrderField_ClientID, sizeof(data->ClientID));
        CThostFtdcInputExecOrderField_ClientID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcInputExecOrderField_reserve2 != NULL ) {
        if(CThostFtdcInputExecOrderField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 15)", CThostFtdcInputExecOrderField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcInputExecOrderField_reserve2, CThostFtdcInputExecOrderField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcInputExecOrderField_reserve2, sizeof(data->reserve2));
        CThostFtdcInputExecOrderField_reserve2 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcInputExecOrderField_MacAddress != NULL ) {
        if(CThostFtdcInputExecOrderField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcInputExecOrderField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcInputExecOrderField_MacAddress, CThostFtdcInputExecOrderField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcInputExecOrderField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcInputExecOrderField_MacAddress = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcInputExecOrderField_InstrumentID != NULL ) {
        if(CThostFtdcInputExecOrderField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcInputExecOrderField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcInputExecOrderField_InstrumentID, CThostFtdcInputExecOrderField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcInputExecOrderField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcInputExecOrderField_InstrumentID = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcInputExecOrderField_IPAddress != NULL ) {
        if(CThostFtdcInputExecOrderField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcInputExecOrderField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcInputExecOrderField_IPAddress, CThostFtdcInputExecOrderField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcInputExecOrderField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcInputExecOrderField_IPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInputExecOrderFieldType_repr(PyObject *self) {

    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:c,s:c,s:c,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "ExecOrderRef", data->ExecOrderRef//, (Py_ssize_t)sizeof(data->ExecOrderRef)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "Volume", data->Volume
        , "RequestID", data->RequestID
        , "BusinessUnit", data->BusinessUnit//, (Py_ssize_t)sizeof(data->BusinessUnit)
        , "OffsetFlag", data->OffsetFlag
        , "HedgeFlag", data->HedgeFlag
        , "ActionType", data->ActionType
        , "PosiDirection", data->PosiDirection
        , "ReservePositionFlag", data->ReservePositionFlag
        , "CloseFlag", data->CloseFlag
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
        , "ClientID", data->ClientID//, (Py_ssize_t)sizeof(data->ClientID)
        , "reserve2", data->reserve2//, (Py_ssize_t)sizeof(data->reserve2)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputExecOrderField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputExecOrderField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInputExecOrderFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInputExecOrderFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputExecOrderField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInputExecOrderFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInputExecOrderFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputExecOrderField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcInputExecOrderFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcInputExecOrderFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputExecOrderField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 执行宣告引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcInputExecOrderFieldType_get_ExecOrderRef(PyObject *self, void *closure) {
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExecOrderRef, (Py_ssize_t)sizeof(data->ExecOrderRef));
    return PyBytes_FromString(data->ExecOrderRef);
}

static int PyCThostFtdcInputExecOrderFieldType_set_ExecOrderRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExecOrderRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputExecOrderField::ExecOrderRef)) {
        PyErr_SetString(PyExc_ValueError, "ExecOrderRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    // memset(data->ExecOrderRef, 0, sizeof(data->ExecOrderRef));
    // memcpy(data->ExecOrderRef, buf, len);
    strncpy(data->ExecOrderRef, buf, sizeof(data->ExecOrderRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcInputExecOrderFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcInputExecOrderFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputExecOrderField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 业务单元
/// typedef char TThostFtdcBusinessUnitType[21]
static PyObject *PyCThostFtdcInputExecOrderFieldType_get_BusinessUnit(PyObject *self, void *closure) {
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BusinessUnit, (Py_ssize_t)sizeof(data->BusinessUnit));
    return PyBytes_FromString(data->BusinessUnit);
}

static int PyCThostFtdcInputExecOrderFieldType_set_BusinessUnit(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BusinessUnit Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputExecOrderField::BusinessUnit)) {
        PyErr_SetString(PyExc_ValueError, "BusinessUnit must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
    // memcpy(data->BusinessUnit, buf, len);
    strncpy(data->BusinessUnit, buf, sizeof(data->BusinessUnit));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 开平标志
/// typedef char TThostFtdcOffsetFlagType
static PyObject *PyCThostFtdcInputExecOrderFieldType_get_OffsetFlag(PyObject *self, void *closure) {
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OffsetFlag), 1);
}

static int PyCThostFtdcInputExecOrderFieldType_set_OffsetFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OffsetFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInputExecOrderField::OffsetFlag)) {
        PyErr_SetString(PyExc_ValueError, "OffsetFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    data->OffsetFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcInputExecOrderFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcInputExecOrderFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInputExecOrderField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 执行类型
/// typedef char TThostFtdcActionTypeType
static PyObject *PyCThostFtdcInputExecOrderFieldType_get_ActionType(PyObject *self, void *closure) {
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionType), 1);
}

static int PyCThostFtdcInputExecOrderFieldType_set_ActionType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInputExecOrderField::ActionType)) {
        PyErr_SetString(PyExc_ValueError, "ActionType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    data->ActionType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留头寸申请的持仓方向
/// typedef char TThostFtdcPosiDirectionType
static PyObject *PyCThostFtdcInputExecOrderFieldType_get_PosiDirection(PyObject *self, void *closure) {
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->PosiDirection), 1);
}

static int PyCThostFtdcInputExecOrderFieldType_set_PosiDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "PosiDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInputExecOrderField::PosiDirection)) {
        PyErr_SetString(PyExc_ValueError, "PosiDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    data->PosiDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期权行权后是否保留期货头寸的标记,该字段已废弃
/// typedef char TThostFtdcExecOrderPositionFlagType
static PyObject *PyCThostFtdcInputExecOrderFieldType_get_ReservePositionFlag(PyObject *self, void *closure) {
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ReservePositionFlag), 1);
}

static int PyCThostFtdcInputExecOrderFieldType_set_ReservePositionFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ReservePositionFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInputExecOrderField::ReservePositionFlag)) {
        PyErr_SetString(PyExc_ValueError, "ReservePositionFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    data->ReservePositionFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期权行权后生成的头寸是否自动平仓
/// typedef char TThostFtdcExecOrderCloseFlagType
static PyObject *PyCThostFtdcInputExecOrderFieldType_get_CloseFlag(PyObject *self, void *closure) {
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->CloseFlag), 1);
}

static int PyCThostFtdcInputExecOrderFieldType_set_CloseFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CloseFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInputExecOrderField::CloseFlag)) {
        PyErr_SetString(PyExc_ValueError, "CloseFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    data->CloseFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcInputExecOrderFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcInputExecOrderFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputExecOrderField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcInputExecOrderFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcInputExecOrderFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputExecOrderField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 资金账号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcInputExecOrderFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcInputExecOrderFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputExecOrderField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcInputExecOrderFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcInputExecOrderFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputExecOrderField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易编码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcInputExecOrderFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcInputExecOrderFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputExecOrderField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcInputExecOrderFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcInputExecOrderFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputExecOrderField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcInputExecOrderFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcInputExecOrderFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputExecOrderField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcInputExecOrderFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcInputExecOrderFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputExecOrderField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcInputExecOrderFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcInputExecOrderFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputExecOrderField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(self);
    CThostFtdcInputExecOrderField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInputExecOrderFieldType_members[] = {
    /// 数量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "Volume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInputExecOrderFieldData, data.Volume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("数量")
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
        .offset = offsetof(PyCThostFtdcInputExecOrderFieldData, data.RequestID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("请求编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInputExecOrderFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInputExecOrderFieldType_get_BrokerID,
    .set = PyCThostFtdcInputExecOrderFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInputExecOrderFieldType_get_InvestorID,
    .set = PyCThostFtdcInputExecOrderFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcInputExecOrderFieldType_get_reserve1,
    .set = PyCThostFtdcInputExecOrderFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 执行宣告引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "ExecOrderRef",
    .get = PyCThostFtdcInputExecOrderFieldType_get_ExecOrderRef,
    .set = PyCThostFtdcInputExecOrderFieldType_set_ExecOrderRef,
    .doc = PyDoc_STR("执行宣告引用"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcInputExecOrderFieldType_get_UserID,
    .set = PyCThostFtdcInputExecOrderFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    {
    .name = "BusinessUnit",
    .get = PyCThostFtdcInputExecOrderFieldType_get_BusinessUnit,
    .set = PyCThostFtdcInputExecOrderFieldType_set_BusinessUnit,
    .doc = PyDoc_STR("业务单元"),
    },
    /// 开平标志
    /// typedef char TThostFtdcOffsetFlagType
    {
    .name = "OffsetFlag",
    .get = PyCThostFtdcInputExecOrderFieldType_get_OffsetFlag,
    .set = PyCThostFtdcInputExecOrderFieldType_set_OffsetFlag,
    .doc = PyDoc_STR("开平标志"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcInputExecOrderFieldType_get_HedgeFlag,
    .set = PyCThostFtdcInputExecOrderFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 执行类型
    /// typedef char TThostFtdcActionTypeType
    {
    .name = "ActionType",
    .get = PyCThostFtdcInputExecOrderFieldType_get_ActionType,
    .set = PyCThostFtdcInputExecOrderFieldType_set_ActionType,
    .doc = PyDoc_STR("执行类型"),
    },
    /// 保留头寸申请的持仓方向
    /// typedef char TThostFtdcPosiDirectionType
    {
    .name = "PosiDirection",
    .get = PyCThostFtdcInputExecOrderFieldType_get_PosiDirection,
    .set = PyCThostFtdcInputExecOrderFieldType_set_PosiDirection,
    .doc = PyDoc_STR("保留头寸申请的持仓方向"),
    },
    /// 期权行权后是否保留期货头寸的标记,该字段已废弃
    /// typedef char TThostFtdcExecOrderPositionFlagType
    {
    .name = "ReservePositionFlag",
    .get = PyCThostFtdcInputExecOrderFieldType_get_ReservePositionFlag,
    .set = PyCThostFtdcInputExecOrderFieldType_set_ReservePositionFlag,
    .doc = PyDoc_STR("期权行权后是否保留期货头寸的标记,该字段已废弃"),
    },
    /// 期权行权后生成的头寸是否自动平仓
    /// typedef char TThostFtdcExecOrderCloseFlagType
    {
    .name = "CloseFlag",
    .get = PyCThostFtdcInputExecOrderFieldType_get_CloseFlag,
    .set = PyCThostFtdcInputExecOrderFieldType_set_CloseFlag,
    .doc = PyDoc_STR("期权行权后生成的头寸是否自动平仓"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcInputExecOrderFieldType_get_ExchangeID,
    .set = PyCThostFtdcInputExecOrderFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcInputExecOrderFieldType_get_InvestUnitID,
    .set = PyCThostFtdcInputExecOrderFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 资金账号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcInputExecOrderFieldType_get_AccountID,
    .set = PyCThostFtdcInputExecOrderFieldType_set_AccountID,
    .doc = PyDoc_STR("资金账号"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcInputExecOrderFieldType_get_CurrencyID,
    .set = PyCThostFtdcInputExecOrderFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 交易编码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcInputExecOrderFieldType_get_ClientID,
    .set = PyCThostFtdcInputExecOrderFieldType_set_ClientID,
    .doc = PyDoc_STR("交易编码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve2",
    .get = PyCThostFtdcInputExecOrderFieldType_get_reserve2,
    .set = PyCThostFtdcInputExecOrderFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcInputExecOrderFieldType_get_MacAddress,
    .set = PyCThostFtdcInputExecOrderFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcInputExecOrderFieldType_get_InstrumentID,
    .set = PyCThostFtdcInputExecOrderFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcInputExecOrderFieldType_get_IPAddress,
    .set = PyCThostFtdcInputExecOrderFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInputExecOrderFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInputExecOrderField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("输入的执行宣告")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInputExecOrderFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInputExecOrderFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInputExecOrderFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInputExecOrderFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInputExecOrderFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInputExecOrderFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("输入的执行宣告")},
    {Py_tp_members, PyCThostFtdcInputExecOrderFieldType_members},
    {Py_tp_getset, PyCThostFtdcInputExecOrderFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInputExecOrderFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInputExecOrderFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInputExecOrderFieldType_spec = {
    .name = "PyCTP.CThostFtdcInputExecOrderField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInputExecOrderFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInputExecOrderFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInputExecOrderFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInputExecOrderFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInputExecOrderFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInputExecOrderFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInputExecOrderFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInputExecOrderFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInputExecOrderField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputExecOrderField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}