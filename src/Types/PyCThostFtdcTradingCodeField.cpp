
#include "PyCThostFtdcTradingCodeField.h"

///交易编码

static int PyCThostFtdcTradingCodeFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "InvestorID", "BrokerID", "ExchangeID", "ClientID", "IsActive", "ClientIDType", "BranchID", "BizType", "InvestUnitID", NULL };


    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcTradingCodeField_InvestorID = NULL;
    Py_ssize_t CThostFtdcTradingCodeField_InvestorID_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcTradingCodeField_BrokerID = NULL;
    Py_ssize_t CThostFtdcTradingCodeField_BrokerID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcTradingCodeField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcTradingCodeField_ExchangeID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcTradingCodeField_ClientID = NULL;
    Py_ssize_t CThostFtdcTradingCodeField_ClientID_length = 0;

    /// 是否活跃
    /// typedef int TThostFtdcBoolType
    int CThostFtdcTradingCodeField_IsActive = 0;

    /// 交易编码类型
    /// typedef char TThostFtdcClientIDTypeType
    char CThostFtdcTradingCodeField_ClientIDType = 0;

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    char *CThostFtdcTradingCodeField_BranchID = NULL;
    Py_ssize_t CThostFtdcTradingCodeField_BranchID_length = 0;

    /// 业务类型
    /// typedef char TThostFtdcBizTypeType
    char CThostFtdcTradingCodeField_BizType = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcTradingCodeField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcTradingCodeField_InvestUnitID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#icy#cy#", (char **)kwlist
        , &CThostFtdcTradingCodeField_InvestorID, &CThostFtdcTradingCodeField_InvestorID_length
        , &CThostFtdcTradingCodeField_BrokerID, &CThostFtdcTradingCodeField_BrokerID_length
        , &CThostFtdcTradingCodeField_ExchangeID, &CThostFtdcTradingCodeField_ExchangeID_length
        , &CThostFtdcTradingCodeField_ClientID, &CThostFtdcTradingCodeField_ClientID_length
        , &CThostFtdcTradingCodeField_IsActive
        , &CThostFtdcTradingCodeField_ClientIDType
        , &CThostFtdcTradingCodeField_BranchID, &CThostFtdcTradingCodeField_BranchID_length
        , &CThostFtdcTradingCodeField_BizType
        , &CThostFtdcTradingCodeField_InvestUnitID, &CThostFtdcTradingCodeField_InvestUnitID_length
    )) {
        return -1;
    }

    PyCThostFtdcTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingCodeFieldData>(self);
    CThostFtdcTradingCodeField *data = &(extra->data);


    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcTradingCodeField_InvestorID != NULL ) {
        if(CThostFtdcTradingCodeField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcTradingCodeField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcTradingCodeField_InvestorID, CThostFtdcTradingCodeField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcTradingCodeField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcTradingCodeField_InvestorID = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcTradingCodeField_BrokerID != NULL ) {
        if(CThostFtdcTradingCodeField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcTradingCodeField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcTradingCodeField_BrokerID, CThostFtdcTradingCodeField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcTradingCodeField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcTradingCodeField_BrokerID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcTradingCodeField_ExchangeID != NULL ) {
        if(CThostFtdcTradingCodeField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcTradingCodeField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcTradingCodeField_ExchangeID, CThostFtdcTradingCodeField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcTradingCodeField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcTradingCodeField_ExchangeID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcTradingCodeField_ClientID != NULL ) {
        if(CThostFtdcTradingCodeField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcTradingCodeField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcTradingCodeField_ClientID, CThostFtdcTradingCodeField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcTradingCodeField_ClientID, sizeof(data->ClientID));
        CThostFtdcTradingCodeField_ClientID = NULL;
    }

    /// 是否活跃
    /// typedef int TThostFtdcBoolType
    data->IsActive = CThostFtdcTradingCodeField_IsActive;

    /// 交易编码类型
    /// typedef char TThostFtdcClientIDTypeType
    data->ClientIDType = CThostFtdcTradingCodeField_ClientIDType;

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    if( CThostFtdcTradingCodeField_BranchID != NULL ) {
        if(CThostFtdcTradingCodeField_BranchID_length >= (Py_ssize_t)sizeof(data->BranchID)) {
            PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is 8)", CThostFtdcTradingCodeField_BranchID_length);
            return -1;
        }
        // memset(data->BranchID, 0, sizeof(data->BranchID));
        // memcpy(data->BranchID, CThostFtdcTradingCodeField_BranchID, CThostFtdcTradingCodeField_BranchID_length);
        strncpy(data->BranchID, CThostFtdcTradingCodeField_BranchID, sizeof(data->BranchID));
        CThostFtdcTradingCodeField_BranchID = NULL;
    }

    /// 业务类型
    /// typedef char TThostFtdcBizTypeType
    data->BizType = CThostFtdcTradingCodeField_BizType;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcTradingCodeField_InvestUnitID != NULL ) {
        if(CThostFtdcTradingCodeField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcTradingCodeField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcTradingCodeField_InvestUnitID, CThostFtdcTradingCodeField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcTradingCodeField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcTradingCodeField_InvestUnitID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcTradingCodeFieldType_repr(PyObject *self) {

    PyCThostFtdcTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingCodeFieldData>(self);
    CThostFtdcTradingCodeField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:c,s:y,s:c,s:y}"
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ClientID", data->ClientID//, (Py_ssize_t)sizeof(data->ClientID)
        , "IsActive", data->IsActive
        , "ClientIDType", data->ClientIDType
        , "BranchID", data->BranchID//, (Py_ssize_t)sizeof(data->BranchID)
        , "BizType", data->BizType
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradingCodeField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradingCodeField repr");
        return NULL;
    }

    return repr;
}


/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcTradingCodeFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingCodeFieldData>(self);
    CThostFtdcTradingCodeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcTradingCodeFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingCodeField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingCodeFieldData>(self);
    CThostFtdcTradingCodeField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcTradingCodeFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingCodeFieldData>(self);
    CThostFtdcTradingCodeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcTradingCodeFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingCodeField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingCodeFieldData>(self);
    CThostFtdcTradingCodeField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcTradingCodeFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingCodeFieldData>(self);
    CThostFtdcTradingCodeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcTradingCodeFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingCodeField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingCodeFieldData>(self);
    CThostFtdcTradingCodeField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcTradingCodeFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingCodeFieldData>(self);
    CThostFtdcTradingCodeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcTradingCodeFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingCodeField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingCodeFieldData>(self);
    CThostFtdcTradingCodeField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易编码类型
/// typedef char TThostFtdcClientIDTypeType
static PyObject *PyCThostFtdcTradingCodeFieldType_get_ClientIDType(PyObject *self, void *closure) {
    PyCThostFtdcTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingCodeFieldData>(self);
    CThostFtdcTradingCodeField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ClientIDType), 1);
}

