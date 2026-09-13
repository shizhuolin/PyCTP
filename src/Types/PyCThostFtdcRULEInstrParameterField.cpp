
#include "PyCThostFtdcRULEInstrParameterField.h"

///RULE合约保证金参数

static int PyCThostFtdcRULEInstrParameterFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "ExchangeID", "InstrumentID", "InstrumentClass", "StdInstrumentID", "BSpecRatio", "SSpecRatio", "BHedgeRatio", "SHedgeRatio", "BAddOnMargin", "SAddOnMargin", "CommodityGroupID", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcRULEInstrParameterField_TradingDay = NULL;
    Py_ssize_t CThostFtdcRULEInstrParameterField_TradingDay_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcRULEInstrParameterField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcRULEInstrParameterField_ExchangeID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcRULEInstrParameterField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcRULEInstrParameterField_InstrumentID_length = 0;

    /// 合约类型
    /// typedef char TThostFtdcInstrumentClassType
    char CThostFtdcRULEInstrParameterField_InstrumentClass = 0;

    /// 标准合约
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcRULEInstrParameterField_StdInstrumentID = NULL;
    Py_ssize_t CThostFtdcRULEInstrParameterField_StdInstrumentID_length = 0;

    /// 投机买折算系数
    /// typedef double TThostFtdcRatioType
    double CThostFtdcRULEInstrParameterField_BSpecRatio = 0.0;

    /// 投机卖折算系数
    /// typedef double TThostFtdcRatioType
    double CThostFtdcRULEInstrParameterField_SSpecRatio = 0.0;

    /// 套保买折算系数
    /// typedef double TThostFtdcRatioType
    double CThostFtdcRULEInstrParameterField_BHedgeRatio = 0.0;

    /// 套保卖折算系数
    /// typedef double TThostFtdcRatioType
    double CThostFtdcRULEInstrParameterField_SHedgeRatio = 0.0;

    /// 买附加风险保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcRULEInstrParameterField_BAddOnMargin = 0.0;

    /// 卖附加风险保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcRULEInstrParameterField_SAddOnMargin = 0.0;

    /// 商品群号
    /// typedef int TThostFtdcCommodityGroupIDType
    int CThostFtdcRULEInstrParameterField_CommodityGroupID = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#cy#ddddddi", (char **)kwlist
        , &CThostFtdcRULEInstrParameterField_TradingDay, &CThostFtdcRULEInstrParameterField_TradingDay_length
        , &CThostFtdcRULEInstrParameterField_ExchangeID, &CThostFtdcRULEInstrParameterField_ExchangeID_length
        , &CThostFtdcRULEInstrParameterField_InstrumentID, &CThostFtdcRULEInstrParameterField_InstrumentID_length
        , &CThostFtdcRULEInstrParameterField_InstrumentClass
        , &CThostFtdcRULEInstrParameterField_StdInstrumentID, &CThostFtdcRULEInstrParameterField_StdInstrumentID_length
        , &CThostFtdcRULEInstrParameterField_BSpecRatio
        , &CThostFtdcRULEInstrParameterField_SSpecRatio
        , &CThostFtdcRULEInstrParameterField_BHedgeRatio
        , &CThostFtdcRULEInstrParameterField_SHedgeRatio
        , &CThostFtdcRULEInstrParameterField_BAddOnMargin
        , &CThostFtdcRULEInstrParameterField_SAddOnMargin
        , &CThostFtdcRULEInstrParameterField_CommodityGroupID
    )) {
        return -1;
    }

    PyCThostFtdcRULEInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRULEInstrParameterFieldData>(self);
    CThostFtdcRULEInstrParameterField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcRULEInstrParameterField_TradingDay != NULL ) {
        if(CThostFtdcRULEInstrParameterField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcRULEInstrParameterField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcRULEInstrParameterField_TradingDay, CThostFtdcRULEInstrParameterField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcRULEInstrParameterField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcRULEInstrParameterField_TradingDay = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcRULEInstrParameterField_ExchangeID != NULL ) {
        if(CThostFtdcRULEInstrParameterField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcRULEInstrParameterField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcRULEInstrParameterField_ExchangeID, CThostFtdcRULEInstrParameterField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcRULEInstrParameterField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcRULEInstrParameterField_ExchangeID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcRULEInstrParameterField_InstrumentID != NULL ) {
        if(CThostFtdcRULEInstrParameterField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcRULEInstrParameterField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcRULEInstrParameterField_InstrumentID, CThostFtdcRULEInstrParameterField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcRULEInstrParameterField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcRULEInstrParameterField_InstrumentID = NULL;
    }

    /// 合约类型
    /// typedef char TThostFtdcInstrumentClassType
    data->InstrumentClass = CThostFtdcRULEInstrParameterField_InstrumentClass;

    /// 标准合约
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcRULEInstrParameterField_StdInstrumentID != NULL ) {
        if(CThostFtdcRULEInstrParameterField_StdInstrumentID_length >= (Py_ssize_t)sizeof(data->StdInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "StdInstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcRULEInstrParameterField_StdInstrumentID_length);
            return -1;
        }
        // memset(data->StdInstrumentID, 0, sizeof(data->StdInstrumentID));
        // memcpy(data->StdInstrumentID, CThostFtdcRULEInstrParameterField_StdInstrumentID, CThostFtdcRULEInstrParameterField_StdInstrumentID_length);
        strncpy(data->StdInstrumentID, CThostFtdcRULEInstrParameterField_StdInstrumentID, sizeof(data->StdInstrumentID));
        CThostFtdcRULEInstrParameterField_StdInstrumentID = NULL;
    }

    /// 投机买折算系数
    /// typedef double TThostFtdcRatioType
    data->BSpecRatio = CThostFtdcRULEInstrParameterField_BSpecRatio;

    /// 投机卖折算系数
    /// typedef double TThostFtdcRatioType
    data->SSpecRatio = CThostFtdcRULEInstrParameterField_SSpecRatio;

    /// 套保买折算系数
    /// typedef double TThostFtdcRatioType
    data->BHedgeRatio = CThostFtdcRULEInstrParameterField_BHedgeRatio;

    /// 套保卖折算系数
    /// typedef double TThostFtdcRatioType
    data->SHedgeRatio = CThostFtdcRULEInstrParameterField_SHedgeRatio;

    /// 买附加风险保证金
    /// typedef double TThostFtdcMoneyType
    data->BAddOnMargin = CThostFtdcRULEInstrParameterField_BAddOnMargin;

    /// 卖附加风险保证金
    /// typedef double TThostFtdcMoneyType
    data->SAddOnMargin = CThostFtdcRULEInstrParameterField_SAddOnMargin;

    /// 商品群号
    /// typedef int TThostFtdcCommodityGroupIDType
    data->CommodityGroupID = CThostFtdcRULEInstrParameterField_CommodityGroupID;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcRULEInstrParameterFieldType_repr(PyObject *self) {

    PyCThostFtdcRULEInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRULEInstrParameterFieldData>(self);
    CThostFtdcRULEInstrParameterField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:c,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:i}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "InstrumentClass", data->InstrumentClass
        , "StdInstrumentID", data->StdInstrumentID//, (Py_ssize_t)sizeof(data->StdInstrumentID)
        , "BSpecRatio", data->BSpecRatio
        , "SSpecRatio", data->SSpecRatio
        , "BHedgeRatio", data->BHedgeRatio
        , "SHedgeRatio", data->SHedgeRatio
        , "BAddOnMargin", data->BAddOnMargin
        , "SAddOnMargin", data->SAddOnMargin
        , "CommodityGroupID", data->CommodityGroupID
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRULEInstrParameterField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRULEInstrParameterField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcRULEInstrParameterFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcRULEInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRULEInstrParameterFieldData>(self);
    CThostFtdcRULEInstrParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcRULEInstrParameterFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRULEInstrParameterField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRULEInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRULEInstrParameterFieldData>(self);
    CThostFtdcRULEInstrParameterField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcRULEInstrParameterFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcRULEInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRULEInstrParameterFieldData>(self);
    CThostFtdcRULEInstrParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcRULEInstrParameterFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRULEInstrParameterField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRULEInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRULEInstrParameterFieldData>(self);
    CThostFtdcRULEInstrParameterField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcRULEInstrParameterFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcRULEInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRULEInstrParameterFieldData>(self);
    CThostFtdcRULEInstrParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcRULEInstrParameterFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRULEInstrParameterField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRULEInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRULEInstrParameterFieldData>(self);
    CThostFtdcRULEInstrParameterField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约类型
/// typedef char TThostFtdcInstrumentClassType
static PyObject *PyCThostFtdcRULEInstrParameterFieldType_get_InstrumentClass(PyObject *self, void *closure) {
    PyCThostFtdcRULEInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRULEInstrParameterFieldData>(self);
    CThostFtdcRULEInstrParameterField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->InstrumentClass), 1);
}

static int PyCThostFtdcRULEInstrParameterFieldType_set_InstrumentClass(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentClass Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRULEInstrParameterField::InstrumentClass)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentClass must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRULEInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRULEInstrParameterFieldData>(self);
    CThostFtdcRULEInstrParameterField *data = &(extra->data);
    data->InstrumentClass = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 标准合约
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcRULEInstrParameterFieldType_get_StdInstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcRULEInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRULEInstrParameterFieldData>(self);
    CThostFtdcRULEInstrParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->StdInstrumentID, (Py_ssize_t)sizeof(data->StdInstrumentID));
    return PyBytes_FromString(data->StdInstrumentID);
}

