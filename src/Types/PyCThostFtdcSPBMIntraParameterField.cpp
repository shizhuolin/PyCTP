
#include "PyCThostFtdcSPBMIntraParameterField.h"

///SPBM品种内对锁仓折扣参数

static int PyCThostFtdcSPBMIntraParameterFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "ExchangeID", "ProdFamilyCode", "IntraRateY", "AddOnIntraRateY2", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSPBMIntraParameterField_TradingDay = NULL;
    Py_ssize_t CThostFtdcSPBMIntraParameterField_TradingDay_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSPBMIntraParameterField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSPBMIntraParameterField_ExchangeID_length = 0;

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSPBMIntraParameterField_ProdFamilyCode = NULL;
    Py_ssize_t CThostFtdcSPBMIntraParameterField_ProdFamilyCode_length = 0;

    /// 品种内合约间对锁仓费率折扣比例
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSPBMIntraParameterField_IntraRateY = 0.0;

    /// 品种内合约间对锁仓附加费率折扣比例
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSPBMIntraParameterField_AddOnIntraRateY2 = 0.0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#dd", (char **)kwlist
        , &CThostFtdcSPBMIntraParameterField_TradingDay, &CThostFtdcSPBMIntraParameterField_TradingDay_length
        , &CThostFtdcSPBMIntraParameterField_ExchangeID, &CThostFtdcSPBMIntraParameterField_ExchangeID_length
        , &CThostFtdcSPBMIntraParameterField_ProdFamilyCode, &CThostFtdcSPBMIntraParameterField_ProdFamilyCode_length
        , &CThostFtdcSPBMIntraParameterField_IntraRateY
        , &CThostFtdcSPBMIntraParameterField_AddOnIntraRateY2
    )) {
        return -1;
    }

    PyCThostFtdcSPBMIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMIntraParameterFieldData>(self);
    CThostFtdcSPBMIntraParameterField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSPBMIntraParameterField_TradingDay != NULL ) {
        if(CThostFtdcSPBMIntraParameterField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcSPBMIntraParameterField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcSPBMIntraParameterField_TradingDay, CThostFtdcSPBMIntraParameterField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcSPBMIntraParameterField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcSPBMIntraParameterField_TradingDay = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSPBMIntraParameterField_ExchangeID != NULL ) {
        if(CThostFtdcSPBMIntraParameterField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSPBMIntraParameterField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSPBMIntraParameterField_ExchangeID, CThostFtdcSPBMIntraParameterField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSPBMIntraParameterField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSPBMIntraParameterField_ExchangeID = NULL;
    }

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSPBMIntraParameterField_ProdFamilyCode != NULL ) {
        if(CThostFtdcSPBMIntraParameterField_ProdFamilyCode_length >= (Py_ssize_t)sizeof(data->ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is 80)", CThostFtdcSPBMIntraParameterField_ProdFamilyCode_length);
            return -1;
        }
        // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
        // memcpy(data->ProdFamilyCode, CThostFtdcSPBMIntraParameterField_ProdFamilyCode, CThostFtdcSPBMIntraParameterField_ProdFamilyCode_length);
        strncpy(data->ProdFamilyCode, CThostFtdcSPBMIntraParameterField_ProdFamilyCode, sizeof(data->ProdFamilyCode));
        CThostFtdcSPBMIntraParameterField_ProdFamilyCode = NULL;
    }

    /// 品种内合约间对锁仓费率折扣比例
    /// typedef double TThostFtdcRatioType
    data->IntraRateY = CThostFtdcSPBMIntraParameterField_IntraRateY;

    /// 品种内合约间对锁仓附加费率折扣比例
    /// typedef double TThostFtdcRatioType
    data->AddOnIntraRateY2 = CThostFtdcSPBMIntraParameterField_AddOnIntraRateY2;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSPBMIntraParameterFieldType_repr(PyObject *self) {

    PyCThostFtdcSPBMIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMIntraParameterFieldData>(self);
    CThostFtdcSPBMIntraParameterField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:d,s:d}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ProdFamilyCode", data->ProdFamilyCode//, (Py_ssize_t)sizeof(data->ProdFamilyCode)
        , "IntraRateY", data->IntraRateY
        , "AddOnIntraRateY2", data->AddOnIntraRateY2
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSPBMIntraParameterField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSPBMIntraParameterField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSPBMIntraParameterFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcSPBMIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMIntraParameterFieldData>(self);
    CThostFtdcSPBMIntraParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcSPBMIntraParameterFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSPBMIntraParameterField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSPBMIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMIntraParameterFieldData>(self);
    CThostFtdcSPBMIntraParameterField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSPBMIntraParameterFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSPBMIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMIntraParameterFieldData>(self);
    CThostFtdcSPBMIntraParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSPBMIntraParameterFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSPBMIntraParameterField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSPBMIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMIntraParameterFieldData>(self);
    CThostFtdcSPBMIntraParameterField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 品种代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSPBMIntraParameterFieldType_get_ProdFamilyCode(PyObject *self, void *closure) {
    PyCThostFtdcSPBMIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMIntraParameterFieldData>(self);
    CThostFtdcSPBMIntraParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProdFamilyCode, (Py_ssize_t)sizeof(data->ProdFamilyCode));
    return PyBytes_FromString(data->ProdFamilyCode);
}

