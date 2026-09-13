
#include "PyCThostFtdcExchangeSequenceField.h"

///交易所状态

static int PyCThostFtdcExchangeSequenceFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "SequenceNo", "MarketStatus", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcExchangeSequenceField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcExchangeSequenceField_ExchangeID_length = 0;

    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcExchangeSequenceField_SequenceNo = 0;

    /// 合约交易状态
    /// typedef char TThostFtdcInstrumentStatusType
    char CThostFtdcExchangeSequenceField_MarketStatus = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#ic", (char **)kwlist
        , &CThostFtdcExchangeSequenceField_ExchangeID, &CThostFtdcExchangeSequenceField_ExchangeID_length
        , &CThostFtdcExchangeSequenceField_SequenceNo
        , &CThostFtdcExchangeSequenceField_MarketStatus
    )) {
        return -1;
    }

    PyCThostFtdcExchangeSequenceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeSequenceFieldData>(self);
    CThostFtdcExchangeSequenceField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcExchangeSequenceField_ExchangeID != NULL ) {
        if(CThostFtdcExchangeSequenceField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcExchangeSequenceField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcExchangeSequenceField_ExchangeID, CThostFtdcExchangeSequenceField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcExchangeSequenceField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcExchangeSequenceField_ExchangeID = NULL;
    }

    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    data->SequenceNo = CThostFtdcExchangeSequenceField_SequenceNo;

    /// 合约交易状态
    /// typedef char TThostFtdcInstrumentStatusType
    data->MarketStatus = CThostFtdcExchangeSequenceField_MarketStatus;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcExchangeSequenceFieldType_repr(PyObject *self) {

    PyCThostFtdcExchangeSequenceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeSequenceFieldData>(self);
    CThostFtdcExchangeSequenceField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:i,s:c}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "SequenceNo", data->SequenceNo
        , "MarketStatus", data->MarketStatus
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeSequenceField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeSequenceField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcExchangeSequenceFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeSequenceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeSequenceFieldData>(self);
    CThostFtdcExchangeSequenceField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcExchangeSequenceFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeSequenceField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeSequenceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeSequenceFieldData>(self);
    CThostFtdcExchangeSequenceField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约交易状态
/// typedef char TThostFtdcInstrumentStatusType
static PyObject *PyCThostFtdcExchangeSequenceFieldType_get_MarketStatus(PyObject *self, void *closure) {
    PyCThostFtdcExchangeSequenceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeSequenceFieldData>(self);
    CThostFtdcExchangeSequenceField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->MarketStatus), 1);
}

static int PyCThostFtdcExchangeSequenceFieldType_set_MarketStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MarketStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeSequenceField::MarketStatus)) {
        PyErr_SetString(PyExc_ValueError, "MarketStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeSequenceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeSequenceFieldData>(self);
    CThostFtdcExchangeSequenceField *data = &(extra->data);
    data->MarketStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcExchangeSequenceFieldType_members[] = {
    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "SequenceNo",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeSequenceFieldData, data.SequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcExchangeSequenceFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcExchangeSequenceFieldType_get_ExchangeID,
    .set = PyCThostFtdcExchangeSequenceFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 合约交易状态
    /// typedef char TThostFtdcInstrumentStatusType
    {
    .name = "MarketStatus",
    .get = PyCThostFtdcExchangeSequenceFieldType_get_MarketStatus,
    .set = PyCThostFtdcExchangeSequenceFieldType_set_MarketStatus,
    .doc = PyDoc_STR("合约交易状态"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcExchangeSequenceFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcExchangeSequenceField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("交易所状态")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcExchangeSequenceFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcExchangeSequenceFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcExchangeSequenceFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcExchangeSequenceFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcExchangeSequenceFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcExchangeSequenceFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("交易所状态")},
    {Py_tp_members, PyCThostFtdcExchangeSequenceFieldType_members},
    {Py_tp_getset, PyCThostFtdcExchangeSequenceFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcExchangeSequenceFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcExchangeSequenceFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcExchangeSequenceFieldType_spec = {
    .name = "PyCTP.CThostFtdcExchangeSequenceField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcExchangeSequenceFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcExchangeSequenceFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcExchangeSequenceFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcExchangeSequenceFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcExchangeSequenceFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcExchangeSequenceFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcExchangeSequenceFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcExchangeSequenceFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcExchangeSequenceField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeSequenceField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}