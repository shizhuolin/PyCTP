
#include "PyCThostFtdcProductGroupField.h"

///投资者品种/跨品种保证金产品组

static int PyCThostFtdcProductGroupFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "ExchangeID", "reserve2", "ProductID", "ProductGroupID", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcProductGroupField_reserve1 = NULL;
    Py_ssize_t CThostFtdcProductGroupField_reserve1_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcProductGroupField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcProductGroupField_ExchangeID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcProductGroupField_reserve2 = NULL;
    Py_ssize_t CThostFtdcProductGroupField_reserve2_length = 0;

    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcProductGroupField_ProductID = NULL;
    Py_ssize_t CThostFtdcProductGroupField_ProductID_length = 0;

    /// 产品组代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcProductGroupField_ProductGroupID = NULL;
    Py_ssize_t CThostFtdcProductGroupField_ProductGroupID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcProductGroupField_reserve1, &CThostFtdcProductGroupField_reserve1_length
        , &CThostFtdcProductGroupField_ExchangeID, &CThostFtdcProductGroupField_ExchangeID_length
        , &CThostFtdcProductGroupField_reserve2, &CThostFtdcProductGroupField_reserve2_length
        , &CThostFtdcProductGroupField_ProductID, &CThostFtdcProductGroupField_ProductID_length
        , &CThostFtdcProductGroupField_ProductGroupID, &CThostFtdcProductGroupField_ProductGroupID_length
    )) {
        return -1;
    }

    PyCThostFtdcProductGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductGroupFieldData>(self);
    CThostFtdcProductGroupField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcProductGroupField_reserve1 != NULL ) {
        if(CThostFtdcProductGroupField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcProductGroupField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcProductGroupField_reserve1, CThostFtdcProductGroupField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcProductGroupField_reserve1, sizeof(data->reserve1));
        CThostFtdcProductGroupField_reserve1 = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcProductGroupField_ExchangeID != NULL ) {
        if(CThostFtdcProductGroupField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcProductGroupField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcProductGroupField_ExchangeID, CThostFtdcProductGroupField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcProductGroupField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcProductGroupField_ExchangeID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcProductGroupField_reserve2 != NULL ) {
        if(CThostFtdcProductGroupField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 30)", CThostFtdcProductGroupField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcProductGroupField_reserve2, CThostFtdcProductGroupField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcProductGroupField_reserve2, sizeof(data->reserve2));
        CThostFtdcProductGroupField_reserve2 = NULL;
    }

    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcProductGroupField_ProductID != NULL ) {
        if(CThostFtdcProductGroupField_ProductID_length >= (Py_ssize_t)sizeof(data->ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is 80)", CThostFtdcProductGroupField_ProductID_length);
            return -1;
        }
        // memset(data->ProductID, 0, sizeof(data->ProductID));
        // memcpy(data->ProductID, CThostFtdcProductGroupField_ProductID, CThostFtdcProductGroupField_ProductID_length);
        strncpy(data->ProductID, CThostFtdcProductGroupField_ProductID, sizeof(data->ProductID));
        CThostFtdcProductGroupField_ProductID = NULL;
    }

    /// 产品组代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcProductGroupField_ProductGroupID != NULL ) {
        if(CThostFtdcProductGroupField_ProductGroupID_length >= (Py_ssize_t)sizeof(data->ProductGroupID)) {
            PyErr_Format(PyExc_ValueError, "ProductGroupID too long: length=%zd (max allowed is 80)", CThostFtdcProductGroupField_ProductGroupID_length);
            return -1;
        }
        // memset(data->ProductGroupID, 0, sizeof(data->ProductGroupID));
        // memcpy(data->ProductGroupID, CThostFtdcProductGroupField_ProductGroupID, CThostFtdcProductGroupField_ProductGroupID_length);
        strncpy(data->ProductGroupID, CThostFtdcProductGroupField_ProductGroupID, sizeof(data->ProductGroupID));
        CThostFtdcProductGroupField_ProductGroupID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcProductGroupFieldType_repr(PyObject *self) {

    PyCThostFtdcProductGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductGroupFieldData>(self);
    CThostFtdcProductGroupField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y}"
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "reserve2", data->reserve2//, (Py_ssize_t)sizeof(data->reserve2)
        , "ProductID", data->ProductID//, (Py_ssize_t)sizeof(data->ProductID)
        , "ProductGroupID", data->ProductGroupID//, (Py_ssize_t)sizeof(data->ProductGroupID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcProductGroupField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcProductGroupField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcProductGroupFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcProductGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductGroupFieldData>(self);
    CThostFtdcProductGroupField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcProductGroupFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcProductGroupField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcProductGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductGroupFieldData>(self);
    CThostFtdcProductGroupField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcProductGroupFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcProductGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductGroupFieldData>(self);
    CThostFtdcProductGroupField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcProductGroupFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcProductGroupField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcProductGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductGroupFieldData>(self);
    CThostFtdcProductGroupField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcProductGroupFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcProductGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductGroupFieldData>(self);
    CThostFtdcProductGroupField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcProductGroupFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcProductGroupField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcProductGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductGroupFieldData>(self);
    CThostFtdcProductGroupField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcProductGroupFieldType_get_ProductID(PyObject *self, void *closure) {
    PyCThostFtdcProductGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductGroupFieldData>(self);
    CThostFtdcProductGroupField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductID, (Py_ssize_t)sizeof(data->ProductID));
    return PyBytes_FromString(data->ProductID);
}