static int PyCThostFtdcRULEInstrParameterFieldType_set_StdInstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "StdInstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRULEInstrParameterField::StdInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "StdInstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRULEInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRULEInstrParameterFieldData>(self);
    CThostFtdcRULEInstrParameterField *data = &(extra->data);
    // memset(data->StdInstrumentID, 0, sizeof(data->StdInstrumentID));
    // memcpy(data->StdInstrumentID, buf, len);
    strncpy(data->StdInstrumentID, buf, sizeof(data->StdInstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcRULEInstrParameterFieldType_members[] = {
    /// 投机买折算系数
    /// typedef double TThostFtdcRatioType
    {
        .name = "BSpecRatio",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRULEInstrParameterFieldData, data.BSpecRatio),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("投机买折算系数")
    },
    /// 投机卖折算系数
    /// typedef double TThostFtdcRatioType
    {
        .name = "SSpecRatio",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRULEInstrParameterFieldData, data.SSpecRatio),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("投机卖折算系数")
    },
    /// 套保买折算系数
    /// typedef double TThostFtdcRatioType
    {
        .name = "BHedgeRatio",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRULEInstrParameterFieldData, data.BHedgeRatio),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("套保买折算系数")
    },
    /// 套保卖折算系数
    /// typedef double TThostFtdcRatioType
    {
        .name = "SHedgeRatio",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRULEInstrParameterFieldData, data.SHedgeRatio),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("套保卖折算系数")
    },
    /// 买附加风险保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "BAddOnMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRULEInstrParameterFieldData, data.BAddOnMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("买附加风险保证金")
    },
    /// 卖附加风险保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "SAddOnMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRULEInstrParameterFieldData, data.SAddOnMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("卖附加风险保证金")
    },
    /// 商品群号
    /// typedef int TThostFtdcCommodityGroupIDType
    {
        .name = "CommodityGroupID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRULEInstrParameterFieldData, data.CommodityGroupID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("商品群号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcRULEInstrParameterFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcRULEInstrParameterFieldType_get_TradingDay,
    .set = PyCThostFtdcRULEInstrParameterFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcRULEInstrParameterFieldType_get_ExchangeID,
    .set = PyCThostFtdcRULEInstrParameterFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcRULEInstrParameterFieldType_get_InstrumentID,
    .set = PyCThostFtdcRULEInstrParameterFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 合约类型
    /// typedef char TThostFtdcInstrumentClassType
    {
    .name = "InstrumentClass",
    .get = PyCThostFtdcRULEInstrParameterFieldType_get_InstrumentClass,
    .set = PyCThostFtdcRULEInstrParameterFieldType_set_InstrumentClass,
    .doc = PyDoc_STR("合约类型"),
    },
    /// 标准合约
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "StdInstrumentID",
    .get = PyCThostFtdcRULEInstrParameterFieldType_get_StdInstrumentID,
    .set = PyCThostFtdcRULEInstrParameterFieldType_set_StdInstrumentID,
    .doc = PyDoc_STR("标准合约"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcRULEInstrParameterFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcRULEInstrParameterField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("RULE合约保证金参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcRULEInstrParameterFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcRULEInstrParameterFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcRULEInstrParameterFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcRULEInstrParameterFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcRULEInstrParameterFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcRULEInstrParameterFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("RULE合约保证金参数")},
    {Py_tp_members, PyCThostFtdcRULEInstrParameterFieldType_members},
    {Py_tp_getset, PyCThostFtdcRULEInstrParameterFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcRULEInstrParameterFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcRULEInstrParameterFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcRULEInstrParameterFieldType_spec = {
    .name = "PyCTP.CThostFtdcRULEInstrParameterField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcRULEInstrParameterFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcRULEInstrParameterFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcRULEInstrParameterFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcRULEInstrParameterFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcRULEInstrParameterFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcRULEInstrParameterFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcRULEInstrParameterFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcRULEInstrParameterFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcRULEInstrParameterField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRULEInstrParameterField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}