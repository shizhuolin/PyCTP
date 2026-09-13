
#include "PyCThostFtdcSPBMAddOnInterParameterField.h"

///SPBM附加跨品种抵扣参数

static int PyCThostFtdcSPBMAddOnInterParameterFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "ExchangeID", "SpreadId", "AddOnInterRateZ2", "Leg1ProdFamilyCode", "Leg2ProdFamilyCode", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSPBMAddOnInterParameterField_TradingDay = NULL;
    Py_ssize_t CThostFtdcSPBMAddOnInterParameterField_TradingDay_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSPBMAddOnInterParameterField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSPBMAddOnInterParameterField_ExchangeID_length = 0;

    /// 优先级
    /// typedef int TThostFtdcSpreadIdType
    int CThostFtdcSPBMAddOnInterParameterField_SpreadId = 0;

    /// 品种间对锁仓附加费率折扣比例
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSPBMAddOnInterParameterField_AddOnInterRateZ2 = 0.0;

    /// 第一腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSPBMAddOnInterParameterField_Leg1ProdFamilyCode = NULL;
    Py_ssize_t CThostFtdcSPBMAddOnInterParameterField_Leg1ProdFamilyCode_length = 0;

    /// 第二腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSPBMAddOnInterParameterField_Leg2ProdFamilyCode = NULL;
    Py_ssize_t CThostFtdcSPBMAddOnInterParameterField_Leg2ProdFamilyCode_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#idy#y#", (char **)kwlist
        , &CThostFtdcSPBMAddOnInterParameterField_TradingDay, &CThostFtdcSPBMAddOnInterParameterField_TradingDay_length
        , &CThostFtdcSPBMAddOnInterParameterField_ExchangeID, &CThostFtdcSPBMAddOnInterParameterField_ExchangeID_length
        , &CThostFtdcSPBMAddOnInterParameterField_SpreadId
        , &CThostFtdcSPBMAddOnInterParameterField_AddOnInterRateZ2
        , &CThostFtdcSPBMAddOnInterParameterField_Leg1ProdFamilyCode, &CThostFtdcSPBMAddOnInterParameterField_Leg1ProdFamilyCode_length
        , &CThostFtdcSPBMAddOnInterParameterField_Leg2ProdFamilyCode, &CThostFtdcSPBMAddOnInterParameterField_Leg2ProdFamilyCode_length
    )) {
        return -1;
    }

    PyCThostFtdcSPBMAddOnInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMAddOnInterParameterFieldData>(self);
    CThostFtdcSPBMAddOnInterParameterField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSPBMAddOnInterParameterField_TradingDay != NULL ) {
        if(CThostFtdcSPBMAddOnInterParameterField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcSPBMAddOnInterParameterField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcSPBMAddOnInterParameterField_TradingDay, CThostFtdcSPBMAddOnInterParameterField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcSPBMAddOnInterParameterField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcSPBMAddOnInterParameterField_TradingDay = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSPBMAddOnInterParameterField_ExchangeID != NULL ) {
        if(CThostFtdcSPBMAddOnInterParameterField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSPBMAddOnInterParameterField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSPBMAddOnInterParameterField_ExchangeID, CThostFtdcSPBMAddOnInterParameterField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSPBMAddOnInterParameterField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSPBMAddOnInterParameterField_ExchangeID = NULL;
    }

    /// 优先级
    /// typedef int TThostFtdcSpreadIdType
    data->SpreadId = CThostFtdcSPBMAddOnInterParameterField_SpreadId;

    /// 品种间对锁仓附加费率折扣比例
    /// typedef double TThostFtdcRatioType
    data->AddOnInterRateZ2 = CThostFtdcSPBMAddOnInterParameterField_AddOnInterRateZ2;

    /// 第一腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSPBMAddOnInterParameterField_Leg1ProdFamilyCode != NULL ) {
        if(CThostFtdcSPBMAddOnInterParameterField_Leg1ProdFamilyCode_length >= (Py_ssize_t)sizeof(data->Leg1ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "Leg1ProdFamilyCode too long: length=%zd (max allowed is 80)", CThostFtdcSPBMAddOnInterParameterField_Leg1ProdFamilyCode_length);
            return -1;
        }
        // memset(data->Leg1ProdFamilyCode, 0, sizeof(data->Leg1ProdFamilyCode));
        // memcpy(data->Leg1ProdFamilyCode, CThostFtdcSPBMAddOnInterParameterField_Leg1ProdFamilyCode, CThostFtdcSPBMAddOnInterParameterField_Leg1ProdFamilyCode_length);
        strncpy(data->Leg1ProdFamilyCode, CThostFtdcSPBMAddOnInterParameterField_Leg1ProdFamilyCode, sizeof(data->Leg1ProdFamilyCode));
        CThostFtdcSPBMAddOnInterParameterField_Leg1ProdFamilyCode = NULL;
    }

    /// 第二腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSPBMAddOnInterParameterField_Leg2ProdFamilyCode != NULL ) {
        if(CThostFtdcSPBMAddOnInterParameterField_Leg2ProdFamilyCode_length >= (Py_ssize_t)sizeof(data->Leg2ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "Leg2ProdFamilyCode too long: length=%zd (max allowed is 80)", CThostFtdcSPBMAddOnInterParameterField_Leg2ProdFamilyCode_length);
            return -1;
        }
        // memset(data->Leg2ProdFamilyCode, 0, sizeof(data->Leg2ProdFamilyCode));
        // memcpy(data->Leg2ProdFamilyCode, CThostFtdcSPBMAddOnInterParameterField_Leg2ProdFamilyCode, CThostFtdcSPBMAddOnInterParameterField_Leg2ProdFamilyCode_length);
        strncpy(data->Leg2ProdFamilyCode, CThostFtdcSPBMAddOnInterParameterField_Leg2ProdFamilyCode, sizeof(data->Leg2ProdFamilyCode));
        CThostFtdcSPBMAddOnInterParameterField_Leg2ProdFamilyCode = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSPBMAddOnInterParameterFieldType_repr(PyObject *self) {

    PyCThostFtdcSPBMAddOnInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMAddOnInterParameterFieldData>(self);
    CThostFtdcSPBMAddOnInterParameterField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:i,s:d,s:y,s:y}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "SpreadId", data->SpreadId
        , "AddOnInterRateZ2", data->AddOnInterRateZ2
        , "Leg1ProdFamilyCode", data->Leg1ProdFamilyCode//, (Py_ssize_t)sizeof(data->Leg1ProdFamilyCode)
        , "Leg2ProdFamilyCode", data->Leg2ProdFamilyCode//, (Py_ssize_t)sizeof(data->Leg2ProdFamilyCode)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSPBMAddOnInterParameterField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSPBMAddOnInterParameterField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSPBMAddOnInterParameterFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcSPBMAddOnInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMAddOnInterParameterFieldData>(self);
    CThostFtdcSPBMAddOnInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcSPBMAddOnInterParameterFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSPBMAddOnInterParameterField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSPBMAddOnInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMAddOnInterParameterFieldData>(self);
    CThostFtdcSPBMAddOnInterParameterField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSPBMAddOnInterParameterFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSPBMAddOnInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMAddOnInterParameterFieldData>(self);
    CThostFtdcSPBMAddOnInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSPBMAddOnInterParameterFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSPBMAddOnInterParameterField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSPBMAddOnInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMAddOnInterParameterFieldData>(self);
    CThostFtdcSPBMAddOnInterParameterField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 第一腿构成品种
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSPBMAddOnInterParameterFieldType_get_Leg1ProdFamilyCode(PyObject *self, void *closure) {
    PyCThostFtdcSPBMAddOnInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMAddOnInterParameterFieldData>(self);
    CThostFtdcSPBMAddOnInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Leg1ProdFamilyCode, (Py_ssize_t)sizeof(data->Leg1ProdFamilyCode));
    return PyBytes_FromString(data->Leg1ProdFamilyCode);
}

