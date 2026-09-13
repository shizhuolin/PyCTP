
#include "PyCThostFtdcFutureLimitPosiParamField.h"

///期货持仓限制参数

static int PyCThostFtdcFutureLimitPosiParamFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "InvestorRange", "BrokerID", "InvestorID", "reserve1", "SpecOpenVolume", "ArbiOpenVolume", "OpenVolume", "ProductID", NULL };


    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    char CThostFtdcFutureLimitPosiParamField_InvestorRange = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcFutureLimitPosiParamField_BrokerID = NULL;
    Py_ssize_t CThostFtdcFutureLimitPosiParamField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcFutureLimitPosiParamField_InvestorID = NULL;
    Py_ssize_t CThostFtdcFutureLimitPosiParamField_InvestorID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcFutureLimitPosiParamField_reserve1 = NULL;
    Py_ssize_t CThostFtdcFutureLimitPosiParamField_reserve1_length = 0;

    /// 当日投机开仓数量限制
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcFutureLimitPosiParamField_SpecOpenVolume = 0;

    /// 当日套利开仓数量限制
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcFutureLimitPosiParamField_ArbiOpenVolume = 0;

    /// 当日投机+套利开仓数量限制
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcFutureLimitPosiParamField_OpenVolume = 0;

    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcFutureLimitPosiParamField_ProductID = NULL;
    Py_ssize_t CThostFtdcFutureLimitPosiParamField_ProductID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|cy#y#y#iiiy#", (char **)kwlist
        , &CThostFtdcFutureLimitPosiParamField_InvestorRange
        , &CThostFtdcFutureLimitPosiParamField_BrokerID, &CThostFtdcFutureLimitPosiParamField_BrokerID_length
        , &CThostFtdcFutureLimitPosiParamField_InvestorID, &CThostFtdcFutureLimitPosiParamField_InvestorID_length
        , &CThostFtdcFutureLimitPosiParamField_reserve1, &CThostFtdcFutureLimitPosiParamField_reserve1_length
        , &CThostFtdcFutureLimitPosiParamField_SpecOpenVolume
        , &CThostFtdcFutureLimitPosiParamField_ArbiOpenVolume
        , &CThostFtdcFutureLimitPosiParamField_OpenVolume
        , &CThostFtdcFutureLimitPosiParamField_ProductID, &CThostFtdcFutureLimitPosiParamField_ProductID_length
    )) {
        return -1;
    }

    PyCThostFtdcFutureLimitPosiParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcFutureLimitPosiParamFieldData>(self);
    CThostFtdcFutureLimitPosiParamField *data = &(extra->data);


    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    data->InvestorRange = CThostFtdcFutureLimitPosiParamField_InvestorRange;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcFutureLimitPosiParamField_BrokerID != NULL ) {
        if(CThostFtdcFutureLimitPosiParamField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcFutureLimitPosiParamField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcFutureLimitPosiParamField_BrokerID, CThostFtdcFutureLimitPosiParamField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcFutureLimitPosiParamField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcFutureLimitPosiParamField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcFutureLimitPosiParamField_InvestorID != NULL ) {
        if(CThostFtdcFutureLimitPosiParamField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcFutureLimitPosiParamField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcFutureLimitPosiParamField_InvestorID, CThostFtdcFutureLimitPosiParamField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcFutureLimitPosiParamField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcFutureLimitPosiParamField_InvestorID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcFutureLimitPosiParamField_reserve1 != NULL ) {
        if(CThostFtdcFutureLimitPosiParamField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcFutureLimitPosiParamField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcFutureLimitPosiParamField_reserve1, CThostFtdcFutureLimitPosiParamField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcFutureLimitPosiParamField_reserve1, sizeof(data->reserve1));
        CThostFtdcFutureLimitPosiParamField_reserve1 = NULL;
    }

    /// 当日投机开仓数量限制
    /// typedef int TThostFtdcVolumeType
    data->SpecOpenVolume = CThostFtdcFutureLimitPosiParamField_SpecOpenVolume;

    /// 当日套利开仓数量限制
    /// typedef int TThostFtdcVolumeType
    data->ArbiOpenVolume = CThostFtdcFutureLimitPosiParamField_ArbiOpenVolume;

    /// 当日投机+套利开仓数量限制
    /// typedef int TThostFtdcVolumeType
    data->OpenVolume = CThostFtdcFutureLimitPosiParamField_OpenVolume;

    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcFutureLimitPosiParamField_ProductID != NULL ) {
        if(CThostFtdcFutureLimitPosiParamField_ProductID_length >= (Py_ssize_t)sizeof(data->ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is 80)", CThostFtdcFutureLimitPosiParamField_ProductID_length);
            return -1;
        }
        // memset(data->ProductID, 0, sizeof(data->ProductID));
        // memcpy(data->ProductID, CThostFtdcFutureLimitPosiParamField_ProductID, CThostFtdcFutureLimitPosiParamField_ProductID_length);
        strncpy(data->ProductID, CThostFtdcFutureLimitPosiParamField_ProductID, sizeof(data->ProductID));
        CThostFtdcFutureLimitPosiParamField_ProductID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcFutureLimitPosiParamFieldType_repr(PyObject *self) {

    PyCThostFtdcFutureLimitPosiParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcFutureLimitPosiParamFieldData>(self);
    CThostFtdcFutureLimitPosiParamField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:c,s:y,s:y,s:y,s:i,s:i,s:i,s:y}"
        , "InvestorRange", data->InvestorRange
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "SpecOpenVolume", data->SpecOpenVolume
        , "ArbiOpenVolume", data->ArbiOpenVolume
        , "OpenVolume", data->OpenVolume
        , "ProductID", data->ProductID//, (Py_ssize_t)sizeof(data->ProductID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcFutureLimitPosiParamField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcFutureLimitPosiParamField repr");
        return NULL;
    }

    return repr;
}


