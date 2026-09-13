
#include "PyCThostFtdcSPMMProductParamField.h"

///SPMM产品参数

static int PyCThostFtdcSPMMProductParamFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "ProductID", "CommodityID", "CommodityGroupID", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSPMMProductParamField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSPMMProductParamField_ExchangeID_length = 0;

    /// 产品代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    char *CThostFtdcSPMMProductParamField_ProductID = NULL;
    Py_ssize_t CThostFtdcSPMMProductParamField_ProductID_length = 0;

    /// 商品组代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    char *CThostFtdcSPMMProductParamField_CommodityID = NULL;
    Py_ssize_t CThostFtdcSPMMProductParamField_CommodityID_length = 0;

    /// 商品群代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    char *CThostFtdcSPMMProductParamField_CommodityGroupID = NULL;
    Py_ssize_t CThostFtdcSPMMProductParamField_CommodityGroupID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
        , &CThostFtdcSPMMProductParamField_ExchangeID, &CThostFtdcSPMMProductParamField_ExchangeID_length
        , &CThostFtdcSPMMProductParamField_ProductID, &CThostFtdcSPMMProductParamField_ProductID_length
        , &CThostFtdcSPMMProductParamField_CommodityID, &CThostFtdcSPMMProductParamField_CommodityID_length
        , &CThostFtdcSPMMProductParamField_CommodityGroupID, &CThostFtdcSPMMProductParamField_CommodityGroupID_length
    )) {
        return -1;
    }

    PyCThostFtdcSPMMProductParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPMMProductParamFieldData>(self);
    CThostFtdcSPMMProductParamField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSPMMProductParamField_ExchangeID != NULL ) {
        if(CThostFtdcSPMMProductParamField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSPMMProductParamField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSPMMProductParamField_ExchangeID, CThostFtdcSPMMProductParamField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSPMMProductParamField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSPMMProductParamField_ExchangeID = NULL;
    }

    /// 产品代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    if( CThostFtdcSPMMProductParamField_ProductID != NULL ) {
        if(CThostFtdcSPMMProductParamField_ProductID_length >= (Py_ssize_t)sizeof(data->ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is 40)", CThostFtdcSPMMProductParamField_ProductID_length);
            return -1;
        }
        // memset(data->ProductID, 0, sizeof(data->ProductID));
        // memcpy(data->ProductID, CThostFtdcSPMMProductParamField_ProductID, CThostFtdcSPMMProductParamField_ProductID_length);
        strncpy(data->ProductID, CThostFtdcSPMMProductParamField_ProductID, sizeof(data->ProductID));
        CThostFtdcSPMMProductParamField_ProductID = NULL;
    }

    /// 商品组代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    if( CThostFtdcSPMMProductParamField_CommodityID != NULL ) {
        if(CThostFtdcSPMMProductParamField_CommodityID_length >= (Py_ssize_t)sizeof(data->CommodityID)) {
            PyErr_Format(PyExc_ValueError, "CommodityID too long: length=%zd (max allowed is 40)", CThostFtdcSPMMProductParamField_CommodityID_length);
            return -1;
        }
        // memset(data->CommodityID, 0, sizeof(data->CommodityID));
        // memcpy(data->CommodityID, CThostFtdcSPMMProductParamField_CommodityID, CThostFtdcSPMMProductParamField_CommodityID_length);
        strncpy(data->CommodityID, CThostFtdcSPMMProductParamField_CommodityID, sizeof(data->CommodityID));
        CThostFtdcSPMMProductParamField_CommodityID = NULL;
    }

    /// 商品群代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    if( CThostFtdcSPMMProductParamField_CommodityGroupID != NULL ) {
        if(CThostFtdcSPMMProductParamField_CommodityGroupID_length >= (Py_ssize_t)sizeof(data->CommodityGroupID)) {
            PyErr_Format(PyExc_ValueError, "CommodityGroupID too long: length=%zd (max allowed is 40)", CThostFtdcSPMMProductParamField_CommodityGroupID_length);
            return -1;
        }
        // memset(data->CommodityGroupID, 0, sizeof(data->CommodityGroupID));
        // memcpy(data->CommodityGroupID, CThostFtdcSPMMProductParamField_CommodityGroupID, CThostFtdcSPMMProductParamField_CommodityGroupID_length);
        strncpy(data->CommodityGroupID, CThostFtdcSPMMProductParamField_CommodityGroupID, sizeof(data->CommodityGroupID));
        CThostFtdcSPMMProductParamField_CommodityGroupID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSPMMProductParamFieldType_repr(PyObject *self) {

    PyCThostFtdcSPMMProductParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPMMProductParamFieldData>(self);
    CThostFtdcSPMMProductParamField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ProductID", data->ProductID//, (Py_ssize_t)sizeof(data->ProductID)
        , "CommodityID", data->CommodityID//, (Py_ssize_t)sizeof(data->CommodityID)
        , "CommodityGroupID", data->CommodityGroupID//, (Py_ssize_t)sizeof(data->CommodityGroupID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSPMMProductParamField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSPMMProductParamField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSPMMProductParamFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSPMMProductParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPMMProductParamFieldData>(self);
    CThostFtdcSPMMProductParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSPMMProductParamFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSPMMProductParamField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSPMMProductParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPMMProductParamFieldData>(self);
    CThostFtdcSPMMProductParamField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品代码
/// typedef char TThostFtdcSPMMProductIDType[41]
static PyObject *PyCThostFtdcSPMMProductParamFieldType_get_ProductID(PyObject *self, void *closure) {
    PyCThostFtdcSPMMProductParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPMMProductParamFieldData>(self);
    CThostFtdcSPMMProductParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductID, (Py_ssize_t)sizeof(data->ProductID));
    return PyBytes_FromString(data->ProductID);
}

