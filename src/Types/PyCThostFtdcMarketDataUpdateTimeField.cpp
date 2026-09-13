
#include "PyCThostFtdcMarketDataUpdateTimeField.h"

///行情更新时间属性

static int PyCThostFtdcMarketDataUpdateTimeFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "UpdateTime", "UpdateMillisec", "ActionDay", "InstrumentID", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcMarketDataUpdateTimeField_reserve1 = NULL;
    Py_ssize_t CThostFtdcMarketDataUpdateTimeField_reserve1_length = 0;

    /// 最后修改时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcMarketDataUpdateTimeField_UpdateTime = NULL;
    Py_ssize_t CThostFtdcMarketDataUpdateTimeField_UpdateTime_length = 0;

    /// 最后修改毫秒
    /// typedef int TThostFtdcMillisecType
    int CThostFtdcMarketDataUpdateTimeField_UpdateMillisec = 0;

    /// 业务日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcMarketDataUpdateTimeField_ActionDay = NULL;
    Py_ssize_t CThostFtdcMarketDataUpdateTimeField_ActionDay_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcMarketDataUpdateTimeField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcMarketDataUpdateTimeField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#y#", (char **)kwlist
        , &CThostFtdcMarketDataUpdateTimeField_reserve1, &CThostFtdcMarketDataUpdateTimeField_reserve1_length
        , &CThostFtdcMarketDataUpdateTimeField_UpdateTime, &CThostFtdcMarketDataUpdateTimeField_UpdateTime_length
        , &CThostFtdcMarketDataUpdateTimeField_UpdateMillisec
        , &CThostFtdcMarketDataUpdateTimeField_ActionDay, &CThostFtdcMarketDataUpdateTimeField_ActionDay_length
        , &CThostFtdcMarketDataUpdateTimeField_InstrumentID, &CThostFtdcMarketDataUpdateTimeField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcMarketDataUpdateTimeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataUpdateTimeFieldData>(self);
    CThostFtdcMarketDataUpdateTimeField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcMarketDataUpdateTimeField_reserve1 != NULL ) {
        if(CThostFtdcMarketDataUpdateTimeField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcMarketDataUpdateTimeField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcMarketDataUpdateTimeField_reserve1, CThostFtdcMarketDataUpdateTimeField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcMarketDataUpdateTimeField_reserve1, sizeof(data->reserve1));
        CThostFtdcMarketDataUpdateTimeField_reserve1 = NULL;
    }

    /// 最后修改时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcMarketDataUpdateTimeField_UpdateTime != NULL ) {
        if(CThostFtdcMarketDataUpdateTimeField_UpdateTime_length >= (Py_ssize_t)sizeof(data->UpdateTime)) {
            PyErr_Format(PyExc_ValueError, "UpdateTime too long: length=%zd (max allowed is 8)", CThostFtdcMarketDataUpdateTimeField_UpdateTime_length);
            return -1;
        }
        // memset(data->UpdateTime, 0, sizeof(data->UpdateTime));
        // memcpy(data->UpdateTime, CThostFtdcMarketDataUpdateTimeField_UpdateTime, CThostFtdcMarketDataUpdateTimeField_UpdateTime_length);
        strncpy(data->UpdateTime, CThostFtdcMarketDataUpdateTimeField_UpdateTime, sizeof(data->UpdateTime));
        CThostFtdcMarketDataUpdateTimeField_UpdateTime = NULL;
    }

    /// 最后修改毫秒
    /// typedef int TThostFtdcMillisecType
    data->UpdateMillisec = CThostFtdcMarketDataUpdateTimeField_UpdateMillisec;

    /// 业务日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcMarketDataUpdateTimeField_ActionDay != NULL ) {
        if(CThostFtdcMarketDataUpdateTimeField_ActionDay_length >= (Py_ssize_t)sizeof(data->ActionDay)) {
            PyErr_Format(PyExc_ValueError, "ActionDay too long: length=%zd (max allowed is 8)", CThostFtdcMarketDataUpdateTimeField_ActionDay_length);
            return -1;
        }
        // memset(data->ActionDay, 0, sizeof(data->ActionDay));
        // memcpy(data->ActionDay, CThostFtdcMarketDataUpdateTimeField_ActionDay, CThostFtdcMarketDataUpdateTimeField_ActionDay_length);
        strncpy(data->ActionDay, CThostFtdcMarketDataUpdateTimeField_ActionDay, sizeof(data->ActionDay));
        CThostFtdcMarketDataUpdateTimeField_ActionDay = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcMarketDataUpdateTimeField_InstrumentID != NULL ) {
        if(CThostFtdcMarketDataUpdateTimeField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcMarketDataUpdateTimeField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcMarketDataUpdateTimeField_InstrumentID, CThostFtdcMarketDataUpdateTimeField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcMarketDataUpdateTimeField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcMarketDataUpdateTimeField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcMarketDataUpdateTimeFieldType_repr(PyObject *self) {

    PyCThostFtdcMarketDataUpdateTimeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataUpdateTimeFieldData>(self);
    CThostFtdcMarketDataUpdateTimeField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:i,s:y,s:y}"
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "UpdateTime", data->UpdateTime//, (Py_ssize_t)sizeof(data->UpdateTime)
        , "UpdateMillisec", data->UpdateMillisec
        , "ActionDay", data->ActionDay//, (Py_ssize_t)sizeof(data->ActionDay)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataUpdateTimeField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataUpdateTimeField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcMarketDataUpdateTimeFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcMarketDataUpdateTimeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataUpdateTimeFieldData>(self);
    CThostFtdcMarketDataUpdateTimeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcMarketDataUpdateTimeFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMarketDataUpdateTimeField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMarketDataUpdateTimeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataUpdateTimeFieldData>(self);
    CThostFtdcMarketDataUpdateTimeField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后修改时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcMarketDataUpdateTimeFieldType_get_UpdateTime(PyObject *self, void *closure) {
    PyCThostFtdcMarketDataUpdateTimeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataUpdateTimeFieldData>(self);
    CThostFtdcMarketDataUpdateTimeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UpdateTime, (Py_ssize_t)sizeof(data->UpdateTime));
    return PyBytes_FromString(data->UpdateTime);
}

static int PyCThostFtdcMarketDataUpdateTimeFieldType_set_UpdateTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UpdateTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMarketDataUpdateTimeField::UpdateTime)) {
        PyErr_SetString(PyExc_ValueError, "UpdateTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMarketDataUpdateTimeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataUpdateTimeFieldData>(self);
    CThostFtdcMarketDataUpdateTimeField *data = &(extra->data);
    // memset(data->UpdateTime, 0, sizeof(data->UpdateTime));
    // memcpy(data->UpdateTime, buf, len);
    strncpy(data->UpdateTime, buf, sizeof(data->UpdateTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 业务日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcMarketDataUpdateTimeFieldType_get_ActionDay(PyObject *self, void *closure) {
    PyCThostFtdcMarketDataUpdateTimeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataUpdateTimeFieldData>(self);
    CThostFtdcMarketDataUpdateTimeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionDay, (Py_ssize_t)sizeof(data->ActionDay));
    return PyBytes_FromString(data->ActionDay);
}

static int PyCThostFtdcMarketDataUpdateTimeFieldType_set_ActionDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMarketDataUpdateTimeField::ActionDay)) {
        PyErr_SetString(PyExc_ValueError, "ActionDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMarketDataUpdateTimeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataUpdateTimeFieldData>(self);
    CThostFtdcMarketDataUpdateTimeField *data = &(extra->data);
    // memset(data->ActionDay, 0, sizeof(data->ActionDay));
    // memcpy(data->ActionDay, buf, len);
    strncpy(data->ActionDay, buf, sizeof(data->ActionDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcMarketDataUpdateTimeFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcMarketDataUpdateTimeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataUpdateTimeFieldData>(self);
    CThostFtdcMarketDataUpdateTimeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcMarketDataUpdateTimeFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMarketDataUpdateTimeField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMarketDataUpdateTimeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarketDataUpdateTimeFieldData>(self);
    CThostFtdcMarketDataUpdateTimeField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcMarketDataUpdateTimeFieldType_members[] = {
    /// 最后修改毫秒
    /// typedef int TThostFtdcMillisecType
    {
        .name = "UpdateMillisec",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMarketDataUpdateTimeFieldData, data.UpdateMillisec),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("最后修改毫秒")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcMarketDataUpdateTimeFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcMarketDataUpdateTimeFieldType_get_reserve1,
    .set = PyCThostFtdcMarketDataUpdateTimeFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 最后修改时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "UpdateTime",
    .get = PyCThostFtdcMarketDataUpdateTimeFieldType_get_UpdateTime,
    .set = PyCThostFtdcMarketDataUpdateTimeFieldType_set_UpdateTime,
    .doc = PyDoc_STR("最后修改时间"),
    },
    /// 业务日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "ActionDay",
    .get = PyCThostFtdcMarketDataUpdateTimeFieldType_get_ActionDay,
    .set = PyCThostFtdcMarketDataUpdateTimeFieldType_set_ActionDay,
    .doc = PyDoc_STR("业务日期"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcMarketDataUpdateTimeFieldType_get_InstrumentID,
    .set = PyCThostFtdcMarketDataUpdateTimeFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcMarketDataUpdateTimeFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcMarketDataUpdateTimeField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("行情更新时间属性")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcMarketDataUpdateTimeFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcMarketDataUpdateTimeFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcMarketDataUpdateTimeFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcMarketDataUpdateTimeFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcMarketDataUpdateTimeFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcMarketDataUpdateTimeFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("行情更新时间属性")},
    {Py_tp_members, PyCThostFtdcMarketDataUpdateTimeFieldType_members},
    {Py_tp_getset, PyCThostFtdcMarketDataUpdateTimeFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcMarketDataUpdateTimeFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcMarketDataUpdateTimeFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcMarketDataUpdateTimeFieldType_spec = {
    .name = "PyCTP.CThostFtdcMarketDataUpdateTimeField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcMarketDataUpdateTimeFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcMarketDataUpdateTimeFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcMarketDataUpdateTimeFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcMarketDataUpdateTimeFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcMarketDataUpdateTimeFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcMarketDataUpdateTimeFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcMarketDataUpdateTimeFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcMarketDataUpdateTimeFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcMarketDataUpdateTimeField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMarketDataUpdateTimeField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}