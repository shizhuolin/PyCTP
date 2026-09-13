
#include "PyCThostFtdcCurrentTimeField.h"

///当前时间

static int PyCThostFtdcCurrentTimeFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "CurrDate", "CurrTime", "CurrMillisec", "ActionDay", NULL };


    /// 当前交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcCurrentTimeField_CurrDate = NULL;
    Py_ssize_t CThostFtdcCurrentTimeField_CurrDate_length = 0;

    /// 当前时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcCurrentTimeField_CurrTime = NULL;
    Py_ssize_t CThostFtdcCurrentTimeField_CurrTime_length = 0;

    /// 当前时间（毫秒）
    /// typedef int TThostFtdcMillisecType
    int CThostFtdcCurrentTimeField_CurrMillisec = 0;

    /// 自然日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcCurrentTimeField_ActionDay = NULL;
    Py_ssize_t CThostFtdcCurrentTimeField_ActionDay_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#", (char **)kwlist
        , &CThostFtdcCurrentTimeField_CurrDate, &CThostFtdcCurrentTimeField_CurrDate_length
        , &CThostFtdcCurrentTimeField_CurrTime, &CThostFtdcCurrentTimeField_CurrTime_length
        , &CThostFtdcCurrentTimeField_CurrMillisec
        , &CThostFtdcCurrentTimeField_ActionDay, &CThostFtdcCurrentTimeField_ActionDay_length
    )) {
        return -1;
    }

    PyCThostFtdcCurrentTimeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCurrentTimeFieldData>(self);
    CThostFtdcCurrentTimeField *data = &(extra->data);


    /// 当前交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcCurrentTimeField_CurrDate != NULL ) {
        if(CThostFtdcCurrentTimeField_CurrDate_length >= (Py_ssize_t)sizeof(data->CurrDate)) {
            PyErr_Format(PyExc_ValueError, "CurrDate too long: length=%zd (max allowed is 8)", CThostFtdcCurrentTimeField_CurrDate_length);
            return -1;
        }
        // memset(data->CurrDate, 0, sizeof(data->CurrDate));
        // memcpy(data->CurrDate, CThostFtdcCurrentTimeField_CurrDate, CThostFtdcCurrentTimeField_CurrDate_length);
        strncpy(data->CurrDate, CThostFtdcCurrentTimeField_CurrDate, sizeof(data->CurrDate));
        CThostFtdcCurrentTimeField_CurrDate = NULL;
    }

    /// 当前时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcCurrentTimeField_CurrTime != NULL ) {
        if(CThostFtdcCurrentTimeField_CurrTime_length >= (Py_ssize_t)sizeof(data->CurrTime)) {
            PyErr_Format(PyExc_ValueError, "CurrTime too long: length=%zd (max allowed is 8)", CThostFtdcCurrentTimeField_CurrTime_length);
            return -1;
        }
        // memset(data->CurrTime, 0, sizeof(data->CurrTime));
        // memcpy(data->CurrTime, CThostFtdcCurrentTimeField_CurrTime, CThostFtdcCurrentTimeField_CurrTime_length);
        strncpy(data->CurrTime, CThostFtdcCurrentTimeField_CurrTime, sizeof(data->CurrTime));
        CThostFtdcCurrentTimeField_CurrTime = NULL;
    }

    /// 当前时间（毫秒）
    /// typedef int TThostFtdcMillisecType
    data->CurrMillisec = CThostFtdcCurrentTimeField_CurrMillisec;

    /// 自然日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcCurrentTimeField_ActionDay != NULL ) {
        if(CThostFtdcCurrentTimeField_ActionDay_length >= (Py_ssize_t)sizeof(data->ActionDay)) {
            PyErr_Format(PyExc_ValueError, "ActionDay too long: length=%zd (max allowed is 8)", CThostFtdcCurrentTimeField_ActionDay_length);
            return -1;
        }
        // memset(data->ActionDay, 0, sizeof(data->ActionDay));
        // memcpy(data->ActionDay, CThostFtdcCurrentTimeField_ActionDay, CThostFtdcCurrentTimeField_ActionDay_length);
        strncpy(data->ActionDay, CThostFtdcCurrentTimeField_ActionDay, sizeof(data->ActionDay));
        CThostFtdcCurrentTimeField_ActionDay = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcCurrentTimeFieldType_repr(PyObject *self) {

    PyCThostFtdcCurrentTimeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCurrentTimeFieldData>(self);
    CThostFtdcCurrentTimeField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:i,s:y}"
        , "CurrDate", data->CurrDate//, (Py_ssize_t)sizeof(data->CurrDate)
        , "CurrTime", data->CurrTime//, (Py_ssize_t)sizeof(data->CurrTime)
        , "CurrMillisec", data->CurrMillisec
        , "ActionDay", data->ActionDay//, (Py_ssize_t)sizeof(data->ActionDay)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCurrentTimeField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCurrentTimeField repr");
        return NULL;
    }

    return repr;
}


