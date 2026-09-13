
#include "PyCThostFtdcQryIPListField.h"

///查询IP列表

static int PyCThostFtdcQryIPListFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "IPAddress", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcQryIPListField_reserve1 = NULL;
    Py_ssize_t CThostFtdcQryIPListField_reserve1_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcQryIPListField_IPAddress = NULL;
    Py_ssize_t CThostFtdcQryIPListField_IPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
        , &CThostFtdcQryIPListField_reserve1, &CThostFtdcQryIPListField_reserve1_length
        , &CThostFtdcQryIPListField_IPAddress, &CThostFtdcQryIPListField_IPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcQryIPListFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryIPListFieldData>(self);
    CThostFtdcQryIPListField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcQryIPListField_reserve1 != NULL ) {
        if(CThostFtdcQryIPListField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 15)", CThostFtdcQryIPListField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcQryIPListField_reserve1, CThostFtdcQryIPListField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcQryIPListField_reserve1, sizeof(data->reserve1));
        CThostFtdcQryIPListField_reserve1 = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcQryIPListField_IPAddress != NULL ) {
        if(CThostFtdcQryIPListField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcQryIPListField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcQryIPListField_IPAddress, CThostFtdcQryIPListField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcQryIPListField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcQryIPListField_IPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryIPListFieldType_repr(PyObject *self) {

    PyCThostFtdcQryIPListFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryIPListFieldData>(self);
    CThostFtdcQryIPListField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y}"
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryIPListField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryIPListField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcQryIPListFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcQryIPListFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryIPListFieldData>(self);
    CThostFtdcQryIPListField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcQryIPListFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryIPListField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryIPListFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryIPListFieldData>(self);
    CThostFtdcQryIPListField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcQryIPListFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcQryIPListFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryIPListFieldData>(self);
    CThostFtdcQryIPListField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcQryIPListFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryIPListField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryIPListFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryIPListFieldData>(self);
    CThostFtdcQryIPListField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryIPListFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryIPListFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve1",
    .get = PyCThostFtdcQryIPListFieldType_get_reserve1,
    .set = PyCThostFtdcQryIPListFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcQryIPListFieldType_get_IPAddress,
    .set = PyCThostFtdcQryIPListFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryIPListFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryIPListField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询IP列表")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryIPListFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryIPListFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryIPListFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryIPListFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryIPListFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryIPListFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询IP列表")},
    {Py_tp_members, PyCThostFtdcQryIPListFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryIPListFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryIPListFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryIPListFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryIPListFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryIPListField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryIPListFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryIPListFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryIPListFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryIPListFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryIPListFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryIPListFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryIPListFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryIPListFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryIPListField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryIPListField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}