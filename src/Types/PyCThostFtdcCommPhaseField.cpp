
#include "PyCThostFtdcCommPhaseField.h"

///通讯阶段

static int PyCThostFtdcCommPhaseFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "CommPhaseNo", "SystemID", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcCommPhaseField_TradingDay = NULL;
    Py_ssize_t CThostFtdcCommPhaseField_TradingDay_length = 0;

    /// 通讯时段编号
    /// typedef short TThostFtdcCommPhaseNoType
    short CThostFtdcCommPhaseField_CommPhaseNo = 0;

    /// 系统编号
    /// typedef char TThostFtdcSystemIDType[21]
    char *CThostFtdcCommPhaseField_SystemID = NULL;
    Py_ssize_t CThostFtdcCommPhaseField_SystemID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#hy#", (char **)kwlist
        , &CThostFtdcCommPhaseField_TradingDay, &CThostFtdcCommPhaseField_TradingDay_length
        , &CThostFtdcCommPhaseField_CommPhaseNo
        , &CThostFtdcCommPhaseField_SystemID, &CThostFtdcCommPhaseField_SystemID_length
    )) {
        return -1;
    }

    PyCThostFtdcCommPhaseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCommPhaseFieldData>(self);
    CThostFtdcCommPhaseField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcCommPhaseField_TradingDay != NULL ) {
        if(CThostFtdcCommPhaseField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcCommPhaseField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcCommPhaseField_TradingDay, CThostFtdcCommPhaseField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcCommPhaseField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcCommPhaseField_TradingDay = NULL;
    }

    /// 通讯时段编号
    /// typedef short TThostFtdcCommPhaseNoType
    data->CommPhaseNo = CThostFtdcCommPhaseField_CommPhaseNo;

    /// 系统编号
    /// typedef char TThostFtdcSystemIDType[21]
    if( CThostFtdcCommPhaseField_SystemID != NULL ) {
        if(CThostFtdcCommPhaseField_SystemID_length >= (Py_ssize_t)sizeof(data->SystemID)) {
            PyErr_Format(PyExc_ValueError, "SystemID too long: length=%zd (max allowed is 20)", CThostFtdcCommPhaseField_SystemID_length);
            return -1;
        }
        // memset(data->SystemID, 0, sizeof(data->SystemID));
        // memcpy(data->SystemID, CThostFtdcCommPhaseField_SystemID, CThostFtdcCommPhaseField_SystemID_length);
        strncpy(data->SystemID, CThostFtdcCommPhaseField_SystemID, sizeof(data->SystemID));
        CThostFtdcCommPhaseField_SystemID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcCommPhaseFieldType_repr(PyObject *self) {

    PyCThostFtdcCommPhaseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCommPhaseFieldData>(self);
    CThostFtdcCommPhaseField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:h,s:y}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "CommPhaseNo", data->CommPhaseNo
        , "SystemID", data->SystemID//, (Py_ssize_t)sizeof(data->SystemID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCommPhaseField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCommPhaseField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcCommPhaseFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcCommPhaseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCommPhaseFieldData>(self);
    CThostFtdcCommPhaseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcCommPhaseFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCommPhaseField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCommPhaseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCommPhaseFieldData>(self);
    CThostFtdcCommPhaseField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 系统编号
/// typedef char TThostFtdcSystemIDType[21]
static PyObject *PyCThostFtdcCommPhaseFieldType_get_SystemID(PyObject *self, void *closure) {
    PyCThostFtdcCommPhaseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCommPhaseFieldData>(self);
    CThostFtdcCommPhaseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->SystemID, (Py_ssize_t)sizeof(data->SystemID));
    return PyBytes_FromString(data->SystemID);
}

static int PyCThostFtdcCommPhaseFieldType_set_SystemID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SystemID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCommPhaseField::SystemID)) {
        PyErr_SetString(PyExc_ValueError, "SystemID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCommPhaseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCommPhaseFieldData>(self);
    CThostFtdcCommPhaseField *data = &(extra->data);
    // memset(data->SystemID, 0, sizeof(data->SystemID));
    // memcpy(data->SystemID, buf, len);
    strncpy(data->SystemID, buf, sizeof(data->SystemID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcCommPhaseFieldType_members[] = {
    /// 通讯时段编号
    /// typedef short TThostFtdcCommPhaseNoType
    {
        .name = "CommPhaseNo",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_SHORT,
#else
        .type = Py_T_SHORT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcCommPhaseFieldData, data.CommPhaseNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("通讯时段编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcCommPhaseFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcCommPhaseFieldType_get_TradingDay,
    .set = PyCThostFtdcCommPhaseFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 系统编号
    /// typedef char TThostFtdcSystemIDType[21]
    {
    .name = "SystemID",
    .get = PyCThostFtdcCommPhaseFieldType_get_SystemID,
    .set = PyCThostFtdcCommPhaseFieldType_set_SystemID,
    .doc = PyDoc_STR("系统编号"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcCommPhaseFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcCommPhaseField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("通讯阶段")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcCommPhaseFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcCommPhaseFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcCommPhaseFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcCommPhaseFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcCommPhaseFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcCommPhaseFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("通讯阶段")},
    {Py_tp_members, PyCThostFtdcCommPhaseFieldType_members},
    {Py_tp_getset, PyCThostFtdcCommPhaseFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcCommPhaseFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcCommPhaseFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcCommPhaseFieldType_spec = {
    .name = "PyCTP.CThostFtdcCommPhaseField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcCommPhaseFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcCommPhaseFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcCommPhaseFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcCommPhaseFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcCommPhaseFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcCommPhaseFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcCommPhaseFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcCommPhaseFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcCommPhaseField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcCommPhaseField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}