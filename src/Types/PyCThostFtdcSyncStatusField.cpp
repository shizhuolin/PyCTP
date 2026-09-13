
#include "PyCThostFtdcSyncStatusField.h"

///数据同步状态

static int PyCThostFtdcSyncStatusFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "DataSyncStatus", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSyncStatusField_TradingDay = NULL;
    Py_ssize_t CThostFtdcSyncStatusField_TradingDay_length = 0;

    /// 数据同步状态
    /// typedef char TThostFtdcDataSyncStatusType
    char CThostFtdcSyncStatusField_DataSyncStatus = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#c", (char **)kwlist
        , &CThostFtdcSyncStatusField_TradingDay, &CThostFtdcSyncStatusField_TradingDay_length
        , &CThostFtdcSyncStatusField_DataSyncStatus
    )) {
        return -1;
    }

    PyCThostFtdcSyncStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncStatusFieldData>(self);
    CThostFtdcSyncStatusField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSyncStatusField_TradingDay != NULL ) {
        if(CThostFtdcSyncStatusField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcSyncStatusField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcSyncStatusField_TradingDay, CThostFtdcSyncStatusField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcSyncStatusField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcSyncStatusField_TradingDay = NULL;
    }

    /// 数据同步状态
    /// typedef char TThostFtdcDataSyncStatusType
    data->DataSyncStatus = CThostFtdcSyncStatusField_DataSyncStatus;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncStatusFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncStatusFieldData>(self);
    CThostFtdcSyncStatusField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:c}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "DataSyncStatus", data->DataSyncStatus
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncStatusField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncStatusField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSyncStatusFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcSyncStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncStatusFieldData>(self);
    CThostFtdcSyncStatusField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcSyncStatusFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncStatusField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncStatusFieldData>(self);
    CThostFtdcSyncStatusField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 数据同步状态
/// typedef char TThostFtdcDataSyncStatusType
static PyObject *PyCThostFtdcSyncStatusFieldType_get_DataSyncStatus(PyObject *self, void *closure) {
    PyCThostFtdcSyncStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncStatusFieldData>(self);
    CThostFtdcSyncStatusField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->DataSyncStatus), 1);
}

static int PyCThostFtdcSyncStatusFieldType_set_DataSyncStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DataSyncStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncStatusField::DataSyncStatus)) {
        PyErr_SetString(PyExc_ValueError, "DataSyncStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncStatusFieldData>(self);
    CThostFtdcSyncStatusField *data = &(extra->data);
    data->DataSyncStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncStatusFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncStatusFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcSyncStatusFieldType_get_TradingDay,
    .set = PyCThostFtdcSyncStatusFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 数据同步状态
    /// typedef char TThostFtdcDataSyncStatusType
    {
    .name = "DataSyncStatus",
    .get = PyCThostFtdcSyncStatusFieldType_get_DataSyncStatus,
    .set = PyCThostFtdcSyncStatusFieldType_set_DataSyncStatus,
    .doc = PyDoc_STR("数据同步状态"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncStatusFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncStatusField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("数据同步状态")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncStatusFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncStatusFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncStatusFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncStatusFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncStatusFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncStatusFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("数据同步状态")},
    {Py_tp_members, PyCThostFtdcSyncStatusFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncStatusFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncStatusFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncStatusFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncStatusFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncStatusField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncStatusFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncStatusFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncStatusFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncStatusFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncStatusFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncStatusFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncStatusFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncStatusFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncStatusField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncStatusField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}