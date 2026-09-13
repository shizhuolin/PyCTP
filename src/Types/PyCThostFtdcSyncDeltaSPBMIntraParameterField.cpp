
#include "PyCThostFtdcSyncDeltaSPBMIntraParameterField.h"

///风险结算追平SPBM品种内对锁仓折扣参数

static int PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "ExchangeID", "ProdFamilyCode", "IntraRateY", "AddOnIntraRateY2", "ActionDirection", "SyncDeltaSequenceNo", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSyncDeltaSPBMIntraParameterField_TradingDay = NULL;
    Py_ssize_t CThostFtdcSyncDeltaSPBMIntraParameterField_TradingDay_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSyncDeltaSPBMIntraParameterField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaSPBMIntraParameterField_ExchangeID_length = 0;

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncDeltaSPBMIntraParameterField_ProdFamilyCode = NULL;
    Py_ssize_t CThostFtdcSyncDeltaSPBMIntraParameterField_ProdFamilyCode_length = 0;

    /// 品种内合约间对锁仓费率折扣比例
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaSPBMIntraParameterField_IntraRateY = 0.0;

    /// 品种内合约间对锁仓附加费率折扣比例
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncDeltaSPBMIntraParameterField_AddOnIntraRateY2 = 0.0;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    char CThostFtdcSyncDeltaSPBMIntraParameterField_ActionDirection = 0;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaSPBMIntraParameterField_SyncDeltaSequenceNo = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ddci", (char **)kwlist
        , &CThostFtdcSyncDeltaSPBMIntraParameterField_TradingDay, &CThostFtdcSyncDeltaSPBMIntraParameterField_TradingDay_length
        , &CThostFtdcSyncDeltaSPBMIntraParameterField_ExchangeID, &CThostFtdcSyncDeltaSPBMIntraParameterField_ExchangeID_length
        , &CThostFtdcSyncDeltaSPBMIntraParameterField_ProdFamilyCode, &CThostFtdcSyncDeltaSPBMIntraParameterField_ProdFamilyCode_length
        , &CThostFtdcSyncDeltaSPBMIntraParameterField_IntraRateY
        , &CThostFtdcSyncDeltaSPBMIntraParameterField_AddOnIntraRateY2
        , &CThostFtdcSyncDeltaSPBMIntraParameterField_ActionDirection
        , &CThostFtdcSyncDeltaSPBMIntraParameterField_SyncDeltaSequenceNo
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaSPBMIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMIntraParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMIntraParameterField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSyncDeltaSPBMIntraParameterField_TradingDay != NULL ) {
        if(CThostFtdcSyncDeltaSPBMIntraParameterField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaSPBMIntraParameterField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcSyncDeltaSPBMIntraParameterField_TradingDay, CThostFtdcSyncDeltaSPBMIntraParameterField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcSyncDeltaSPBMIntraParameterField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcSyncDeltaSPBMIntraParameterField_TradingDay = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSyncDeltaSPBMIntraParameterField_ExchangeID != NULL ) {
        if(CThostFtdcSyncDeltaSPBMIntraParameterField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaSPBMIntraParameterField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSyncDeltaSPBMIntraParameterField_ExchangeID, CThostFtdcSyncDeltaSPBMIntraParameterField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSyncDeltaSPBMIntraParameterField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSyncDeltaSPBMIntraParameterField_ExchangeID = NULL;
    }

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncDeltaSPBMIntraParameterField_ProdFamilyCode != NULL ) {
        if(CThostFtdcSyncDeltaSPBMIntraParameterField_ProdFamilyCode_length >= (Py_ssize_t)sizeof(data->ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaSPBMIntraParameterField_ProdFamilyCode_length);
            return -1;
        }
        // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
        // memcpy(data->ProdFamilyCode, CThostFtdcSyncDeltaSPBMIntraParameterField_ProdFamilyCode, CThostFtdcSyncDeltaSPBMIntraParameterField_ProdFamilyCode_length);
        strncpy(data->ProdFamilyCode, CThostFtdcSyncDeltaSPBMIntraParameterField_ProdFamilyCode, sizeof(data->ProdFamilyCode));
        CThostFtdcSyncDeltaSPBMIntraParameterField_ProdFamilyCode = NULL;
    }

    /// 品种内合约间对锁仓费率折扣比例
    /// typedef double TThostFtdcRatioType
    data->IntraRateY = CThostFtdcSyncDeltaSPBMIntraParameterField_IntraRateY;

    /// 品种内合约间对锁仓附加费率折扣比例
    /// typedef double TThostFtdcRatioType
    data->AddOnIntraRateY2 = CThostFtdcSyncDeltaSPBMIntraParameterField_AddOnIntraRateY2;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    data->ActionDirection = CThostFtdcSyncDeltaSPBMIntraParameterField_ActionDirection;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaSPBMIntraParameterField_SyncDeltaSequenceNo;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaSPBMIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMIntraParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMIntraParameterField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:d,s:d,s:c,s:i}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ProdFamilyCode", data->ProdFamilyCode//, (Py_ssize_t)sizeof(data->ProdFamilyCode)
        , "IntraRateY", data->IntraRateY
        , "AddOnIntraRateY2", data->AddOnIntraRateY2
        , "ActionDirection", data->ActionDirection
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaSPBMIntraParameterField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaSPBMIntraParameterField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPBMIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMIntraParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMIntraParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPBMIntraParameterField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPBMIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMIntraParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMIntraParameterField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPBMIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMIntraParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMIntraParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPBMIntraParameterField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPBMIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMIntraParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMIntraParameterField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 品种代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_get_ProdFamilyCode(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPBMIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMIntraParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMIntraParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProdFamilyCode, (Py_ssize_t)sizeof(data->ProdFamilyCode));
    return PyBytes_FromString(data->ProdFamilyCode);
}

