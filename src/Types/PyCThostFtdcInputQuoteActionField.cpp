
#include "PyCThostFtdcInputQuoteActionField.h"

///输入报价操作

static int PyCThostFtdcInputQuoteActionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "QuoteActionRef", "QuoteRef", "RequestID", "FrontID", "SessionID", "ExchangeID", "QuoteSysID", "ActionFlag", "UserID", "reserve1", "InvestUnitID", "ClientID", "reserve2", "MacAddress", "InstrumentID", "IPAddress", "OrderMemo", "SessionReqSeq", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInputQuoteActionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInputQuoteActionField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInputQuoteActionField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInputQuoteActionField_InvestorID_length = 0;

    /// 报价操作引用
    /// typedef int TThostFtdcOrderActionRefType
    int CThostFtdcInputQuoteActionField_QuoteActionRef = 0;

    /// 报价引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcInputQuoteActionField_QuoteRef = NULL;
    Py_ssize_t CThostFtdcInputQuoteActionField_QuoteRef_length = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcInputQuoteActionField_RequestID = 0;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    int CThostFtdcInputQuoteActionField_FrontID = 0;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcInputQuoteActionField_SessionID = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcInputQuoteActionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcInputQuoteActionField_ExchangeID_length = 0;

    /// 报价操作编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcInputQuoteActionField_QuoteSysID = NULL;
    Py_ssize_t CThostFtdcInputQuoteActionField_QuoteSysID_length = 0;

    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    char CThostFtdcInputQuoteActionField_ActionFlag = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcInputQuoteActionField_UserID = NULL;
    Py_ssize_t CThostFtdcInputQuoteActionField_UserID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcInputQuoteActionField_reserve1 = NULL;
    Py_ssize_t CThostFtdcInputQuoteActionField_reserve1_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcInputQuoteActionField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcInputQuoteActionField_InvestUnitID_length = 0;

    /// 交易编码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcInputQuoteActionField_ClientID = NULL;
    Py_ssize_t CThostFtdcInputQuoteActionField_ClientID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcInputQuoteActionField_reserve2 = NULL;
    Py_ssize_t CThostFtdcInputQuoteActionField_reserve2_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcInputQuoteActionField_MacAddress = NULL;
    Py_ssize_t CThostFtdcInputQuoteActionField_MacAddress_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcInputQuoteActionField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcInputQuoteActionField_InstrumentID_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcInputQuoteActionField_IPAddress = NULL;
    Py_ssize_t CThostFtdcInputQuoteActionField_IPAddress_length = 0;

    /// 报单回显字段
    /// typedef char TThostFtdcOrderMemoType[13]
    char *CThostFtdcInputQuoteActionField_OrderMemo = NULL;
    Py_ssize_t CThostFtdcInputQuoteActionField_OrderMemo_length = 0;

    /// session上请求计数 api自动维护
    /// typedef int TThostFtdcSequenceNo12Type
    int CThostFtdcInputQuoteActionField_SessionReqSeq = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#iiiy#y#cy#y#y#y#y#y#y#y#y#i", (char **)kwlist
        , &CThostFtdcInputQuoteActionField_BrokerID, &CThostFtdcInputQuoteActionField_BrokerID_length
        , &CThostFtdcInputQuoteActionField_InvestorID, &CThostFtdcInputQuoteActionField_InvestorID_length
        , &CThostFtdcInputQuoteActionField_QuoteActionRef
        , &CThostFtdcInputQuoteActionField_QuoteRef, &CThostFtdcInputQuoteActionField_QuoteRef_length
        , &CThostFtdcInputQuoteActionField_RequestID
        , &CThostFtdcInputQuoteActionField_FrontID
        , &CThostFtdcInputQuoteActionField_SessionID
        , &CThostFtdcInputQuoteActionField_ExchangeID, &CThostFtdcInputQuoteActionField_ExchangeID_length
        , &CThostFtdcInputQuoteActionField_QuoteSysID, &CThostFtdcInputQuoteActionField_QuoteSysID_length
        , &CThostFtdcInputQuoteActionField_ActionFlag
        , &CThostFtdcInputQuoteActionField_UserID, &CThostFtdcInputQuoteActionField_UserID_length
        , &CThostFtdcInputQuoteActionField_reserve1, &CThostFtdcInputQuoteActionField_reserve1_length
        , &CThostFtdcInputQuoteActionField_InvestUnitID, &CThostFtdcInputQuoteActionField_InvestUnitID_length
        , &CThostFtdcInputQuoteActionField_ClientID, &CThostFtdcInputQuoteActionField_ClientID_length
        , &CThostFtdcInputQuoteActionField_reserve2, &CThostFtdcInputQuoteActionField_reserve2_length
        , &CThostFtdcInputQuoteActionField_MacAddress, &CThostFtdcInputQuoteActionField_MacAddress_length
        , &CThostFtdcInputQuoteActionField_InstrumentID, &CThostFtdcInputQuoteActionField_InstrumentID_length
        , &CThostFtdcInputQuoteActionField_IPAddress, &CThostFtdcInputQuoteActionField_IPAddress_length
        , &CThostFtdcInputQuoteActionField_OrderMemo, &CThostFtdcInputQuoteActionField_OrderMemo_length
        , &CThostFtdcInputQuoteActionField_SessionReqSeq
    )) {
        return -1;
    }

    PyCThostFtdcInputQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteActionFieldData>(self);
    CThostFtdcInputQuoteActionField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInputQuoteActionField_BrokerID != NULL ) {
        if(CThostFtdcInputQuoteActionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInputQuoteActionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInputQuoteActionField_BrokerID, CThostFtdcInputQuoteActionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInputQuoteActionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInputQuoteActionField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInputQuoteActionField_InvestorID != NULL ) {
        if(CThostFtdcInputQuoteActionField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInputQuoteActionField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInputQuoteActionField_InvestorID, CThostFtdcInputQuoteActionField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInputQuoteActionField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInputQuoteActionField_InvestorID = NULL;
    }

    /// 报价操作引用
    /// typedef int TThostFtdcOrderActionRefType
    data->QuoteActionRef = CThostFtdcInputQuoteActionField_QuoteActionRef;

    /// 报价引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcInputQuoteActionField_QuoteRef != NULL ) {
        if(CThostFtdcInputQuoteActionField_QuoteRef_length >= (Py_ssize_t)sizeof(data->QuoteRef)) {
            PyErr_Format(PyExc_ValueError, "QuoteRef too long: length=%zd (max allowed is 12)", CThostFtdcInputQuoteActionField_QuoteRef_length);
            return -1;
        }
        // memset(data->QuoteRef, 0, sizeof(data->QuoteRef));
        // memcpy(data->QuoteRef, CThostFtdcInputQuoteActionField_QuoteRef, CThostFtdcInputQuoteActionField_QuoteRef_length);
        strncpy(data->QuoteRef, CThostFtdcInputQuoteActionField_QuoteRef, sizeof(data->QuoteRef));
        CThostFtdcInputQuoteActionField_QuoteRef = NULL;
    }

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcInputQuoteActionField_RequestID;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    data->FrontID = CThostFtdcInputQuoteActionField_FrontID;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcInputQuoteActionField_SessionID;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcInputQuoteActionField_ExchangeID != NULL ) {
        if(CThostFtdcInputQuoteActionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcInputQuoteActionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcInputQuoteActionField_ExchangeID, CThostFtdcInputQuoteActionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcInputQuoteActionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcInputQuoteActionField_ExchangeID = NULL;
    }

    /// 报价操作编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcInputQuoteActionField_QuoteSysID != NULL ) {
        if(CThostFtdcInputQuoteActionField_QuoteSysID_length >= (Py_ssize_t)sizeof(data->QuoteSysID)) {
            PyErr_Format(PyExc_ValueError, "QuoteSysID too long: length=%zd (max allowed is 20)", CThostFtdcInputQuoteActionField_QuoteSysID_length);
            return -1;
        }
        // memset(data->QuoteSysID, 0, sizeof(data->QuoteSysID));
        // memcpy(data->QuoteSysID, CThostFtdcInputQuoteActionField_QuoteSysID, CThostFtdcInputQuoteActionField_QuoteSysID_length);
        strncpy(data->QuoteSysID, CThostFtdcInputQuoteActionField_QuoteSysID, sizeof(data->QuoteSysID));
        CThostFtdcInputQuoteActionField_QuoteSysID = NULL;
    }

    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    data->ActionFlag = CThostFtdcInputQuoteActionField_ActionFlag;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcInputQuoteActionField_UserID != NULL ) {
        if(CThostFtdcInputQuoteActionField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcInputQuoteActionField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcInputQuoteActionField_UserID, CThostFtdcInputQuoteActionField_UserID_length);
        strncpy(data->UserID, CThostFtdcInputQuoteActionField_UserID, sizeof(data->UserID));
        CThostFtdcInputQuoteActionField_UserID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcInputQuoteActionField_reserve1 != NULL ) {
        if(CThostFtdcInputQuoteActionField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcInputQuoteActionField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcInputQuoteActionField_reserve1, CThostFtdcInputQuoteActionField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcInputQuoteActionField_reserve1, sizeof(data->reserve1));
        CThostFtdcInputQuoteActionField_reserve1 = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcInputQuoteActionField_InvestUnitID != NULL ) {
        if(CThostFtdcInputQuoteActionField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcInputQuoteActionField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcInputQuoteActionField_InvestUnitID, CThostFtdcInputQuoteActionField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcInputQuoteActionField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcInputQuoteActionField_InvestUnitID = NULL;
    }

    /// 交易编码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcInputQuoteActionField_ClientID != NULL ) {
        if(CThostFtdcInputQuoteActionField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcInputQuoteActionField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcInputQuoteActionField_ClientID, CThostFtdcInputQuoteActionField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcInputQuoteActionField_ClientID, sizeof(data->ClientID));
        CThostFtdcInputQuoteActionField_ClientID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcInputQuoteActionField_reserve2 != NULL ) {
        if(CThostFtdcInputQuoteActionField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 15)", CThostFtdcInputQuoteActionField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcInputQuoteActionField_reserve2, CThostFtdcInputQuoteActionField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcInputQuoteActionField_reserve2, sizeof(data->reserve2));
        CThostFtdcInputQuoteActionField_reserve2 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcInputQuoteActionField_MacAddress != NULL ) {
        if(CThostFtdcInputQuoteActionField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcInputQuoteActionField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcInputQuoteActionField_MacAddress, CThostFtdcInputQuoteActionField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcInputQuoteActionField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcInputQuoteActionField_MacAddress = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcInputQuoteActionField_InstrumentID != NULL ) {
        if(CThostFtdcInputQuoteActionField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcInputQuoteActionField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcInputQuoteActionField_InstrumentID, CThostFtdcInputQuoteActionField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcInputQuoteActionField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcInputQuoteActionField_InstrumentID = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcInputQuoteActionField_IPAddress != NULL ) {
        if(CThostFtdcInputQuoteActionField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcInputQuoteActionField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcInputQuoteActionField_IPAddress, CThostFtdcInputQuoteActionField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcInputQuoteActionField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcInputQuoteActionField_IPAddress = NULL;
    }

    /// 报单回显字段
    /// typedef char TThostFtdcOrderMemoType[13]
    if( CThostFtdcInputQuoteActionField_OrderMemo != NULL ) {
        if(CThostFtdcInputQuoteActionField_OrderMemo_length >= (Py_ssize_t)sizeof(data->OrderMemo)) {
            PyErr_Format(PyExc_ValueError, "OrderMemo too long: length=%zd (max allowed is 12)", CThostFtdcInputQuoteActionField_OrderMemo_length);
            return -1;
        }
        // memset(data->OrderMemo, 0, sizeof(data->OrderMemo));
        // memcpy(data->OrderMemo, CThostFtdcInputQuoteActionField_OrderMemo, CThostFtdcInputQuoteActionField_OrderMemo_length);
        strncpy(data->OrderMemo, CThostFtdcInputQuoteActionField_OrderMemo, sizeof(data->OrderMemo));
        CThostFtdcInputQuoteActionField_OrderMemo = NULL;
    }

    /// session上请求计数 api自动维护
    /// typedef int TThostFtdcSequenceNo12Type
    data->SessionReqSeq = CThostFtdcInputQuoteActionField_SessionReqSeq;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInputQuoteActionFieldType_repr(PyObject *self) {

    PyCThostFtdcInputQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteActionFieldData>(self);
    CThostFtdcInputQuoteActionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:i,s:y,s:i,s:i,s:i,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "QuoteActionRef", data->QuoteActionRef
        , "QuoteRef", data->QuoteRef//, (Py_ssize_t)sizeof(data->QuoteRef)
        , "RequestID", data->RequestID
        , "FrontID", data->FrontID
        , "SessionID", data->SessionID
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "QuoteSysID", data->QuoteSysID//, (Py_ssize_t)sizeof(data->QuoteSysID)
        , "ActionFlag", data->ActionFlag
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputQuoteActionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputQuoteActionField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInputQuoteActionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteActionFieldData>(self);
    CThostFtdcInputQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInputQuoteActionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputQuoteActionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteActionFieldData>(self);
    CThostFtdcInputQuoteActionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInputQuoteActionFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteActionFieldData>(self);
    CThostFtdcInputQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInputQuoteActionFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputQuoteActionField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteActionFieldData>(self);
    CThostFtdcInputQuoteActionField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报价引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcInputQuoteActionFieldType_get_QuoteRef(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteActionFieldData>(self);
    CThostFtdcInputQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->QuoteRef, (Py_ssize_t)sizeof(data->QuoteRef));
    return PyBytes_FromString(data->QuoteRef);
}

static int PyCThostFtdcInputQuoteActionFieldType_set_QuoteRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "QuoteRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputQuoteActionField::QuoteRef)) {
        PyErr_SetString(PyExc_ValueError, "QuoteRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteActionFieldData>(self);
    CThostFtdcInputQuoteActionField *data = &(extra->data);
    // memset(data->QuoteRef, 0, sizeof(data->QuoteRef));
    // memcpy(data->QuoteRef, buf, len);
    strncpy(data->QuoteRef, buf, sizeof(data->QuoteRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcInputQuoteActionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteActionFieldData>(self);
    CThostFtdcInputQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcInputQuoteActionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputQuoteActionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteActionFieldData>(self);
    CThostFtdcInputQuoteActionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报价操作编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcInputQuoteActionFieldType_get_QuoteSysID(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteActionFieldData>(self);
    CThostFtdcInputQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->QuoteSysID, (Py_ssize_t)sizeof(data->QuoteSysID));
    return PyBytes_FromString(data->QuoteSysID);
}

static int PyCThostFtdcInputQuoteActionFieldType_set_QuoteSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "QuoteSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputQuoteActionField::QuoteSysID)) {
        PyErr_SetString(PyExc_ValueError, "QuoteSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteActionFieldData>(self);
    CThostFtdcInputQuoteActionField *data = &(extra->data);
    // memset(data->QuoteSysID, 0, sizeof(data->QuoteSysID));
    // memcpy(data->QuoteSysID, buf, len);
    strncpy(data->QuoteSysID, buf, sizeof(data->QuoteSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionFlagType
static PyObject *PyCThostFtdcInputQuoteActionFieldType_get_ActionFlag(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteActionFieldData>(self);
    CThostFtdcInputQuoteActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionFlag), 1);
}

static int PyCThostFtdcInputQuoteActionFieldType_set_ActionFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInputQuoteActionField::ActionFlag)) {
        PyErr_SetString(PyExc_ValueError, "ActionFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteActionFieldData>(self);
    CThostFtdcInputQuoteActionField *data = &(extra->data);
    data->ActionFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcInputQuoteActionFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteActionFieldData>(self);
    CThostFtdcInputQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcInputQuoteActionFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputQuoteActionField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteActionFieldData>(self);
    CThostFtdcInputQuoteActionField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcInputQuoteActionFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteActionFieldData>(self);
    CThostFtdcInputQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcInputQuoteActionFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputQuoteActionField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteActionFieldData>(self);
    CThostFtdcInputQuoteActionField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcInputQuoteActionFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteActionFieldData>(self);
    CThostFtdcInputQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcInputQuoteActionFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputQuoteActionField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteActionFieldData>(self);
    CThostFtdcInputQuoteActionField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易编码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcInputQuoteActionFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteActionFieldData>(self);
    CThostFtdcInputQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcInputQuoteActionFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputQuoteActionField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteActionFieldData>(self);
    CThostFtdcInputQuoteActionField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcInputQuoteActionFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteActionFieldData>(self);
    CThostFtdcInputQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcInputQuoteActionFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputQuoteActionField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteActionFieldData>(self);
    CThostFtdcInputQuoteActionField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcInputQuoteActionFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteActionFieldData>(self);
    CThostFtdcInputQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcInputQuoteActionFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputQuoteActionField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteActionFieldData>(self);
    CThostFtdcInputQuoteActionField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcInputQuoteActionFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteActionFieldData>(self);
    CThostFtdcInputQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcInputQuoteActionFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputQuoteActionField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteActionFieldData>(self);
    CThostFtdcInputQuoteActionField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcInputQuoteActionFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteActionFieldData>(self);
    CThostFtdcInputQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcInputQuoteActionFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputQuoteActionField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteActionFieldData>(self);
    CThostFtdcInputQuoteActionField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单回显字段
/// typedef char TThostFtdcOrderMemoType[13]
static PyObject *PyCThostFtdcInputQuoteActionFieldType_get_OrderMemo(PyObject *self, void *closure) {
    PyCThostFtdcInputQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteActionFieldData>(self);
    CThostFtdcInputQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderMemo, (Py_ssize_t)sizeof(data->OrderMemo));
    return PyBytes_FromString(data->OrderMemo);
}

static int PyCThostFtdcInputQuoteActionFieldType_set_OrderMemo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderMemo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputQuoteActionField::OrderMemo)) {
        PyErr_SetString(PyExc_ValueError, "OrderMemo must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteActionFieldData>(self);
    CThostFtdcInputQuoteActionField *data = &(extra->data);
    // memset(data->OrderMemo, 0, sizeof(data->OrderMemo));
    // memcpy(data->OrderMemo, buf, len);
    strncpy(data->OrderMemo, buf, sizeof(data->OrderMemo));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInputQuoteActionFieldType_members[] = {
    /// 报价操作引用
    /// typedef int TThostFtdcOrderActionRefType
    {
        .name = "QuoteActionRef",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInputQuoteActionFieldData, data.QuoteActionRef),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("报价操作引用")
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
        .offset = offsetof(PyCThostFtdcInputQuoteActionFieldData, data.RequestID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("请求编号")
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
        .offset = offsetof(PyCThostFtdcInputQuoteActionFieldData, data.FrontID),
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
        .offset = offsetof(PyCThostFtdcInputQuoteActionFieldData, data.SessionID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("会话编号")
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
        .offset = offsetof(PyCThostFtdcInputQuoteActionFieldData, data.SessionReqSeq),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("session上请求计数 api自动维护")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInputQuoteActionFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInputQuoteActionFieldType_get_BrokerID,
    .set = PyCThostFtdcInputQuoteActionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInputQuoteActionFieldType_get_InvestorID,
    .set = PyCThostFtdcInputQuoteActionFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 报价引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "QuoteRef",
    .get = PyCThostFtdcInputQuoteActionFieldType_get_QuoteRef,
    .set = PyCThostFtdcInputQuoteActionFieldType_set_QuoteRef,
    .doc = PyDoc_STR("报价引用"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcInputQuoteActionFieldType_get_ExchangeID,
    .set = PyCThostFtdcInputQuoteActionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 报价操作编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "QuoteSysID",
    .get = PyCThostFtdcInputQuoteActionFieldType_get_QuoteSysID,
    .set = PyCThostFtdcInputQuoteActionFieldType_set_QuoteSysID,
    .doc = PyDoc_STR("报价操作编号"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    {
    .name = "ActionFlag",
    .get = PyCThostFtdcInputQuoteActionFieldType_get_ActionFlag,
    .set = PyCThostFtdcInputQuoteActionFieldType_set_ActionFlag,
    .doc = PyDoc_STR("操作标志"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcInputQuoteActionFieldType_get_UserID,
    .set = PyCThostFtdcInputQuoteActionFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcInputQuoteActionFieldType_get_reserve1,
    .set = PyCThostFtdcInputQuoteActionFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcInputQuoteActionFieldType_get_InvestUnitID,
    .set = PyCThostFtdcInputQuoteActionFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 交易编码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcInputQuoteActionFieldType_get_ClientID,
    .set = PyCThostFtdcInputQuoteActionFieldType_set_ClientID,
    .doc = PyDoc_STR("交易编码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve2",
    .get = PyCThostFtdcInputQuoteActionFieldType_get_reserve2,
    .set = PyCThostFtdcInputQuoteActionFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcInputQuoteActionFieldType_get_MacAddress,
    .set = PyCThostFtdcInputQuoteActionFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcInputQuoteActionFieldType_get_InstrumentID,
    .set = PyCThostFtdcInputQuoteActionFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcInputQuoteActionFieldType_get_IPAddress,
    .set = PyCThostFtdcInputQuoteActionFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    /// 报单回显字段
    /// typedef char TThostFtdcOrderMemoType[13]
    {
    .name = "OrderMemo",
    .get = PyCThostFtdcInputQuoteActionFieldType_get_OrderMemo,
    .set = PyCThostFtdcInputQuoteActionFieldType_set_OrderMemo,
    .doc = PyDoc_STR("报单回显字段"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInputQuoteActionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInputQuoteActionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("输入报价操作")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInputQuoteActionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInputQuoteActionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInputQuoteActionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInputQuoteActionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInputQuoteActionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInputQuoteActionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("输入报价操作")},
    {Py_tp_members, PyCThostFtdcInputQuoteActionFieldType_members},
    {Py_tp_getset, PyCThostFtdcInputQuoteActionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInputQuoteActionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInputQuoteActionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInputQuoteActionFieldType_spec = {
    .name = "PyCTP.CThostFtdcInputQuoteActionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInputQuoteActionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInputQuoteActionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInputQuoteActionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInputQuoteActionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInputQuoteActionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInputQuoteActionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInputQuoteActionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInputQuoteActionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInputQuoteActionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputQuoteActionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}