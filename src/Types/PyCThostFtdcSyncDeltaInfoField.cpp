
#include "PyCThostFtdcSyncDeltaInfoField.h"

///风险结算追平信息

static int PyCThostFtdcSyncDeltaInfoFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "SyncDeltaSequenceNo", "SyncDeltaStatus", "SyncDescription", "IsOnlyTrdDelta", NULL };


    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaInfoField_SyncDeltaSequenceNo = 0;

    /// 追平状态
    /// typedef char TThostFtdcSyncDeltaStatusType
    char CThostFtdcSyncDeltaInfoField_SyncDeltaStatus = 0;

    /// 追平描述
    /// typedef char TThostFtdcSyncDescriptionType[257]
    char *CThostFtdcSyncDeltaInfoField_SyncDescription = NULL;
    Py_ssize_t CThostFtdcSyncDeltaInfoField_SyncDescription_length = 0;

    /// 是否只有资金追平
    /// typedef int TThostFtdcBoolType
    int CThostFtdcSyncDeltaInfoField_IsOnlyTrdDelta = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|icy#i", (char **)kwlist
        , &CThostFtdcSyncDeltaInfoField_SyncDeltaSequenceNo
        , &CThostFtdcSyncDeltaInfoField_SyncDeltaStatus
        , &CThostFtdcSyncDeltaInfoField_SyncDescription, &CThostFtdcSyncDeltaInfoField_SyncDescription_length
        , &CThostFtdcSyncDeltaInfoField_IsOnlyTrdDelta
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInfoFieldData>(self);
    CThostFtdcSyncDeltaInfoField *data = &(extra->data);


    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaInfoField_SyncDeltaSequenceNo;

    /// 追平状态
    /// typedef char TThostFtdcSyncDeltaStatusType
    data->SyncDeltaStatus = CThostFtdcSyncDeltaInfoField_SyncDeltaStatus;

    /// 追平描述
    /// typedef char TThostFtdcSyncDescriptionType[257]
    if( CThostFtdcSyncDeltaInfoField_SyncDescription != NULL ) {
        if(CThostFtdcSyncDeltaInfoField_SyncDescription_length >= (Py_ssize_t)sizeof(data->SyncDescription)) {
            PyErr_Format(PyExc_ValueError, "SyncDescription too long: length=%zd (max allowed is 256)", CThostFtdcSyncDeltaInfoField_SyncDescription_length);
            return -1;
        }
        // memset(data->SyncDescription, 0, sizeof(data->SyncDescription));
        // memcpy(data->SyncDescription, CThostFtdcSyncDeltaInfoField_SyncDescription, CThostFtdcSyncDeltaInfoField_SyncDescription_length);
        strncpy(data->SyncDescription, CThostFtdcSyncDeltaInfoField_SyncDescription, sizeof(data->SyncDescription));
        CThostFtdcSyncDeltaInfoField_SyncDescription = NULL;
    }

    /// 是否只有资金追平
    /// typedef int TThostFtdcBoolType
    data->IsOnlyTrdDelta = CThostFtdcSyncDeltaInfoField_IsOnlyTrdDelta;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaInfoFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInfoFieldData>(self);
    CThostFtdcSyncDeltaInfoField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:i,s:c,s:y,s:i}"
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
        , "SyncDeltaStatus", data->SyncDeltaStatus
        , "SyncDescription", data->SyncDescription//, (Py_ssize_t)sizeof(data->SyncDescription)
        , "IsOnlyTrdDelta", data->IsOnlyTrdDelta
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaInfoField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaInfoField repr");
        return NULL;
    }

    return repr;
}


/// 追平状态
/// typedef char TThostFtdcSyncDeltaStatusType
static PyObject *PyCThostFtdcSyncDeltaInfoFieldType_get_SyncDeltaStatus(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInfoFieldData>(self);
    CThostFtdcSyncDeltaInfoField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->SyncDeltaStatus), 1);
}

static int PyCThostFtdcSyncDeltaInfoFieldType_set_SyncDeltaStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SyncDeltaStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInfoField::SyncDeltaStatus)) {
        PyErr_SetString(PyExc_ValueError, "SyncDeltaStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInfoFieldData>(self);
    CThostFtdcSyncDeltaInfoField *data = &(extra->data);
    data->SyncDeltaStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 追平描述
/// typedef char TThostFtdcSyncDescriptionType[257]
static PyObject *PyCThostFtdcSyncDeltaInfoFieldType_get_SyncDescription(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInfoFieldData>(self);
    CThostFtdcSyncDeltaInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->SyncDescription, (Py_ssize_t)sizeof(data->SyncDescription));
    return PyBytes_FromString(data->SyncDescription);
}

static int PyCThostFtdcSyncDeltaInfoFieldType_set_SyncDescription(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SyncDescription Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInfoField::SyncDescription)) {
        PyErr_SetString(PyExc_ValueError, "SyncDescription must be less than 256 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInfoFieldData>(self);
    CThostFtdcSyncDeltaInfoField *data = &(extra->data);
    // memset(data->SyncDescription, 0, sizeof(data->SyncDescription));
    // memcpy(data->SyncDescription, buf, len);
    strncpy(data->SyncDescription, buf, sizeof(data->SyncDescription));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaInfoFieldType_members[] = {
    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "SyncDeltaSequenceNo",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInfoFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    /// 是否只有资金追平
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsOnlyTrdDelta",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInfoFieldData, data.IsOnlyTrdDelta),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否只有资金追平")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaInfoFieldType_getsets[] = {
    /// 追平状态
    /// typedef char TThostFtdcSyncDeltaStatusType
    {
    .name = "SyncDeltaStatus",
    .get = PyCThostFtdcSyncDeltaInfoFieldType_get_SyncDeltaStatus,
    .set = PyCThostFtdcSyncDeltaInfoFieldType_set_SyncDeltaStatus,
    .doc = PyDoc_STR("追平状态"),
    },
    /// 追平描述
    /// typedef char TThostFtdcSyncDescriptionType[257]
    {
    .name = "SyncDescription",
    .get = PyCThostFtdcSyncDeltaInfoFieldType_get_SyncDescription,
    .set = PyCThostFtdcSyncDeltaInfoFieldType_set_SyncDescription,
    .doc = PyDoc_STR("追平描述"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaInfoFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaInfoField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算追平信息")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaInfoFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaInfoFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaInfoFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaInfoFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaInfoFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaInfoFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算追平信息")},
    {Py_tp_members, PyCThostFtdcSyncDeltaInfoFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaInfoFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaInfoFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaInfoFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaInfoFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaInfoField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaInfoFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaInfoFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaInfoFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaInfoFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaInfoFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaInfoFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaInfoFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaInfoFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaInfoField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaInfoField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}