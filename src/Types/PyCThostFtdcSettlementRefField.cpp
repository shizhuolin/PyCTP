
#include "PyCThostFtdcSettlementRefField.h"

///结算引用

static int PyCThostFtdcSettlementRefFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "SettlementID", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSettlementRefField_TradingDay = NULL;
    Py_ssize_t CThostFtdcSettlementRefField_TradingDay_length = 0;

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    int CThostFtdcSettlementRefField_SettlementID = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#i", (char **)kwlist
        , &CThostFtdcSettlementRefField_TradingDay, &CThostFtdcSettlementRefField_TradingDay_length
        , &CThostFtdcSettlementRefField_SettlementID
    )) {
        return -1;
    }

    PyCThostFtdcSettlementRefFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementRefFieldData>(self);
    CThostFtdcSettlementRefField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSettlementRefField_TradingDay != NULL ) {
        if(CThostFtdcSettlementRefField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcSettlementRefField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcSettlementRefField_TradingDay, CThostFtdcSettlementRefField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcSettlementRefField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcSettlementRefField_TradingDay = NULL;
    }

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    data->SettlementID = CThostFtdcSettlementRefField_SettlementID;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSettlementRefFieldType_repr(PyObject *self) {

    PyCThostFtdcSettlementRefFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementRefFieldData>(self);
    CThostFtdcSettlementRefField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:i}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "SettlementID", data->SettlementID
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSettlementRefField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSettlementRefField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSettlementRefFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcSettlementRefFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementRefFieldData>(self);
    CThostFtdcSettlementRefField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcSettlementRefFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSettlementRefField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSettlementRefFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementRefFieldData>(self);
    CThostFtdcSettlementRefField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSettlementRefFieldType_members[] = {
    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    {
        .name = "SettlementID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSettlementRefFieldData, data.SettlementID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("结算编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSettlementRefFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcSettlementRefFieldType_get_TradingDay,
    .set = PyCThostFtdcSettlementRefFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSettlementRefFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSettlementRefField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("结算引用")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSettlementRefFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSettlementRefFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSettlementRefFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSettlementRefFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSettlementRefFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSettlementRefFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("结算引用")},
    {Py_tp_members, PyCThostFtdcSettlementRefFieldType_members},
    {Py_tp_getset, PyCThostFtdcSettlementRefFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSettlementRefFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSettlementRefFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSettlementRefFieldType_spec = {
    .name = "PyCTP.CThostFtdcSettlementRefField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSettlementRefFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSettlementRefFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSettlementRefFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSettlementRefFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSettlementRefFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSettlementRefFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSettlementRefFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSettlementRefFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSettlementRefField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSettlementRefField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}