
#include "PyCThostFtdcRULEIntraParameterField.h"

///RULE品种内对锁仓折扣参数

static int PyCThostFtdcRULEIntraParameterFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "ExchangeID", "ProdFamilyCode", "StdInstrumentID", "StdInstrMargin", "UsualIntraRate", "DeliveryIntraRate", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcRULEIntraParameterField_TradingDay = NULL;
    Py_ssize_t CThostFtdcRULEIntraParameterField_TradingDay_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcRULEIntraParameterField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcRULEIntraParameterField_ExchangeID_length = 0;

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcRULEIntraParameterField_ProdFamilyCode = NULL;
    Py_ssize_t CThostFtdcRULEIntraParameterField_ProdFamilyCode_length = 0;

    /// 标准合约
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcRULEIntraParameterField_StdInstrumentID = NULL;
    Py_ssize_t CThostFtdcRULEIntraParameterField_StdInstrumentID_length = 0;

    /// 标准合约保证金
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcRULEIntraParameterField_StdInstrMargin = 0.0;

    /// 一般月份合约组合保证金系数
    /// typedef double TThostFtdcRatioType
    double CThostFtdcRULEIntraParameterField_UsualIntraRate = 0.0;

    /// 临近交割合约组合保证金系数
    /// typedef double TThostFtdcRatioType
    double CThostFtdcRULEIntraParameterField_DeliveryIntraRate = 0.0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#ddd", (char **)kwlist
        , &CThostFtdcRULEIntraParameterField_TradingDay, &CThostFtdcRULEIntraParameterField_TradingDay_length
        , &CThostFtdcRULEIntraParameterField_ExchangeID, &CThostFtdcRULEIntraParameterField_ExchangeID_length
        , &CThostFtdcRULEIntraParameterField_ProdFamilyCode, &CThostFtdcRULEIntraParameterField_ProdFamilyCode_length
        , &CThostFtdcRULEIntraParameterField_StdInstrumentID, &CThostFtdcRULEIntraParameterField_StdInstrumentID_length
        , &CThostFtdcRULEIntraParameterField_StdInstrMargin
        , &CThostFtdcRULEIntraParameterField_UsualIntraRate
        , &CThostFtdcRULEIntraParameterField_DeliveryIntraRate
    )) {
        return -1;
    }

    PyCThostFtdcRULEIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRULEIntraParameterFieldData>(self);
    CThostFtdcRULEIntraParameterField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcRULEIntraParameterField_TradingDay != NULL ) {
        if(CThostFtdcRULEIntraParameterField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcRULEIntraParameterField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcRULEIntraParameterField_TradingDay, CThostFtdcRULEIntraParameterField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcRULEIntraParameterField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcRULEIntraParameterField_TradingDay = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcRULEIntraParameterField_ExchangeID != NULL ) {
        if(CThostFtdcRULEIntraParameterField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcRULEIntraParameterField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcRULEIntraParameterField_ExchangeID, CThostFtdcRULEIntraParameterField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcRULEIntraParameterField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcRULEIntraParameterField_ExchangeID = NULL;
    }

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcRULEIntraParameterField_ProdFamilyCode != NULL ) {
        if(CThostFtdcRULEIntraParameterField_ProdFamilyCode_length >= (Py_ssize_t)sizeof(data->ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is 80)", CThostFtdcRULEIntraParameterField_ProdFamilyCode_length);
            return -1;
        }
        // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
        // memcpy(data->ProdFamilyCode, CThostFtdcRULEIntraParameterField_ProdFamilyCode, CThostFtdcRULEIntraParameterField_ProdFamilyCode_length);
        strncpy(data->ProdFamilyCode, CThostFtdcRULEIntraParameterField_ProdFamilyCode, sizeof(data->ProdFamilyCode));
        CThostFtdcRULEIntraParameterField_ProdFamilyCode = NULL;
    }

    /// 标准合约
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcRULEIntraParameterField_StdInstrumentID != NULL ) {
        if(CThostFtdcRULEIntraParameterField_StdInstrumentID_length >= (Py_ssize_t)sizeof(data->StdInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "StdInstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcRULEIntraParameterField_StdInstrumentID_length);
            return -1;
        }
        // memset(data->StdInstrumentID, 0, sizeof(data->StdInstrumentID));
        // memcpy(data->StdInstrumentID, CThostFtdcRULEIntraParameterField_StdInstrumentID, CThostFtdcRULEIntraParameterField_StdInstrumentID_length);
        strncpy(data->StdInstrumentID, CThostFtdcRULEIntraParameterField_StdInstrumentID, sizeof(data->StdInstrumentID));
        CThostFtdcRULEIntraParameterField_StdInstrumentID = NULL;
    }

    /// 标准合约保证金
    /// typedef double TThostFtdcMoneyType
    data->StdInstrMargin = CThostFtdcRULEIntraParameterField_StdInstrMargin;

    /// 一般月份合约组合保证金系数
    /// typedef double TThostFtdcRatioType
    data->UsualIntraRate = CThostFtdcRULEIntraParameterField_UsualIntraRate;

    /// 临近交割合约组合保证金系数
    /// typedef double TThostFtdcRatioType
    data->DeliveryIntraRate = CThostFtdcRULEIntraParameterField_DeliveryIntraRate;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcRULEIntraParameterFieldType_repr(PyObject *self) {

    PyCThostFtdcRULEIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRULEIntraParameterFieldData>(self);
    CThostFtdcRULEIntraParameterField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:d,s:d,s:d}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ProdFamilyCode", data->ProdFamilyCode//, (Py_ssize_t)sizeof(data->ProdFamilyCode)
        , "StdInstrumentID", data->StdInstrumentID//, (Py_ssize_t)sizeof(data->StdInstrumentID)
        , "StdInstrMargin", data->StdInstrMargin
        , "UsualIntraRate", data->UsualIntraRate
        , "DeliveryIntraRate", data->DeliveryIntraRate
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRULEIntraParameterField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRULEIntraParameterField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcRULEIntraParameterFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcRULEIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRULEIntraParameterFieldData>(self);
    CThostFtdcRULEIntraParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcRULEIntraParameterFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRULEIntraParameterField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRULEIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRULEIntraParameterFieldData>(self);
    CThostFtdcRULEIntraParameterField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcRULEIntraParameterFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcRULEIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRULEIntraParameterFieldData>(self);
    CThostFtdcRULEIntraParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcRULEIntraParameterFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRULEIntraParameterField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRULEIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRULEIntraParameterFieldData>(self);
    CThostFtdcRULEIntraParameterField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 品种代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcRULEIntraParameterFieldType_get_ProdFamilyCode(PyObject *self, void *closure) {
    PyCThostFtdcRULEIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRULEIntraParameterFieldData>(self);
    CThostFtdcRULEIntraParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProdFamilyCode, (Py_ssize_t)sizeof(data->ProdFamilyCode));
    return PyBytes_FromString(data->ProdFamilyCode);
}

