
#include "PyCThostFtdcMarketDataExchangeField.h"

///行情交易所代码属性

static int PyCThostFtdcMarketDataExchangeFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcMarketDataExchangeField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcMarketDataExchangeField_ExchangeID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
        , &CThostFtdcMarketDataExchangeField_ExchangeID, &CThostFtdcMarketDataExchangeField_ExchangeID_length
    )) {
        return -1;
    }

    PyCThostFtdcMarketDataExchangeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataExchangeFieldData>(self);
    CThostFtdcMarketDataExchangeField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcMarketDataExchangeField_ExchangeID != NULL ) {
        if(CThostFtdcMarketDataExchangeField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcMarketDataExchangeField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcMarketDataExchangeField_ExchangeID, CThostFtdcMarketDataExchangeField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcMarketDataExchangeField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcMarketDataExchangeField_ExchangeID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcMarketDataExchangeFieldType_repr(PyObject *self) {

    PyCThostFtdcMarketDataExchangeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataExchangeFieldData>(self);
    CThostFtdcMarketDataExchangeField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataExchangeField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataExchangeField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcMarketDataExchangeFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcMarketDataExchangeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataExchangeFieldData>(self);
    CThostFtdcMarketDataExchangeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcMarketDataExchangeFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMarketDataExchangeField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMarketDataExchangeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataExchangeFieldData>(self);
    CThostFtdcMarketDataExchangeField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcMarketDataExchangeFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcMarketDataExchangeFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcMarketDataExchangeFieldType_get_ExchangeID,
    .set = PyCThostFtdcMarketDataExchangeFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcMarketDataExchangeFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcMarketDataExchangeField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("行情交易所代码属性")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcMarketDataExchangeFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcMarketDataExchangeFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcMarketDataExchangeFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcMarketDataExchangeFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcMarketDataExchangeFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcMarketDataExchangeFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("行情交易所代码属性")},
    {Py_tp_members, PyCThostFtdcMarketDataExchangeFieldType_members},
    {Py_tp_getset, PyCThostFtdcMarketDataExchangeFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcMarketDataExchangeFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcMarketDataExchangeFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcMarketDataExchangeFieldType_spec = {
    .name = "PyCTP.CThostFtdcMarketDataExchangeField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcMarketDataExchangeFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcMarketDataExchangeFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcMarketDataExchangeFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcMarketDataExchangeFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcMarketDataExchangeFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcMarketDataExchangeFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcMarketDataExchangeFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcMarketDataExchangeFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcMarketDataExchangeField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMarketDataExchangeField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}