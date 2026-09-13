
#include "PyCThostFtdcQrySyncStatusField.h"

///查询组合合约分腿

static int PyCThostFtdcQrySyncStatusFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcQrySyncStatusField_TradingDay = NULL;
    Py_ssize_t CThostFtdcQrySyncStatusField_TradingDay_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
        , &CThostFtdcQrySyncStatusField_TradingDay, &CThostFtdcQrySyncStatusField_TradingDay_length
    )) {
        return -1;
    }

    PyCThostFtdcQrySyncStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySyncStatusFieldData>(self);
    CThostFtdcQrySyncStatusField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcQrySyncStatusField_TradingDay != NULL ) {
        if(CThostFtdcQrySyncStatusField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcQrySyncStatusField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcQrySyncStatusField_TradingDay, CThostFtdcQrySyncStatusField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcQrySyncStatusField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcQrySyncStatusField_TradingDay = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQrySyncStatusFieldType_repr(PyObject *self) {

    PyCThostFtdcQrySyncStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySyncStatusFieldData>(self);
    CThostFtdcQrySyncStatusField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySyncStatusField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySyncStatusField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcQrySyncStatusFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcQrySyncStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySyncStatusFieldData>(self);
    CThostFtdcQrySyncStatusField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcQrySyncStatusFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySyncStatusField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySyncStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySyncStatusFieldData>(self);
    CThostFtdcQrySyncStatusField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQrySyncStatusFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQrySyncStatusFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcQrySyncStatusFieldType_get_TradingDay,
    .set = PyCThostFtdcQrySyncStatusFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQrySyncStatusFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQrySyncStatusField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询组合合约分腿")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQrySyncStatusFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQrySyncStatusFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQrySyncStatusFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQrySyncStatusFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQrySyncStatusFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQrySyncStatusFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询组合合约分腿")},
    {Py_tp_members, PyCThostFtdcQrySyncStatusFieldType_members},
    {Py_tp_getset, PyCThostFtdcQrySyncStatusFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQrySyncStatusFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQrySyncStatusFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQrySyncStatusFieldType_spec = {
    .name = "PyCTP.CThostFtdcQrySyncStatusField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQrySyncStatusFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQrySyncStatusFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQrySyncStatusFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQrySyncStatusFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQrySyncStatusFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQrySyncStatusFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQrySyncStatusFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQrySyncStatusFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQrySyncStatusField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySyncStatusField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}