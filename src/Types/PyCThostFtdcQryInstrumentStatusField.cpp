
#include "PyCThostFtdcQryInstrumentStatusField.h"

///查询合约状态

static int PyCThostFtdcQryInstrumentStatusFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "reserve1", "ExchangeInstID", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryInstrumentStatusField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryInstrumentStatusField_ExchangeID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    char *CThostFtdcQryInstrumentStatusField_reserve1 = NULL;
    Py_ssize_t CThostFtdcQryInstrumentStatusField_reserve1_length = 0;

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcQryInstrumentStatusField_ExchangeInstID = NULL;
    Py_ssize_t CThostFtdcQryInstrumentStatusField_ExchangeInstID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcQryInstrumentStatusField_ExchangeID, &CThostFtdcQryInstrumentStatusField_ExchangeID_length
        , &CThostFtdcQryInstrumentStatusField_reserve1, &CThostFtdcQryInstrumentStatusField_reserve1_length
        , &CThostFtdcQryInstrumentStatusField_ExchangeInstID, &CThostFtdcQryInstrumentStatusField_ExchangeInstID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryInstrumentStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentStatusFieldData>(self);
    CThostFtdcQryInstrumentStatusField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryInstrumentStatusField_ExchangeID != NULL ) {
        if(CThostFtdcQryInstrumentStatusField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryInstrumentStatusField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryInstrumentStatusField_ExchangeID, CThostFtdcQryInstrumentStatusField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryInstrumentStatusField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryInstrumentStatusField_ExchangeID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    if( CThostFtdcQryInstrumentStatusField_reserve1 != NULL ) {
        if(CThostFtdcQryInstrumentStatusField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcQryInstrumentStatusField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcQryInstrumentStatusField_reserve1, CThostFtdcQryInstrumentStatusField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcQryInstrumentStatusField_reserve1, sizeof(data->reserve1));
        CThostFtdcQryInstrumentStatusField_reserve1 = NULL;
    }

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcQryInstrumentStatusField_ExchangeInstID != NULL ) {
        if(CThostFtdcQryInstrumentStatusField_ExchangeInstID_length >= (Py_ssize_t)sizeof(data->ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is 80)", CThostFtdcQryInstrumentStatusField_ExchangeInstID_length);
            return -1;
        }
        // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
        // memcpy(data->ExchangeInstID, CThostFtdcQryInstrumentStatusField_ExchangeInstID, CThostFtdcQryInstrumentStatusField_ExchangeInstID_length);
        strncpy(data->ExchangeInstID, CThostFtdcQryInstrumentStatusField_ExchangeInstID, sizeof(data->ExchangeInstID));
        CThostFtdcQryInstrumentStatusField_ExchangeInstID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryInstrumentStatusFieldType_repr(PyObject *self) {

    PyCThostFtdcQryInstrumentStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentStatusFieldData>(self);
    CThostFtdcQryInstrumentStatusField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "ExchangeInstID", data->ExchangeInstID//, (Py_ssize_t)sizeof(data->ExchangeInstID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInstrumentStatusField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInstrumentStatusField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryInstrumentStatusFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryInstrumentStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentStatusFieldData>(self);
    CThostFtdcQryInstrumentStatusField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryInstrumentStatusFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInstrumentStatusField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInstrumentStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentStatusFieldData>(self);
    CThostFtdcQryInstrumentStatusField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldExchangeInstIDType[31]
static PyObject *PyCThostFtdcQryInstrumentStatusFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcQryInstrumentStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentStatusFieldData>(self);
    CThostFtdcQryInstrumentStatusField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcQryInstrumentStatusFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInstrumentStatusField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInstrumentStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentStatusFieldData>(self);
    CThostFtdcQryInstrumentStatusField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约在交易所的代码
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcQryInstrumentStatusFieldType_get_ExchangeInstID(PyObject *self, void *closure) {
    PyCThostFtdcQryInstrumentStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentStatusFieldData>(self);
    CThostFtdcQryInstrumentStatusField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeInstID, (Py_ssize_t)sizeof(data->ExchangeInstID));
    return PyBytes_FromString(data->ExchangeInstID);
}

static int PyCThostFtdcQryInstrumentStatusFieldType_set_ExchangeInstID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInstrumentStatusField::ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInstrumentStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentStatusFieldData>(self);
    CThostFtdcQryInstrumentStatusField *data = &(extra->data);
    // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
    // memcpy(data->ExchangeInstID, buf, len);
    strncpy(data->ExchangeInstID, buf, sizeof(data->ExchangeInstID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryInstrumentStatusFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryInstrumentStatusFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryInstrumentStatusFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryInstrumentStatusFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcQryInstrumentStatusFieldType_get_reserve1,
    .set = PyCThostFtdcQryInstrumentStatusFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "ExchangeInstID",
    .get = PyCThostFtdcQryInstrumentStatusFieldType_get_ExchangeInstID,
    .set = PyCThostFtdcQryInstrumentStatusFieldType_set_ExchangeInstID,
    .doc = PyDoc_STR("合约在交易所的代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryInstrumentStatusFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryInstrumentStatusField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询合约状态")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryInstrumentStatusFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryInstrumentStatusFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryInstrumentStatusFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryInstrumentStatusFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryInstrumentStatusFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryInstrumentStatusFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询合约状态")},
    {Py_tp_members, PyCThostFtdcQryInstrumentStatusFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryInstrumentStatusFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryInstrumentStatusFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryInstrumentStatusFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryInstrumentStatusFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryInstrumentStatusField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryInstrumentStatusFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryInstrumentStatusFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryInstrumentStatusFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryInstrumentStatusFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryInstrumentStatusFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryInstrumentStatusFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryInstrumentStatusFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryInstrumentStatusFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryInstrumentStatusField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInstrumentStatusField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}