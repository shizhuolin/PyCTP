
#include "PyCThostFtdcSPBMOptionParameterField.h"

///SPBM期权合约保证金参数

static int PyCThostFtdcSPBMOptionParameterFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "ExchangeID", "InstrumentID", "ProdFamilyCode", "Cvf", "DownPrice", "Delta", "SlimiDelta", "PreSettlementPrice", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSPBMOptionParameterField_TradingDay = NULL;
    Py_ssize_t CThostFtdcSPBMOptionParameterField_TradingDay_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSPBMOptionParameterField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSPBMOptionParameterField_ExchangeID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSPBMOptionParameterField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcSPBMOptionParameterField_InstrumentID_length = 0;

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSPBMOptionParameterField_ProdFamilyCode = NULL;
    Py_ssize_t CThostFtdcSPBMOptionParameterField_ProdFamilyCode_length = 0;

    /// 期权合约因子
    /// typedef int TThostFtdcVolumeMultipleType
    int CThostFtdcSPBMOptionParameterField_Cvf = 0;

    /// 期权冲抵价格
    /// typedef double TThostFtdcPriceType
    double CThostFtdcSPBMOptionParameterField_DownPrice = 0.0;

    /// Delta值
    /// typedef double TThostFtdcDeltaType
    double CThostFtdcSPBMOptionParameterField_Delta = 0.0;

    /// 卖方期权风险转换最低值
    /// typedef double TThostFtdcDeltaType
    double CThostFtdcSPBMOptionParameterField_SlimiDelta = 0.0;

    /// 昨结算价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcSPBMOptionParameterField_PreSettlementPrice = 0.0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#idddd", (char **)kwlist
        , &CThostFtdcSPBMOptionParameterField_TradingDay, &CThostFtdcSPBMOptionParameterField_TradingDay_length
        , &CThostFtdcSPBMOptionParameterField_ExchangeID, &CThostFtdcSPBMOptionParameterField_ExchangeID_length
        , &CThostFtdcSPBMOptionParameterField_InstrumentID, &CThostFtdcSPBMOptionParameterField_InstrumentID_length
        , &CThostFtdcSPBMOptionParameterField_ProdFamilyCode, &CThostFtdcSPBMOptionParameterField_ProdFamilyCode_length
        , &CThostFtdcSPBMOptionParameterField_Cvf
        , &CThostFtdcSPBMOptionParameterField_DownPrice
        , &CThostFtdcSPBMOptionParameterField_Delta
        , &CThostFtdcSPBMOptionParameterField_SlimiDelta
        , &CThostFtdcSPBMOptionParameterField_PreSettlementPrice
    )) {
        return -1;
    }

    PyCThostFtdcSPBMOptionParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMOptionParameterFieldData>(self);
    CThostFtdcSPBMOptionParameterField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSPBMOptionParameterField_TradingDay != NULL ) {
        if(CThostFtdcSPBMOptionParameterField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcSPBMOptionParameterField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcSPBMOptionParameterField_TradingDay, CThostFtdcSPBMOptionParameterField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcSPBMOptionParameterField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcSPBMOptionParameterField_TradingDay = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSPBMOptionParameterField_ExchangeID != NULL ) {
        if(CThostFtdcSPBMOptionParameterField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSPBMOptionParameterField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSPBMOptionParameterField_ExchangeID, CThostFtdcSPBMOptionParameterField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSPBMOptionParameterField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSPBMOptionParameterField_ExchangeID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSPBMOptionParameterField_InstrumentID != NULL ) {
        if(CThostFtdcSPBMOptionParameterField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcSPBMOptionParameterField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcSPBMOptionParameterField_InstrumentID, CThostFtdcSPBMOptionParameterField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcSPBMOptionParameterField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcSPBMOptionParameterField_InstrumentID = NULL;
    }

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSPBMOptionParameterField_ProdFamilyCode != NULL ) {
        if(CThostFtdcSPBMOptionParameterField_ProdFamilyCode_length >= (Py_ssize_t)sizeof(data->ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is 80)", CThostFtdcSPBMOptionParameterField_ProdFamilyCode_length);
            return -1;
        }
        // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
        // memcpy(data->ProdFamilyCode, CThostFtdcSPBMOptionParameterField_ProdFamilyCode, CThostFtdcSPBMOptionParameterField_ProdFamilyCode_length);
        strncpy(data->ProdFamilyCode, CThostFtdcSPBMOptionParameterField_ProdFamilyCode, sizeof(data->ProdFamilyCode));
        CThostFtdcSPBMOptionParameterField_ProdFamilyCode = NULL;
    }

    /// 期权合约因子
    /// typedef int TThostFtdcVolumeMultipleType
    data->Cvf = CThostFtdcSPBMOptionParameterField_Cvf;

    /// 期权冲抵价格
    /// typedef double TThostFtdcPriceType
    data->DownPrice = CThostFtdcSPBMOptionParameterField_DownPrice;

    /// Delta值
    /// typedef double TThostFtdcDeltaType
    data->Delta = CThostFtdcSPBMOptionParameterField_Delta;

    /// 卖方期权风险转换最低值
    /// typedef double TThostFtdcDeltaType
    data->SlimiDelta = CThostFtdcSPBMOptionParameterField_SlimiDelta;

    /// 昨结算价
    /// typedef double TThostFtdcPriceType
    data->PreSettlementPrice = CThostFtdcSPBMOptionParameterField_PreSettlementPrice;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSPBMOptionParameterFieldType_repr(PyObject *self) {

    PyCThostFtdcSPBMOptionParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMOptionParameterFieldData>(self);
    CThostFtdcSPBMOptionParameterField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:d,s:d,s:d,s:d}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "ProdFamilyCode", data->ProdFamilyCode//, (Py_ssize_t)sizeof(data->ProdFamilyCode)
        , "Cvf", data->Cvf
        , "DownPrice", data->DownPrice
        , "Delta", data->Delta
        , "SlimiDelta", data->SlimiDelta
        , "PreSettlementPrice", data->PreSettlementPrice
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSPBMOptionParameterField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSPBMOptionParameterField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSPBMOptionParameterFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcSPBMOptionParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMOptionParameterFieldData>(self);
    CThostFtdcSPBMOptionParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcSPBMOptionParameterFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSPBMOptionParameterField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSPBMOptionParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMOptionParameterFieldData>(self);
    CThostFtdcSPBMOptionParameterField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSPBMOptionParameterFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSPBMOptionParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMOptionParameterFieldData>(self);
    CThostFtdcSPBMOptionParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSPBMOptionParameterFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSPBMOptionParameterField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSPBMOptionParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMOptionParameterFieldData>(self);
    CThostFtdcSPBMOptionParameterField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSPBMOptionParameterFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcSPBMOptionParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMOptionParameterFieldData>(self);
    CThostFtdcSPBMOptionParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcSPBMOptionParameterFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSPBMOptionParameterField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSPBMOptionParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMOptionParameterFieldData>(self);
    CThostFtdcSPBMOptionParameterField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 品种代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSPBMOptionParameterFieldType_get_ProdFamilyCode(PyObject *self, void *closure) {
    PyCThostFtdcSPBMOptionParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMOptionParameterFieldData>(self);
    CThostFtdcSPBMOptionParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProdFamilyCode, (Py_ssize_t)sizeof(data->ProdFamilyCode));
    return PyBytes_FromString(data->ProdFamilyCode);
}

static int PyCThostFtdcSPBMOptionParameterFieldType_set_ProdFamilyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProdFamilyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSPBMOptionParameterField::ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "ProdFamilyCode must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSPBMOptionParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMOptionParameterFieldData>(self);
    CThostFtdcSPBMOptionParameterField *data = &(extra->data);
    // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
    // memcpy(data->ProdFamilyCode, buf, len);
    strncpy(data->ProdFamilyCode, buf, sizeof(data->ProdFamilyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSPBMOptionParameterFieldType_members[] = {
    /// 期权合约因子
    /// typedef int TThostFtdcVolumeMultipleType
    {
        .name = "Cvf",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSPBMOptionParameterFieldData, data.Cvf),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("期权合约因子")
    },
    /// 期权冲抵价格
    /// typedef double TThostFtdcPriceType
    {
        .name = "DownPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSPBMOptionParameterFieldData, data.DownPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("期权冲抵价格")
    },
    /// Delta值
    /// typedef double TThostFtdcDeltaType
    {
        .name = "Delta",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSPBMOptionParameterFieldData, data.Delta),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("Delta值")
    },
    /// 卖方期权风险转换最低值
    /// typedef double TThostFtdcDeltaType
    {
        .name = "SlimiDelta",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSPBMOptionParameterFieldData, data.SlimiDelta),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("卖方期权风险转换最低值")
    },
    /// 昨结算价
    /// typedef double TThostFtdcPriceType
    {
        .name = "PreSettlementPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSPBMOptionParameterFieldData, data.PreSettlementPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("昨结算价")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSPBMOptionParameterFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcSPBMOptionParameterFieldType_get_TradingDay,
    .set = PyCThostFtdcSPBMOptionParameterFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSPBMOptionParameterFieldType_get_ExchangeID,
    .set = PyCThostFtdcSPBMOptionParameterFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcSPBMOptionParameterFieldType_get_InstrumentID,
    .set = PyCThostFtdcSPBMOptionParameterFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ProdFamilyCode",
    .get = PyCThostFtdcSPBMOptionParameterFieldType_get_ProdFamilyCode,
    .set = PyCThostFtdcSPBMOptionParameterFieldType_set_ProdFamilyCode,
    .doc = PyDoc_STR("品种代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSPBMOptionParameterFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSPBMOptionParameterField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("SPBM期权合约保证金参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSPBMOptionParameterFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSPBMOptionParameterFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSPBMOptionParameterFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSPBMOptionParameterFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSPBMOptionParameterFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSPBMOptionParameterFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("SPBM期权合约保证金参数")},
    {Py_tp_members, PyCThostFtdcSPBMOptionParameterFieldType_members},
    {Py_tp_getset, PyCThostFtdcSPBMOptionParameterFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSPBMOptionParameterFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSPBMOptionParameterFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSPBMOptionParameterFieldType_spec = {
    .name = "PyCTP.CThostFtdcSPBMOptionParameterField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSPBMOptionParameterFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSPBMOptionParameterFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSPBMOptionParameterFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSPBMOptionParameterFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSPBMOptionParameterFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSPBMOptionParameterFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSPBMOptionParameterFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSPBMOptionParameterFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSPBMOptionParameterField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSPBMOptionParameterField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}