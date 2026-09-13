
#include "PyCThostFtdcInputCombActionField.h"

///输入的申请组合

static int PyCThostFtdcInputCombActionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "reserve1", "CombActionRef", "UserID", "Direction", "Volume", "CombDirection", "HedgeFlag", "ExchangeID", "reserve2", "MacAddress", "InvestUnitID", "FrontID", "SessionID", "InstrumentID", "IPAddress", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInputCombActionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInputCombActionField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInputCombActionField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInputCombActionField_InvestorID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcInputCombActionField_reserve1 = NULL;
    Py_ssize_t CThostFtdcInputCombActionField_reserve1_length = 0;

    /// 组合引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcInputCombActionField_CombActionRef = NULL;
    Py_ssize_t CThostFtdcInputCombActionField_CombActionRef_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcInputCombActionField_UserID = NULL;
    Py_ssize_t CThostFtdcInputCombActionField_UserID_length = 0;

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    char CThostFtdcInputCombActionField_Direction = 0;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcInputCombActionField_Volume = 0;

    /// 组合指令方向
    /// typedef char TThostFtdcCombDirectionType
    char CThostFtdcInputCombActionField_CombDirection = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcInputCombActionField_HedgeFlag = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcInputCombActionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcInputCombActionField_ExchangeID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcInputCombActionField_reserve2 = NULL;
    Py_ssize_t CThostFtdcInputCombActionField_reserve2_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcInputCombActionField_MacAddress = NULL;
    Py_ssize_t CThostFtdcInputCombActionField_MacAddress_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcInputCombActionField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcInputCombActionField_InvestUnitID_length = 0;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    int CThostFtdcInputCombActionField_FrontID = 0;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcInputCombActionField_SessionID = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcInputCombActionField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcInputCombActionField_InstrumentID_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcInputCombActionField_IPAddress = NULL;
    Py_ssize_t CThostFtdcInputCombActionField_IPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ciccy#y#y#y#iiy#y#", (char **)kwlist
        , &CThostFtdcInputCombActionField_BrokerID, &CThostFtdcInputCombActionField_BrokerID_length
        , &CThostFtdcInputCombActionField_InvestorID, &CThostFtdcInputCombActionField_InvestorID_length
        , &CThostFtdcInputCombActionField_reserve1, &CThostFtdcInputCombActionField_reserve1_length
        , &CThostFtdcInputCombActionField_CombActionRef, &CThostFtdcInputCombActionField_CombActionRef_length
        , &CThostFtdcInputCombActionField_UserID, &CThostFtdcInputCombActionField_UserID_length
        , &CThostFtdcInputCombActionField_Direction
        , &CThostFtdcInputCombActionField_Volume
        , &CThostFtdcInputCombActionField_CombDirection
        , &CThostFtdcInputCombActionField_HedgeFlag
        , &CThostFtdcInputCombActionField_ExchangeID, &CThostFtdcInputCombActionField_ExchangeID_length
        , &CThostFtdcInputCombActionField_reserve2, &CThostFtdcInputCombActionField_reserve2_length
        , &CThostFtdcInputCombActionField_MacAddress, &CThostFtdcInputCombActionField_MacAddress_length
        , &CThostFtdcInputCombActionField_InvestUnitID, &CThostFtdcInputCombActionField_InvestUnitID_length
        , &CThostFtdcInputCombActionField_FrontID
        , &CThostFtdcInputCombActionField_SessionID
        , &CThostFtdcInputCombActionField_InstrumentID, &CThostFtdcInputCombActionField_InstrumentID_length
        , &CThostFtdcInputCombActionField_IPAddress, &CThostFtdcInputCombActionField_IPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcInputCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputCombActionFieldData>(self);
    CThostFtdcInputCombActionField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInputCombActionField_BrokerID != NULL ) {
        if(CThostFtdcInputCombActionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInputCombActionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInputCombActionField_BrokerID, CThostFtdcInputCombActionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInputCombActionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInputCombActionField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInputCombActionField_InvestorID != NULL ) {
        if(CThostFtdcInputCombActionField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInputCombActionField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInputCombActionField_InvestorID, CThostFtdcInputCombActionField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInputCombActionField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInputCombActionField_InvestorID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcInputCombActionField_reserve1 != NULL ) {
        if(CThostFtdcInputCombActionField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcInputCombActionField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcInputCombActionField_reserve1, CThostFtdcInputCombActionField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcInputCombActionField_reserve1, sizeof(data->reserve1));
        CThostFtdcInputCombActionField_reserve1 = NULL;
    }

    /// 组合引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcInputCombActionField_CombActionRef != NULL ) {
        if(CThostFtdcInputCombActionField_CombActionRef_length >= (Py_ssize_t)sizeof(data->CombActionRef)) {
            PyErr_Format(PyExc_ValueError, "CombActionRef too long: length=%zd (max allowed is 12)", CThostFtdcInputCombActionField_CombActionRef_length);
            return -1;
        }
        // memset(data->CombActionRef, 0, sizeof(data->CombActionRef));
        // memcpy(data->CombActionRef, CThostFtdcInputCombActionField_CombActionRef, CThostFtdcInputCombActionField_CombActionRef_length);
        strncpy(data->CombActionRef, CThostFtdcInputCombActionField_CombActionRef, sizeof(data->CombActionRef));
        CThostFtdcInputCombActionField_CombActionRef = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcInputCombActionField_UserID != NULL ) {
        if(CThostFtdcInputCombActionField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcInputCombActionField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcInputCombActionField_UserID, CThostFtdcInputCombActionField_UserID_length);
        strncpy(data->UserID, CThostFtdcInputCombActionField_UserID, sizeof(data->UserID));
        CThostFtdcInputCombActionField_UserID = NULL;
    }

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    data->Direction = CThostFtdcInputCombActionField_Direction;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    data->Volume = CThostFtdcInputCombActionField_Volume;

    /// 组合指令方向
    /// typedef char TThostFtdcCombDirectionType
    data->CombDirection = CThostFtdcInputCombActionField_CombDirection;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcInputCombActionField_HedgeFlag;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcInputCombActionField_ExchangeID != NULL ) {
        if(CThostFtdcInputCombActionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcInputCombActionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcInputCombActionField_ExchangeID, CThostFtdcInputCombActionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcInputCombActionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcInputCombActionField_ExchangeID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcInputCombActionField_reserve2 != NULL ) {
        if(CThostFtdcInputCombActionField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 15)", CThostFtdcInputCombActionField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcInputCombActionField_reserve2, CThostFtdcInputCombActionField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcInputCombActionField_reserve2, sizeof(data->reserve2));
        CThostFtdcInputCombActionField_reserve2 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcInputCombActionField_MacAddress != NULL ) {
        if(CThostFtdcInputCombActionField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcInputCombActionField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcInputCombActionField_MacAddress, CThostFtdcInputCombActionField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcInputCombActionField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcInputCombActionField_MacAddress = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcInputCombActionField_InvestUnitID != NULL ) {
        if(CThostFtdcInputCombActionField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcInputCombActionField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcInputCombActionField_InvestUnitID, CThostFtdcInputCombActionField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcInputCombActionField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcInputCombActionField_InvestUnitID = NULL;
    }

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    data->FrontID = CThostFtdcInputCombActionField_FrontID;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcInputCombActionField_SessionID;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcInputCombActionField_InstrumentID != NULL ) {
        if(CThostFtdcInputCombActionField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcInputCombActionField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcInputCombActionField_InstrumentID, CThostFtdcInputCombActionField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcInputCombActionField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcInputCombActionField_InstrumentID = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcInputCombActionField_IPAddress != NULL ) {
        if(CThostFtdcInputCombActionField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcInputCombActionField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcInputCombActionField_IPAddress, CThostFtdcInputCombActionField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcInputCombActionField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcInputCombActionField_IPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInputCombActionFieldType_repr(PyObject *self) {

    PyCThostFtdcInputCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputCombActionFieldData>(self);
    CThostFtdcInputCombActionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:c,s:i,s:c,s:c,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "CombActionRef", data->CombActionRef//, (Py_ssize_t)sizeof(data->CombActionRef)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "Direction", data->Direction
        , "Volume", data->Volume
        , "CombDirection", data->CombDirection
        , "HedgeFlag", data->HedgeFlag
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "reserve2", data->reserve2//, (Py_ssize_t)sizeof(data->reserve2)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "FrontID", data->FrontID
        , "SessionID", data->SessionID
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputCombActionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputCombActionField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInputCombActionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInputCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputCombActionFieldData>(self);
    CThostFtdcInputCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInputCombActionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputCombActionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputCombActionFieldData>(self);
    CThostFtdcInputCombActionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInputCombActionFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInputCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputCombActionFieldData>(self);
    CThostFtdcInputCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInputCombActionFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputCombActionField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputCombActionFieldData>(self);
    CThostFtdcInputCombActionField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcInputCombActionFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcInputCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputCombActionFieldData>(self);
    CThostFtdcInputCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcInputCombActionFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputCombActionField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputCombActionFieldData>(self);
    CThostFtdcInputCombActionField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 组合引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcInputCombActionFieldType_get_CombActionRef(PyObject *self, void *closure) {
    PyCThostFtdcInputCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputCombActionFieldData>(self);
    CThostFtdcInputCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombActionRef, (Py_ssize_t)sizeof(data->CombActionRef));
    return PyBytes_FromString(data->CombActionRef);
}

static int PyCThostFtdcInputCombActionFieldType_set_CombActionRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombActionRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputCombActionField::CombActionRef)) {
        PyErr_SetString(PyExc_ValueError, "CombActionRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputCombActionFieldData>(self);
    CThostFtdcInputCombActionField *data = &(extra->data);
    // memset(data->CombActionRef, 0, sizeof(data->CombActionRef));
    // memcpy(data->CombActionRef, buf, len);
    strncpy(data->CombActionRef, buf, sizeof(data->CombActionRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcInputCombActionFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcInputCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputCombActionFieldData>(self);
    CThostFtdcInputCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcInputCombActionFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputCombActionField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputCombActionFieldData>(self);
    CThostFtdcInputCombActionField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 买卖方向
/// typedef char TThostFtdcDirectionType
static PyObject *PyCThostFtdcInputCombActionFieldType_get_Direction(PyObject *self, void *closure) {
    PyCThostFtdcInputCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputCombActionFieldData>(self);
    CThostFtdcInputCombActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Direction), 1);
}

static int PyCThostFtdcInputCombActionFieldType_set_Direction(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInputCombActionField::Direction)) {
        PyErr_SetString(PyExc_ValueError, "Direction must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputCombActionFieldData>(self);
    CThostFtdcInputCombActionField *data = &(extra->data);
    data->Direction = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 组合指令方向
/// typedef char TThostFtdcCombDirectionType
static PyObject *PyCThostFtdcInputCombActionFieldType_get_CombDirection(PyObject *self, void *closure) {
    PyCThostFtdcInputCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputCombActionFieldData>(self);
    CThostFtdcInputCombActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->CombDirection), 1);
}

static int PyCThostFtdcInputCombActionFieldType_set_CombDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInputCombActionField::CombDirection)) {
        PyErr_SetString(PyExc_ValueError, "CombDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputCombActionFieldData>(self);
    CThostFtdcInputCombActionField *data = &(extra->data);
    data->CombDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcInputCombActionFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcInputCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputCombActionFieldData>(self);
    CThostFtdcInputCombActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcInputCombActionFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInputCombActionField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputCombActionFieldData>(self);
    CThostFtdcInputCombActionField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcInputCombActionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcInputCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputCombActionFieldData>(self);
    CThostFtdcInputCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcInputCombActionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputCombActionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputCombActionFieldData>(self);
    CThostFtdcInputCombActionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcInputCombActionFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcInputCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputCombActionFieldData>(self);
    CThostFtdcInputCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcInputCombActionFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputCombActionField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputCombActionFieldData>(self);
    CThostFtdcInputCombActionField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcInputCombActionFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcInputCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputCombActionFieldData>(self);
    CThostFtdcInputCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcInputCombActionFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputCombActionField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputCombActionFieldData>(self);
    CThostFtdcInputCombActionField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcInputCombActionFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcInputCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputCombActionFieldData>(self);
    CThostFtdcInputCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcInputCombActionFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputCombActionField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputCombActionFieldData>(self);
    CThostFtdcInputCombActionField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcInputCombActionFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcInputCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputCombActionFieldData>(self);
    CThostFtdcInputCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcInputCombActionFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputCombActionField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputCombActionFieldData>(self);
    CThostFtdcInputCombActionField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcInputCombActionFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcInputCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputCombActionFieldData>(self);
    CThostFtdcInputCombActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcInputCombActionFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputCombActionField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputCombActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputCombActionFieldData>(self);
    CThostFtdcInputCombActionField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInputCombActionFieldType_members[] = {
    /// 数量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "Volume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInputCombActionFieldData, data.Volume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("数量")
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
        .offset = offsetof(PyCThostFtdcInputCombActionFieldData, data.FrontID),
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
        .offset = offsetof(PyCThostFtdcInputCombActionFieldData, data.SessionID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("会话编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInputCombActionFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInputCombActionFieldType_get_BrokerID,
    .set = PyCThostFtdcInputCombActionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInputCombActionFieldType_get_InvestorID,
    .set = PyCThostFtdcInputCombActionFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcInputCombActionFieldType_get_reserve1,
    .set = PyCThostFtdcInputCombActionFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 组合引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "CombActionRef",
    .get = PyCThostFtdcInputCombActionFieldType_get_CombActionRef,
    .set = PyCThostFtdcInputCombActionFieldType_set_CombActionRef,
    .doc = PyDoc_STR("组合引用"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcInputCombActionFieldType_get_UserID,
    .set = PyCThostFtdcInputCombActionFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    {
    .name = "Direction",
    .get = PyCThostFtdcInputCombActionFieldType_get_Direction,
    .set = PyCThostFtdcInputCombActionFieldType_set_Direction,
    .doc = PyDoc_STR("买卖方向"),
    },
    /// 组合指令方向
    /// typedef char TThostFtdcCombDirectionType
    {
    .name = "CombDirection",
    .get = PyCThostFtdcInputCombActionFieldType_get_CombDirection,
    .set = PyCThostFtdcInputCombActionFieldType_set_CombDirection,
    .doc = PyDoc_STR("组合指令方向"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcInputCombActionFieldType_get_HedgeFlag,
    .set = PyCThostFtdcInputCombActionFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcInputCombActionFieldType_get_ExchangeID,
    .set = PyCThostFtdcInputCombActionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve2",
    .get = PyCThostFtdcInputCombActionFieldType_get_reserve2,
    .set = PyCThostFtdcInputCombActionFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcInputCombActionFieldType_get_MacAddress,
    .set = PyCThostFtdcInputCombActionFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcInputCombActionFieldType_get_InvestUnitID,
    .set = PyCThostFtdcInputCombActionFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcInputCombActionFieldType_get_InstrumentID,
    .set = PyCThostFtdcInputCombActionFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcInputCombActionFieldType_get_IPAddress,
    .set = PyCThostFtdcInputCombActionFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInputCombActionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInputCombActionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("输入的申请组合")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInputCombActionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInputCombActionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInputCombActionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInputCombActionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInputCombActionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInputCombActionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("输入的申请组合")},
    {Py_tp_members, PyCThostFtdcInputCombActionFieldType_members},
    {Py_tp_getset, PyCThostFtdcInputCombActionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInputCombActionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInputCombActionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInputCombActionFieldType_spec = {
    .name = "PyCTP.CThostFtdcInputCombActionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInputCombActionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInputCombActionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInputCombActionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInputCombActionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInputCombActionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInputCombActionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInputCombActionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInputCombActionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInputCombActionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputCombActionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}