/// 投资者范围
/// typedef char TThostFtdcInvestorRangeType
static PyObject *PyCThostFtdcFutureLimitPosiParamFieldType_get_InvestorRange(PyObject *self, void *closure) {
    PyCThostFtdcFutureLimitPosiParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcFutureLimitPosiParamFieldData>(self);
    CThostFtdcFutureLimitPosiParamField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->InvestorRange), 1);
}

static int PyCThostFtdcFutureLimitPosiParamFieldType_set_InvestorRange(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcFutureLimitPosiParamField::InvestorRange)) {
        PyErr_SetString(PyExc_ValueError, "InvestorRange must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcFutureLimitPosiParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcFutureLimitPosiParamFieldData>(self);
    CThostFtdcFutureLimitPosiParamField *data = &(extra->data);
    data->InvestorRange = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcFutureLimitPosiParamFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcFutureLimitPosiParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcFutureLimitPosiParamFieldData>(self);
    CThostFtdcFutureLimitPosiParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcFutureLimitPosiParamFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcFutureLimitPosiParamField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcFutureLimitPosiParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcFutureLimitPosiParamFieldData>(self);
    CThostFtdcFutureLimitPosiParamField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcFutureLimitPosiParamFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcFutureLimitPosiParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcFutureLimitPosiParamFieldData>(self);
    CThostFtdcFutureLimitPosiParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcFutureLimitPosiParamFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcFutureLimitPosiParamField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcFutureLimitPosiParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcFutureLimitPosiParamFieldData>(self);
    CThostFtdcFutureLimitPosiParamField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcFutureLimitPosiParamFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcFutureLimitPosiParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcFutureLimitPosiParamFieldData>(self);
    CThostFtdcFutureLimitPosiParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcFutureLimitPosiParamFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcFutureLimitPosiParamField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcFutureLimitPosiParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcFutureLimitPosiParamFieldData>(self);
    CThostFtdcFutureLimitPosiParamField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcFutureLimitPosiParamFieldType_get_ProductID(PyObject *self, void *closure) {
    PyCThostFtdcFutureLimitPosiParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcFutureLimitPosiParamFieldData>(self);
    CThostFtdcFutureLimitPosiParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductID, (Py_ssize_t)sizeof(data->ProductID));
    return PyBytes_FromString(data->ProductID);
}

static int PyCThostFtdcFutureLimitPosiParamFieldType_set_ProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcFutureLimitPosiParamField::ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcFutureLimitPosiParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcFutureLimitPosiParamFieldData>(self);
    CThostFtdcFutureLimitPosiParamField *data = &(extra->data);
    // memset(data->ProductID, 0, sizeof(data->ProductID));
    // memcpy(data->ProductID, buf, len);
    strncpy(data->ProductID, buf, sizeof(data->ProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcFutureLimitPosiParamFieldType_members[] = {
    /// 当日投机开仓数量限制
    /// typedef int TThostFtdcVolumeType
    {
        .name = "SpecOpenVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcFutureLimitPosiParamFieldData, data.SpecOpenVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("当日投机开仓数量限制")
    },
    /// 当日套利开仓数量限制
    /// typedef int TThostFtdcVolumeType
    {
        .name = "ArbiOpenVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcFutureLimitPosiParamFieldData, data.ArbiOpenVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("当日套利开仓数量限制")
    },
    /// 当日投机+套利开仓数量限制
    /// typedef int TThostFtdcVolumeType
    {
        .name = "OpenVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcFutureLimitPosiParamFieldData, data.OpenVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("当日投机+套利开仓数量限制")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcFutureLimitPosiParamFieldType_getsets[] = {
    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    {
    .name = "InvestorRange",
    .get = PyCThostFtdcFutureLimitPosiParamFieldType_get_InvestorRange,
    .set = PyCThostFtdcFutureLimitPosiParamFieldType_set_InvestorRange,
    .doc = PyDoc_STR("投资者范围"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcFutureLimitPosiParamFieldType_get_BrokerID,
    .set = PyCThostFtdcFutureLimitPosiParamFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcFutureLimitPosiParamFieldType_get_InvestorID,
    .set = PyCThostFtdcFutureLimitPosiParamFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcFutureLimitPosiParamFieldType_get_reserve1,
    .set = PyCThostFtdcFutureLimitPosiParamFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ProductID",
    .get = PyCThostFtdcFutureLimitPosiParamFieldType_get_ProductID,
    .set = PyCThostFtdcFutureLimitPosiParamFieldType_set_ProductID,
    .doc = PyDoc_STR("产品代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcFutureLimitPosiParamFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcFutureLimitPosiParamField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("期货持仓限制参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcFutureLimitPosiParamFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcFutureLimitPosiParamFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcFutureLimitPosiParamFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcFutureLimitPosiParamFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcFutureLimitPosiParamFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcFutureLimitPosiParamFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("期货持仓限制参数")},
    {Py_tp_members, PyCThostFtdcFutureLimitPosiParamFieldType_members},
    {Py_tp_getset, PyCThostFtdcFutureLimitPosiParamFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcFutureLimitPosiParamFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcFutureLimitPosiParamFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcFutureLimitPosiParamFieldType_spec = {
    .name = "PyCTP.CThostFtdcFutureLimitPosiParamField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcFutureLimitPosiParamFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcFutureLimitPosiParamFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcFutureLimitPosiParamFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcFutureLimitPosiParamFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcFutureLimitPosiParamFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcFutureLimitPosiParamFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcFutureLimitPosiParamFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcFutureLimitPosiParamFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcFutureLimitPosiParamField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcFutureLimitPosiParamField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}