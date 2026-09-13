
#include "PyCThostFtdcInputOptionSelfCloseActionField.h"

///输入期权自对冲操作

static int PyCThostFtdcInputOptionSelfCloseActionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "OptionSelfCloseActionRef", "OptionSelfCloseRef", "RequestID", "FrontID", "SessionID", "ExchangeID", "OptionSelfCloseSysID", "ActionFlag", "UserID", "reserve1", "InvestUnitID", "reserve2", "MacAddress", "InstrumentID", "IPAddress", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInputOptionSelfCloseActionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInputOptionSelfCloseActionField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInputOptionSelfCloseActionField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInputOptionSelfCloseActionField_InvestorID_length = 0;

    /// 期权自对冲操作引用
    /// typedef int TThostFtdcOrderActionRefType
    int CThostFtdcInputOptionSelfCloseActionField_OptionSelfCloseActionRef = 0;

    /// 期权自对冲引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcInputOptionSelfCloseActionField_OptionSelfCloseRef = NULL;
    Py_ssize_t CThostFtdcInputOptionSelfCloseActionField_OptionSelfCloseRef_length = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcInputOptionSelfCloseActionField_RequestID = 0;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    int CThostFtdcInputOptionSelfCloseActionField_FrontID = 0;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcInputOptionSelfCloseActionField_SessionID = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcInputOptionSelfCloseActionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcInputOptionSelfCloseActionField_ExchangeID_length = 0;

    /// 期权自对冲操作编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcInputOptionSelfCloseActionField_OptionSelfCloseSysID = NULL;
    Py_ssize_t CThostFtdcInputOptionSelfCloseActionField_OptionSelfCloseSysID_length = 0;

    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    char CThostFtdcInputOptionSelfCloseActionField_ActionFlag = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcInputOptionSelfCloseActionField_UserID = NULL;
    Py_ssize_t CThostFtdcInputOptionSelfCloseActionField_UserID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcInputOptionSelfCloseActionField_reserve1 = NULL;
    Py_ssize_t CThostFtdcInputOptionSelfCloseActionField_reserve1_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcInputOptionSelfCloseActionField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcInputOptionSelfCloseActionField_InvestUnitID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcInputOptionSelfCloseActionField_reserve2 = NULL;
    Py_ssize_t CThostFtdcInputOptionSelfCloseActionField_reserve2_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcInputOptionSelfCloseActionField_MacAddress = NULL;
    Py_ssize_t CThostFtdcInputOptionSelfCloseActionField_MacAddress_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcInputOptionSelfCloseActionField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcInputOptionSelfCloseActionField_InstrumentID_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcInputOptionSelfCloseActionField_IPAddress = NULL;
    Py_ssize_t CThostFtdcInputOptionSelfCloseActionField_IPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#iiiy#y#cy#y#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcInputOptionSelfCloseActionField_BrokerID, &CThostFtdcInputOptionSelfCloseActionField_BrokerID_length
        , &CThostFtdcInputOptionSelfCloseActionField_InvestorID, &CThostFtdcInputOptionSelfCloseActionField_InvestorID_length
        , &CThostFtdcInputOptionSelfCloseActionField_OptionSelfCloseActionRef
        , &CThostFtdcInputOptionSelfCloseActionField_OptionSelfCloseRef, &CThostFtdcInputOptionSelfCloseActionField_OptionSelfCloseRef_length
        , &CThostFtdcInputOptionSelfCloseActionField_RequestID
        , &CThostFtdcInputOptionSelfCloseActionField_FrontID
        , &CThostFtdcInputOptionSelfCloseActionField_SessionID
        , &CThostFtdcInputOptionSelfCloseActionField_ExchangeID, &CThostFtdcInputOptionSelfCloseActionField_ExchangeID_length
        , &CThostFtdcInputOptionSelfCloseActionField_OptionSelfCloseSysID, &CThostFtdcInputOptionSelfCloseActionField_OptionSelfCloseSysID_length
        , &CThostFtdcInputOptionSelfCloseActionField_ActionFlag
        , &CThostFtdcInputOptionSelfCloseActionField_UserID, &CThostFtdcInputOptionSelfCloseActionField_UserID_length
        , &CThostFtdcInputOptionSelfCloseActionField_reserve1, &CThostFtdcInputOptionSelfCloseActionField_reserve1_length
        , &CThostFtdcInputOptionSelfCloseActionField_InvestUnitID, &CThostFtdcInputOptionSelfCloseActionField_InvestUnitID_length
        , &CThostFtdcInputOptionSelfCloseActionField_reserve2, &CThostFtdcInputOptionSelfCloseActionField_reserve2_length
        , &CThostFtdcInputOptionSelfCloseActionField_MacAddress, &CThostFtdcInputOptionSelfCloseActionField_MacAddress_length
        , &CThostFtdcInputOptionSelfCloseActionField_InstrumentID, &CThostFtdcInputOptionSelfCloseActionField_InstrumentID_length
        , &CThostFtdcInputOptionSelfCloseActionField_IPAddress, &CThostFtdcInputOptionSelfCloseActionField_IPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcInputOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseActionFieldData>(self);
    CThostFtdcInputOptionSelfCloseActionField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInputOptionSelfCloseActionField_BrokerID != NULL ) {
        if(CThostFtdcInputOptionSelfCloseActionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInputOptionSelfCloseActionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInputOptionSelfCloseActionField_BrokerID, CThostFtdcInputOptionSelfCloseActionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInputOptionSelfCloseActionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInputOptionSelfCloseActionField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInputOptionSelfCloseActionField_InvestorID != NULL ) {
        if(CThostFtdcInputOptionSelfCloseActionField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInputOptionSelfCloseActionField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInputOptionSelfCloseActionField_InvestorID, CThostFtdcInputOptionSelfCloseActionField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInputOptionSelfCloseActionField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInputOptionSelfCloseActionField_InvestorID = NULL;
    }

    /// 期权自对冲操作引用
    /// typedef int TThostFtdcOrderActionRefType
    data->OptionSelfCloseActionRef = CThostFtdcInputOptionSelfCloseActionField_OptionSelfCloseActionRef;

    /// 期权自对冲引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcInputOptionSelfCloseActionField_OptionSelfCloseRef != NULL ) {
        if(CThostFtdcInputOptionSelfCloseActionField_OptionSelfCloseRef_length >= (Py_ssize_t)sizeof(data->OptionSelfCloseRef)) {
            PyErr_Format(PyExc_ValueError, "OptionSelfCloseRef too long: length=%zd (max allowed is 12)", CThostFtdcInputOptionSelfCloseActionField_OptionSelfCloseRef_length);
            return -1;
        }
        // memset(data->OptionSelfCloseRef, 0, sizeof(data->OptionSelfCloseRef));
        // memcpy(data->OptionSelfCloseRef, CThostFtdcInputOptionSelfCloseActionField_OptionSelfCloseRef, CThostFtdcInputOptionSelfCloseActionField_OptionSelfCloseRef_length);
        strncpy(data->OptionSelfCloseRef, CThostFtdcInputOptionSelfCloseActionField_OptionSelfCloseRef, sizeof(data->OptionSelfCloseRef));
        CThostFtdcInputOptionSelfCloseActionField_OptionSelfCloseRef = NULL;
    }

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcInputOptionSelfCloseActionField_RequestID;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    data->FrontID = CThostFtdcInputOptionSelfCloseActionField_FrontID;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcInputOptionSelfCloseActionField_SessionID;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcInputOptionSelfCloseActionField_ExchangeID != NULL ) {
        if(CThostFtdcInputOptionSelfCloseActionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcInputOptionSelfCloseActionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcInputOptionSelfCloseActionField_ExchangeID, CThostFtdcInputOptionSelfCloseActionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcInputOptionSelfCloseActionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcInputOptionSelfCloseActionField_ExchangeID = NULL;
    }

    /// 期权自对冲操作编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcInputOptionSelfCloseActionField_OptionSelfCloseSysID != NULL ) {
        if(CThostFtdcInputOptionSelfCloseActionField_OptionSelfCloseSysID_length >= (Py_ssize_t)sizeof(data->OptionSelfCloseSysID)) {
            PyErr_Format(PyExc_ValueError, "OptionSelfCloseSysID too long: length=%zd (max allowed is 20)", CThostFtdcInputOptionSelfCloseActionField_OptionSelfCloseSysID_length);
            return -1;
        }
        // memset(data->OptionSelfCloseSysID, 0, sizeof(data->OptionSelfCloseSysID));
        // memcpy(data->OptionSelfCloseSysID, CThostFtdcInputOptionSelfCloseActionField_OptionSelfCloseSysID, CThostFtdcInputOptionSelfCloseActionField_OptionSelfCloseSysID_length);
        strncpy(data->OptionSelfCloseSysID, CThostFtdcInputOptionSelfCloseActionField_OptionSelfCloseSysID, sizeof(data->OptionSelfCloseSysID));
        CThostFtdcInputOptionSelfCloseActionField_OptionSelfCloseSysID = NULL;
    }

    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    data->ActionFlag = CThostFtdcInputOptionSelfCloseActionField_ActionFlag;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcInputOptionSelfCloseActionField_UserID != NULL ) {
        if(CThostFtdcInputOptionSelfCloseActionField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcInputOptionSelfCloseActionField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcInputOptionSelfCloseActionField_UserID, CThostFtdcInputOptionSelfCloseActionField_UserID_length);
        strncpy(data->UserID, CThostFtdcInputOptionSelfCloseActionField_UserID, sizeof(data->UserID));
        CThostFtdcInputOptionSelfCloseActionField_UserID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcInputOptionSelfCloseActionField_reserve1 != NULL ) {
        if(CThostFtdcInputOptionSelfCloseActionField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcInputOptionSelfCloseActionField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcInputOptionSelfCloseActionField_reserve1, CThostFtdcInputOptionSelfCloseActionField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcInputOptionSelfCloseActionField_reserve1, sizeof(data->reserve1));
        CThostFtdcInputOptionSelfCloseActionField_reserve1 = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcInputOptionSelfCloseActionField_InvestUnitID != NULL ) {
        if(CThostFtdcInputOptionSelfCloseActionField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcInputOptionSelfCloseActionField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcInputOptionSelfCloseActionField_InvestUnitID, CThostFtdcInputOptionSelfCloseActionField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcInputOptionSelfCloseActionField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcInputOptionSelfCloseActionField_InvestUnitID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcInputOptionSelfCloseActionField_reserve2 != NULL ) {
        if(CThostFtdcInputOptionSelfCloseActionField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 15)", CThostFtdcInputOptionSelfCloseActionField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcInputOptionSelfCloseActionField_reserve2, CThostFtdcInputOptionSelfCloseActionField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcInputOptionSelfCloseActionField_reserve2, sizeof(data->reserve2));
        CThostFtdcInputOptionSelfCloseActionField_reserve2 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcInputOptionSelfCloseActionField_MacAddress != NULL ) {
        if(CThostFtdcInputOptionSelfCloseActionField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcInputOptionSelfCloseActionField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcInputOptionSelfCloseActionField_MacAddress, CThostFtdcInputOptionSelfCloseActionField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcInputOptionSelfCloseActionField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcInputOptionSelfCloseActionField_MacAddress = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcInputOptionSelfCloseActionField_InstrumentID != NULL ) {
        if(CThostFtdcInputOptionSelfCloseActionField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcInputOptionSelfCloseActionField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcInputOptionSelfCloseActionField_InstrumentID, CThostFtdcInputOptionSelfCloseActionField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcInputOptionSelfCloseActionField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcInputOptionSelfCloseActionField_InstrumentID = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcInputOptionSelfCloseActionField_IPAddress != NULL ) {
        if(CThostFtdcInputOptionSelfCloseActionField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcInputOptionSelfCloseActionField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcInputOptionSelfCloseActionField_IPAddress, CThostFtdcInputOptionSelfCloseActionField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcInputOptionSelfCloseActionField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcInputOptionSelfCloseActionField_IPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInputOptionSelfCloseActionFieldType_repr(PyObject *self) {

    PyCThostFtdcInputOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseActionFieldData>(self);
    CThostFtdcInputOptionSelfCloseActionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:i,s:y,s:i,s:i,s:i,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "OptionSelfCloseActionRef", data->OptionSelfCloseActionRef
        , "OptionSelfCloseRef", data->OptionSelfCloseRef//, (Py_ssize_t)sizeof(data->OptionSelfCloseRef)
        , "RequestID", data->RequestID
        , "FrontID", data->FrontID
        , "SessionID", data->SessionID
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "OptionSelfCloseSysID", data->OptionSelfCloseSysID//, (Py_ssize_t)sizeof(data->OptionSelfCloseSysID)
        , "ActionFlag", data->ActionFlag
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "reserve2", data->reserve2//, (Py_ssize_t)sizeof(data->reserve2)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputOptionSelfCloseActionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputOptionSelfCloseActionField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInputOptionSelfCloseActionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInputOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseActionFieldData>(self);
    CThostFtdcInputOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInputOptionSelfCloseActionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOptionSelfCloseActionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseActionFieldData>(self);
    CThostFtdcInputOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInputOptionSelfCloseActionFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInputOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseActionFieldData>(self);
    CThostFtdcInputOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInputOptionSelfCloseActionFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOptionSelfCloseActionField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseActionFieldData>(self);
    CThostFtdcInputOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期权自对冲引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcInputOptionSelfCloseActionFieldType_get_OptionSelfCloseRef(PyObject *self, void *closure) {
    PyCThostFtdcInputOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseActionFieldData>(self);
    CThostFtdcInputOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OptionSelfCloseRef, (Py_ssize_t)sizeof(data->OptionSelfCloseRef));
    return PyBytes_FromString(data->OptionSelfCloseRef);
}

static int PyCThostFtdcInputOptionSelfCloseActionFieldType_set_OptionSelfCloseRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OptionSelfCloseRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOptionSelfCloseActionField::OptionSelfCloseRef)) {
        PyErr_SetString(PyExc_ValueError, "OptionSelfCloseRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseActionFieldData>(self);
    CThostFtdcInputOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->OptionSelfCloseRef, 0, sizeof(data->OptionSelfCloseRef));
    // memcpy(data->OptionSelfCloseRef, buf, len);
    strncpy(data->OptionSelfCloseRef, buf, sizeof(data->OptionSelfCloseRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcInputOptionSelfCloseActionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcInputOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseActionFieldData>(self);
    CThostFtdcInputOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcInputOptionSelfCloseActionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOptionSelfCloseActionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseActionFieldData>(self);
    CThostFtdcInputOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期权自对冲操作编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcInputOptionSelfCloseActionFieldType_get_OptionSelfCloseSysID(PyObject *self, void *closure) {
    PyCThostFtdcInputOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseActionFieldData>(self);
    CThostFtdcInputOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OptionSelfCloseSysID, (Py_ssize_t)sizeof(data->OptionSelfCloseSysID));
    return PyBytes_FromString(data->OptionSelfCloseSysID);
}

static int PyCThostFtdcInputOptionSelfCloseActionFieldType_set_OptionSelfCloseSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OptionSelfCloseSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOptionSelfCloseActionField::OptionSelfCloseSysID)) {
        PyErr_SetString(PyExc_ValueError, "OptionSelfCloseSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseActionFieldData>(self);
    CThostFtdcInputOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->OptionSelfCloseSysID, 0, sizeof(data->OptionSelfCloseSysID));
    // memcpy(data->OptionSelfCloseSysID, buf, len);
    strncpy(data->OptionSelfCloseSysID, buf, sizeof(data->OptionSelfCloseSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionFlagType
static PyObject *PyCThostFtdcInputOptionSelfCloseActionFieldType_get_ActionFlag(PyObject *self, void *closure) {
    PyCThostFtdcInputOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseActionFieldData>(self);
    CThostFtdcInputOptionSelfCloseActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionFlag), 1);
}

static int PyCThostFtdcInputOptionSelfCloseActionFieldType_set_ActionFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInputOptionSelfCloseActionField::ActionFlag)) {
        PyErr_SetString(PyExc_ValueError, "ActionFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseActionFieldData>(self);
    CThostFtdcInputOptionSelfCloseActionField *data = &(extra->data);
    data->ActionFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcInputOptionSelfCloseActionFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcInputOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseActionFieldData>(self);
    CThostFtdcInputOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcInputOptionSelfCloseActionFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOptionSelfCloseActionField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseActionFieldData>(self);
    CThostFtdcInputOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcInputOptionSelfCloseActionFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcInputOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseActionFieldData>(self);
    CThostFtdcInputOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcInputOptionSelfCloseActionFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOptionSelfCloseActionField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseActionFieldData>(self);
    CThostFtdcInputOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcInputOptionSelfCloseActionFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcInputOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseActionFieldData>(self);
    CThostFtdcInputOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcInputOptionSelfCloseActionFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOptionSelfCloseActionField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseActionFieldData>(self);
    CThostFtdcInputOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcInputOptionSelfCloseActionFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcInputOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseActionFieldData>(self);
    CThostFtdcInputOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcInputOptionSelfCloseActionFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOptionSelfCloseActionField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseActionFieldData>(self);
    CThostFtdcInputOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcInputOptionSelfCloseActionFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcInputOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseActionFieldData>(self);
    CThostFtdcInputOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcInputOptionSelfCloseActionFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOptionSelfCloseActionField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseActionFieldData>(self);
    CThostFtdcInputOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcInputOptionSelfCloseActionFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcInputOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseActionFieldData>(self);
    CThostFtdcInputOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcInputOptionSelfCloseActionFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOptionSelfCloseActionField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseActionFieldData>(self);
    CThostFtdcInputOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcInputOptionSelfCloseActionFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcInputOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseActionFieldData>(self);
    CThostFtdcInputOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcInputOptionSelfCloseActionFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOptionSelfCloseActionField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseActionFieldData>(self);
    CThostFtdcInputOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInputOptionSelfCloseActionFieldType_members[] = {
    /// 期权自对冲操作引用
    /// typedef int TThostFtdcOrderActionRefType
    {
        .name = "OptionSelfCloseActionRef",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInputOptionSelfCloseActionFieldData, data.OptionSelfCloseActionRef),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("期权自对冲操作引用")
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
        .offset = offsetof(PyCThostFtdcInputOptionSelfCloseActionFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcInputOptionSelfCloseActionFieldData, data.FrontID),
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
        .offset = offsetof(PyCThostFtdcInputOptionSelfCloseActionFieldData, data.SessionID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("会话编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInputOptionSelfCloseActionFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInputOptionSelfCloseActionFieldType_get_BrokerID,
    .set = PyCThostFtdcInputOptionSelfCloseActionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInputOptionSelfCloseActionFieldType_get_InvestorID,
    .set = PyCThostFtdcInputOptionSelfCloseActionFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 期权自对冲引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "OptionSelfCloseRef",
    .get = PyCThostFtdcInputOptionSelfCloseActionFieldType_get_OptionSelfCloseRef,
    .set = PyCThostFtdcInputOptionSelfCloseActionFieldType_set_OptionSelfCloseRef,
    .doc = PyDoc_STR("期权自对冲引用"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcInputOptionSelfCloseActionFieldType_get_ExchangeID,
    .set = PyCThostFtdcInputOptionSelfCloseActionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 期权自对冲操作编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "OptionSelfCloseSysID",
    .get = PyCThostFtdcInputOptionSelfCloseActionFieldType_get_OptionSelfCloseSysID,
    .set = PyCThostFtdcInputOptionSelfCloseActionFieldType_set_OptionSelfCloseSysID,
    .doc = PyDoc_STR("期权自对冲操作编号"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    {
    .name = "ActionFlag",
    .get = PyCThostFtdcInputOptionSelfCloseActionFieldType_get_ActionFlag,
    .set = PyCThostFtdcInputOptionSelfCloseActionFieldType_set_ActionFlag,
    .doc = PyDoc_STR("操作标志"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcInputOptionSelfCloseActionFieldType_get_UserID,
    .set = PyCThostFtdcInputOptionSelfCloseActionFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcInputOptionSelfCloseActionFieldType_get_reserve1,
    .set = PyCThostFtdcInputOptionSelfCloseActionFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcInputOptionSelfCloseActionFieldType_get_InvestUnitID,
    .set = PyCThostFtdcInputOptionSelfCloseActionFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve2",
    .get = PyCThostFtdcInputOptionSelfCloseActionFieldType_get_reserve2,
    .set = PyCThostFtdcInputOptionSelfCloseActionFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcInputOptionSelfCloseActionFieldType_get_MacAddress,
    .set = PyCThostFtdcInputOptionSelfCloseActionFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcInputOptionSelfCloseActionFieldType_get_InstrumentID,
    .set = PyCThostFtdcInputOptionSelfCloseActionFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcInputOptionSelfCloseActionFieldType_get_IPAddress,
    .set = PyCThostFtdcInputOptionSelfCloseActionFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInputOptionSelfCloseActionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInputOptionSelfCloseActionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("输入期权自对冲操作")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInputOptionSelfCloseActionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInputOptionSelfCloseActionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInputOptionSelfCloseActionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInputOptionSelfCloseActionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInputOptionSelfCloseActionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInputOptionSelfCloseActionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("输入期权自对冲操作")},
    {Py_tp_members, PyCThostFtdcInputOptionSelfCloseActionFieldType_members},
    {Py_tp_getset, PyCThostFtdcInputOptionSelfCloseActionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInputOptionSelfCloseActionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInputOptionSelfCloseActionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInputOptionSelfCloseActionFieldType_spec = {
    .name = "PyCTP.CThostFtdcInputOptionSelfCloseActionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInputOptionSelfCloseActionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInputOptionSelfCloseActionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInputOptionSelfCloseActionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInputOptionSelfCloseActionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInputOptionSelfCloseActionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInputOptionSelfCloseActionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInputOptionSelfCloseActionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInputOptionSelfCloseActionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInputOptionSelfCloseActionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputOptionSelfCloseActionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}