static int PyCThostFtdcRULEIntraParameterFieldType_set_ProdFamilyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProdFamilyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRULEIntraParameterField::ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "ProdFamilyCode must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRULEIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRULEIntraParameterFieldData>(self);
    CThostFtdcRULEIntraParameterField *data = &(extra->data);
    // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
    // memcpy(data->ProdFamilyCode, buf, len);
    strncpy(data->ProdFamilyCode, buf, sizeof(data->ProdFamilyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 标准合约
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcRULEIntraParameterFieldType_get_StdInstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcRULEIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRULEIntraParameterFieldData>(self);
    CThostFtdcRULEIntraParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->StdInstrumentID, (Py_ssize_t)sizeof(data->StdInstrumentID));
    return PyBytes_FromString(data->StdInstrumentID);
}

static int PyCThostFtdcRULEIntraParameterFieldType_set_StdInstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "StdInstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRULEIntraParameterField::StdInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "StdInstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRULEIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRULEIntraParameterFieldData>(self);
    CThostFtdcRULEIntraParameterField *data = &(extra->data);
    // memset(data->StdInstrumentID, 0, sizeof(data->StdInstrumentID));
    // memcpy(data->StdInstrumentID, buf, len);
    strncpy(data->StdInstrumentID, buf, sizeof(data->StdInstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcRULEIntraParameterFieldType_members[] = {
    /// 标准合约保证金
    /// typedef double TThostFtdcMoneyType
    {
        .name = "StdInstrMargin",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRULEIntraParameterFieldData, data.StdInstrMargin),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("标准合约保证金")
    },
    /// 一般月份合约组合保证金系数
    /// typedef double TThostFtdcRatioType
    {
        .name = "UsualIntraRate",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRULEIntraParameterFieldData, data.UsualIntraRate),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("一般月份合约组合保证金系数")
    },
    /// 临近交割合约组合保证金系数
    /// typedef double TThostFtdcRatioType
    {
        .name = "DeliveryIntraRate",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRULEIntraParameterFieldData, data.DeliveryIntraRate),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("临近交割合约组合保证金系数")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcRULEIntraParameterFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcRULEIntraParameterFieldType_get_TradingDay,
    .set = PyCThostFtdcRULEIntraParameterFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcRULEIntraParameterFieldType_get_ExchangeID,
    .set = PyCThostFtdcRULEIntraParameterFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ProdFamilyCode",
    .get = PyCThostFtdcRULEIntraParameterFieldType_get_ProdFamilyCode,
    .set = PyCThostFtdcRULEIntraParameterFieldType_set_ProdFamilyCode,
    .doc = PyDoc_STR("品种代码"),
    },
    /// 标准合约
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "StdInstrumentID",
    .get = PyCThostFtdcRULEIntraParameterFieldType_get_StdInstrumentID,
    .set = PyCThostFtdcRULEIntraParameterFieldType_set_StdInstrumentID,
    .doc = PyDoc_STR("标准合约"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcRULEIntraParameterFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcRULEIntraParameterField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("RULE品种内对锁仓折扣参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcRULEIntraParameterFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcRULEIntraParameterFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcRULEIntraParameterFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcRULEIntraParameterFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcRULEIntraParameterFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcRULEIntraParameterFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("RULE品种内对锁仓折扣参数")},
    {Py_tp_members, PyCThostFtdcRULEIntraParameterFieldType_members},
    {Py_tp_getset, PyCThostFtdcRULEIntraParameterFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcRULEIntraParameterFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcRULEIntraParameterFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcRULEIntraParameterFieldType_spec = {
    .name = "PyCTP.CThostFtdcRULEIntraParameterField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcRULEIntraParameterFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcRULEIntraParameterFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcRULEIntraParameterFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcRULEIntraParameterFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcRULEIntraParameterFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcRULEIntraParameterFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcRULEIntraParameterFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcRULEIntraParameterFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcRULEIntraParameterField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRULEIntraParameterField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}