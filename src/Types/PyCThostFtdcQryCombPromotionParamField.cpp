
#include "PyCThostFtdcQryCombPromotionParamField.h"

///查询组合优惠比例

static int PyCThostFtdcQryCombPromotionParamFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "InstrumentID", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryCombPromotionParamField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryCombPromotionParamField_ExchangeID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryCombPromotionParamField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcQryCombPromotionParamField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
        , &CThostFtdcQryCombPromotionParamField_ExchangeID, &CThostFtdcQryCombPromotionParamField_ExchangeID_length
        , &CThostFtdcQryCombPromotionParamField_InstrumentID, &CThostFtdcQryCombPromotionParamField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryCombPromotionParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCombPromotionParamFieldData>(self);
    CThostFtdcQryCombPromotionParamField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryCombPromotionParamField_ExchangeID != NULL ) {
        if(CThostFtdcQryCombPromotionParamField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryCombPromotionParamField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryCombPromotionParamField_ExchangeID, CThostFtdcQryCombPromotionParamField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryCombPromotionParamField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryCombPromotionParamField_ExchangeID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryCombPromotionParamField_InstrumentID != NULL ) {
        if(CThostFtdcQryCombPromotionParamField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQryCombPromotionParamField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcQryCombPromotionParamField_InstrumentID, CThostFtdcQryCombPromotionParamField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcQryCombPromotionParamField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcQryCombPromotionParamField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryCombPromotionParamFieldType_repr(PyObject *self) {

    PyCThostFtdcQryCombPromotionParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCombPromotionParamFieldData>(self);
    CThostFtdcQryCombPromotionParamField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryCombPromotionParamField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryCombPromotionParamField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryCombPromotionParamFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryCombPromotionParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCombPromotionParamFieldData>(self);
    CThostFtdcQryCombPromotionParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryCombPromotionParamFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryCombPromotionParamField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryCombPromotionParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCombPromotionParamFieldData>(self);
    CThostFtdcQryCombPromotionParamField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryCombPromotionParamFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQryCombPromotionParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCombPromotionParamFieldData>(self);
    CThostFtdcQryCombPromotionParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcQryCombPromotionParamFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryCombPromotionParamField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryCombPromotionParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCombPromotionParamFieldData>(self);
    CThostFtdcQryCombPromotionParamField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryCombPromotionParamFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryCombPromotionParamFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryCombPromotionParamFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryCombPromotionParamFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcQryCombPromotionParamFieldType_get_InstrumentID,
    .set = PyCThostFtdcQryCombPromotionParamFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryCombPromotionParamFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryCombPromotionParamField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询组合优惠比例")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryCombPromotionParamFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryCombPromotionParamFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryCombPromotionParamFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryCombPromotionParamFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryCombPromotionParamFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryCombPromotionParamFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询组合优惠比例")},
    {Py_tp_members, PyCThostFtdcQryCombPromotionParamFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryCombPromotionParamFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryCombPromotionParamFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryCombPromotionParamFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryCombPromotionParamFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryCombPromotionParamField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryCombPromotionParamFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryCombPromotionParamFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryCombPromotionParamFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryCombPromotionParamFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryCombPromotionParamFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryCombPromotionParamFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryCombPromotionParamFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryCombPromotionParamFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryCombPromotionParamField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryCombPromotionParamField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}