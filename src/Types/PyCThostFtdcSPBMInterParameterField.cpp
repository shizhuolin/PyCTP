
#include "PyCThostFtdcSPBMInterParameterField.h"

///SPBM跨品种抵扣参数

static int PyCThostFtdcSPBMInterParameterFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "ExchangeID", "SpreadId", "InterRateZ", "Leg1ProdFamilyCode", "Leg2ProdFamilyCode", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSPBMInterParameterField_TradingDay = NULL;
    Py_ssize_t CThostFtdcSPBMInterParameterField_TradingDay_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSPBMInterParameterField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSPBMInterParameterField_ExchangeID_length = 0;

    /// 优先级
    /// typedef int TThostFtdcSpreadIdType
    int CThostFtdcSPBMInterParameterField_SpreadId = 0;

    /// 品种间对锁仓费率折扣比例
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSPBMInterParameterField_InterRateZ = 0.0;

    /// 第一腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSPBMInterParameterField_Leg1ProdFamilyCode = NULL;
    Py_ssize_t CThostFtdcSPBMInterParameterField_Leg1ProdFamilyCode_length = 0;

    /// 第二腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSPBMInterParameterField_Leg2ProdFamilyCode = NULL;
    Py_ssize_t CThostFtdcSPBMInterParameterField_Leg2ProdFamilyCode_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#idy#y#", (char **)kwlist
        , &CThostFtdcSPBMInterParameterField_TradingDay, &CThostFtdcSPBMInterParameterField_TradingDay_length
        , &CThostFtdcSPBMInterParameterField_ExchangeID, &CThostFtdcSPBMInterParameterField_ExchangeID_length
        , &CThostFtdcSPBMInterParameterField_SpreadId
        , &CThostFtdcSPBMInterParameterField_InterRateZ
        , &CThostFtdcSPBMInterParameterField_Leg1ProdFamilyCode, &CThostFtdcSPBMInterParameterField_Leg1ProdFamilyCode_length
        , &CThostFtdcSPBMInterParameterField_Leg2ProdFamilyCode, &CThostFtdcSPBMInterParameterField_Leg2ProdFamilyCode_length
    )) {
        return -1;
    }

    PyCThostFtdcSPBMInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMInterParameterFieldData>(self);
    CThostFtdcSPBMInterParameterField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSPBMInterParameterField_TradingDay != NULL ) {
        if(CThostFtdcSPBMInterParameterField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcSPBMInterParameterField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcSPBMInterParameterField_TradingDay, CThostFtdcSPBMInterParameterField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcSPBMInterParameterField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcSPBMInterParameterField_TradingDay = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSPBMInterParameterField_ExchangeID != NULL ) {
        if(CThostFtdcSPBMInterParameterField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSPBMInterParameterField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSPBMInterParameterField_ExchangeID, CThostFtdcSPBMInterParameterField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSPBMInterParameterField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSPBMInterParameterField_ExchangeID = NULL;
    }

    /// 优先级
    /// typedef int TThostFtdcSpreadIdType
    data->SpreadId = CThostFtdcSPBMInterParameterField_SpreadId;

    /// 品种间对锁仓费率折扣比例
    /// typedef double TThostFtdcRatioType
    data->InterRateZ = CThostFtdcSPBMInterParameterField_InterRateZ;

    /// 第一腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSPBMInterParameterField_Leg1ProdFamilyCode != NULL ) {
        if(CThostFtdcSPBMInterParameterField_Leg1ProdFamilyCode_length >= (Py_ssize_t)sizeof(data->Leg1ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "Leg1ProdFamilyCode too long: length=%zd (max allowed is 80)", CThostFtdcSPBMInterParameterField_Leg1ProdFamilyCode_length);
            return -1;
        }
        // memset(data->Leg1ProdFamilyCode, 0, sizeof(data->Leg1ProdFamilyCode));
        // memcpy(data->Leg1ProdFamilyCode, CThostFtdcSPBMInterParameterField_Leg1ProdFamilyCode, CThostFtdcSPBMInterParameterField_Leg1ProdFamilyCode_length);
        strncpy(data->Leg1ProdFamilyCode, CThostFtdcSPBMInterParameterField_Leg1ProdFamilyCode, sizeof(data->Leg1ProdFamilyCode));
        CThostFtdcSPBMInterParameterField_Leg1ProdFamilyCode = NULL;
    }

    /// 第二腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSPBMInterParameterField_Leg2ProdFamilyCode != NULL ) {
        if(CThostFtdcSPBMInterParameterField_Leg2ProdFamilyCode_length >= (Py_ssize_t)sizeof(data->Leg2ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "Leg2ProdFamilyCode too long: length=%zd (max allowed is 80)", CThostFtdcSPBMInterParameterField_Leg2ProdFamilyCode_length);
            return -1;
        }
        // memset(data->Leg2ProdFamilyCode, 0, sizeof(data->Leg2ProdFamilyCode));
        // memcpy(data->Leg2ProdFamilyCode, CThostFtdcSPBMInterParameterField_Leg2ProdFamilyCode, CThostFtdcSPBMInterParameterField_Leg2ProdFamilyCode_length);
        strncpy(data->Leg2ProdFamilyCode, CThostFtdcSPBMInterParameterField_Leg2ProdFamilyCode, sizeof(data->Leg2ProdFamilyCode));
        CThostFtdcSPBMInterParameterField_Leg2ProdFamilyCode = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSPBMInterParameterFieldType_repr(PyObject *self) {

    PyCThostFtdcSPBMInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMInterParameterFieldData>(self);
    CThostFtdcSPBMInterParameterField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:i,s:d,s:y,s:y}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "SpreadId", data->SpreadId
        , "InterRateZ", data->InterRateZ
        , "Leg1ProdFamilyCode", data->Leg1ProdFamilyCode//, (Py_ssize_t)sizeof(data->Leg1ProdFamilyCode)
        , "Leg2ProdFamilyCode", data->Leg2ProdFamilyCode//, (Py_ssize_t)sizeof(data->Leg2ProdFamilyCode)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSPBMInterParameterField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSPBMInterParameterField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSPBMInterParameterFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcSPBMInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMInterParameterFieldData>(self);
    CThostFtdcSPBMInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcSPBMInterParameterFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSPBMInterParameterField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSPBMInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMInterParameterFieldData>(self);
    CThostFtdcSPBMInterParameterField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSPBMInterParameterFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSPBMInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMInterParameterFieldData>(self);
    CThostFtdcSPBMInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSPBMInterParameterFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSPBMInterParameterField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSPBMInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMInterParameterFieldData>(self);
    CThostFtdcSPBMInterParameterField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 第一腿构成品种
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSPBMInterParameterFieldType_get_Leg1ProdFamilyCode(PyObject *self, void *closure) {
    PyCThostFtdcSPBMInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMInterParameterFieldData>(self);
    CThostFtdcSPBMInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Leg1ProdFamilyCode, (Py_ssize_t)sizeof(data->Leg1ProdFamilyCode));
    return PyBytes_FromString(data->Leg1ProdFamilyCode);
}

