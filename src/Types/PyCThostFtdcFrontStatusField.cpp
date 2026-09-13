
#include "PyCThostFtdcFrontStatusField.h"

///前置状态

static int PyCThostFtdcFrontStatusFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "FrontID", "LastReportDate", "LastReportTime", "IsActive", NULL };


    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    int CThostFtdcFrontStatusField_FrontID = 0;

    /// 上次报告日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcFrontStatusField_LastReportDate = NULL;
    Py_ssize_t CThostFtdcFrontStatusField_LastReportDate_length = 0;

    /// 上次报告时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcFrontStatusField_LastReportTime = NULL;
    Py_ssize_t CThostFtdcFrontStatusField_LastReportTime_length = 0;

    /// 是否活跃
    /// typedef int TThostFtdcBoolType
    int CThostFtdcFrontStatusField_IsActive = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iy#y#i", (char **)kwlist
        , &CThostFtdcFrontStatusField_FrontID
        , &CThostFtdcFrontStatusField_LastReportDate, &CThostFtdcFrontStatusField_LastReportDate_length
        , &CThostFtdcFrontStatusField_LastReportTime, &CThostFtdcFrontStatusField_LastReportTime_length
        , &CThostFtdcFrontStatusField_IsActive
    )) {
        return -1;
    }

    PyCThostFtdcFrontStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcFrontStatusFieldData>(self);
    CThostFtdcFrontStatusField *data = &(extra->data);


    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    data->FrontID = CThostFtdcFrontStatusField_FrontID;

    /// 上次报告日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcFrontStatusField_LastReportDate != NULL ) {
        if(CThostFtdcFrontStatusField_LastReportDate_length >= (Py_ssize_t)sizeof(data->LastReportDate)) {
            PyErr_Format(PyExc_ValueError, "LastReportDate too long: length=%zd (max allowed is 8)", CThostFtdcFrontStatusField_LastReportDate_length);
            return -1;
        }
        // memset(data->LastReportDate, 0, sizeof(data->LastReportDate));
        // memcpy(data->LastReportDate, CThostFtdcFrontStatusField_LastReportDate, CThostFtdcFrontStatusField_LastReportDate_length);
        strncpy(data->LastReportDate, CThostFtdcFrontStatusField_LastReportDate, sizeof(data->LastReportDate));
        CThostFtdcFrontStatusField_LastReportDate = NULL;
    }

    /// 上次报告时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcFrontStatusField_LastReportTime != NULL ) {
        if(CThostFtdcFrontStatusField_LastReportTime_length >= (Py_ssize_t)sizeof(data->LastReportTime)) {
            PyErr_Format(PyExc_ValueError, "LastReportTime too long: length=%zd (max allowed is 8)", CThostFtdcFrontStatusField_LastReportTime_length);
            return -1;
        }
        // memset(data->LastReportTime, 0, sizeof(data->LastReportTime));
        // memcpy(data->LastReportTime, CThostFtdcFrontStatusField_LastReportTime, CThostFtdcFrontStatusField_LastReportTime_length);
        strncpy(data->LastReportTime, CThostFtdcFrontStatusField_LastReportTime, sizeof(data->LastReportTime));
        CThostFtdcFrontStatusField_LastReportTime = NULL;
    }

    /// 是否活跃
    /// typedef int TThostFtdcBoolType
    data->IsActive = CThostFtdcFrontStatusField_IsActive;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcFrontStatusFieldType_repr(PyObject *self) {

    PyCThostFtdcFrontStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcFrontStatusFieldData>(self);
    CThostFtdcFrontStatusField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:i,s:y,s:y,s:i}"
        , "FrontID", data->FrontID
        , "LastReportDate", data->LastReportDate//, (Py_ssize_t)sizeof(data->LastReportDate)
        , "LastReportTime", data->LastReportTime//, (Py_ssize_t)sizeof(data->LastReportTime)
        , "IsActive", data->IsActive
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcFrontStatusField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcFrontStatusField repr");
        return NULL;
    }

    return repr;
}


/// 上次报告日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcFrontStatusFieldType_get_LastReportDate(PyObject *self, void *closure) {
    PyCThostFtdcFrontStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcFrontStatusFieldData>(self);
    CThostFtdcFrontStatusField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LastReportDate, (Py_ssize_t)sizeof(data->LastReportDate));
    return PyBytes_FromString(data->LastReportDate);
}

static int PyCThostFtdcFrontStatusFieldType_set_LastReportDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LastReportDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcFrontStatusField::LastReportDate)) {
        PyErr_SetString(PyExc_ValueError, "LastReportDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcFrontStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcFrontStatusFieldData>(self);
    CThostFtdcFrontStatusField *data = &(extra->data);
    // memset(data->LastReportDate, 0, sizeof(data->LastReportDate));
    // memcpy(data->LastReportDate, buf, len);
    strncpy(data->LastReportDate, buf, sizeof(data->LastReportDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 上次报告时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcFrontStatusFieldType_get_LastReportTime(PyObject *self, void *closure) {
    PyCThostFtdcFrontStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcFrontStatusFieldData>(self);
    CThostFtdcFrontStatusField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LastReportTime, (Py_ssize_t)sizeof(data->LastReportTime));
    return PyBytes_FromString(data->LastReportTime);
}

static int PyCThostFtdcFrontStatusFieldType_set_LastReportTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LastReportTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcFrontStatusField::LastReportTime)) {
        PyErr_SetString(PyExc_ValueError, "LastReportTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcFrontStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcFrontStatusFieldData>(self);
    CThostFtdcFrontStatusField *data = &(extra->data);
    // memset(data->LastReportTime, 0, sizeof(data->LastReportTime));
    // memcpy(data->LastReportTime, buf, len);
    strncpy(data->LastReportTime, buf, sizeof(data->LastReportTime));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcFrontStatusFieldType_members[] = {
    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    {
        .name = "FrontID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcFrontStatusFieldData, data.FrontID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("前置编号")
    },
    /// 是否活跃
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsActive",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcFrontStatusFieldData, data.IsActive),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否活跃")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcFrontStatusFieldType_getsets[] = {
    /// 上次报告日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "LastReportDate",
    .get = PyCThostFtdcFrontStatusFieldType_get_LastReportDate,
    .set = PyCThostFtdcFrontStatusFieldType_set_LastReportDate,
    .doc = PyDoc_STR("上次报告日期"),
    },
    /// 上次报告时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "LastReportTime",
    .get = PyCThostFtdcFrontStatusFieldType_get_LastReportTime,
    .set = PyCThostFtdcFrontStatusFieldType_set_LastReportTime,
    .doc = PyDoc_STR("上次报告时间"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcFrontStatusFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcFrontStatusField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("前置状态")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcFrontStatusFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcFrontStatusFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcFrontStatusFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcFrontStatusFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcFrontStatusFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcFrontStatusFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("前置状态")},
    {Py_tp_members, PyCThostFtdcFrontStatusFieldType_members},
    {Py_tp_getset, PyCThostFtdcFrontStatusFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcFrontStatusFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcFrontStatusFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcFrontStatusFieldType_spec = {
    .name = "PyCTP.CThostFtdcFrontStatusField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcFrontStatusFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcFrontStatusFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcFrontStatusFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcFrontStatusFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcFrontStatusFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcFrontStatusFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcFrontStatusFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcFrontStatusFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcFrontStatusField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcFrontStatusField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}