
#include "PyCThostFtdcTradeParamField.h"

///交易参数

static int PyCThostFtdcTradeParamFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "TradeParamID", "TradeParamValue", "Memo", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcTradeParamField_BrokerID = NULL;
    Py_ssize_t CThostFtdcTradeParamField_BrokerID_length = 0;

    /// 参数代码
    /// typedef char TThostFtdcTradeParamIDType
    char CThostFtdcTradeParamField_TradeParamID = 0;

    /// 参数代码值
    /// typedef char TThostFtdcSettlementParamValueType[256]
    char *CThostFtdcTradeParamField_TradeParamValue = NULL;
    Py_ssize_t CThostFtdcTradeParamField_TradeParamValue_length = 0;

    /// 备注
    /// typedef char TThostFtdcMemoType[161]
    char *CThostFtdcTradeParamField_Memo = NULL;
    Py_ssize_t CThostFtdcTradeParamField_Memo_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#", (char **)kwlist
        , &CThostFtdcTradeParamField_BrokerID, &CThostFtdcTradeParamField_BrokerID_length
        , &CThostFtdcTradeParamField_TradeParamID
        , &CThostFtdcTradeParamField_TradeParamValue, &CThostFtdcTradeParamField_TradeParamValue_length
        , &CThostFtdcTradeParamField_Memo, &CThostFtdcTradeParamField_Memo_length
    )) {
        return -1;
    }

    PyCThostFtdcTradeParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeParamFieldData>(self);
    CThostFtdcTradeParamField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcTradeParamField_BrokerID != NULL ) {
        if(CThostFtdcTradeParamField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcTradeParamField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcTradeParamField_BrokerID, CThostFtdcTradeParamField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcTradeParamField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcTradeParamField_BrokerID = NULL;
    }

    /// 参数代码
    /// typedef char TThostFtdcTradeParamIDType
    data->TradeParamID = CThostFtdcTradeParamField_TradeParamID;

    /// 参数代码值
    /// typedef char TThostFtdcSettlementParamValueType[256]
    if( CThostFtdcTradeParamField_TradeParamValue != NULL ) {
        if(CThostFtdcTradeParamField_TradeParamValue_length >= (Py_ssize_t)sizeof(data->TradeParamValue)) {
            PyErr_Format(PyExc_ValueError, "TradeParamValue too long: length=%zd (max allowed is 255)", CThostFtdcTradeParamField_TradeParamValue_length);
            return -1;
        }
        // memset(data->TradeParamValue, 0, sizeof(data->TradeParamValue));
        // memcpy(data->TradeParamValue, CThostFtdcTradeParamField_TradeParamValue, CThostFtdcTradeParamField_TradeParamValue_length);
        strncpy(data->TradeParamValue, CThostFtdcTradeParamField_TradeParamValue, sizeof(data->TradeParamValue));
        CThostFtdcTradeParamField_TradeParamValue = NULL;
    }

    /// 备注
    /// typedef char TThostFtdcMemoType[161]
    if( CThostFtdcTradeParamField_Memo != NULL ) {
        if(CThostFtdcTradeParamField_Memo_length >= (Py_ssize_t)sizeof(data->Memo)) {
            PyErr_Format(PyExc_ValueError, "Memo too long: length=%zd (max allowed is 160)", CThostFtdcTradeParamField_Memo_length);
            return -1;
        }
        // memset(data->Memo, 0, sizeof(data->Memo));
        // memcpy(data->Memo, CThostFtdcTradeParamField_Memo, CThostFtdcTradeParamField_Memo_length);
        strncpy(data->Memo, CThostFtdcTradeParamField_Memo, sizeof(data->Memo));
        CThostFtdcTradeParamField_Memo = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcTradeParamFieldType_repr(PyObject *self) {

    PyCThostFtdcTradeParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeParamFieldData>(self);
    CThostFtdcTradeParamField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:c,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "TradeParamID", data->TradeParamID
        , "TradeParamValue", data->TradeParamValue//, (Py_ssize_t)sizeof(data->TradeParamValue)
        , "Memo", data->Memo//, (Py_ssize_t)sizeof(data->Memo)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradeParamField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradeParamField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcTradeParamFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcTradeParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeParamFieldData>(self);
    CThostFtdcTradeParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcTradeParamFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradeParamField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradeParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeParamFieldData>(self);
    CThostFtdcTradeParamField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 参数代码
/// typedef char TThostFtdcTradeParamIDType
static PyObject *PyCThostFtdcTradeParamFieldType_get_TradeParamID(PyObject *self, void *closure) {
    PyCThostFtdcTradeParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeParamFieldData>(self);
    CThostFtdcTradeParamField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->TradeParamID), 1);
}

static int PyCThostFtdcTradeParamFieldType_set_TradeParamID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeParamID Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcTradeParamField::TradeParamID)) {
        PyErr_SetString(PyExc_ValueError, "TradeParamID must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradeParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeParamFieldData>(self);
    CThostFtdcTradeParamField *data = &(extra->data);
    data->TradeParamID = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 参数代码值
/// typedef char TThostFtdcSettlementParamValueType[256]
static PyObject *PyCThostFtdcTradeParamFieldType_get_TradeParamValue(PyObject *self, void *closure) {
    PyCThostFtdcTradeParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeParamFieldData>(self);
    CThostFtdcTradeParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeParamValue, (Py_ssize_t)sizeof(data->TradeParamValue));
    return PyBytes_FromString(data->TradeParamValue);
}

static int PyCThostFtdcTradeParamFieldType_set_TradeParamValue(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeParamValue Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradeParamField::TradeParamValue)) {
        PyErr_SetString(PyExc_ValueError, "TradeParamValue must be less than 255 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradeParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeParamFieldData>(self);
    CThostFtdcTradeParamField *data = &(extra->data);
    // memset(data->TradeParamValue, 0, sizeof(data->TradeParamValue));
    // memcpy(data->TradeParamValue, buf, len);
    strncpy(data->TradeParamValue, buf, sizeof(data->TradeParamValue));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 备注
/// typedef char TThostFtdcMemoType[161]
static PyObject *PyCThostFtdcTradeParamFieldType_get_Memo(PyObject *self, void *closure) {
    PyCThostFtdcTradeParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeParamFieldData>(self);
    CThostFtdcTradeParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Memo, (Py_ssize_t)sizeof(data->Memo));
    return PyBytes_FromString(data->Memo);
}

static int PyCThostFtdcTradeParamFieldType_set_Memo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Memo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradeParamField::Memo)) {
        PyErr_SetString(PyExc_ValueError, "Memo must be less than 160 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradeParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradeParamFieldData>(self);
    CThostFtdcTradeParamField *data = &(extra->data);
    // memset(data->Memo, 0, sizeof(data->Memo));
    // memcpy(data->Memo, buf, len);
    strncpy(data->Memo, buf, sizeof(data->Memo));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcTradeParamFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcTradeParamFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcTradeParamFieldType_get_BrokerID,
    .set = PyCThostFtdcTradeParamFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 参数代码
    /// typedef char TThostFtdcTradeParamIDType
    {
    .name = "TradeParamID",
    .get = PyCThostFtdcTradeParamFieldType_get_TradeParamID,
    .set = PyCThostFtdcTradeParamFieldType_set_TradeParamID,
    .doc = PyDoc_STR("参数代码"),
    },
    /// 参数代码值
    /// typedef char TThostFtdcSettlementParamValueType[256]
    {
    .name = "TradeParamValue",
    .get = PyCThostFtdcTradeParamFieldType_get_TradeParamValue,
    .set = PyCThostFtdcTradeParamFieldType_set_TradeParamValue,
    .doc = PyDoc_STR("参数代码值"),
    },
    /// 备注
    /// typedef char TThostFtdcMemoType[161]
    {
    .name = "Memo",
    .get = PyCThostFtdcTradeParamFieldType_get_Memo,
    .set = PyCThostFtdcTradeParamFieldType_set_Memo,
    .doc = PyDoc_STR("备注"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcTradeParamFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcTradeParamField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("交易参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcTradeParamFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcTradeParamFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcTradeParamFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcTradeParamFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcTradeParamFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcTradeParamFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("交易参数")},
    {Py_tp_members, PyCThostFtdcTradeParamFieldType_members},
    {Py_tp_getset, PyCThostFtdcTradeParamFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcTradeParamFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcTradeParamFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcTradeParamFieldType_spec = {
    .name = "PyCTP.CThostFtdcTradeParamField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcTradeParamFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcTradeParamFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcTradeParamFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcTradeParamFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcTradeParamFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcTradeParamFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcTradeParamFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcTradeParamFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcTradeParamField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTradeParamField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}