static int PyCThostFtdcSPMMProductParamFieldType_set_ProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSPMMProductParamField::ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSPMMProductParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPMMProductParamFieldData>(self);
    CThostFtdcSPMMProductParamField *data = &(extra->data);
    // memset(data->ProductID, 0, sizeof(data->ProductID));
    // memcpy(data->ProductID, buf, len);
    strncpy(data->ProductID, buf, sizeof(data->ProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 商品组代码
/// typedef char TThostFtdcSPMMProductIDType[41]
static PyObject *PyCThostFtdcSPMMProductParamFieldType_get_CommodityID(PyObject *self, void *closure) {
    PyCThostFtdcSPMMProductParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPMMProductParamFieldData>(self);
    CThostFtdcSPMMProductParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CommodityID, (Py_ssize_t)sizeof(data->CommodityID));
    return PyBytes_FromString(data->CommodityID);
}

static int PyCThostFtdcSPMMProductParamFieldType_set_CommodityID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CommodityID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSPMMProductParamField::CommodityID)) {
        PyErr_SetString(PyExc_ValueError, "CommodityID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSPMMProductParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPMMProductParamFieldData>(self);
    CThostFtdcSPMMProductParamField *data = &(extra->data);
    // memset(data->CommodityID, 0, sizeof(data->CommodityID));
    // memcpy(data->CommodityID, buf, len);
    strncpy(data->CommodityID, buf, sizeof(data->CommodityID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 商品群代码
/// typedef char TThostFtdcSPMMProductIDType[41]
static PyObject *PyCThostFtdcSPMMProductParamFieldType_get_CommodityGroupID(PyObject *self, void *closure) {
    PyCThostFtdcSPMMProductParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPMMProductParamFieldData>(self);
    CThostFtdcSPMMProductParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CommodityGroupID, (Py_ssize_t)sizeof(data->CommodityGroupID));
    return PyBytes_FromString(data->CommodityGroupID);
}

static int PyCThostFtdcSPMMProductParamFieldType_set_CommodityGroupID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CommodityGroupID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSPMMProductParamField::CommodityGroupID)) {
        PyErr_SetString(PyExc_ValueError, "CommodityGroupID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSPMMProductParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPMMProductParamFieldData>(self);
    CThostFtdcSPMMProductParamField *data = &(extra->data);
    // memset(data->CommodityGroupID, 0, sizeof(data->CommodityGroupID));
    // memcpy(data->CommodityGroupID, buf, len);
    strncpy(data->CommodityGroupID, buf, sizeof(data->CommodityGroupID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSPMMProductParamFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSPMMProductParamFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSPMMProductParamFieldType_get_ExchangeID,
    .set = PyCThostFtdcSPMMProductParamFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 产品代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    {
    .name = "ProductID",
    .get = PyCThostFtdcSPMMProductParamFieldType_get_ProductID,
    .set = PyCThostFtdcSPMMProductParamFieldType_set_ProductID,
    .doc = PyDoc_STR("产品代码"),
    },
    /// 商品组代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    {
    .name = "CommodityID",
    .get = PyCThostFtdcSPMMProductParamFieldType_get_CommodityID,
    .set = PyCThostFtdcSPMMProductParamFieldType_set_CommodityID,
    .doc = PyDoc_STR("商品组代码"),
    },
    /// 商品群代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    {
    .name = "CommodityGroupID",
    .get = PyCThostFtdcSPMMProductParamFieldType_get_CommodityGroupID,
    .set = PyCThostFtdcSPMMProductParamFieldType_set_CommodityGroupID,
    .doc = PyDoc_STR("商品群代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSPMMProductParamFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSPMMProductParamField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("SPMM产品参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSPMMProductParamFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSPMMProductParamFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSPMMProductParamFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSPMMProductParamFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSPMMProductParamFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSPMMProductParamFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("SPMM产品参数")},
    {Py_tp_members, PyCThostFtdcSPMMProductParamFieldType_members},
    {Py_tp_getset, PyCThostFtdcSPMMProductParamFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSPMMProductParamFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSPMMProductParamFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSPMMProductParamFieldType_spec = {
    .name = "PyCTP.CThostFtdcSPMMProductParamField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSPMMProductParamFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSPMMProductParamFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSPMMProductParamFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSPMMProductParamFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSPMMProductParamFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSPMMProductParamFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSPMMProductParamFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSPMMProductParamFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSPMMProductParamField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSPMMProductParamField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}