static int PyCThostFtdcSPBMIntraParameterFieldType_set_ProdFamilyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProdFamilyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSPBMIntraParameterField::ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "ProdFamilyCode must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSPBMIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMIntraParameterFieldData>(self);
    CThostFtdcSPBMIntraParameterField *data = &(extra->data);
    // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
    // memcpy(data->ProdFamilyCode, buf, len);
    strncpy(data->ProdFamilyCode, buf, sizeof(data->ProdFamilyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSPBMIntraParameterFieldType_members[] = {
    /// 品种内合约间对锁仓费率折扣比例
    /// typedef double TThostFtdcRatioType
    {
        .name = "IntraRateY",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSPBMIntraParameterFieldData, data.IntraRateY),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("品种内合约间对锁仓费率折扣比例")
    },
    /// 品种内合约间对锁仓附加费率折扣比例
    /// typedef double TThostFtdcRatioType
    {
        .name = "AddOnIntraRateY2",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSPBMIntraParameterFieldData, data.AddOnIntraRateY2),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("品种内合约间对锁仓附加费率折扣比例")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSPBMIntraParameterFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcSPBMIntraParameterFieldType_get_TradingDay,
    .set = PyCThostFtdcSPBMIntraParameterFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSPBMIntraParameterFieldType_get_ExchangeID,
    .set = PyCThostFtdcSPBMIntraParameterFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ProdFamilyCode",
    .get = PyCThostFtdcSPBMIntraParameterFieldType_get_ProdFamilyCode,
    .set = PyCThostFtdcSPBMIntraParameterFieldType_set_ProdFamilyCode,
    .doc = PyDoc_STR("品种代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSPBMIntraParameterFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSPBMIntraParameterField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("SPBM品种内对锁仓折扣参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSPBMIntraParameterFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSPBMIntraParameterFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSPBMIntraParameterFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSPBMIntraParameterFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSPBMIntraParameterFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSPBMIntraParameterFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("SPBM品种内对锁仓折扣参数")},
    {Py_tp_members, PyCThostFtdcSPBMIntraParameterFieldType_members},
    {Py_tp_getset, PyCThostFtdcSPBMIntraParameterFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSPBMIntraParameterFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSPBMIntraParameterFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSPBMIntraParameterFieldType_spec = {
    .name = "PyCTP.CThostFtdcSPBMIntraParameterField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSPBMIntraParameterFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSPBMIntraParameterFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSPBMIntraParameterFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSPBMIntraParameterFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSPBMIntraParameterFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSPBMIntraParameterFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSPBMIntraParameterFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSPBMIntraParameterFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSPBMIntraParameterField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSPBMIntraParameterField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}