static int PyCThostFtdcTradingCodeFieldType_set_ClientIDType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientIDType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcTradingCodeField::ClientIDType)) {
        PyErr_SetString(PyExc_ValueError, "ClientIDType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingCodeFieldData>(self);
    CThostFtdcTradingCodeField *data = &(extra->data);
    data->ClientIDType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 营业部编号
/// typedef char TThostFtdcBranchIDType[9]
static PyObject *PyCThostFtdcTradingCodeFieldType_get_BranchID(PyObject *self, void *closure) {
    PyCThostFtdcTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingCodeFieldData>(self);
    CThostFtdcTradingCodeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BranchID, (Py_ssize_t)sizeof(data->BranchID));
    return PyBytes_FromString(data->BranchID);
}

static int PyCThostFtdcTradingCodeFieldType_set_BranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingCodeField::BranchID)) {
        PyErr_SetString(PyExc_ValueError, "BranchID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingCodeFieldData>(self);
    CThostFtdcTradingCodeField *data = &(extra->data);
    // memset(data->BranchID, 0, sizeof(data->BranchID));
    // memcpy(data->BranchID, buf, len);
    strncpy(data->BranchID, buf, sizeof(data->BranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 业务类型
/// typedef char TThostFtdcBizTypeType
static PyObject *PyCThostFtdcTradingCodeFieldType_get_BizType(PyObject *self, void *closure) {
    PyCThostFtdcTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingCodeFieldData>(self);
    CThostFtdcTradingCodeField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BizType), 1);
}

static int PyCThostFtdcTradingCodeFieldType_set_BizType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BizType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcTradingCodeField::BizType)) {
        PyErr_SetString(PyExc_ValueError, "BizType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingCodeFieldData>(self);
    CThostFtdcTradingCodeField *data = &(extra->data);
    data->BizType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcTradingCodeFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingCodeFieldData>(self);
    CThostFtdcTradingCodeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcTradingCodeFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingCodeField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingCodeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingCodeFieldData>(self);
    CThostFtdcTradingCodeField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcTradingCodeFieldType_members[] = {
    /// 是否活跃
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsActive",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcTradingCodeFieldData, data.IsActive),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否活跃")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcTradingCodeFieldType_getsets[] = {
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcTradingCodeFieldType_get_InvestorID,
    .set = PyCThostFtdcTradingCodeFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcTradingCodeFieldType_get_BrokerID,
    .set = PyCThostFtdcTradingCodeFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcTradingCodeFieldType_get_ExchangeID,
    .set = PyCThostFtdcTradingCodeFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcTradingCodeFieldType_get_ClientID,
    .set = PyCThostFtdcTradingCodeFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 交易编码类型
    /// typedef char TThostFtdcClientIDTypeType
    {
    .name = "ClientIDType",
    .get = PyCThostFtdcTradingCodeFieldType_get_ClientIDType,
    .set = PyCThostFtdcTradingCodeFieldType_set_ClientIDType,
    .doc = PyDoc_STR("交易编码类型"),
    },
    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    {
    .name = "BranchID",
    .get = PyCThostFtdcTradingCodeFieldType_get_BranchID,
    .set = PyCThostFtdcTradingCodeFieldType_set_BranchID,
    .doc = PyDoc_STR("营业部编号"),
    },
    /// 业务类型
    /// typedef char TThostFtdcBizTypeType
    {
    .name = "BizType",
    .get = PyCThostFtdcTradingCodeFieldType_get_BizType,
    .set = PyCThostFtdcTradingCodeFieldType_set_BizType,
    .doc = PyDoc_STR("业务类型"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcTradingCodeFieldType_get_InvestUnitID,
    .set = PyCThostFtdcTradingCodeFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcTradingCodeFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcTradingCodeField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("交易编码")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcTradingCodeFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcTradingCodeFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcTradingCodeFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcTradingCodeFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcTradingCodeFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcTradingCodeFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("交易编码")},
    {Py_tp_members, PyCThostFtdcTradingCodeFieldType_members},
    {Py_tp_getset, PyCThostFtdcTradingCodeFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcTradingCodeFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcTradingCodeFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcTradingCodeFieldType_spec = {
    .name = "PyCTP.CThostFtdcTradingCodeField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcTradingCodeFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcTradingCodeFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcTradingCodeFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcTradingCodeFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcTradingCodeFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcTradingCodeFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcTradingCodeFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcTradingCodeFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcTradingCodeField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTradingCodeField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}