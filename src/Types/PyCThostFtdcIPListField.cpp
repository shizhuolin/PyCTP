
#include "PyCThostFtdcIPListField.h"

///IP列表

static int PyCThostFtdcIPListFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "IsWhite", "IPAddress", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcIPListField_reserve1 = NULL;
    Py_ssize_t CThostFtdcIPListField_reserve1_length = 0;

    /// 是否白名单
    /// typedef int TThostFtdcBoolType
    int CThostFtdcIPListField_IsWhite = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcIPListField_IPAddress = NULL;
    Py_ssize_t CThostFtdcIPListField_IPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#iy#", (char **)kwlist
        , &CThostFtdcIPListField_reserve1, &CThostFtdcIPListField_reserve1_length
        , &CThostFtdcIPListField_IsWhite
        , &CThostFtdcIPListField_IPAddress, &CThostFtdcIPListField_IPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcIPListFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcIPListFieldData>(self);
    CThostFtdcIPListField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcIPListField_reserve1 != NULL ) {
        if(CThostFtdcIPListField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 15)", CThostFtdcIPListField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcIPListField_reserve1, CThostFtdcIPListField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcIPListField_reserve1, sizeof(data->reserve1));
        CThostFtdcIPListField_reserve1 = NULL;
    }

    /// 是否白名单
    /// typedef int TThostFtdcBoolType
    data->IsWhite = CThostFtdcIPListField_IsWhite;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcIPListField_IPAddress != NULL ) {
        if(CThostFtdcIPListField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcIPListField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcIPListField_IPAddress, CThostFtdcIPListField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcIPListField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcIPListField_IPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcIPListFieldType_repr(PyObject *self) {

    PyCThostFtdcIPListFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcIPListFieldData>(self);
    CThostFtdcIPListField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:i,s:y}"
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "IsWhite", data->IsWhite
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcIPListField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcIPListField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcIPListFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcIPListFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcIPListFieldData>(self);
    CThostFtdcIPListField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcIPListFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcIPListField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcIPListFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcIPListFieldData>(self);
    CThostFtdcIPListField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcIPListFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcIPListFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcIPListFieldData>(self);
    CThostFtdcIPListField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcIPListFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcIPListField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcIPListFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcIPListFieldData>(self);
    CThostFtdcIPListField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcIPListFieldType_members[] = {
    /// 是否白名单
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsWhite",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcIPListFieldData, data.IsWhite),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否白名单")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcIPListFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve1",
    .get = PyCThostFtdcIPListFieldType_get_reserve1,
    .set = PyCThostFtdcIPListFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcIPListFieldType_get_IPAddress,
    .set = PyCThostFtdcIPListFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcIPListFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcIPListField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("IP列表")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcIPListFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcIPListFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcIPListFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcIPListFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcIPListFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcIPListFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("IP列表")},
    {Py_tp_members, PyCThostFtdcIPListFieldType_members},
    {Py_tp_getset, PyCThostFtdcIPListFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcIPListFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcIPListFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcIPListFieldType_spec = {
    .name = "PyCTP.CThostFtdcIPListField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcIPListFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcIPListFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcIPListFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcIPListFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcIPListFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcIPListFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcIPListFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcIPListFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcIPListField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcIPListField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}