
#include "PyCThostFtdcInputOrderActionField.h"

///输入报单操作

static int PyCThostFtdcInputOrderActionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "OrderActionRef", "OrderRef", "RequestID", "FrontID", "SessionID", "ExchangeID", "OrderSysID", "ActionFlag", "LimitPrice", "VolumeChange", "UserID", "reserve1", "InvestUnitID", "reserve2", "MacAddress", "InstrumentID", "IPAddress", "OrderMemo", "SessionReqSeq", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInputOrderActionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInputOrderActionField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInputOrderActionField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInputOrderActionField_InvestorID_length = 0;

    /// 报单操作引用
    /// typedef int TThostFtdcOrderActionRefType
    int CThostFtdcInputOrderActionField_OrderActionRef = 0;

    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcInputOrderActionField_OrderRef = NULL;
    Py_ssize_t CThostFtdcInputOrderActionField_OrderRef_length = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcInputOrderActionField_RequestID = 0;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    int CThostFtdcInputOrderActionField_FrontID = 0;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcInputOrderActionField_SessionID = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcInputOrderActionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcInputOrderActionField_ExchangeID_length = 0;

    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcInputOrderActionField_OrderSysID = NULL;
    Py_ssize_t CThostFtdcInputOrderActionField_OrderSysID_length = 0;

    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    char CThostFtdcInputOrderActionField_ActionFlag = 0;

    /// 价格
    /// typedef double TThostFtdcPriceType
    double CThostFtdcInputOrderActionField_LimitPrice = 0.0;

    /// 数量变化
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcInputOrderActionField_VolumeChange = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcInputOrderActionField_UserID = NULL;
    Py_ssize_t CThostFtdcInputOrderActionField_UserID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcInputOrderActionField_reserve1 = NULL;
    Py_ssize_t CThostFtdcInputOrderActionField_reserve1_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcInputOrderActionField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcInputOrderActionField_InvestUnitID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcInputOrderActionField_reserve2 = NULL;
    Py_ssize_t CThostFtdcInputOrderActionField_reserve2_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcInputOrderActionField_MacAddress = NULL;
    Py_ssize_t CThostFtdcInputOrderActionField_MacAddress_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcInputOrderActionField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcInputOrderActionField_InstrumentID_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcInputOrderActionField_IPAddress = NULL;
    Py_ssize_t CThostFtdcInputOrderActionField_IPAddress_length = 0;

    /// 报单回显字段
    /// typedef char TThostFtdcOrderMemoType[13]
    char *CThostFtdcInputOrderActionField_OrderMemo = NULL;
    Py_ssize_t CThostFtdcInputOrderActionField_OrderMemo_length = 0;

    /// session上请求计数 api自动维护
    /// typedef int TThostFtdcSequenceNo12Type
    int CThostFtdcInputOrderActionField_SessionReqSeq = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#iiiy#y#cdiy#y#y#y#y#y#y#y#i", (char **)kwlist
        , &CThostFtdcInputOrderActionField_BrokerID, &CThostFtdcInputOrderActionField_BrokerID_length
        , &CThostFtdcInputOrderActionField_InvestorID, &CThostFtdcInputOrderActionField_InvestorID_length
        , &CThostFtdcInputOrderActionField_OrderActionRef
        , &CThostFtdcInputOrderActionField_OrderRef, &CThostFtdcInputOrderActionField_OrderRef_length
        , &CThostFtdcInputOrderActionField_RequestID
        , &CThostFtdcInputOrderActionField_FrontID
        , &CThostFtdcInputOrderActionField_SessionID
        , &CThostFtdcInputOrderActionField_ExchangeID, &CThostFtdcInputOrderActionField_ExchangeID_length
        , &CThostFtdcInputOrderActionField_OrderSysID, &CThostFtdcInputOrderActionField_OrderSysID_length
        , &CThostFtdcInputOrderActionField_ActionFlag
        , &CThostFtdcInputOrderActionField_LimitPrice
        , &CThostFtdcInputOrderActionField_VolumeChange
        , &CThostFtdcInputOrderActionField_UserID, &CThostFtdcInputOrderActionField_UserID_length
        , &CThostFtdcInputOrderActionField_reserve1, &CThostFtdcInputOrderActionField_reserve1_length
        , &CThostFtdcInputOrderActionField_InvestUnitID, &CThostFtdcInputOrderActionField_InvestUnitID_length
        , &CThostFtdcInputOrderActionField_reserve2, &CThostFtdcInputOrderActionField_reserve2_length
        , &CThostFtdcInputOrderActionField_MacAddress, &CThostFtdcInputOrderActionField_MacAddress_length
        , &CThostFtdcInputOrderActionField_InstrumentID, &CThostFtdcInputOrderActionField_InstrumentID_length
        , &CThostFtdcInputOrderActionField_IPAddress, &CThostFtdcInputOrderActionField_IPAddress_length
        , &CThostFtdcInputOrderActionField_OrderMemo, &CThostFtdcInputOrderActionField_OrderMemo_length
        , &CThostFtdcInputOrderActionField_SessionReqSeq
    )) {
        return -1;
    }

    PyCThostFtdcInputOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOrderActionFieldData>(self);
    CThostFtdcInputOrderActionField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInputOrderActionField_BrokerID != NULL ) {
        if(CThostFtdcInputOrderActionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInputOrderActionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInputOrderActionField_BrokerID, CThostFtdcInputOrderActionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInputOrderActionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInputOrderActionField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInputOrderActionField_InvestorID != NULL ) {
        if(CThostFtdcInputOrderActionField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInputOrderActionField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInputOrderActionField_InvestorID, CThostFtdcInputOrderActionField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInputOrderActionField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInputOrderActionField_InvestorID = NULL;
    }

    /// 报单操作引用
    /// typedef int TThostFtdcOrderActionRefType
    data->OrderActionRef = CThostFtdcInputOrderActionField_OrderActionRef;

    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcInputOrderActionField_OrderRef != NULL ) {
        if(CThostFtdcInputOrderActionField_OrderRef_length >= (Py_ssize_t)sizeof(data->OrderRef)) {
            PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is 12)", CThostFtdcInputOrderActionField_OrderRef_length);
            return -1;
        }
        // memset(data->OrderRef, 0, sizeof(data->OrderRef));
        // memcpy(data->OrderRef, CThostFtdcInputOrderActionField_OrderRef, CThostFtdcInputOrderActionField_OrderRef_length);
        strncpy(data->OrderRef, CThostFtdcInputOrderActionField_OrderRef, sizeof(data->OrderRef));
        CThostFtdcInputOrderActionField_OrderRef = NULL;
    }

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcInputOrderActionField_RequestID;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    data->FrontID = CThostFtdcInputOrderActionField_FrontID;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcInputOrderActionField_SessionID;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcInputOrderActionField_ExchangeID != NULL ) {
        if(CThostFtdcInputOrderActionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcInputOrderActionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcInputOrderActionField_ExchangeID, CThostFtdcInputOrderActionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcInputOrderActionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcInputOrderActionField_ExchangeID = NULL;
    }

    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcInputOrderActionField_OrderSysID != NULL ) {
        if(CThostFtdcInputOrderActionField_OrderSysID_length >= (Py_ssize_t)sizeof(data->OrderSysID)) {
            PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is 20)", CThostFtdcInputOrderActionField_OrderSysID_length);
            return -1;
        }
        // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
        // memcpy(data->OrderSysID, CThostFtdcInputOrderActionField_OrderSysID, CThostFtdcInputOrderActionField_OrderSysID_length);
        strncpy(data->OrderSysID, CThostFtdcInputOrderActionField_OrderSysID, sizeof(data->OrderSysID));
        CThostFtdcInputOrderActionField_OrderSysID = NULL;
    }

    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    data->ActionFlag = CThostFtdcInputOrderActionField_ActionFlag;

    /// 价格
    /// typedef double TThostFtdcPriceType
    data->LimitPrice = CThostFtdcInputOrderActionField_LimitPrice;

    /// 数量变化
    /// typedef int TThostFtdcVolumeType
    data->VolumeChange = CThostFtdcInputOrderActionField_VolumeChange;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcInputOrderActionField_UserID != NULL ) {
        if(CThostFtdcInputOrderActionField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcInputOrderActionField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcInputOrderActionField_UserID, CThostFtdcInputOrderActionField_UserID_length);
        strncpy(data->UserID, CThostFtdcInputOrderActionField_UserID, sizeof(data->UserID));
        CThostFtdcInputOrderActionField_UserID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcInputOrderActionField_reserve1 != NULL ) {
        if(CThostFtdcInputOrderActionField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcInputOrderActionField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcInputOrderActionField_reserve1, CThostFtdcInputOrderActionField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcInputOrderActionField_reserve1, sizeof(data->reserve1));
        CThostFtdcInputOrderActionField_reserve1 = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcInputOrderActionField_InvestUnitID != NULL ) {
        if(CThostFtdcInputOrderActionField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcInputOrderActionField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcInputOrderActionField_InvestUnitID, CThostFtdcInputOrderActionField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcInputOrderActionField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcInputOrderActionField_InvestUnitID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcInputOrderActionField_reserve2 != NULL ) {
        if(CThostFtdcInputOrderActionField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 15)", CThostFtdcInputOrderActionField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcInputOrderActionField_reserve2, CThostFtdcInputOrderActionField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcInputOrderActionField_reserve2, sizeof(data->reserve2));
        CThostFtdcInputOrderActionField_reserve2 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcInputOrderActionField_MacAddress != NULL ) {
        if(CThostFtdcInputOrderActionField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcInputOrderActionField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcInputOrderActionField_MacAddress, CThostFtdcInputOrderActionField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcInputOrderActionField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcInputOrderActionField_MacAddress = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcInputOrderActionField_InstrumentID != NULL ) {
        if(CThostFtdcInputOrderActionField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcInputOrderActionField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcInputOrderActionField_InstrumentID, CThostFtdcInputOrderActionField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcInputOrderActionField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcInputOrderActionField_InstrumentID = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcInputOrderActionField_IPAddress != NULL ) {
        if(CThostFtdcInputOrderActionField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcInputOrderActionField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcInputOrderActionField_IPAddress, CThostFtdcInputOrderActionField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcInputOrderActionField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcInputOrderActionField_IPAddress = NULL;
    }

    /// 报单回显字段
    /// typedef char TThostFtdcOrderMemoType[13]
    if( CThostFtdcInputOrderActionField_OrderMemo != NULL ) {
        if(CThostFtdcInputOrderActionField_OrderMemo_length >= (Py_ssize_t)sizeof(data->OrderMemo)) {
            PyErr_Format(PyExc_ValueError, "OrderMemo too long: length=%zd (max allowed is 12)", CThostFtdcInputOrderActionField_OrderMemo_length);
            return -1;
        }
        // memset(data->OrderMemo, 0, sizeof(data->OrderMemo));
        // memcpy(data->OrderMemo, CThostFtdcInputOrderActionField_OrderMemo, CThostFtdcInputOrderActionField_OrderMemo_length);
        strncpy(data->OrderMemo, CThostFtdcInputOrderActionField_OrderMemo, sizeof(data->OrderMemo));
        CThostFtdcInputOrderActionField_OrderMemo = NULL;
    }

    /// session上请求计数 api自动维护
    /// typedef int TThostFtdcSequenceNo12Type
    data->SessionReqSeq = CThostFtdcInputOrderActionField_SessionReqSeq;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInputOrderActionFieldType_repr(PyObject *self) {

    PyCThostFtdcInputOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOrderActionFieldData>(self);
    CThostFtdcInputOrderActionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:i,s:y,s:i,s:i,s:i,s:y,s:y,s:c,s:d,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "OrderActionRef", data->OrderActionRef
        , "OrderRef", data->OrderRef//, (Py_ssize_t)sizeof(data->OrderRef)
        , "RequestID", data->RequestID
        , "FrontID", data->FrontID
        , "SessionID", data->SessionID
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "OrderSysID", data->OrderSysID//, (Py_ssize_t)sizeof(data->OrderSysID)
        , "ActionFlag", data->ActionFlag
        , "LimitPrice", data->LimitPrice
        , "VolumeChange", data->VolumeChange
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputOrderActionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputOrderActionField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInputOrderActionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInputOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOrderActionFieldData>(self);
    CThostFtdcInputOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInputOrderActionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOrderActionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOrderActionFieldData>(self);
    CThostFtdcInputOrderActionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInputOrderActionFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInputOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOrderActionFieldData>(self);
    CThostFtdcInputOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInputOrderActionFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOrderActionField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOrderActionFieldData>(self);
    CThostFtdcInputOrderActionField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcInputOrderActionFieldType_get_OrderRef(PyObject *self, void *closure) {
    PyCThostFtdcInputOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOrderActionFieldData>(self);
    CThostFtdcInputOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderRef, (Py_ssize_t)sizeof(data->OrderRef));
    return PyBytes_FromString(data->OrderRef);
}

static int PyCThostFtdcInputOrderActionFieldType_set_OrderRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOrderActionField::OrderRef)) {
        PyErr_SetString(PyExc_ValueError, "OrderRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOrderActionFieldData>(self);
    CThostFtdcInputOrderActionField *data = &(extra->data);
    // memset(data->OrderRef, 0, sizeof(data->OrderRef));
    // memcpy(data->OrderRef, buf, len);
    strncpy(data->OrderRef, buf, sizeof(data->OrderRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcInputOrderActionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcInputOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOrderActionFieldData>(self);
    CThostFtdcInputOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcInputOrderActionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOrderActionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOrderActionFieldData>(self);
    CThostFtdcInputOrderActionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcInputOrderActionFieldType_get_OrderSysID(PyObject *self, void *closure) {
    PyCThostFtdcInputOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOrderActionFieldData>(self);
    CThostFtdcInputOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderSysID, (Py_ssize_t)sizeof(data->OrderSysID));
    return PyBytes_FromString(data->OrderSysID);
}

static int PyCThostFtdcInputOrderActionFieldType_set_OrderSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOrderActionField::OrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "OrderSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOrderActionFieldData>(self);
    CThostFtdcInputOrderActionField *data = &(extra->data);
    // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
    // memcpy(data->OrderSysID, buf, len);
    strncpy(data->OrderSysID, buf, sizeof(data->OrderSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionFlagType
static PyObject *PyCThostFtdcInputOrderActionFieldType_get_ActionFlag(PyObject *self, void *closure) {
    PyCThostFtdcInputOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOrderActionFieldData>(self);
    CThostFtdcInputOrderActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionFlag), 1);
}

static int PyCThostFtdcInputOrderActionFieldType_set_ActionFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInputOrderActionField::ActionFlag)) {
        PyErr_SetString(PyExc_ValueError, "ActionFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOrderActionFieldData>(self);
    CThostFtdcInputOrderActionField *data = &(extra->data);
    data->ActionFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcInputOrderActionFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcInputOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOrderActionFieldData>(self);
    CThostFtdcInputOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcInputOrderActionFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOrderActionField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOrderActionFieldData>(self);
    CThostFtdcInputOrderActionField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcInputOrderActionFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcInputOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOrderActionFieldData>(self);
    CThostFtdcInputOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcInputOrderActionFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOrderActionField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOrderActionFieldData>(self);
    CThostFtdcInputOrderActionField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcInputOrderActionFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcInputOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOrderActionFieldData>(self);
    CThostFtdcInputOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcInputOrderActionFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOrderActionField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOrderActionFieldData>(self);
    CThostFtdcInputOrderActionField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcInputOrderActionFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcInputOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOrderActionFieldData>(self);
    CThostFtdcInputOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcInputOrderActionFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOrderActionField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOrderActionFieldData>(self);
    CThostFtdcInputOrderActionField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcInputOrderActionFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcInputOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOrderActionFieldData>(self);
    CThostFtdcInputOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcInputOrderActionFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOrderActionField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOrderActionFieldData>(self);
    CThostFtdcInputOrderActionField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcInputOrderActionFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcInputOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOrderActionFieldData>(self);
    CThostFtdcInputOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcInputOrderActionFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOrderActionField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOrderActionFieldData>(self);
    CThostFtdcInputOrderActionField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcInputOrderActionFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcInputOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOrderActionFieldData>(self);
    CThostFtdcInputOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcInputOrderActionFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOrderActionField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOrderActionFieldData>(self);
    CThostFtdcInputOrderActionField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单回显字段
/// typedef char TThostFtdcOrderMemoType[13]
static PyObject *PyCThostFtdcInputOrderActionFieldType_get_OrderMemo(PyObject *self, void *closure) {
    PyCThostFtdcInputOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOrderActionFieldData>(self);
    CThostFtdcInputOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderMemo, (Py_ssize_t)sizeof(data->OrderMemo));
    return PyBytes_FromString(data->OrderMemo);
}

static int PyCThostFtdcInputOrderActionFieldType_set_OrderMemo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderMemo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOrderActionField::OrderMemo)) {
        PyErr_SetString(PyExc_ValueError, "OrderMemo must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOrderActionFieldData>(self);
    CThostFtdcInputOrderActionField *data = &(extra->data);
    // memset(data->OrderMemo, 0, sizeof(data->OrderMemo));
    // memcpy(data->OrderMemo, buf, len);
    strncpy(data->OrderMemo, buf, sizeof(data->OrderMemo));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInputOrderActionFieldType_members[] = {
    /// 报单操作引用
    /// typedef int TThostFtdcOrderActionRefType
    {
        .name = "OrderActionRef",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInputOrderActionFieldData, data.OrderActionRef),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("报单操作引用")
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
        .offset = offsetof(PyCThostFtdcInputOrderActionFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcInputOrderActionFieldData, data.FrontID),
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
        .offset = offsetof(PyCThostFtdcInputOrderActionFieldData, data.SessionID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("会话编号")
    },
    /// 价格
    /// typedef double TThostFtdcPriceType
    {
        .name = "LimitPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInputOrderActionFieldData, data.LimitPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("价格")
    },
    /// 数量变化
    /// typedef int TThostFtdcVolumeType
    {
        .name = "VolumeChange",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInputOrderActionFieldData, data.VolumeChange),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("数量变化")
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
        .offset = offsetof(PyCThostFtdcInputOrderActionFieldData, data.SessionReqSeq),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("session上请求计数 api自动维护")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInputOrderActionFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInputOrderActionFieldType_get_BrokerID,
    .set = PyCThostFtdcInputOrderActionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInputOrderActionFieldType_get_InvestorID,
    .set = PyCThostFtdcInputOrderActionFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "OrderRef",
    .get = PyCThostFtdcInputOrderActionFieldType_get_OrderRef,
    .set = PyCThostFtdcInputOrderActionFieldType_set_OrderRef,
    .doc = PyDoc_STR("报单引用"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcInputOrderActionFieldType_get_ExchangeID,
    .set = PyCThostFtdcInputOrderActionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "OrderSysID",
    .get = PyCThostFtdcInputOrderActionFieldType_get_OrderSysID,
    .set = PyCThostFtdcInputOrderActionFieldType_set_OrderSysID,
    .doc = PyDoc_STR("报单编号"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    {
    .name = "ActionFlag",
    .get = PyCThostFtdcInputOrderActionFieldType_get_ActionFlag,
    .set = PyCThostFtdcInputOrderActionFieldType_set_ActionFlag,
    .doc = PyDoc_STR("操作标志"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcInputOrderActionFieldType_get_UserID,
    .set = PyCThostFtdcInputOrderActionFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcInputOrderActionFieldType_get_reserve1,
    .set = PyCThostFtdcInputOrderActionFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcInputOrderActionFieldType_get_InvestUnitID,
    .set = PyCThostFtdcInputOrderActionFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve2",
    .get = PyCThostFtdcInputOrderActionFieldType_get_reserve2,
    .set = PyCThostFtdcInputOrderActionFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcInputOrderActionFieldType_get_MacAddress,
    .set = PyCThostFtdcInputOrderActionFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcInputOrderActionFieldType_get_InstrumentID,
    .set = PyCThostFtdcInputOrderActionFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcInputOrderActionFieldType_get_IPAddress,
    .set = PyCThostFtdcInputOrderActionFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    /// 报单回显字段
    /// typedef char TThostFtdcOrderMemoType[13]
    {
    .name = "OrderMemo",
    .get = PyCThostFtdcInputOrderActionFieldType_get_OrderMemo,
    .set = PyCThostFtdcInputOrderActionFieldType_set_OrderMemo,
    .doc = PyDoc_STR("报单回显字段"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInputOrderActionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInputOrderActionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("输入报单操作")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInputOrderActionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInputOrderActionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInputOrderActionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInputOrderActionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInputOrderActionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInputOrderActionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("输入报单操作")},
    {Py_tp_members, PyCThostFtdcInputOrderActionFieldType_members},
    {Py_tp_getset, PyCThostFtdcInputOrderActionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInputOrderActionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInputOrderActionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInputOrderActionFieldType_spec = {
    .name = "PyCTP.CThostFtdcInputOrderActionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInputOrderActionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInputOrderActionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInputOrderActionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInputOrderActionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInputOrderActionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInputOrderActionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInputOrderActionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInputOrderActionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInputOrderActionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputOrderActionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}