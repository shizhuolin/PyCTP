
#include "PyCThostFtdcInputOffsetSettingField.h"

///输入的对冲设置

static int PyCThostFtdcInputOffsetSettingFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "InstrumentID", "UnderlyingInstrID", "ProductID", "OffsetType", "Volume", "IsOffset", "RequestID", "UserID", "ExchangeID", "IPAddress", "MacAddress", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInputOffsetSettingField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInputOffsetSettingField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInputOffsetSettingField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInputOffsetSettingField_InvestorID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcInputOffsetSettingField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcInputOffsetSettingField_InstrumentID_length = 0;

    /// 标的期货合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcInputOffsetSettingField_UnderlyingInstrID = NULL;
    Py_ssize_t CThostFtdcInputOffsetSettingField_UnderlyingInstrID_length = 0;

    /// 产品代码
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcInputOffsetSettingField_ProductID = NULL;
    Py_ssize_t CThostFtdcInputOffsetSettingField_ProductID_length = 0;

    /// 对冲类型
    /// typedef char TThostFtdcOffsetTypeType
    char CThostFtdcInputOffsetSettingField_OffsetType = 0;

    /// 申请对冲的合约数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcInputOffsetSettingField_Volume = 0;

    /// 是否对冲
    /// typedef int TThostFtdcBoolType
    int CThostFtdcInputOffsetSettingField_IsOffset = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcInputOffsetSettingField_RequestID = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcInputOffsetSettingField_UserID = NULL;
    Py_ssize_t CThostFtdcInputOffsetSettingField_UserID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcInputOffsetSettingField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcInputOffsetSettingField_ExchangeID_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcInputOffsetSettingField_IPAddress = NULL;
    Py_ssize_t CThostFtdcInputOffsetSettingField_IPAddress_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcInputOffsetSettingField_MacAddress = NULL;
    Py_ssize_t CThostFtdcInputOffsetSettingField_MacAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ciiiy#y#y#y#", (char **)kwlist
        , &CThostFtdcInputOffsetSettingField_BrokerID, &CThostFtdcInputOffsetSettingField_BrokerID_length
        , &CThostFtdcInputOffsetSettingField_InvestorID, &CThostFtdcInputOffsetSettingField_InvestorID_length
        , &CThostFtdcInputOffsetSettingField_InstrumentID, &CThostFtdcInputOffsetSettingField_InstrumentID_length
        , &CThostFtdcInputOffsetSettingField_UnderlyingInstrID, &CThostFtdcInputOffsetSettingField_UnderlyingInstrID_length
        , &CThostFtdcInputOffsetSettingField_ProductID, &CThostFtdcInputOffsetSettingField_ProductID_length
        , &CThostFtdcInputOffsetSettingField_OffsetType
        , &CThostFtdcInputOffsetSettingField_Volume
        , &CThostFtdcInputOffsetSettingField_IsOffset
        , &CThostFtdcInputOffsetSettingField_RequestID
        , &CThostFtdcInputOffsetSettingField_UserID, &CThostFtdcInputOffsetSettingField_UserID_length
        , &CThostFtdcInputOffsetSettingField_ExchangeID, &CThostFtdcInputOffsetSettingField_ExchangeID_length
        , &CThostFtdcInputOffsetSettingField_IPAddress, &CThostFtdcInputOffsetSettingField_IPAddress_length
        , &CThostFtdcInputOffsetSettingField_MacAddress, &CThostFtdcInputOffsetSettingField_MacAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcInputOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOffsetSettingFieldData>(self);
    CThostFtdcInputOffsetSettingField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInputOffsetSettingField_BrokerID != NULL ) {
        if(CThostFtdcInputOffsetSettingField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInputOffsetSettingField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInputOffsetSettingField_BrokerID, CThostFtdcInputOffsetSettingField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInputOffsetSettingField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInputOffsetSettingField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInputOffsetSettingField_InvestorID != NULL ) {
        if(CThostFtdcInputOffsetSettingField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInputOffsetSettingField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInputOffsetSettingField_InvestorID, CThostFtdcInputOffsetSettingField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInputOffsetSettingField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInputOffsetSettingField_InvestorID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcInputOffsetSettingField_InstrumentID != NULL ) {
        if(CThostFtdcInputOffsetSettingField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcInputOffsetSettingField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcInputOffsetSettingField_InstrumentID, CThostFtdcInputOffsetSettingField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcInputOffsetSettingField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcInputOffsetSettingField_InstrumentID = NULL;
    }

    /// 标的期货合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcInputOffsetSettingField_UnderlyingInstrID != NULL ) {
        if(CThostFtdcInputOffsetSettingField_UnderlyingInstrID_length >= (Py_ssize_t)sizeof(data->UnderlyingInstrID)) {
            PyErr_Format(PyExc_ValueError, "UnderlyingInstrID too long: length=%zd (max allowed is 80)", CThostFtdcInputOffsetSettingField_UnderlyingInstrID_length);
            return -1;
        }
        // memset(data->UnderlyingInstrID, 0, sizeof(data->UnderlyingInstrID));
        // memcpy(data->UnderlyingInstrID, CThostFtdcInputOffsetSettingField_UnderlyingInstrID, CThostFtdcInputOffsetSettingField_UnderlyingInstrID_length);
        strncpy(data->UnderlyingInstrID, CThostFtdcInputOffsetSettingField_UnderlyingInstrID, sizeof(data->UnderlyingInstrID));
        CThostFtdcInputOffsetSettingField_UnderlyingInstrID = NULL;
    }

    /// 产品代码
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcInputOffsetSettingField_ProductID != NULL ) {
        if(CThostFtdcInputOffsetSettingField_ProductID_length >= (Py_ssize_t)sizeof(data->ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is 40)", CThostFtdcInputOffsetSettingField_ProductID_length);
            return -1;
        }
        // memset(data->ProductID, 0, sizeof(data->ProductID));
        // memcpy(data->ProductID, CThostFtdcInputOffsetSettingField_ProductID, CThostFtdcInputOffsetSettingField_ProductID_length);
        strncpy(data->ProductID, CThostFtdcInputOffsetSettingField_ProductID, sizeof(data->ProductID));
        CThostFtdcInputOffsetSettingField_ProductID = NULL;
    }

    /// 对冲类型
    /// typedef char TThostFtdcOffsetTypeType
    data->OffsetType = CThostFtdcInputOffsetSettingField_OffsetType;

    /// 申请对冲的合约数量
    /// typedef int TThostFtdcVolumeType
    data->Volume = CThostFtdcInputOffsetSettingField_Volume;

    /// 是否对冲
    /// typedef int TThostFtdcBoolType
    data->IsOffset = CThostFtdcInputOffsetSettingField_IsOffset;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcInputOffsetSettingField_RequestID;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcInputOffsetSettingField_UserID != NULL ) {
        if(CThostFtdcInputOffsetSettingField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcInputOffsetSettingField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcInputOffsetSettingField_UserID, CThostFtdcInputOffsetSettingField_UserID_length);
        strncpy(data->UserID, CThostFtdcInputOffsetSettingField_UserID, sizeof(data->UserID));
        CThostFtdcInputOffsetSettingField_UserID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcInputOffsetSettingField_ExchangeID != NULL ) {
        if(CThostFtdcInputOffsetSettingField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcInputOffsetSettingField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcInputOffsetSettingField_ExchangeID, CThostFtdcInputOffsetSettingField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcInputOffsetSettingField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcInputOffsetSettingField_ExchangeID = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcInputOffsetSettingField_IPAddress != NULL ) {
        if(CThostFtdcInputOffsetSettingField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcInputOffsetSettingField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcInputOffsetSettingField_IPAddress, CThostFtdcInputOffsetSettingField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcInputOffsetSettingField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcInputOffsetSettingField_IPAddress = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcInputOffsetSettingField_MacAddress != NULL ) {
        if(CThostFtdcInputOffsetSettingField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcInputOffsetSettingField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcInputOffsetSettingField_MacAddress, CThostFtdcInputOffsetSettingField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcInputOffsetSettingField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcInputOffsetSettingField_MacAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInputOffsetSettingFieldType_repr(PyObject *self) {

    PyCThostFtdcInputOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOffsetSettingFieldData>(self);
    CThostFtdcInputOffsetSettingField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:c,s:i,s:i,s:i,s:y,s:y,s:y,s:y}"
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
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputOffsetSettingField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputOffsetSettingField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInputOffsetSettingFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInputOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOffsetSettingFieldData>(self);
    CThostFtdcInputOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInputOffsetSettingFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOffsetSettingField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOffsetSettingFieldData>(self);
    CThostFtdcInputOffsetSettingField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInputOffsetSettingFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInputOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOffsetSettingFieldData>(self);
    CThostFtdcInputOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInputOffsetSettingFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOffsetSettingField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOffsetSettingFieldData>(self);
    CThostFtdcInputOffsetSettingField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcInputOffsetSettingFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcInputOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOffsetSettingFieldData>(self);
    CThostFtdcInputOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcInputOffsetSettingFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOffsetSettingField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOffsetSettingFieldData>(self);
    CThostFtdcInputOffsetSettingField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 标的期货合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcInputOffsetSettingFieldType_get_UnderlyingInstrID(PyObject *self, void *closure) {
    PyCThostFtdcInputOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOffsetSettingFieldData>(self);
    CThostFtdcInputOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UnderlyingInstrID, (Py_ssize_t)sizeof(data->UnderlyingInstrID));
    return PyBytes_FromString(data->UnderlyingInstrID);
}

static int PyCThostFtdcInputOffsetSettingFieldType_set_UnderlyingInstrID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UnderlyingInstrID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOffsetSettingField::UnderlyingInstrID)) {
        PyErr_SetString(PyExc_ValueError, "UnderlyingInstrID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOffsetSettingFieldData>(self);
    CThostFtdcInputOffsetSettingField *data = &(extra->data);
    // memset(data->UnderlyingInstrID, 0, sizeof(data->UnderlyingInstrID));
    // memcpy(data->UnderlyingInstrID, buf, len);
    strncpy(data->UnderlyingInstrID, buf, sizeof(data->UnderlyingInstrID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品代码
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcInputOffsetSettingFieldType_get_ProductID(PyObject *self, void *closure) {
    PyCThostFtdcInputOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOffsetSettingFieldData>(self);
    CThostFtdcInputOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductID, (Py_ssize_t)sizeof(data->ProductID));
    return PyBytes_FromString(data->ProductID);
}

static int PyCThostFtdcInputOffsetSettingFieldType_set_ProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOffsetSettingField::ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOffsetSettingFieldData>(self);
    CThostFtdcInputOffsetSettingField *data = &(extra->data);
    // memset(data->ProductID, 0, sizeof(data->ProductID));
    // memcpy(data->ProductID, buf, len);
    strncpy(data->ProductID, buf, sizeof(data->ProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 对冲类型
/// typedef char TThostFtdcOffsetTypeType
static PyObject *PyCThostFtdcInputOffsetSettingFieldType_get_OffsetType(PyObject *self, void *closure) {
    PyCThostFtdcInputOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOffsetSettingFieldData>(self);
    CThostFtdcInputOffsetSettingField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OffsetType), 1);
}

static int PyCThostFtdcInputOffsetSettingFieldType_set_OffsetType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OffsetType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInputOffsetSettingField::OffsetType)) {
        PyErr_SetString(PyExc_ValueError, "OffsetType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOffsetSettingFieldData>(self);
    CThostFtdcInputOffsetSettingField *data = &(extra->data);
    data->OffsetType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcInputOffsetSettingFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcInputOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOffsetSettingFieldData>(self);
    CThostFtdcInputOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcInputOffsetSettingFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOffsetSettingField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOffsetSettingFieldData>(self);
    CThostFtdcInputOffsetSettingField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcInputOffsetSettingFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcInputOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOffsetSettingFieldData>(self);
    CThostFtdcInputOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcInputOffsetSettingFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOffsetSettingField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOffsetSettingFieldData>(self);
    CThostFtdcInputOffsetSettingField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcInputOffsetSettingFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcInputOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOffsetSettingFieldData>(self);
    CThostFtdcInputOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcInputOffsetSettingFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOffsetSettingField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOffsetSettingFieldData>(self);
    CThostFtdcInputOffsetSettingField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcInputOffsetSettingFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcInputOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOffsetSettingFieldData>(self);
    CThostFtdcInputOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcInputOffsetSettingFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputOffsetSettingField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputOffsetSettingFieldData>(self);
    CThostFtdcInputOffsetSettingField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInputOffsetSettingFieldType_members[] = {
    /// 申请对冲的合约数量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "Volume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInputOffsetSettingFieldData, data.Volume),
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
        .offset = offsetof(PyCThostFtdcInputOffsetSettingFieldData, data.IsOffset),
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
        .offset = offsetof(PyCThostFtdcInputOffsetSettingFieldData, data.RequestID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("请求编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInputOffsetSettingFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInputOffsetSettingFieldType_get_BrokerID,
    .set = PyCThostFtdcInputOffsetSettingFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInputOffsetSettingFieldType_get_InvestorID,
    .set = PyCThostFtdcInputOffsetSettingFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcInputOffsetSettingFieldType_get_InstrumentID,
    .set = PyCThostFtdcInputOffsetSettingFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 标的期货合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "UnderlyingInstrID",
    .get = PyCThostFtdcInputOffsetSettingFieldType_get_UnderlyingInstrID,
    .set = PyCThostFtdcInputOffsetSettingFieldType_set_UnderlyingInstrID,
    .doc = PyDoc_STR("标的期货合约代码"),
    },
    /// 产品代码
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "ProductID",
    .get = PyCThostFtdcInputOffsetSettingFieldType_get_ProductID,
    .set = PyCThostFtdcInputOffsetSettingFieldType_set_ProductID,
    .doc = PyDoc_STR("产品代码"),
    },
    /// 对冲类型
    /// typedef char TThostFtdcOffsetTypeType
    {
    .name = "OffsetType",
    .get = PyCThostFtdcInputOffsetSettingFieldType_get_OffsetType,
    .set = PyCThostFtdcInputOffsetSettingFieldType_set_OffsetType,
    .doc = PyDoc_STR("对冲类型"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcInputOffsetSettingFieldType_get_UserID,
    .set = PyCThostFtdcInputOffsetSettingFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcInputOffsetSettingFieldType_get_ExchangeID,
    .set = PyCThostFtdcInputOffsetSettingFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcInputOffsetSettingFieldType_get_IPAddress,
    .set = PyCThostFtdcInputOffsetSettingFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcInputOffsetSettingFieldType_get_MacAddress,
    .set = PyCThostFtdcInputOffsetSettingFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInputOffsetSettingFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInputOffsetSettingField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("输入的对冲设置")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInputOffsetSettingFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInputOffsetSettingFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInputOffsetSettingFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInputOffsetSettingFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInputOffsetSettingFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInputOffsetSettingFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("输入的对冲设置")},
    {Py_tp_members, PyCThostFtdcInputOffsetSettingFieldType_members},
    {Py_tp_getset, PyCThostFtdcInputOffsetSettingFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInputOffsetSettingFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInputOffsetSettingFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInputOffsetSettingFieldType_spec = {
    .name = "PyCTP.CThostFtdcInputOffsetSettingField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInputOffsetSettingFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInputOffsetSettingFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInputOffsetSettingFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInputOffsetSettingFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInputOffsetSettingFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInputOffsetSettingFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInputOffsetSettingFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInputOffsetSettingFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInputOffsetSettingField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputOffsetSettingField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}