
#include "PyCThostFtdcCombPromotionParamField.h"

///组合优惠比例

static int PyCThostFtdcCombPromotionParamFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "InstrumentID", "CombHedgeFlag", "Xparameter", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcCombPromotionParamField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcCombPromotionParamField_ExchangeID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcCombPromotionParamField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcCombPromotionParamField_InstrumentID_length = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcCombHedgeFlagType[5]
    char *CThostFtdcCombPromotionParamField_CombHedgeFlag = NULL;
    Py_ssize_t CThostFtdcCombPromotionParamField_CombHedgeFlag_length = 0;

    /// 期权组合保证金比例
    /// typedef double TThostFtdcDiscountRatioType
    double CThostFtdcCombPromotionParamField_Xparameter = 0.0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#d", (char **)kwlist
        , &CThostFtdcCombPromotionParamField_ExchangeID, &CThostFtdcCombPromotionParamField_ExchangeID_length
        , &CThostFtdcCombPromotionParamField_InstrumentID, &CThostFtdcCombPromotionParamField_InstrumentID_length
        , &CThostFtdcCombPromotionParamField_CombHedgeFlag, &CThostFtdcCombPromotionParamField_CombHedgeFlag_length
        , &CThostFtdcCombPromotionParamField_Xparameter
    )) {
        return -1;
    }

    PyCThostFtdcCombPromotionParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombPromotionParamFieldData>(self);
    CThostFtdcCombPromotionParamField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcCombPromotionParamField_ExchangeID != NULL ) {
        if(CThostFtdcCombPromotionParamField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcCombPromotionParamField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcCombPromotionParamField_ExchangeID, CThostFtdcCombPromotionParamField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcCombPromotionParamField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcCombPromotionParamField_ExchangeID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcCombPromotionParamField_InstrumentID != NULL ) {
        if(CThostFtdcCombPromotionParamField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcCombPromotionParamField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcCombPromotionParamField_InstrumentID, CThostFtdcCombPromotionParamField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcCombPromotionParamField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcCombPromotionParamField_InstrumentID = NULL;
    }

    /// 投机套保标志
    /// typedef char TThostFtdcCombHedgeFlagType[5]
    if( CThostFtdcCombPromotionParamField_CombHedgeFlag != NULL ) {
        if(CThostFtdcCombPromotionParamField_CombHedgeFlag_length >= (Py_ssize_t)sizeof(data->CombHedgeFlag)) {
            PyErr_Format(PyExc_ValueError, "CombHedgeFlag too long: length=%zd (max allowed is 4)", CThostFtdcCombPromotionParamField_CombHedgeFlag_length);
            return -1;
        }
        // memset(data->CombHedgeFlag, 0, sizeof(data->CombHedgeFlag));
        // memcpy(data->CombHedgeFlag, CThostFtdcCombPromotionParamField_CombHedgeFlag, CThostFtdcCombPromotionParamField_CombHedgeFlag_length);
        strncpy(data->CombHedgeFlag, CThostFtdcCombPromotionParamField_CombHedgeFlag, sizeof(data->CombHedgeFlag));
        CThostFtdcCombPromotionParamField_CombHedgeFlag = NULL;
    }

    /// 期权组合保证金比例
    /// typedef double TThostFtdcDiscountRatioType
    data->Xparameter = CThostFtdcCombPromotionParamField_Xparameter;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcCombPromotionParamFieldType_repr(PyObject *self) {

    PyCThostFtdcCombPromotionParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombPromotionParamFieldData>(self);
    CThostFtdcCombPromotionParamField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:d}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "CombHedgeFlag", data->CombHedgeFlag//, (Py_ssize_t)sizeof(data->CombHedgeFlag)
        , "Xparameter", data->Xparameter
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCombPromotionParamField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCombPromotionParamField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcCombPromotionParamFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcCombPromotionParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombPromotionParamFieldData>(self);
    CThostFtdcCombPromotionParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcCombPromotionParamFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCombPromotionParamField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombPromotionParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombPromotionParamFieldData>(self);
    CThostFtdcCombPromotionParamField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcCombPromotionParamFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcCombPromotionParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombPromotionParamFieldData>(self);
    CThostFtdcCombPromotionParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcCombPromotionParamFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCombPromotionParamField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombPromotionParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombPromotionParamFieldData>(self);
    CThostFtdcCombPromotionParamField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcCombHedgeFlagType[5]
static PyObject *PyCThostFtdcCombPromotionParamFieldType_get_CombHedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcCombPromotionParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombPromotionParamFieldData>(self);
    CThostFtdcCombPromotionParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombHedgeFlag, (Py_ssize_t)sizeof(data->CombHedgeFlag));
    return PyBytes_FromString(data->CombHedgeFlag);
}

static int PyCThostFtdcCombPromotionParamFieldType_set_CombHedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombHedgeFlag Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCombPromotionParamField::CombHedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "CombHedgeFlag must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombPromotionParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombPromotionParamFieldData>(self);
    CThostFtdcCombPromotionParamField *data = &(extra->data);
    // memset(data->CombHedgeFlag, 0, sizeof(data->CombHedgeFlag));
    // memcpy(data->CombHedgeFlag, buf, len);
    strncpy(data->CombHedgeFlag, buf, sizeof(data->CombHedgeFlag));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcCombPromotionParamFieldType_members[] = {
    /// 期权组合保证金比例
    /// typedef double TThostFtdcDiscountRatioType
    {
        .name = "Xparameter",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcCombPromotionParamFieldData, data.Xparameter),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("期权组合保证金比例")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcCombPromotionParamFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcCombPromotionParamFieldType_get_ExchangeID,
    .set = PyCThostFtdcCombPromotionParamFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcCombPromotionParamFieldType_get_InstrumentID,
    .set = PyCThostFtdcCombPromotionParamFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcCombHedgeFlagType[5]
    {
    .name = "CombHedgeFlag",
    .get = PyCThostFtdcCombPromotionParamFieldType_get_CombHedgeFlag,
    .set = PyCThostFtdcCombPromotionParamFieldType_set_CombHedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcCombPromotionParamFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcCombPromotionParamField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("组合优惠比例")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcCombPromotionParamFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcCombPromotionParamFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcCombPromotionParamFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcCombPromotionParamFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcCombPromotionParamFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcCombPromotionParamFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("组合优惠比例")},
    {Py_tp_members, PyCThostFtdcCombPromotionParamFieldType_members},
    {Py_tp_getset, PyCThostFtdcCombPromotionParamFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcCombPromotionParamFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcCombPromotionParamFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcCombPromotionParamFieldType_spec = {
    .name = "PyCTP.CThostFtdcCombPromotionParamField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcCombPromotionParamFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcCombPromotionParamFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcCombPromotionParamFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcCombPromotionParamFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcCombPromotionParamFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcCombPromotionParamFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcCombPromotionParamFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcCombPromotionParamFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcCombPromotionParamField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcCombPromotionParamField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}