static int PyCThostFtdcSPBMAddOnInterParameterFieldType_set_Leg1ProdFamilyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Leg1ProdFamilyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSPBMAddOnInterParameterField::Leg1ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "Leg1ProdFamilyCode must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSPBMAddOnInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMAddOnInterParameterFieldData>(self);
    CThostFtdcSPBMAddOnInterParameterField *data = &(extra->data);
    // memset(data->Leg1ProdFamilyCode, 0, sizeof(data->Leg1ProdFamilyCode));
    // memcpy(data->Leg1ProdFamilyCode, buf, len);
    strncpy(data->Leg1ProdFamilyCode, buf, sizeof(data->Leg1ProdFamilyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 第二腿构成品种
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSPBMAddOnInterParameterFieldType_get_Leg2ProdFamilyCode(PyObject *self, void *closure) {
    PyCThostFtdcSPBMAddOnInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMAddOnInterParameterFieldData>(self);
    CThostFtdcSPBMAddOnInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Leg2ProdFamilyCode, (Py_ssize_t)sizeof(data->Leg2ProdFamilyCode));
    return PyBytes_FromString(data->Leg2ProdFamilyCode);
}

static int PyCThostFtdcSPBMAddOnInterParameterFieldType_set_Leg2ProdFamilyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Leg2ProdFamilyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSPBMAddOnInterParameterField::Leg2ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "Leg2ProdFamilyCode must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSPBMAddOnInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMAddOnInterParameterFieldData>(self);
    CThostFtdcSPBMAddOnInterParameterField *data = &(extra->data);
    // memset(data->Leg2ProdFamilyCode, 0, sizeof(data->Leg2ProdFamilyCode));
    // memcpy(data->Leg2ProdFamilyCode, buf, len);
    strncpy(data->Leg2ProdFamilyCode, buf, sizeof(data->Leg2ProdFamilyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSPBMAddOnInterParameterFieldType_members[] = {
    /// 优先级
    /// typedef int TThostFtdcSpreadIdType
    {
        .name = "SpreadId",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSPBMAddOnInterParameterFieldData, data.SpreadId),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("优先级")
    },
    /// 品种间对锁仓附加费率折扣比例
    /// typedef double TThostFtdcRatioType
    {
        .name = "AddOnInterRateZ2",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSPBMAddOnInterParameterFieldData, data.AddOnInterRateZ2),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("品种间对锁仓附加费率折扣比例")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSPBMAddOnInterParameterFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcSPBMAddOnInterParameterFieldType_get_TradingDay,
    .set = PyCThostFtdcSPBMAddOnInterParameterFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSPBMAddOnInterParameterFieldType_get_ExchangeID,
    .set = PyCThostFtdcSPBMAddOnInterParameterFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 第一腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "Leg1ProdFamilyCode",
    .get = PyCThostFtdcSPBMAddOnInterParameterFieldType_get_Leg1ProdFamilyCode,
    .set = PyCThostFtdcSPBMAddOnInterParameterFieldType_set_Leg1ProdFamilyCode,
    .doc = PyDoc_STR("第一腿构成品种"),
    },
    /// 第二腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "Leg2ProdFamilyCode",
    .get = PyCThostFtdcSPBMAddOnInterParameterFieldType_get_Leg2ProdFamilyCode,
    .set = PyCThostFtdcSPBMAddOnInterParameterFieldType_set_Leg2ProdFamilyCode,
    .doc = PyDoc_STR("第二腿构成品种"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSPBMAddOnInterParameterFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSPBMAddOnInterParameterField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("SPBM附加跨品种抵扣参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSPBMAddOnInterParameterFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSPBMAddOnInterParameterFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSPBMAddOnInterParameterFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSPBMAddOnInterParameterFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSPBMAddOnInterParameterFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSPBMAddOnInterParameterFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("SPBM附加跨品种抵扣参数")},
    {Py_tp_members, PyCThostFtdcSPBMAddOnInterParameterFieldType_members},
    {Py_tp_getset, PyCThostFtdcSPBMAddOnInterParameterFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSPBMAddOnInterParameterFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSPBMAddOnInterParameterFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSPBMAddOnInterParameterFieldType_spec = {
    .name = "PyCTP.CThostFtdcSPBMAddOnInterParameterField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSPBMAddOnInterParameterFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSPBMAddOnInterParameterFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSPBMAddOnInterParameterFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSPBMAddOnInterParameterFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSPBMAddOnInterParameterFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSPBMAddOnInterParameterFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSPBMAddOnInterParameterFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSPBMAddOnInterParameterFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSPBMAddOnInterParameterField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSPBMAddOnInterParameterField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}