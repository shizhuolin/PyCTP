
#include "PyCThostFtdcInputForQuoteField.h"

///输入的询价

static int PyCThostFtdcInputForQuoteFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "reserve1", "ForQuoteRef", "UserID", "ExchangeID", "InvestUnitID", "reserve2", "MacAddress", "InstrumentID", "IPAddress", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInputForQuoteField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInputForQuoteField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInputForQuoteField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInputForQuoteField_InvestorID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcInputForQuoteField_reserve1 = NULL;
    Py_ssize_t CThostFtdcInputForQuoteField_reserve1_length = 0;

    /// 询价引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcInputForQuoteField_ForQuoteRef = NULL;
    Py_ssize_t CThostFtdcInputForQuoteField_ForQuoteRef_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcInputForQuoteField_UserID = NULL;
    Py_ssize_t CThostFtdcInputForQuoteField_UserID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcInputForQuoteField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcInputForQuoteField_ExchangeID_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcInputForQuoteField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcInputForQuoteField_InvestUnitID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcInputForQuoteField_reserve2 = NULL;
    Py_ssize_t CThostFtdcInputForQuoteField_reserve2_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcInputForQuoteField_MacAddress = NULL;
    Py_ssize_t CThostFtdcInputForQuoteField_MacAddress_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcInputForQuoteField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcInputForQuoteField_InstrumentID_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcInputForQuoteField_IPAddress = NULL;
    Py_ssize_t CThostFtdcInputForQuoteField_IPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcInputForQuoteField_BrokerID, &CThostFtdcInputForQuoteField_BrokerID_length
        , &CThostFtdcInputForQuoteField_InvestorID, &CThostFtdcInputForQuoteField_InvestorID_length
        , &CThostFtdcInputForQuoteField_reserve1, &CThostFtdcInputForQuoteField_reserve1_length
        , &CThostFtdcInputForQuoteField_ForQuoteRef, &CThostFtdcInputForQuoteField_ForQuoteRef_length
        , &CThostFtdcInputForQuoteField_UserID, &CThostFtdcInputForQuoteField_UserID_length
        , &CThostFtdcInputForQuoteField_ExchangeID, &CThostFtdcInputForQuoteField_ExchangeID_length
        , &CThostFtdcInputForQuoteField_InvestUnitID, &CThostFtdcInputForQuoteField_InvestUnitID_length
        , &CThostFtdcInputForQuoteField_reserve2, &CThostFtdcInputForQuoteField_reserve2_length
        , &CThostFtdcInputForQuoteField_MacAddress, &CThostFtdcInputForQuoteField_MacAddress_length
        , &CThostFtdcInputForQuoteField_InstrumentID, &CThostFtdcInputForQuoteField_InstrumentID_length
        , &CThostFtdcInputForQuoteField_IPAddress, &CThostFtdcInputForQuoteField_IPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcInputForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputForQuoteFieldData>(self);
    CThostFtdcInputForQuoteField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInputForQuoteField_BrokerID != NULL ) {
        if(CThostFtdcInputForQuoteField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInputForQuoteField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInputForQuoteField_BrokerID, CThostFtdcInputForQuoteField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInputForQuoteField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInputForQuoteField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInputForQuoteField_InvestorID != NULL ) {
        if(CThostFtdcInputForQuoteField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInputForQuoteField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInputForQuoteField_InvestorID, CThostFtdcInputForQuoteField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInputForQuoteField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInputForQuoteField_InvestorID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcInputForQuoteField_reserve1 != NULL ) {
        if(CThostFtdcInputForQuoteField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcInputForQuoteField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcInputForQuoteField_reserve1, CThostFtdcInputForQuoteField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcInputForQuoteField_reserve1, sizeof(data->reserve1));
        CThostFtdcInputForQuoteField_reserve1 = NULL;
    }

    /// 询价引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcInputForQuoteField_ForQuoteRef != NULL ) {
        if(CThostFtdcInputForQuoteField_ForQuoteRef_length >= (Py_ssize_t)sizeof(data->ForQuoteRef)) {
            PyErr_Format(PyExc_ValueError, "ForQuoteRef too long: length=%zd (max allowed is 12)", CThostFtdcInputForQuoteField_ForQuoteRef_length);
            return -1;
        }
        // memset(data->ForQuoteRef, 0, sizeof(data->ForQuoteRef));
        // memcpy(data->ForQuoteRef, CThostFtdcInputForQuoteField_ForQuoteRef, CThostFtdcInputForQuoteField_ForQuoteRef_length);
        strncpy(data->ForQuoteRef, CThostFtdcInputForQuoteField_ForQuoteRef, sizeof(data->ForQuoteRef));
        CThostFtdcInputForQuoteField_ForQuoteRef = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcInputForQuoteField_UserID != NULL ) {
        if(CThostFtdcInputForQuoteField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcInputForQuoteField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcInputForQuoteField_UserID, CThostFtdcInputForQuoteField_UserID_length);
        strncpy(data->UserID, CThostFtdcInputForQuoteField_UserID, sizeof(data->UserID));
        CThostFtdcInputForQuoteField_UserID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcInputForQuoteField_ExchangeID != NULL ) {
        if(CThostFtdcInputForQuoteField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcInputForQuoteField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcInputForQuoteField_ExchangeID, CThostFtdcInputForQuoteField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcInputForQuoteField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcInputForQuoteField_ExchangeID = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcInputForQuoteField_InvestUnitID != NULL ) {
        if(CThostFtdcInputForQuoteField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcInputForQuoteField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcInputForQuoteField_InvestUnitID, CThostFtdcInputForQuoteField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcInputForQuoteField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcInputForQuoteField_InvestUnitID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcInputForQuoteField_reserve2 != NULL ) {
        if(CThostFtdcInputForQuoteField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 15)", CThostFtdcInputForQuoteField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcInputForQuoteField_reserve2, CThostFtdcInputForQuoteField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcInputForQuoteField_reserve2, sizeof(data->reserve2));
        CThostFtdcInputForQuoteField_reserve2 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcInputForQuoteField_MacAddress != NULL ) {
        if(CThostFtdcInputForQuoteField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcInputForQuoteField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcInputForQuoteField_MacAddress, CThostFtdcInputForQuoteField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcInputForQuoteField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcInputForQuoteField_MacAddress = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcInputForQuoteField_InstrumentID != NULL ) {
        if(CThostFtdcInputForQuoteField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcInputForQuoteField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcInputForQuoteField_InstrumentID, CThostFtdcInputForQuoteField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcInputForQuoteField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcInputForQuoteField_InstrumentID = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcInputForQuoteField_IPAddress != NULL ) {
        if(CThostFtdcInputForQuoteField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcInputForQuoteField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcInputForQuoteField_IPAddress, CThostFtdcInputForQuoteField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcInputForQuoteField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcInputForQuoteField_IPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInputForQuoteFieldType_repr(PyObject *self) {

    PyCThostFtdcInputForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputForQuoteFieldData>(self);
    CThostFtdcInputForQuoteField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "ForQuoteRef", data->ForQuoteRef//, (Py_ssize_t)sizeof(data->ForQuoteRef)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "reserve2", data->reserve2//, (Py_ssize_t)sizeof(data->reserve2)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputForQuoteField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputForQuoteField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInputForQuoteFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInputForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputForQuoteFieldData>(self);
    CThostFtdcInputForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInputForQuoteFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputForQuoteField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputForQuoteFieldData>(self);
    CThostFtdcInputForQuoteField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInputForQuoteFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInputForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputForQuoteFieldData>(self);
    CThostFtdcInputForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInputForQuoteFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputForQuoteField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputForQuoteFieldData>(self);
    CThostFtdcInputForQuoteField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcInputForQuoteFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcInputForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputForQuoteFieldData>(self);
    CThostFtdcInputForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcInputForQuoteFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputForQuoteField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputForQuoteFieldData>(self);
    CThostFtdcInputForQuoteField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 询价引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcInputForQuoteFieldType_get_ForQuoteRef(PyObject *self, void *closure) {
    PyCThostFtdcInputForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputForQuoteFieldData>(self);
    CThostFtdcInputForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ForQuoteRef, (Py_ssize_t)sizeof(data->ForQuoteRef));
    return PyBytes_FromString(data->ForQuoteRef);
}

static int PyCThostFtdcInputForQuoteFieldType_set_ForQuoteRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ForQuoteRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputForQuoteField::ForQuoteRef)) {
        PyErr_SetString(PyExc_ValueError, "ForQuoteRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputForQuoteFieldData>(self);
    CThostFtdcInputForQuoteField *data = &(extra->data);
    // memset(data->ForQuoteRef, 0, sizeof(data->ForQuoteRef));
    // memcpy(data->ForQuoteRef, buf, len);
    strncpy(data->ForQuoteRef, buf, sizeof(data->ForQuoteRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcInputForQuoteFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcInputForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputForQuoteFieldData>(self);
    CThostFtdcInputForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcInputForQuoteFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputForQuoteField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputForQuoteFieldData>(self);
    CThostFtdcInputForQuoteField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcInputForQuoteFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcInputForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputForQuoteFieldData>(self);
    CThostFtdcInputForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcInputForQuoteFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputForQuoteField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputForQuoteFieldData>(self);
    CThostFtdcInputForQuoteField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcInputForQuoteFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcInputForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputForQuoteFieldData>(self);
    CThostFtdcInputForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcInputForQuoteFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputForQuoteField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputForQuoteFieldData>(self);
    CThostFtdcInputForQuoteField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcInputForQuoteFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcInputForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputForQuoteFieldData>(self);
    CThostFtdcInputForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcInputForQuoteFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputForQuoteField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputForQuoteFieldData>(self);
    CThostFtdcInputForQuoteField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcInputForQuoteFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcInputForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputForQuoteFieldData>(self);
    CThostFtdcInputForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcInputForQuoteFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputForQuoteField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputForQuoteFieldData>(self);
    CThostFtdcInputForQuoteField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcInputForQuoteFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcInputForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputForQuoteFieldData>(self);
    CThostFtdcInputForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcInputForQuoteFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputForQuoteField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputForQuoteFieldData>(self);
    CThostFtdcInputForQuoteField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcInputForQuoteFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcInputForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputForQuoteFieldData>(self);
    CThostFtdcInputForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcInputForQuoteFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInputForQuoteField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInputForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInputForQuoteFieldData>(self);
    CThostFtdcInputForQuoteField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInputForQuoteFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInputForQuoteFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInputForQuoteFieldType_get_BrokerID,
    .set = PyCThostFtdcInputForQuoteFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInputForQuoteFieldType_get_InvestorID,
    .set = PyCThostFtdcInputForQuoteFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcInputForQuoteFieldType_get_reserve1,
    .set = PyCThostFtdcInputForQuoteFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 询价引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "ForQuoteRef",
    .get = PyCThostFtdcInputForQuoteFieldType_get_ForQuoteRef,
    .set = PyCThostFtdcInputForQuoteFieldType_set_ForQuoteRef,
    .doc = PyDoc_STR("询价引用"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcInputForQuoteFieldType_get_UserID,
    .set = PyCThostFtdcInputForQuoteFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcInputForQuoteFieldType_get_ExchangeID,
    .set = PyCThostFtdcInputForQuoteFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcInputForQuoteFieldType_get_InvestUnitID,
    .set = PyCThostFtdcInputForQuoteFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve2",
    .get = PyCThostFtdcInputForQuoteFieldType_get_reserve2,
    .set = PyCThostFtdcInputForQuoteFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcInputForQuoteFieldType_get_MacAddress,
    .set = PyCThostFtdcInputForQuoteFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcInputForQuoteFieldType_get_InstrumentID,
    .set = PyCThostFtdcInputForQuoteFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcInputForQuoteFieldType_get_IPAddress,
    .set = PyCThostFtdcInputForQuoteFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInputForQuoteFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInputForQuoteField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("输入的询价")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInputForQuoteFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInputForQuoteFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInputForQuoteFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInputForQuoteFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInputForQuoteFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInputForQuoteFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("输入的询价")},
    {Py_tp_members, PyCThostFtdcInputForQuoteFieldType_members},
    {Py_tp_getset, PyCThostFtdcInputForQuoteFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInputForQuoteFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInputForQuoteFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInputForQuoteFieldType_spec = {
    .name = "PyCTP.CThostFtdcInputForQuoteField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInputForQuoteFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInputForQuoteFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInputForQuoteFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInputForQuoteFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInputForQuoteFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInputForQuoteFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInputForQuoteFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInputForQuoteFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInputForQuoteField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputForQuoteField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}