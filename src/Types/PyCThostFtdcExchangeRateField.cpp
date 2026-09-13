
#include "PyCThostFtdcExchangeRateField.h"

///汇率

static int PyCThostFtdcExchangeRateFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "FromCurrencyID", "FromCurrencyUnit", "ToCurrencyID", "ExchangeRate", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcExchangeRateField_BrokerID = NULL;
    Py_ssize_t CThostFtdcExchangeRateField_BrokerID_length = 0;

    /// 源币种
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcExchangeRateField_FromCurrencyID = NULL;
    Py_ssize_t CThostFtdcExchangeRateField_FromCurrencyID_length = 0;

    /// 源币种单位数量
    /// typedef double TThostFtdcCurrencyUnitType
    double CThostFtdcExchangeRateField_FromCurrencyUnit = 0.0;

    /// 目标币种
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcExchangeRateField_ToCurrencyID = NULL;
    Py_ssize_t CThostFtdcExchangeRateField_ToCurrencyID_length = 0;

    /// 汇率
    /// typedef double TThostFtdcExchangeRateType
    double CThostFtdcExchangeRateField_ExchangeRate = 0.0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#dy#d", (char **)kwlist
        , &CThostFtdcExchangeRateField_BrokerID, &CThostFtdcExchangeRateField_BrokerID_length
        , &CThostFtdcExchangeRateField_FromCurrencyID, &CThostFtdcExchangeRateField_FromCurrencyID_length
        , &CThostFtdcExchangeRateField_FromCurrencyUnit
        , &CThostFtdcExchangeRateField_ToCurrencyID, &CThostFtdcExchangeRateField_ToCurrencyID_length
        , &CThostFtdcExchangeRateField_ExchangeRate
    )) {
        return -1;
    }

    PyCThostFtdcExchangeRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeRateFieldData>(self);
    CThostFtdcExchangeRateField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcExchangeRateField_BrokerID != NULL ) {
        if(CThostFtdcExchangeRateField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcExchangeRateField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcExchangeRateField_BrokerID, CThostFtdcExchangeRateField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcExchangeRateField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcExchangeRateField_BrokerID = NULL;
    }

    /// 源币种
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcExchangeRateField_FromCurrencyID != NULL ) {
        if(CThostFtdcExchangeRateField_FromCurrencyID_length >= (Py_ssize_t)sizeof(data->FromCurrencyID)) {
            PyErr_Format(PyExc_ValueError, "FromCurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcExchangeRateField_FromCurrencyID_length);
            return -1;
        }
        // memset(data->FromCurrencyID, 0, sizeof(data->FromCurrencyID));
        // memcpy(data->FromCurrencyID, CThostFtdcExchangeRateField_FromCurrencyID, CThostFtdcExchangeRateField_FromCurrencyID_length);
        strncpy(data->FromCurrencyID, CThostFtdcExchangeRateField_FromCurrencyID, sizeof(data->FromCurrencyID));
        CThostFtdcExchangeRateField_FromCurrencyID = NULL;
    }

    /// 源币种单位数量
    /// typedef double TThostFtdcCurrencyUnitType
    data->FromCurrencyUnit = CThostFtdcExchangeRateField_FromCurrencyUnit;

    /// 目标币种
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcExchangeRateField_ToCurrencyID != NULL ) {
        if(CThostFtdcExchangeRateField_ToCurrencyID_length >= (Py_ssize_t)sizeof(data->ToCurrencyID)) {
            PyErr_Format(PyExc_ValueError, "ToCurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcExchangeRateField_ToCurrencyID_length);
            return -1;
        }
        // memset(data->ToCurrencyID, 0, sizeof(data->ToCurrencyID));
        // memcpy(data->ToCurrencyID, CThostFtdcExchangeRateField_ToCurrencyID, CThostFtdcExchangeRateField_ToCurrencyID_length);
        strncpy(data->ToCurrencyID, CThostFtdcExchangeRateField_ToCurrencyID, sizeof(data->ToCurrencyID));
        CThostFtdcExchangeRateField_ToCurrencyID = NULL;
    }

    /// 汇率
    /// typedef double TThostFtdcExchangeRateType
    data->ExchangeRate = CThostFtdcExchangeRateField_ExchangeRate;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcExchangeRateFieldType_repr(PyObject *self) {

    PyCThostFtdcExchangeRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeRateFieldData>(self);
    CThostFtdcExchangeRateField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:d,s:y,s:d}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "FromCurrencyID", data->FromCurrencyID//, (Py_ssize_t)sizeof(data->FromCurrencyID)
        , "FromCurrencyUnit", data->FromCurrencyUnit
        , "ToCurrencyID", data->ToCurrencyID//, (Py_ssize_t)sizeof(data->ToCurrencyID)
        , "ExchangeRate", data->ExchangeRate
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeRateField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeRateField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcExchangeRateFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeRateFieldData>(self);
    CThostFtdcExchangeRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcExchangeRateFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeRateField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeRateFieldData>(self);
    CThostFtdcExchangeRateField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 源币种
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcExchangeRateFieldType_get_FromCurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeRateFieldData>(self);
    CThostFtdcExchangeRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->FromCurrencyID, (Py_ssize_t)sizeof(data->FromCurrencyID));
    return PyBytes_FromString(data->FromCurrencyID);
}