static int PyCThostFtdcSPBMInterParameterFieldType_set_Leg1ProdFamilyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Leg1ProdFamilyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSPBMInterParameterField::Leg1ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "Leg1ProdFamilyCode must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSPBMInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMInterParameterFieldData>(self);
    CThostFtdcSPBMInterParameterField *data = &(extra->data);
    // memset(data->Leg1ProdFamilyCode, 0, sizeof(data->Leg1ProdFamilyCode));
    // memcpy(data->Leg1ProdFamilyCode, buf, len);
    strncpy(data->Leg1ProdFamilyCode, buf, sizeof(data->Leg1ProdFamilyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 第二腿构成品种
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSPBMInterParameterFieldType_get_Leg2ProdFamilyCode(PyObject *self, void *closure) {
    PyCThostFtdcSPBMInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMInterParameterFieldData>(self);
    CThostFtdcSPBMInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Leg2ProdFamilyCode, (Py_ssize_t)sizeof(data->Leg2ProdFamilyCode));
    return PyBytes_FromString(data->Leg2ProdFamilyCode);
}

static int PyCThostFtdcSPBMInterParameterFieldType_set_Leg2ProdFamilyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Leg2ProdFamilyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSPBMInterParameterField::Leg2ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "Leg2ProdFamilyCode must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSPBMInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMInterParameterFieldData>(self);
    CThostFtdcSPBMInterParameterField *data = &(extra->data);
    // memset(data->Leg2ProdFamilyCode, 0, sizeof(data->Leg2ProdFamilyCode));
    // memcpy(data->Leg2ProdFamilyCode, buf, len);
    strncpy(data->Leg2ProdFamilyCode, buf, sizeof(data->Leg2ProdFamilyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSPBMInterParameterFieldType_members[] = {
    /// 优先级
    /// typedef int TThostFtdcSpreadIdType
    {
        .name = "SpreadId",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSPBMInterParameterFieldData, data.SpreadId),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("优先级")
    },
    /// 品种间对锁仓费率折扣比例
    /// typedef double TThostFtdcRatioType
    {
        .name = "InterRateZ",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSPBMInterParameterFieldData, data.InterRateZ),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("品种间对锁仓费率折扣比例")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSPBMInterParameterFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcSPBMInterParameterFieldType_get_TradingDay,
    .set = PyCThostFtdcSPBMInterParameterFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSPBMInterParameterFieldType_get_ExchangeID,
    .set = PyCThostFtdcSPBMInterParameterFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 第一腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "Leg1ProdFamilyCode",
    .get = PyCThostFtdcSPBMInterParameterFieldType_get_Leg1ProdFamilyCode,
    .set = PyCThostFtdcSPBMInterParameterFieldType_set_Leg1ProdFamilyCode,
    .doc = PyDoc_STR("第一腿构成品种"),
    },
    /// 第二腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "Leg2ProdFamilyCode",
    .get = PyCThostFtdcSPBMInterParameterFieldType_get_Leg2ProdFamilyCode,
    .set = PyCThostFtdcSPBMInterParameterFieldType_set_Leg2ProdFamilyCode,
    .doc = PyDoc_STR("第二腿构成品种"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSPBMInterParameterFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSPBMInterParameterField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("SPBM跨品种抵扣参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSPBMInterParameterFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSPBMInterParameterFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSPBMInterParameterFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSPBMInterParameterFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSPBMInterParameterFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSPBMInterParameterFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("SPBM跨品种抵扣参数")},
    {Py_tp_members, PyCThostFtdcSPBMInterParameterFieldType_members},
    {Py_tp_getset, PyCThostFtdcSPBMInterParameterFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSPBMInterParameterFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSPBMInterParameterFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSPBMInterParameterFieldType_spec = {
    .name = "PyCTP.CThostFtdcSPBMInterParameterField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSPBMInterParameterFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSPBMInterParameterFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSPBMInterParameterFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSPBMInterParameterFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSPBMInterParameterFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSPBMInterParameterFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSPBMInterParameterFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSPBMInterParameterFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSPBMInterParameterField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSPBMInterParameterField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}