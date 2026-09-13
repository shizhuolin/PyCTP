
#include "PyCThostFtdcQryMulticastInstrumentField.h"

///QryMulticastInstrument

static int PyCThostFtdcQryMulticastInstrumentFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TopicID", "reserve1", "InstrumentID", NULL };


    /// 主题号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcQryMulticastInstrumentField_TopicID = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcQryMulticastInstrumentField_reserve1 = NULL;
    Py_ssize_t CThostFtdcQryMulticastInstrumentField_reserve1_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryMulticastInstrumentField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcQryMulticastInstrumentField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iy#y#", (char **)kwlist
        , &CThostFtdcQryMulticastInstrumentField_TopicID
        , &CThostFtdcQryMulticastInstrumentField_reserve1, &CThostFtdcQryMulticastInstrumentField_reserve1_length
        , &CThostFtdcQryMulticastInstrumentField_InstrumentID, &CThostFtdcQryMulticastInstrumentField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryMulticastInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMulticastInstrumentFieldData>(self);
    CThostFtdcQryMulticastInstrumentField *data = &(extra->data);


    /// 主题号
    /// typedef int TThostFtdcInstallIDType
    data->TopicID = CThostFtdcQryMulticastInstrumentField_TopicID;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcQryMulticastInstrumentField_reserve1 != NULL ) {
        if(CThostFtdcQryMulticastInstrumentField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcQryMulticastInstrumentField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcQryMulticastInstrumentField_reserve1, CThostFtdcQryMulticastInstrumentField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcQryMulticastInstrumentField_reserve1, sizeof(data->reserve1));
        CThostFtdcQryMulticastInstrumentField_reserve1 = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryMulticastInstrumentField_InstrumentID != NULL ) {
        if(CThostFtdcQryMulticastInstrumentField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQryMulticastInstrumentField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcQryMulticastInstrumentField_InstrumentID, CThostFtdcQryMulticastInstrumentField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcQryMulticastInstrumentField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcQryMulticastInstrumentField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryMulticastInstrumentFieldType_repr(PyObject *self) {

    PyCThostFtdcQryMulticastInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMulticastInstrumentFieldData>(self);
    CThostFtdcQryMulticastInstrumentField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:i,s:y,s:y}"
        , "TopicID", data->TopicID
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryMulticastInstrumentField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryMulticastInstrumentField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcQryMulticastInstrumentFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcQryMulticastInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMulticastInstrumentFieldData>(self);
    CThostFtdcQryMulticastInstrumentField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcQryMulticastInstrumentFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryMulticastInstrumentField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryMulticastInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMulticastInstrumentFieldData>(self);
    CThostFtdcQryMulticastInstrumentField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryMulticastInstrumentFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQryMulticastInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMulticastInstrumentFieldData>(self);
    CThostFtdcQryMulticastInstrumentField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcQryMulticastInstrumentFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryMulticastInstrumentField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryMulticastInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMulticastInstrumentFieldData>(self);
    CThostFtdcQryMulticastInstrumentField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryMulticastInstrumentFieldType_members[] = {
    /// 主题号
    /// typedef int TThostFtdcInstallIDType
    {
        .name = "TopicID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcQryMulticastInstrumentFieldData, data.TopicID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("主题号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryMulticastInstrumentFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcQryMulticastInstrumentFieldType_get_reserve1,
    .set = PyCThostFtdcQryMulticastInstrumentFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcQryMulticastInstrumentFieldType_get_InstrumentID,
    .set = PyCThostFtdcQryMulticastInstrumentFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryMulticastInstrumentFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryMulticastInstrumentField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("QryMulticastInstrument")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryMulticastInstrumentFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryMulticastInstrumentFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryMulticastInstrumentFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryMulticastInstrumentFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryMulticastInstrumentFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryMulticastInstrumentFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("QryMulticastInstrument")},
    {Py_tp_members, PyCThostFtdcQryMulticastInstrumentFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryMulticastInstrumentFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryMulticastInstrumentFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryMulticastInstrumentFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryMulticastInstrumentFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryMulticastInstrumentField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryMulticastInstrumentFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryMulticastInstrumentFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryMulticastInstrumentFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryMulticastInstrumentFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryMulticastInstrumentFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryMulticastInstrumentFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryMulticastInstrumentFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryMulticastInstrumentFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryMulticastInstrumentField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryMulticastInstrumentField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}