static int PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_set_ProdFamilyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProdFamilyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPBMIntraParameterField::ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "ProdFamilyCode must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPBMIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMIntraParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMIntraParameterField *data = &(extra->data);
    // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
    // memcpy(data->ProdFamilyCode, buf, len);
    strncpy(data->ProdFamilyCode, buf, sizeof(data->ProdFamilyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionDirectionType
static PyObject *PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_get_ActionDirection(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPBMIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMIntraParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMIntraParameterField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionDirection), 1);
}

static int PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_set_ActionDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPBMIntraParameterField::ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPBMIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMIntraParameterFieldData>(self);
    CThostFtdcSyncDeltaSPBMIntraParameterField *data = &(extra->data);
    data->ActionDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_members[] = {
    /// 品种内合约间对锁仓费率折扣比例
    /// typedef double TThostFtdcRatioType
    {
        .name = "IntraRateY",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaSPBMIntraParameterFieldData, data.IntraRateY),
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
        .offset = offsetof(PyCThostFtdcSyncDeltaSPBMIntraParameterFieldData, data.AddOnIntraRateY2),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("品种内合约间对锁仓附加费率折扣比例")
    },
    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "SyncDeltaSequenceNo",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaSPBMIntraParameterFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_get_TradingDay,
    .set = PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_get_ExchangeID,
    .set = PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ProdFamilyCode",
    .get = PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_get_ProdFamilyCode,
    .set = PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_set_ProdFamilyCode,
    .doc = PyDoc_STR("品种代码"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    {
    .name = "ActionDirection",
    .get = PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_get_ActionDirection,
    .set = PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_set_ActionDirection,
    .doc = PyDoc_STR("操作标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaSPBMIntraParameterField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算追平SPBM品种内对锁仓折扣参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaSPBMIntraParameterFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算追平SPBM品种内对锁仓折扣参数")},
    {Py_tp_members, PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaSPBMIntraParameterField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaSPBMIntraParameterFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaSPBMIntraParameterFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaSPBMIntraParameterField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaSPBMIntraParameterField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}