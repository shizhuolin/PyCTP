
#include "PyCThostFtdcRCAMSCombProductInfoField.h"

///RCAMS产品组合信息

static int PyCThostFtdcRCAMSCombProductInfoFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "ExchangeID", "ProductID", "CombProductID", "ProductGroupID", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcRCAMSCombProductInfoField_TradingDay = NULL;
    Py_ssize_t CThostFtdcRCAMSCombProductInfoField_TradingDay_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcRCAMSCombProductInfoField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcRCAMSCombProductInfoField_ExchangeID_length = 0;

    /// 产品代码
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcRCAMSCombProductInfoField_ProductID = NULL;
    Py_ssize_t CThostFtdcRCAMSCombProductInfoField_ProductID_length = 0;

    /// 商品组代码
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcRCAMSCombProductInfoField_CombProductID = NULL;
    Py_ssize_t CThostFtdcRCAMSCombProductInfoField_CombProductID_length = 0;

    /// 商品群代码
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcRCAMSCombProductInfoField_ProductGroupID = NULL;
    Py_ssize_t CThostFtdcRCAMSCombProductInfoField_ProductGroupID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcRCAMSCombProductInfoField_TradingDay, &CThostFtdcRCAMSCombProductInfoField_TradingDay_length
        , &CThostFtdcRCAMSCombProductInfoField_ExchangeID, &CThostFtdcRCAMSCombProductInfoField_ExchangeID_length
        , &CThostFtdcRCAMSCombProductInfoField_ProductID, &CThostFtdcRCAMSCombProductInfoField_ProductID_length
        , &CThostFtdcRCAMSCombProductInfoField_CombProductID, &CThostFtdcRCAMSCombProductInfoField_CombProductID_length
        , &CThostFtdcRCAMSCombProductInfoField_ProductGroupID, &CThostFtdcRCAMSCombProductInfoField_ProductGroupID_length
    )) {
        return -1;
    }

    PyCThostFtdcRCAMSCombProductInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSCombProductInfoFieldData>(self);
    CThostFtdcRCAMSCombProductInfoField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcRCAMSCombProductInfoField_TradingDay != NULL ) {
        if(CThostFtdcRCAMSCombProductInfoField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcRCAMSCombProductInfoField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcRCAMSCombProductInfoField_TradingDay, CThostFtdcRCAMSCombProductInfoField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcRCAMSCombProductInfoField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcRCAMSCombProductInfoField_TradingDay = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcRCAMSCombProductInfoField_ExchangeID != NULL ) {
        if(CThostFtdcRCAMSCombProductInfoField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcRCAMSCombProductInfoField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcRCAMSCombProductInfoField_ExchangeID, CThostFtdcRCAMSCombProductInfoField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcRCAMSCombProductInfoField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcRCAMSCombProductInfoField_ExchangeID = NULL;
    }

    /// 产品代码
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcRCAMSCombProductInfoField_ProductID != NULL ) {
        if(CThostFtdcRCAMSCombProductInfoField_ProductID_length >= (Py_ssize_t)sizeof(data->ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is 40)", CThostFtdcRCAMSCombProductInfoField_ProductID_length);
            return -1;
        }
        // memset(data->ProductID, 0, sizeof(data->ProductID));
        // memcpy(data->ProductID, CThostFtdcRCAMSCombProductInfoField_ProductID, CThostFtdcRCAMSCombProductInfoField_ProductID_length);
        strncpy(data->ProductID, CThostFtdcRCAMSCombProductInfoField_ProductID, sizeof(data->ProductID));
        CThostFtdcRCAMSCombProductInfoField_ProductID = NULL;
    }

    /// 商品组代码
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcRCAMSCombProductInfoField_CombProductID != NULL ) {
        if(CThostFtdcRCAMSCombProductInfoField_CombProductID_length >= (Py_ssize_t)sizeof(data->CombProductID)) {
            PyErr_Format(PyExc_ValueError, "CombProductID too long: length=%zd (max allowed is 40)", CThostFtdcRCAMSCombProductInfoField_CombProductID_length);
            return -1;
        }
        // memset(data->CombProductID, 0, sizeof(data->CombProductID));
        // memcpy(data->CombProductID, CThostFtdcRCAMSCombProductInfoField_CombProductID, CThostFtdcRCAMSCombProductInfoField_CombProductID_length);
        strncpy(data->CombProductID, CThostFtdcRCAMSCombProductInfoField_CombProductID, sizeof(data->CombProductID));
        CThostFtdcRCAMSCombProductInfoField_CombProductID = NULL;
    }

    /// 商品群代码
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcRCAMSCombProductInfoField_ProductGroupID != NULL ) {
        if(CThostFtdcRCAMSCombProductInfoField_ProductGroupID_length >= (Py_ssize_t)sizeof(data->ProductGroupID)) {
            PyErr_Format(PyExc_ValueError, "ProductGroupID too long: length=%zd (max allowed is 40)", CThostFtdcRCAMSCombProductInfoField_ProductGroupID_length);
            return -1;
        }
        // memset(data->ProductGroupID, 0, sizeof(data->ProductGroupID));
        // memcpy(data->ProductGroupID, CThostFtdcRCAMSCombProductInfoField_ProductGroupID, CThostFtdcRCAMSCombProductInfoField_ProductGroupID_length);
        strncpy(data->ProductGroupID, CThostFtdcRCAMSCombProductInfoField_ProductGroupID, sizeof(data->ProductGroupID));
        CThostFtdcRCAMSCombProductInfoField_ProductGroupID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcRCAMSCombProductInfoFieldType_repr(PyObject *self) {

    PyCThostFtdcRCAMSCombProductInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSCombProductInfoFieldData>(self);
    CThostFtdcRCAMSCombProductInfoField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ProductID", data->ProductID//, (Py_ssize_t)sizeof(data->ProductID)
        , "CombProductID", data->CombProductID//, (Py_ssize_t)sizeof(data->CombProductID)
        , "ProductGroupID", data->ProductGroupID//, (Py_ssize_t)sizeof(data->ProductGroupID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRCAMSCombProductInfoField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRCAMSCombProductInfoField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcRCAMSCombProductInfoFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcRCAMSCombProductInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSCombProductInfoFieldData>(self);
    CThostFtdcRCAMSCombProductInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcRCAMSCombProductInfoFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRCAMSCombProductInfoField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRCAMSCombProductInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSCombProductInfoFieldData>(self);
    CThostFtdcRCAMSCombProductInfoField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcRCAMSCombProductInfoFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcRCAMSCombProductInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSCombProductInfoFieldData>(self);
    CThostFtdcRCAMSCombProductInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcRCAMSCombProductInfoFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRCAMSCombProductInfoField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRCAMSCombProductInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSCombProductInfoFieldData>(self);
    CThostFtdcRCAMSCombProductInfoField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品代码
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcRCAMSCombProductInfoFieldType_get_ProductID(PyObject *self, void *closure) {
    PyCThostFtdcRCAMSCombProductInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSCombProductInfoFieldData>(self);
    CThostFtdcRCAMSCombProductInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductID, (Py_ssize_t)sizeof(data->ProductID));
    return PyBytes_FromString(data->ProductID);
}

static int PyCThostFtdcRCAMSCombProductInfoFieldType_set_ProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRCAMSCombProductInfoField::ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRCAMSCombProductInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSCombProductInfoFieldData>(self);
    CThostFtdcRCAMSCombProductInfoField *data = &(extra->data);
    // memset(data->ProductID, 0, sizeof(data->ProductID));
    // memcpy(data->ProductID, buf, len);
    strncpy(data->ProductID, buf, sizeof(data->ProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 商品组代码
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcRCAMSCombProductInfoFieldType_get_CombProductID(PyObject *self, void *closure) {
    PyCThostFtdcRCAMSCombProductInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSCombProductInfoFieldData>(self);
    CThostFtdcRCAMSCombProductInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombProductID, (Py_ssize_t)sizeof(data->CombProductID));
    return PyBytes_FromString(data->CombProductID);
}

static int PyCThostFtdcRCAMSCombProductInfoFieldType_set_CombProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRCAMSCombProductInfoField::CombProductID)) {
        PyErr_SetString(PyExc_ValueError, "CombProductID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRCAMSCombProductInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSCombProductInfoFieldData>(self);
    CThostFtdcRCAMSCombProductInfoField *data = &(extra->data);
    // memset(data->CombProductID, 0, sizeof(data->CombProductID));
    // memcpy(data->CombProductID, buf, len);
    strncpy(data->CombProductID, buf, sizeof(data->CombProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 商品群代码
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcRCAMSCombProductInfoFieldType_get_ProductGroupID(PyObject *self, void *closure) {
    PyCThostFtdcRCAMSCombProductInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSCombProductInfoFieldData>(self);
    CThostFtdcRCAMSCombProductInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductGroupID, (Py_ssize_t)sizeof(data->ProductGroupID));
    return PyBytes_FromString(data->ProductGroupID);
}

static int PyCThostFtdcRCAMSCombProductInfoFieldType_set_ProductGroupID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductGroupID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRCAMSCombProductInfoField::ProductGroupID)) {
        PyErr_SetString(PyExc_ValueError, "ProductGroupID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRCAMSCombProductInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRCAMSCombProductInfoFieldData>(self);
    CThostFtdcRCAMSCombProductInfoField *data = &(extra->data);
    // memset(data->ProductGroupID, 0, sizeof(data->ProductGroupID));
    // memcpy(data->ProductGroupID, buf, len);
    strncpy(data->ProductGroupID, buf, sizeof(data->ProductGroupID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcRCAMSCombProductInfoFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcRCAMSCombProductInfoFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcRCAMSCombProductInfoFieldType_get_TradingDay,
    .set = PyCThostFtdcRCAMSCombProductInfoFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcRCAMSCombProductInfoFieldType_get_ExchangeID,
    .set = PyCThostFtdcRCAMSCombProductInfoFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 产品代码
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "ProductID",
    .get = PyCThostFtdcRCAMSCombProductInfoFieldType_get_ProductID,
    .set = PyCThostFtdcRCAMSCombProductInfoFieldType_set_ProductID,
    .doc = PyDoc_STR("产品代码"),
    },
    /// 商品组代码
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "CombProductID",
    .get = PyCThostFtdcRCAMSCombProductInfoFieldType_get_CombProductID,
    .set = PyCThostFtdcRCAMSCombProductInfoFieldType_set_CombProductID,
    .doc = PyDoc_STR("商品组代码"),
    },
    /// 商品群代码
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "ProductGroupID",
    .get = PyCThostFtdcRCAMSCombProductInfoFieldType_get_ProductGroupID,
    .set = PyCThostFtdcRCAMSCombProductInfoFieldType_set_ProductGroupID,
    .doc = PyDoc_STR("商品群代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcRCAMSCombProductInfoFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcRCAMSCombProductInfoField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("RCAMS产品组合信息")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcRCAMSCombProductInfoFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcRCAMSCombProductInfoFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcRCAMSCombProductInfoFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcRCAMSCombProductInfoFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcRCAMSCombProductInfoFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcRCAMSCombProductInfoFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("RCAMS产品组合信息")},
    {Py_tp_members, PyCThostFtdcRCAMSCombProductInfoFieldType_members},
    {Py_tp_getset, PyCThostFtdcRCAMSCombProductInfoFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcRCAMSCombProductInfoFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcRCAMSCombProductInfoFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcRCAMSCombProductInfoFieldType_spec = {
    .name = "PyCTP.CThostFtdcRCAMSCombProductInfoField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcRCAMSCombProductInfoFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcRCAMSCombProductInfoFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcRCAMSCombProductInfoFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcRCAMSCombProductInfoFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcRCAMSCombProductInfoFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcRCAMSCombProductInfoFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcRCAMSCombProductInfoFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcRCAMSCombProductInfoFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcRCAMSCombProductInfoField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRCAMSCombProductInfoField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}