/// 当前交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcCurrentTimeFieldType_get_CurrDate(PyObject *self, void *closure) {
    PyCThostFtdcCurrentTimeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCurrentTimeFieldData>(self);
    CThostFtdcCurrentTimeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrDate, (Py_ssize_t)sizeof(data->CurrDate));
    return PyBytes_FromString(data->CurrDate);
}

static int PyCThostFtdcCurrentTimeFieldType_set_CurrDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCurrentTimeField::CurrDate)) {
        PyErr_SetString(PyExc_ValueError, "CurrDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCurrentTimeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCurrentTimeFieldData>(self);
    CThostFtdcCurrentTimeField *data = &(extra->data);
    // memset(data->CurrDate, 0, sizeof(data->CurrDate));
    // memcpy(data->CurrDate, buf, len);
    strncpy(data->CurrDate, buf, sizeof(data->CurrDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 当前时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcCurrentTimeFieldType_get_CurrTime(PyObject *self, void *closure) {
    PyCThostFtdcCurrentTimeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCurrentTimeFieldData>(self);
    CThostFtdcCurrentTimeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrTime, (Py_ssize_t)sizeof(data->CurrTime));
    return PyBytes_FromString(data->CurrTime);
}

static int PyCThostFtdcCurrentTimeFieldType_set_CurrTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCurrentTimeField::CurrTime)) {
        PyErr_SetString(PyExc_ValueError, "CurrTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCurrentTimeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCurrentTimeFieldData>(self);
    CThostFtdcCurrentTimeField *data = &(extra->data);
    // memset(data->CurrTime, 0, sizeof(data->CurrTime));
    // memcpy(data->CurrTime, buf, len);
    strncpy(data->CurrTime, buf, sizeof(data->CurrTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 自然日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcCurrentTimeFieldType_get_ActionDay(PyObject *self, void *closure) {
    PyCThostFtdcCurrentTimeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCurrentTimeFieldData>(self);
    CThostFtdcCurrentTimeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionDay, (Py_ssize_t)sizeof(data->ActionDay));
    return PyBytes_FromString(data->ActionDay);
}

static int PyCThostFtdcCurrentTimeFieldType_set_ActionDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCurrentTimeField::ActionDay)) {
        PyErr_SetString(PyExc_ValueError, "ActionDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCurrentTimeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCurrentTimeFieldData>(self);
    CThostFtdcCurrentTimeField *data = &(extra->data);
    // memset(data->ActionDay, 0, sizeof(data->ActionDay));
    // memcpy(data->ActionDay, buf, len);
    strncpy(data->ActionDay, buf, sizeof(data->ActionDay));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcCurrentTimeFieldType_members[] = {
    /// 当前时间（毫秒）
    /// typedef int TThostFtdcMillisecType
    {
        .name = "CurrMillisec",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcCurrentTimeFieldData, data.CurrMillisec),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("当前时间（毫秒）")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcCurrentTimeFieldType_getsets[] = {
    /// 当前交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "CurrDate",
    .get = PyCThostFtdcCurrentTimeFieldType_get_CurrDate,
    .set = PyCThostFtdcCurrentTimeFieldType_set_CurrDate,
    .doc = PyDoc_STR("当前交易日"),
    },
    /// 当前时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "CurrTime",
    .get = PyCThostFtdcCurrentTimeFieldType_get_CurrTime,
    .set = PyCThostFtdcCurrentTimeFieldType_set_CurrTime,
    .doc = PyDoc_STR("当前时间"),
    },
    /// 自然日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "ActionDay",
    .get = PyCThostFtdcCurrentTimeFieldType_get_ActionDay,
    .set = PyCThostFtdcCurrentTimeFieldType_set_ActionDay,
    .doc = PyDoc_STR("自然日期"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcCurrentTimeFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcCurrentTimeField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("当前时间")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcCurrentTimeFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcCurrentTimeFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcCurrentTimeFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcCurrentTimeFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcCurrentTimeFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcCurrentTimeFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("当前时间")},
    {Py_tp_members, PyCThostFtdcCurrentTimeFieldType_members},
    {Py_tp_getset, PyCThostFtdcCurrentTimeFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcCurrentTimeFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcCurrentTimeFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcCurrentTimeFieldType_spec = {
    .name = "PyCTP.CThostFtdcCurrentTimeField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcCurrentTimeFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcCurrentTimeFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcCurrentTimeFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcCurrentTimeFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcCurrentTimeFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcCurrentTimeFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcCurrentTimeFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcCurrentTimeFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcCurrentTimeField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcCurrentTimeField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}