static int PyCThostFtdcExchangeRateFieldType_set_FromCurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FromCurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeRateField::FromCurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "FromCurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeRateFieldData>(self);
    CThostFtdcExchangeRateField *data = &(extra->data);
    // memset(data->FromCurrencyID, 0, sizeof(data->FromCurrencyID));
    // memcpy(data->FromCurrencyID, buf, len);
    strncpy(data->FromCurrencyID, buf, sizeof(data->FromCurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 目标币种
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcExchangeRateFieldType_get_ToCurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeRateFieldData>(self);
    CThostFtdcExchangeRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ToCurrencyID, (Py_ssize_t)sizeof(data->ToCurrencyID));
    return PyBytes_FromString(data->ToCurrencyID);
}

static int PyCThostFtdcExchangeRateFieldType_set_ToCurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ToCurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeRateField::ToCurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "ToCurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeRateFieldData>(self);
    CThostFtdcExchangeRateField *data = &(extra->data);
    // memset(data->ToCurrencyID, 0, sizeof(data->ToCurrencyID));
    // memcpy(data->ToCurrencyID, buf, len);
    strncpy(data->ToCurrencyID, buf, sizeof(data->ToCurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcExchangeRateFieldType_members[] = {
    /// 源币种单位数量
    /// typedef double TThostFtdcCurrencyUnitType
    {
        .name = "FromCurrencyUnit",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeRateFieldData, data.FromCurrencyUnit),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("源币种单位数量")
    },
    /// 汇率
    /// typedef double TThostFtdcExchangeRateType
    {
        .name = "ExchangeRate",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeRateFieldData, data.ExchangeRate),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("汇率")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcExchangeRateFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcExchangeRateFieldType_get_BrokerID,
    .set = PyCThostFtdcExchangeRateFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 源币种
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "FromCurrencyID",
    .get = PyCThostFtdcExchangeRateFieldType_get_FromCurrencyID,
    .set = PyCThostFtdcExchangeRateFieldType_set_FromCurrencyID,
    .doc = PyDoc_STR("源币种"),
    },
    /// 目标币种
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "ToCurrencyID",
    .get = PyCThostFtdcExchangeRateFieldType_get_ToCurrencyID,
    .set = PyCThostFtdcExchangeRateFieldType_set_ToCurrencyID,
    .doc = PyDoc_STR("目标币种"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcExchangeRateFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcExchangeRateField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("汇率")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcExchangeRateFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcExchangeRateFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcExchangeRateFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcExchangeRateFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcExchangeRateFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcExchangeRateFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("汇率")},
    {Py_tp_members, PyCThostFtdcExchangeRateFieldType_members},
    {Py_tp_getset, PyCThostFtdcExchangeRateFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcExchangeRateFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcExchangeRateFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcExchangeRateFieldType_spec = {
    .name = "PyCTP.CThostFtdcExchangeRateField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcExchangeRateFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcExchangeRateFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcExchangeRateFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcExchangeRateFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcExchangeRateFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcExchangeRateFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcExchangeRateFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcExchangeRateFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcExchangeRateField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeRateField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}