static int PyCThostFtdcProductGroupFieldType_set_ProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcProductGroupField::ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcProductGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductGroupFieldData>(self);
    CThostFtdcProductGroupField *data = &(extra->data);
    // memset(data->ProductID, 0, sizeof(data->ProductID));
    // memcpy(data->ProductID, buf, len);
    strncpy(data->ProductID, buf, sizeof(data->ProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品组代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcProductGroupFieldType_get_ProductGroupID(PyObject *self, void *closure) {
    PyCThostFtdcProductGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductGroupFieldData>(self);
    CThostFtdcProductGroupField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductGroupID, (Py_ssize_t)sizeof(data->ProductGroupID));
    return PyBytes_FromString(data->ProductGroupID);
}

static int PyCThostFtdcProductGroupFieldType_set_ProductGroupID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductGroupID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcProductGroupField::ProductGroupID)) {
        PyErr_SetString(PyExc_ValueError, "ProductGroupID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcProductGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcProductGroupFieldData>(self);
    CThostFtdcProductGroupField *data = &(extra->data);
    // memset(data->ProductGroupID, 0, sizeof(data->ProductGroupID));
    // memcpy(data->ProductGroupID, buf, len);
    strncpy(data->ProductGroupID, buf, sizeof(data->ProductGroupID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcProductGroupFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcProductGroupFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcProductGroupFieldType_get_reserve1,
    .set = PyCThostFtdcProductGroupFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcProductGroupFieldType_get_ExchangeID,
    .set = PyCThostFtdcProductGroupFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve2",
    .get = PyCThostFtdcProductGroupFieldType_get_reserve2,
    .set = PyCThostFtdcProductGroupFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ProductID",
    .get = PyCThostFtdcProductGroupFieldType_get_ProductID,
    .set = PyCThostFtdcProductGroupFieldType_set_ProductID,
    .doc = PyDoc_STR("产品代码"),
    },
    /// 产品组代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ProductGroupID",
    .get = PyCThostFtdcProductGroupFieldType_get_ProductGroupID,
    .set = PyCThostFtdcProductGroupFieldType_set_ProductGroupID,
    .doc = PyDoc_STR("产品组代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcProductGroupFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcProductGroupField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者品种/跨品种保证金产品组")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcProductGroupFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcProductGroupFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcProductGroupFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcProductGroupFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcProductGroupFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcProductGroupFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者品种/跨品种保证金产品组")},
    {Py_tp_members, PyCThostFtdcProductGroupFieldType_members},
    {Py_tp_getset, PyCThostFtdcProductGroupFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcProductGroupFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcProductGroupFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcProductGroupFieldType_spec = {
    .name = "PyCTP.CThostFtdcProductGroupField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcProductGroupFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcProductGroupFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcProductGroupFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcProductGroupFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcProductGroupFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcProductGroupFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcProductGroupFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcProductGroupFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcProductGroupField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcProductGroupField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}