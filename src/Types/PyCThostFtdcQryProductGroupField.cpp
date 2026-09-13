
#include "PyCThostFtdcQryProductGroupField.h"

///查询产品组

static int PyCThostFtdcQryProductGroupFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "ExchangeID", "ProductID", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcQryProductGroupField_reserve1 = NULL;
    Py_ssize_t CThostFtdcQryProductGroupField_reserve1_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryProductGroupField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryProductGroupField_ExchangeID_length = 0;

    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryProductGroupField_ProductID = NULL;
    Py_ssize_t CThostFtdcQryProductGroupField_ProductID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcQryProductGroupField_reserve1, &CThostFtdcQryProductGroupField_reserve1_length
        , &CThostFtdcQryProductGroupField_ExchangeID, &CThostFtdcQryProductGroupField_ExchangeID_length
        , &CThostFtdcQryProductGroupField_ProductID, &CThostFtdcQryProductGroupField_ProductID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryProductGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryProductGroupFieldData>(self);
    CThostFtdcQryProductGroupField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcQryProductGroupField_reserve1 != NULL ) {
        if(CThostFtdcQryProductGroupField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcQryProductGroupField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcQryProductGroupField_reserve1, CThostFtdcQryProductGroupField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcQryProductGroupField_reserve1, sizeof(data->reserve1));
        CThostFtdcQryProductGroupField_reserve1 = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryProductGroupField_ExchangeID != NULL ) {
        if(CThostFtdcQryProductGroupField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryProductGroupField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryProductGroupField_ExchangeID, CThostFtdcQryProductGroupField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryProductGroupField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryProductGroupField_ExchangeID = NULL;
    }

    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryProductGroupField_ProductID != NULL ) {
        if(CThostFtdcQryProductGroupField_ProductID_length >= (Py_ssize_t)sizeof(data->ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is 80)", CThostFtdcQryProductGroupField_ProductID_length);
            return -1;
        }
        // memset(data->ProductID, 0, sizeof(data->ProductID));
        // memcpy(data->ProductID, CThostFtdcQryProductGroupField_ProductID, CThostFtdcQryProductGroupField_ProductID_length);
        strncpy(data->ProductID, CThostFtdcQryProductGroupField_ProductID, sizeof(data->ProductID));
        CThostFtdcQryProductGroupField_ProductID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryProductGroupFieldType_repr(PyObject *self) {

    PyCThostFtdcQryProductGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryProductGroupFieldData>(self);
    CThostFtdcQryProductGroupField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ProductID", data->ProductID//, (Py_ssize_t)sizeof(data->ProductID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryProductGroupField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryProductGroupField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcQryProductGroupFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcQryProductGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryProductGroupFieldData>(self);
    CThostFtdcQryProductGroupField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcQryProductGroupFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryProductGroupField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryProductGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryProductGroupFieldData>(self);
    CThostFtdcQryProductGroupField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryProductGroupFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryProductGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryProductGroupFieldData>(self);
    CThostFtdcQryProductGroupField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryProductGroupFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryProductGroupField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryProductGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryProductGroupFieldData>(self);
    CThostFtdcQryProductGroupField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryProductGroupFieldType_get_ProductID(PyObject *self, void *closure) {
    PyCThostFtdcQryProductGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryProductGroupFieldData>(self);
    CThostFtdcQryProductGroupField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductID, (Py_ssize_t)sizeof(data->ProductID));
    return PyBytes_FromString(data->ProductID);
}

static int PyCThostFtdcQryProductGroupFieldType_set_ProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryProductGroupField::ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryProductGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryProductGroupFieldData>(self);
    CThostFtdcQryProductGroupField *data = &(extra->data);
    // memset(data->ProductID, 0, sizeof(data->ProductID));
    // memcpy(data->ProductID, buf, len);
    strncpy(data->ProductID, buf, sizeof(data->ProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryProductGroupFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryProductGroupFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcQryProductGroupFieldType_get_reserve1,
    .set = PyCThostFtdcQryProductGroupFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryProductGroupFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryProductGroupFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ProductID",
    .get = PyCThostFtdcQryProductGroupFieldType_get_ProductID,
    .set = PyCThostFtdcQryProductGroupFieldType_set_ProductID,
    .doc = PyDoc_STR("产品代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryProductGroupFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryProductGroupField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询产品组")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryProductGroupFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryProductGroupFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryProductGroupFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryProductGroupFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryProductGroupFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryProductGroupFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询产品组")},
    {Py_tp_members, PyCThostFtdcQryProductGroupFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryProductGroupFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryProductGroupFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryProductGroupFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryProductGroupFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryProductGroupField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryProductGroupFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryProductGroupFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryProductGroupFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryProductGroupFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryProductGroupFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryProductGroupFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryProductGroupFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryProductGroupFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryProductGroupField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryProductGroupField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}