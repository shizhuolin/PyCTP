
#include "PyCThostFtdcSyncSPBMParameterEndField.h"

///同步SPBM参数结束

static int PyCThostFtdcSyncSPBMParameterEndFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSyncSPBMParameterEndField_TradingDay = NULL;
    Py_ssize_t CThostFtdcSyncSPBMParameterEndField_TradingDay_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
        , &CThostFtdcSyncSPBMParameterEndField_TradingDay, &CThostFtdcSyncSPBMParameterEndField_TradingDay_length
    )) {
        return -1;
    }

    PyCThostFtdcSyncSPBMParameterEndFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncSPBMParameterEndFieldData>(self);
    CThostFtdcSyncSPBMParameterEndField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSyncSPBMParameterEndField_TradingDay != NULL ) {
        if(CThostFtdcSyncSPBMParameterEndField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcSyncSPBMParameterEndField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcSyncSPBMParameterEndField_TradingDay, CThostFtdcSyncSPBMParameterEndField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcSyncSPBMParameterEndField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcSyncSPBMParameterEndField_TradingDay = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncSPBMParameterEndFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncSPBMParameterEndFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncSPBMParameterEndFieldData>(self);
    CThostFtdcSyncSPBMParameterEndField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncSPBMParameterEndField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncSPBMParameterEndField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSyncSPBMParameterEndFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcSyncSPBMParameterEndFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncSPBMParameterEndFieldData>(self);
    CThostFtdcSyncSPBMParameterEndField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcSyncSPBMParameterEndFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncSPBMParameterEndField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncSPBMParameterEndFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncSPBMParameterEndFieldData>(self);
    CThostFtdcSyncSPBMParameterEndField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncSPBMParameterEndFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncSPBMParameterEndFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcSyncSPBMParameterEndFieldType_get_TradingDay,
    .set = PyCThostFtdcSyncSPBMParameterEndFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncSPBMParameterEndFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncSPBMParameterEndField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("同步SPBM参数结束")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncSPBMParameterEndFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncSPBMParameterEndFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncSPBMParameterEndFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncSPBMParameterEndFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncSPBMParameterEndFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncSPBMParameterEndFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("同步SPBM参数结束")},
    {Py_tp_members, PyCThostFtdcSyncSPBMParameterEndFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncSPBMParameterEndFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncSPBMParameterEndFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncSPBMParameterEndFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncSPBMParameterEndFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncSPBMParameterEndField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncSPBMParameterEndFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncSPBMParameterEndFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncSPBMParameterEndFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncSPBMParameterEndFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncSPBMParameterEndFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncSPBMParameterEndFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncSPBMParameterEndFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncSPBMParameterEndFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncSPBMParameterEndField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncSPBMParameterEndField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}