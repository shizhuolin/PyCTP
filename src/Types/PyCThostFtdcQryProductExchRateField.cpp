
#include "PyCThostFtdcQryProductExchRateField.h"

///产品报价汇率查询

static int PyCThostFtdcQryProductExchRateFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "ExchangeID", "ProductID", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcQryProductExchRateField_reserve1 = NULL;
    Py_ssize_t CThostFtdcQryProductExchRateField_reserve1_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryProductExchRateField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryProductExchRateField_ExchangeID_length = 0;

    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryProductExchRateField_ProductID = NULL;
    Py_ssize_t CThostFtdcQryProductExchRateField_ProductID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcQryProductExchRateField_reserve1, &CThostFtdcQryProductExchRateField_reserve1_length
        , &CThostFtdcQryProductExchRateField_ExchangeID, &CThostFtdcQryProductExchRateField_ExchangeID_length
        , &CThostFtdcQryProductExchRateField_ProductID, &CThostFtdcQryProductExchRateField_ProductID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryProductExchRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryProductExchRateFieldData>(self);
    CThostFtdcQryProductExchRateField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcQryProductExchRateField_reserve1 != NULL ) {
        if(CThostFtdcQryProductExchRateField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcQryProductExchRateField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcQryProductExchRateField_reserve1, CThostFtdcQryProductExchRateField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcQryProductExchRateField_reserve1, sizeof(data->reserve1));
        CThostFtdcQryProductExchRateField_reserve1 = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryProductExchRateField_ExchangeID != NULL ) {
        if(CThostFtdcQryProductExchRateField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryProductExchRateField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryProductExchRateField_ExchangeID, CThostFtdcQryProductExchRateField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryProductExchRateField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryProductExchRateField_ExchangeID = NULL;
    }

    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryProductExchRateField_ProductID != NULL ) {
        if(CThostFtdcQryProductExchRateField_ProductID_length >= (Py_ssize_t)sizeof(data->ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is 80)", CThostFtdcQryProductExchRateField_ProductID_length);
            return -1;
        }
        // memset(data->ProductID, 0, sizeof(data->ProductID));
        // memcpy(data->ProductID, CThostFtdcQryProductExchRateField_ProductID, CThostFtdcQryProductExchRateField_ProductID_length);
        strncpy(data->ProductID, CThostFtdcQryProductExchRateField_ProductID, sizeof(data->ProductID));
        CThostFtdcQryProductExchRateField_ProductID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryProductExchRateFieldType_repr(PyObject *self) {

    PyCThostFtdcQryProductExchRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryProductExchRateFieldData>(self);
    CThostFtdcQryProductExchRateField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ProductID", data->ProductID//, (Py_ssize_t)sizeof(data->ProductID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryProductExchRateField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryProductExchRateField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcQryProductExchRateFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcQryProductExchRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryProductExchRateFieldData>(self);
    CThostFtdcQryProductExchRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcQryProductExchRateFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryProductExchRateField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryProductExchRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryProductExchRateFieldData>(self);
    CThostFtdcQryProductExchRateField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryProductExchRateFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryProductExchRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryProductExchRateFieldData>(self);
    CThostFtdcQryProductExchRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryProductExchRateFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryProductExchRateField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryProductExchRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryProductExchRateFieldData>(self);
    CThostFtdcQryProductExchRateField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryProductExchRateFieldType_get_ProductID(PyObject *self, void *closure) {
    PyCThostFtdcQryProductExchRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryProductExchRateFieldData>(self);
    CThostFtdcQryProductExchRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductID, (Py_ssize_t)sizeof(data->ProductID));
    return PyBytes_FromString(data->ProductID);
}

static int PyCThostFtdcQryProductExchRateFieldType_set_ProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryProductExchRateField::ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryProductExchRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryProductExchRateFieldData>(self);
    CThostFtdcQryProductExchRateField *data = &(extra->data);
    // memset(data->ProductID, 0, sizeof(data->ProductID));
    // memcpy(data->ProductID, buf, len);
    strncpy(data->ProductID, buf, sizeof(data->ProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryProductExchRateFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryProductExchRateFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcQryProductExchRateFieldType_get_reserve1,
    .set = PyCThostFtdcQryProductExchRateFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryProductExchRateFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryProductExchRateFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ProductID",
    .get = PyCThostFtdcQryProductExchRateFieldType_get_ProductID,
    .set = PyCThostFtdcQryProductExchRateFieldType_set_ProductID,
    .doc = PyDoc_STR("产品代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryProductExchRateFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryProductExchRateField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("产品报价汇率查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryProductExchRateFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryProductExchRateFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryProductExchRateFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryProductExchRateFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryProductExchRateFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryProductExchRateFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("产品报价汇率查询")},
    {Py_tp_members, PyCThostFtdcQryProductExchRateFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryProductExchRateFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryProductExchRateFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryProductExchRateFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryProductExchRateFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryProductExchRateField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryProductExchRateFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryProductExchRateFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryProductExchRateFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryProductExchRateFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryProductExchRateFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryProductExchRateFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryProductExchRateFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryProductExchRateFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryProductExchRateField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryProductExchRateField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}