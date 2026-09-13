
#include "PyCThostFtdcInputOptionSelfCloseField.h"

///输入的期权自对冲

static int PyCThostFtdcInputOptionSelfCloseFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "reserve1", "OptionSelfCloseRef", "UserID", "Volume", "RequestID", "BusinessUnit", "HedgeFlag", "OptSelfCloseFlag", "ExchangeID", "InvestUnitID", "AccountID", "CurrencyID", "ClientID", "reserve2", "MacAddress", "InstrumentID", "IPAddress", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInputOptionSelfCloseField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInputOptionSelfCloseField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInputOptionSelfCloseField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInputOptionSelfCloseField_InvestorID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcInputOptionSelfCloseField_reserve1 = NULL;
    Py_ssize_t CThostFtdcInputOptionSelfCloseField_reserve1_length = 0;

    /// 期权自对冲引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcInputOptionSelfCloseField_OptionSelfCloseRef = NULL;
    Py_ssize_t CThostFtdcInputOptionSelfCloseField_OptionSelfCloseRef_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcInputOptionSelfCloseField_UserID = NULL;
    Py_ssize_t CThostFtdcInputOptionSelfCloseField_UserID_length = 0;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcInputOptionSelfCloseField_Volume = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcInputOptionSelfCloseField_RequestID = 0;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    char *CThostFtdcInputOptionSelfCloseField_BusinessUnit = NULL;
    Py_ssize_t CThostFtdcInputOptionSelfCloseField_BusinessUnit_length = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcInputOptionSelfCloseField_HedgeFlag = 0;

    /// 期权行权的头寸是否自对冲
    /// typedef char TThostFtdcOptSelfCloseFlagType
    char CThostFtdcInputOptionSelfCloseField_OptSelfCloseFlag = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcInputOptionSelfCloseField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcInputOptionSelfCloseField_ExchangeID_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcInputOptionSelfCloseField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcInputOptionSelfCloseField_InvestUnitID_length = 0;

    /// 资金账号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcInputOptionSelfCloseField_AccountID = NULL;
    Py_ssize_t CThostFtdcInputOptionSelfCloseField_AccountID_length = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcInputOptionSelfCloseField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcInputOptionSelfCloseField_CurrencyID_length = 0;

    /// 交易编码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcInputOptionSelfCloseField_ClientID = NULL;
    Py_ssize_t CThostFtdcInputOptionSelfCloseField_ClientID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcInputOptionSelfCloseField_reserve2 = NULL;
    Py_ssize_t CThostFtdcInputOptionSelfCloseField_reserve2_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcInputOptionSelfCloseField_MacAddress = NULL;
    Py_ssize_t CThostFtdcInputOptionSelfCloseField_MacAddress_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcInputOptionSelfCloseField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcInputOptionSelfCloseField_InstrumentID_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcInputOptionSelfCloseField_IPAddress = NULL;
    Py_ssize_t CThostFtdcInputOptionSelfCloseField_IPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#iiy#ccy#y#y#y#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcInputOptionSelfCloseField_BrokerID, &CThostFtdcInputOptionSelfCloseField_BrokerID_length
        , &CThostFtdcInputOptionSelfCloseField_InvestorID, &CThostFtdcInputOptionSelfCloseField_InvestorID_length
        , &CThostFtdcInputOptionSelfCloseField_reserve1, &CThostFtdcInputOptionSelfCloseField_reserve1_length
        , &CThostFtdcInputOptionSelfCloseField_OptionSelfCloseRef, &CThostFtdcInputOptionSelfCloseField_OptionSelfCloseRef_length
        , &CThostFtdcInputOptionSelfCloseField_UserID, &CThostFtdcInputOptionSelfCloseField_UserID_length
        , &CThostFtdcInputOptionSelfCloseField_Volume
        , &CThostFtdcInputOptionSelfCloseField_RequestID
        , &CThostFtdcInputOptionSelfCloseField_BusinessUnit, &CThostFtdcInputOptionSelfCloseField_BusinessUnit_length
        , &CThostFtdcInputOptionSelfCloseField_HedgeFlag
        , &CThostFtdcInputOptionSelfCloseField_OptSelfCloseFlag
        , &CThostFtdcInputOptionSelfCloseField_ExchangeID, &CThostFtdcInputOptionSelfCloseField_ExchangeID_length
        , &CThostFtdcInputOptionSelfCloseField_InvestUnitID, &CThostFtdcInputOptionSelfCloseField_InvestUnitID_length
        , &CThostFtdcInputOptionSelfCloseField_AccountID, &CThostFtdcInputOptionSelfCloseField_AccountID_length
        , &CThostFtdcInputOptionSelfCloseField_CurrencyID, &CThostFtdcInputOptionSelfCloseField_CurrencyID_length
        , &CThostFtdcInputOptionSelfCloseField_ClientID, &CThostFtdcInputOptionSelfCloseField_ClientID_length
        , &CThostFtdcInputOptionSelfCloseField_reserve2, &CThostFtdcInputOptionSelfCloseField_reserve2_length
        , &CThostFtdcInputOptionSelfCloseField_MacAddress, &CThostFtdcInputOptionSelfCloseField_MacAddress_length
        , &CThostFtdcInputOptionSelfCloseField_InstrumentID, &CThostFtdcInputOptionSelfCloseField_InstrumentID_length
        , &CThostFtdcInputOptionSelfCloseField_IPAddress, &CThostFtdcInputOptionSelfCloseField_IPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcInputOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(self);
    CThostFtdcInputOptionSelfCloseField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInputOptionSelfCloseField_BrokerID != NULL ) {
        if(CThostFtdcInputOptionSelfCloseField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInputOptionSelfCloseField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInputOptionSelfCloseField_BrokerID, CThostFtdcInputOptionSelfCloseField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInputOptionSelfCloseField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInputOptionSelfCloseField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInputOptionSelfCloseField_InvestorID != NULL ) {
        if(CThostFtdcInputOptionSelfCloseField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInputOptionSelfCloseField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInputOptionSelfCloseField_InvestorID, CThostFtdcInputOptionSelfCloseField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInputOptionSelfCloseField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInputOptionSelfCloseField_InvestorID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcInputOptionSelfCloseField_reserve1 != NULL ) {
        if(CThostFtdcInputOptionSelfCloseField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcInputOptionSelfCloseField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcInputOptionSelfCloseField_reserve1, CThostFtdcInputOptionSelfCloseField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcInputOptionSelfCloseField_reserve1, sizeof(data->reserve1));
        CThostFtdcInputOptionSelfCloseField_reserve1 = NULL;
    }

    /// 期权自对冲引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcInputOptionSelfCloseField_OptionSelfCloseRef != NULL ) {
        if(CThostFtdcInputOptionSelfCloseField_OptionSelfCloseRef_length >= (Py_ssize_t)sizeof(data->OptionSelfCloseRef)) {
            PyErr_Format(PyExc_ValueError, "OptionSelfCloseRef too long: length=%zd (max allowed is 12)", CThostFtdcInputOptionSelfCloseField_OptionSelfCloseRef_length);
            return -1;
        }
        // memset(data->OptionSelfCloseRef, 0, sizeof(data->OptionSelfCloseRef));
        // memcpy(data->OptionSelfCloseRef, CThostFtdcInputOptionSelfCloseField_OptionSelfCloseRef, CThostFtdcInputOptionSelfCloseField_OptionSelfCloseRef_length);
        strncpy(data->OptionSelfCloseRef, CThostFtdcInputOptionSelfCloseField_OptionSelfCloseRef, sizeof(data->OptionSelfCloseRef));
        CThostFtdcInputOptionSelfCloseField_OptionSelfCloseRef = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcInputOptionSelfCloseField_UserID != NULL ) {
        if(CThostFtdcInputOptionSelfCloseField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcInputOptionSelfCloseField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcInputOptionSelfCloseField_UserID, CThostFtdcInputOptionSelfCloseField_UserID_length);
        strncpy(data->UserID, CThostFtdcInputOptionSelfCloseField_UserID, sizeof(data->UserID));
        CThostFtdcInputOptionSelfCloseField_UserID = NULL;
    }

    /// 数量
    /// typedef int TThostFtdcVolumeType
    data->Volume = CThostFtdcInputOptionSelfCloseField_Volume;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcInputOptionSelfCloseField_RequestID;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    if( CThostFtdcInputOptionSelfCloseField_BusinessUnit != NULL ) {
        if(CThostFtdcInputOptionSelfCloseField_BusinessUnit_length >= (Py_ssize_t)sizeof(data->BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is 20)", CThostFtdcInputOptionSelfCloseField_BusinessUnit_length);
            return -1;
        }
        // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
        // memcpy(data->BusinessUnit, CThostFtdcInputOptionSelfCloseField_BusinessUnit, CThostFtdcInputOptionSelfCloseField_BusinessUnit_length);
        strncpy(data->BusinessUnit, CThostFtdcInputOptionSelfCloseField_BusinessUnit, sizeof(data->BusinessUnit));
        CThostFtdcInputOptionSelfCloseField_BusinessUnit = NULL;
    }

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcInputOptionSelfCloseField_HedgeFlag;

    /// 期权行权的头寸是否自对冲
    /// typedef char TThostFtdcOptSelfCloseFlagType
    data->OptSelfCloseFlag = CThostFtdcInputOptionSelfCloseField_OptSelfCloseFlag;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcInputOptionSelfCloseField_ExchangeID != NULL ) {
        if(CThostFtdcInputOptionSelfCloseField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcInputOptionSelfCloseField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcInputOptionSelfCloseField_ExchangeID, CThostFtdcInputOptionSelfCloseField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcInputOptionSelfCloseField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcInputOptionSelfCloseField_ExchangeID = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcInputOptionSelfCloseField_InvestUnitID != NULL ) {
        if(CThostFtdcInputOptionSelfCloseField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcInputOptionSelfCloseField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcInputOptionSelfCloseField_InvestUnitID, CThostFtdcInputOptionSelfCloseField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcInputOptionSelfCloseField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcInputOptionSelfCloseField_InvestUnitID = NULL;
    }

    /// 资金账号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcInputOptionSelfCloseField_AccountID != NULL ) {
        if(CThostFtdcInputOptionSelfCloseField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcInputOptionSelfCloseField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcInputOptionSelfCloseField_AccountID, CThostFtdcInputOptionSelfCloseField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcInputOptionSelfCloseField_AccountID, sizeof(data->AccountID));
        CThostFtdcInputOptionSelfCloseField_AccountID = NULL;
    }

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcInputOptionSelfCloseField_CurrencyID != NULL ) {
        if(CThostFtdcInputOptionSelfCloseField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcInputOptionSelfCloseField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcInputOptionSelfCloseField_CurrencyID, CThostFtdcInputOptionSelfCloseField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcInputOptionSelfCloseField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcInputOptionSelfCloseField_CurrencyID = NULL;
    }

    /// 交易编码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcInputOptionSelfCloseField_ClientID != NULL ) {
        if(CThostFtdcInputOptionSelfCloseField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcInputOptionSelfCloseField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcInputOptionSelfCloseField_ClientID, CThostFtdcInputOptionSelfCloseField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcInputOptionSelfCloseField_ClientID, sizeof(data->ClientID));
        CThostFtdcInputOptionSelfCloseField_ClientID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcInputOptionSelfCloseField_reserve2 != NULL ) {
        if(CThostFtdcInputOptionSelfCloseField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 15)", CThostFtdcInputOptionSelfCloseField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcInputOptionSelfCloseField_reserve2, CThostFtdcInputOptionSelfCloseField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcInputOptionSelfCloseField_reserve2, sizeof(data->reserve2));
        CThostFtdcInputOptionSelfCloseField_reserve2 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcInputOptionSelfCloseField_MacAddress != NULL ) {
        if(CThostFtdcInputOptionSelfCloseField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcInputOptionSelfCloseField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcInputOptionSelfCloseField_MacAddress, CThostFtdcInputOptionSelfCloseField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcInputOptionSelfCloseField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcInputOptionSelfCloseField_MacAddress = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcInputOptionSelfCloseField_InstrumentID != NULL ) {
        if(CThostFtdcInputOptionSelfCloseField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcInputOptionSelfCloseField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcInputOptionSelfCloseField_InstrumentID, CThostFtdcInputOptionSelfCloseField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcInputOptionSelfCloseField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcInputOptionSelfCloseField_InstrumentID = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcInputOptionSelfCloseField_IPAddress != NULL ) {
        if(CThostFtdcInputOptionSelfCloseField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcInputOptionSelfCloseField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcInputOptionSelfCloseField_IPAddress, CThostFtdcInputOptionSelfCloseField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcInputOptionSelfCloseField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcInputOptionSelfCloseField_IPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInputOptionSelfCloseFieldType_repr(PyObject *self) {

    PyCThostFtdcInputOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(self);
    CThostFtdcInputOptionSelfCloseField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "OptionSelfCloseRef", data->OptionSelfCloseRef//, (Py_ssize_t)sizeof(data->OptionSelfCloseRef)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "Volume", data->Volume
        , "RequestID", data->RequestID
        , "BusinessUnit", data->BusinessUnit//, (Py_ssize_t)sizeof(data->BusinessUnit)
        , "HedgeFlag", data->HedgeFlag
        , "OptSelfCloseFlag", data->OptSelfCloseFlag
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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputOptionSelfCloseField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputOptionSelfCloseField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInputOptionSelfCloseFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInputOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(self);
    CThostFtdcInputOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInputOptionSelfCloseFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOptionSelfCloseField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(self);
    CThostFtdcInputOptionSelfCloseField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInputOptionSelfCloseFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInputOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(self);
    CThostFtdcInputOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInputOptionSelfCloseFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOptionSelfCloseField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(self);
    CThostFtdcInputOptionSelfCloseField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcInputOptionSelfCloseFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcInputOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(self);
    CThostFtdcInputOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcInputOptionSelfCloseFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOptionSelfCloseField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(self);
    CThostFtdcInputOptionSelfCloseField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期权自对冲引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcInputOptionSelfCloseFieldType_get_OptionSelfCloseRef(PyObject *self, void *closure) {
    PyCThostFtdcInputOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(self);
    CThostFtdcInputOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OptionSelfCloseRef, (Py_ssize_t)sizeof(data->OptionSelfCloseRef));
    return PyBytes_FromString(data->OptionSelfCloseRef);
}

static int PyCThostFtdcInputOptionSelfCloseFieldType_set_OptionSelfCloseRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OptionSelfCloseRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOptionSelfCloseField::OptionSelfCloseRef)) {
        PyErr_SetString(PyExc_ValueError, "OptionSelfCloseRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(self);
    CThostFtdcInputOptionSelfCloseField *data = &(extra->data);
    // memset(data->OptionSelfCloseRef, 0, sizeof(data->OptionSelfCloseRef));
    // memcpy(data->OptionSelfCloseRef, buf, len);
    strncpy(data->OptionSelfCloseRef, buf, sizeof(data->OptionSelfCloseRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcInputOptionSelfCloseFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcInputOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(self);
    CThostFtdcInputOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcInputOptionSelfCloseFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOptionSelfCloseField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(self);
    CThostFtdcInputOptionSelfCloseField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 业务单元
/// typedef char TThostFtdcBusinessUnitType[21]
static PyObject *PyCThostFtdcInputOptionSelfCloseFieldType_get_BusinessUnit(PyObject *self, void *closure) {
    PyCThostFtdcInputOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(self);
    CThostFtdcInputOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BusinessUnit, (Py_ssize_t)sizeof(data->BusinessUnit));
    return PyBytes_FromString(data->BusinessUnit);
}

static int PyCThostFtdcInputOptionSelfCloseFieldType_set_BusinessUnit(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BusinessUnit Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOptionSelfCloseField::BusinessUnit)) {
        PyErr_SetString(PyExc_ValueError, "BusinessUnit must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(self);
    CThostFtdcInputOptionSelfCloseField *data = &(extra->data);
    // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
    // memcpy(data->BusinessUnit, buf, len);
    strncpy(data->BusinessUnit, buf, sizeof(data->BusinessUnit));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcInputOptionSelfCloseFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcInputOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(self);
    CThostFtdcInputOptionSelfCloseField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcInputOptionSelfCloseFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInputOptionSelfCloseField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(self);
    CThostFtdcInputOptionSelfCloseField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期权行权的头寸是否自对冲
/// typedef char TThostFtdcOptSelfCloseFlagType
static PyObject *PyCThostFtdcInputOptionSelfCloseFieldType_get_OptSelfCloseFlag(PyObject *self, void *closure) {
    PyCThostFtdcInputOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(self);
    CThostFtdcInputOptionSelfCloseField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OptSelfCloseFlag), 1);
}

static int PyCThostFtdcInputOptionSelfCloseFieldType_set_OptSelfCloseFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OptSelfCloseFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInputOptionSelfCloseField::OptSelfCloseFlag)) {
        PyErr_SetString(PyExc_ValueError, "OptSelfCloseFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(self);
    CThostFtdcInputOptionSelfCloseField *data = &(extra->data);
    data->OptSelfCloseFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcInputOptionSelfCloseFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcInputOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(self);
    CThostFtdcInputOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcInputOptionSelfCloseFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOptionSelfCloseField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(self);
    CThostFtdcInputOptionSelfCloseField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcInputOptionSelfCloseFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcInputOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(self);
    CThostFtdcInputOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcInputOptionSelfCloseFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOptionSelfCloseField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(self);
    CThostFtdcInputOptionSelfCloseField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 资金账号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcInputOptionSelfCloseFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcInputOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(self);
    CThostFtdcInputOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcInputOptionSelfCloseFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOptionSelfCloseField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(self);
    CThostFtdcInputOptionSelfCloseField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcInputOptionSelfCloseFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcInputOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(self);
    CThostFtdcInputOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcInputOptionSelfCloseFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOptionSelfCloseField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(self);
    CThostFtdcInputOptionSelfCloseField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易编码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcInputOptionSelfCloseFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcInputOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(self);
    CThostFtdcInputOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcInputOptionSelfCloseFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOptionSelfCloseField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(self);
    CThostFtdcInputOptionSelfCloseField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcInputOptionSelfCloseFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcInputOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(self);
    CThostFtdcInputOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcInputOptionSelfCloseFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOptionSelfCloseField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(self);
    CThostFtdcInputOptionSelfCloseField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcInputOptionSelfCloseFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcInputOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(self);
    CThostFtdcInputOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcInputOptionSelfCloseFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOptionSelfCloseField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(self);
    CThostFtdcInputOptionSelfCloseField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcInputOptionSelfCloseFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcInputOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(self);
    CThostFtdcInputOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcInputOptionSelfCloseFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOptionSelfCloseField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(self);
    CThostFtdcInputOptionSelfCloseField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcInputOptionSelfCloseFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcInputOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(self);
    CThostFtdcInputOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcInputOptionSelfCloseFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOptionSelfCloseField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(self);
    CThostFtdcInputOptionSelfCloseField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInputOptionSelfCloseFieldType_members[] = {
    /// 数量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "Volume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInputOptionSelfCloseFieldData, data.Volume),
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
        .offset = offsetof(PyCThostFtdcInputOptionSelfCloseFieldData, data.RequestID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("请求编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInputOptionSelfCloseFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInputOptionSelfCloseFieldType_get_BrokerID,
    .set = PyCThostFtdcInputOptionSelfCloseFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInputOptionSelfCloseFieldType_get_InvestorID,
    .set = PyCThostFtdcInputOptionSelfCloseFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcInputOptionSelfCloseFieldType_get_reserve1,
    .set = PyCThostFtdcInputOptionSelfCloseFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 期权自对冲引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "OptionSelfCloseRef",
    .get = PyCThostFtdcInputOptionSelfCloseFieldType_get_OptionSelfCloseRef,
    .set = PyCThostFtdcInputOptionSelfCloseFieldType_set_OptionSelfCloseRef,
    .doc = PyDoc_STR("期权自对冲引用"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcInputOptionSelfCloseFieldType_get_UserID,
    .set = PyCThostFtdcInputOptionSelfCloseFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    {
    .name = "BusinessUnit",
    .get = PyCThostFtdcInputOptionSelfCloseFieldType_get_BusinessUnit,
    .set = PyCThostFtdcInputOptionSelfCloseFieldType_set_BusinessUnit,
    .doc = PyDoc_STR("业务单元"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcInputOptionSelfCloseFieldType_get_HedgeFlag,
    .set = PyCThostFtdcInputOptionSelfCloseFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 期权行权的头寸是否自对冲
    /// typedef char TThostFtdcOptSelfCloseFlagType
    {
    .name = "OptSelfCloseFlag",
    .get = PyCThostFtdcInputOptionSelfCloseFieldType_get_OptSelfCloseFlag,
    .set = PyCThostFtdcInputOptionSelfCloseFieldType_set_OptSelfCloseFlag,
    .doc = PyDoc_STR("期权行权的头寸是否自对冲"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcInputOptionSelfCloseFieldType_get_ExchangeID,
    .set = PyCThostFtdcInputOptionSelfCloseFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcInputOptionSelfCloseFieldType_get_InvestUnitID,
    .set = PyCThostFtdcInputOptionSelfCloseFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 资金账号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcInputOptionSelfCloseFieldType_get_AccountID,
    .set = PyCThostFtdcInputOptionSelfCloseFieldType_set_AccountID,
    .doc = PyDoc_STR("资金账号"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcInputOptionSelfCloseFieldType_get_CurrencyID,
    .set = PyCThostFtdcInputOptionSelfCloseFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 交易编码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcInputOptionSelfCloseFieldType_get_ClientID,
    .set = PyCThostFtdcInputOptionSelfCloseFieldType_set_ClientID,
    .doc = PyDoc_STR("交易编码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve2",
    .get = PyCThostFtdcInputOptionSelfCloseFieldType_get_reserve2,
    .set = PyCThostFtdcInputOptionSelfCloseFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcInputOptionSelfCloseFieldType_get_MacAddress,
    .set = PyCThostFtdcInputOptionSelfCloseFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcInputOptionSelfCloseFieldType_get_InstrumentID,
    .set = PyCThostFtdcInputOptionSelfCloseFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcInputOptionSelfCloseFieldType_get_IPAddress,
    .set = PyCThostFtdcInputOptionSelfCloseFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInputOptionSelfCloseFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInputOptionSelfCloseField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("输入的期权自对冲")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInputOptionSelfCloseFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInputOptionSelfCloseFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInputOptionSelfCloseFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInputOptionSelfCloseFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInputOptionSelfCloseFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInputOptionSelfCloseFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("输入的期权自对冲")},
    {Py_tp_members, PyCThostFtdcInputOptionSelfCloseFieldType_members},
    {Py_tp_getset, PyCThostFtdcInputOptionSelfCloseFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInputOptionSelfCloseFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInputOptionSelfCloseFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInputOptionSelfCloseFieldType_spec = {
    .name = "PyCTP.CThostFtdcInputOptionSelfCloseField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInputOptionSelfCloseFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInputOptionSelfCloseFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInputOptionSelfCloseFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInputOptionSelfCloseFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInputOptionSelfCloseFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInputOptionSelfCloseFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInputOptionSelfCloseFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInputOptionSelfCloseFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInputOptionSelfCloseField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputOptionSelfCloseField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}