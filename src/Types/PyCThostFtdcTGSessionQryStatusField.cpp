
#include "PyCThostFtdcTGSessionQryStatusField.h"

///TGate会话查询状态

static int PyCThostFtdcTGSessionQryStatusFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "LastQryFreq", "QryStatus", NULL };


    /// 最近30s的查询频率
    /// typedef int TThostFtdcCommonIntType
    int CThostFtdcTGSessionQryStatusField_LastQryFreq = 0;

    /// 查询状态
    /// typedef char TThostFtdcTGSessionQryStatusType
    char CThostFtdcTGSessionQryStatusField_QryStatus = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|ic", (char **)kwlist
        , &CThostFtdcTGSessionQryStatusField_LastQryFreq
        , &CThostFtdcTGSessionQryStatusField_QryStatus
    )) {
        return -1;
    }

    PyCThostFtdcTGSessionQryStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTGSessionQryStatusFieldData>(self);
    CThostFtdcTGSessionQryStatusField *data = &(extra->data);


    /// 最近30s的查询频率
    /// typedef int TThostFtdcCommonIntType
    data->LastQryFreq = CThostFtdcTGSessionQryStatusField_LastQryFreq;

    /// 查询状态
    /// typedef char TThostFtdcTGSessionQryStatusType
    data->QryStatus = CThostFtdcTGSessionQryStatusField_QryStatus;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcTGSessionQryStatusFieldType_repr(PyObject *self) {

    PyCThostFtdcTGSessionQryStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTGSessionQryStatusFieldData>(self);
    CThostFtdcTGSessionQryStatusField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:i,s:c}"
        , "LastQryFreq", data->LastQryFreq
        , "QryStatus", data->QryStatus
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTGSessionQryStatusField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTGSessionQryStatusField repr");
        return NULL;
    }

    return repr;
}


/// 查询状态
/// typedef char TThostFtdcTGSessionQryStatusType
static PyObject *PyCThostFtdcTGSessionQryStatusFieldType_get_QryStatus(PyObject *self, void *closure) {
    PyCThostFtdcTGSessionQryStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTGSessionQryStatusFieldData>(self);
    CThostFtdcTGSessionQryStatusField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->QryStatus), 1);
}

static int PyCThostFtdcTGSessionQryStatusFieldType_set_QryStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "QryStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcTGSessionQryStatusField::QryStatus)) {
        PyErr_SetString(PyExc_ValueError, "QryStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTGSessionQryStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTGSessionQryStatusFieldData>(self);
    CThostFtdcTGSessionQryStatusField *data = &(extra->data);
    data->QryStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcTGSessionQryStatusFieldType_members[] = {
    /// 最近30s的查询频率
    /// typedef int TThostFtdcCommonIntType
    {
        .name = "LastQryFreq",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcTGSessionQryStatusFieldData, data.LastQryFreq),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("最近30s的查询频率")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcTGSessionQryStatusFieldType_getsets[] = {
    /// 查询状态
    /// typedef char TThostFtdcTGSessionQryStatusType
    {
    .name = "QryStatus",
    .get = PyCThostFtdcTGSessionQryStatusFieldType_get_QryStatus,
    .set = PyCThostFtdcTGSessionQryStatusFieldType_set_QryStatus,
    .doc = PyDoc_STR("查询状态"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcTGSessionQryStatusFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcTGSessionQryStatusField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("TGate会话查询状态")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcTGSessionQryStatusFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcTGSessionQryStatusFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcTGSessionQryStatusFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcTGSessionQryStatusFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcTGSessionQryStatusFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcTGSessionQryStatusFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("TGate会话查询状态")},
    {Py_tp_members, PyCThostFtdcTGSessionQryStatusFieldType_members},
    {Py_tp_getset, PyCThostFtdcTGSessionQryStatusFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcTGSessionQryStatusFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcTGSessionQryStatusFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcTGSessionQryStatusFieldType_spec = {
    .name = "PyCTP.CThostFtdcTGSessionQryStatusField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcTGSessionQryStatusFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcTGSessionQryStatusFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcTGSessionQryStatusFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcTGSessionQryStatusFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcTGSessionQryStatusFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcTGSessionQryStatusFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcTGSessionQryStatusFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcTGSessionQryStatusFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcTGSessionQryStatusField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTGSessionQryStatusField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}