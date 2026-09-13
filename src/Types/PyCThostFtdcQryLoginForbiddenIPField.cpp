
#include "PyCThostFtdcQryLoginForbiddenIPField.h"

///查询禁止登录IP

static int PyCThostFtdcQryLoginForbiddenIPFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "IPAddress", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcQryLoginForbiddenIPField_reserve1 = NULL;
    Py_ssize_t CThostFtdcQryLoginForbiddenIPField_reserve1_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcQryLoginForbiddenIPField_IPAddress = NULL;
    Py_ssize_t CThostFtdcQryLoginForbiddenIPField_IPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
        , &CThostFtdcQryLoginForbiddenIPField_reserve1, &CThostFtdcQryLoginForbiddenIPField_reserve1_length
        , &CThostFtdcQryLoginForbiddenIPField_IPAddress, &CThostFtdcQryLoginForbiddenIPField_IPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcQryLoginForbiddenIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryLoginForbiddenIPFieldData>(self);
    CThostFtdcQryLoginForbiddenIPField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcQryLoginForbiddenIPField_reserve1 != NULL ) {
        if(CThostFtdcQryLoginForbiddenIPField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 15)", CThostFtdcQryLoginForbiddenIPField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcQryLoginForbiddenIPField_reserve1, CThostFtdcQryLoginForbiddenIPField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcQryLoginForbiddenIPField_reserve1, sizeof(data->reserve1));
        CThostFtdcQryLoginForbiddenIPField_reserve1 = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcQryLoginForbiddenIPField_IPAddress != NULL ) {
        if(CThostFtdcQryLoginForbiddenIPField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcQryLoginForbiddenIPField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcQryLoginForbiddenIPField_IPAddress, CThostFtdcQryLoginForbiddenIPField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcQryLoginForbiddenIPField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcQryLoginForbiddenIPField_IPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryLoginForbiddenIPFieldType_repr(PyObject *self) {

    PyCThostFtdcQryLoginForbiddenIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryLoginForbiddenIPFieldData>(self);
    CThostFtdcQryLoginForbiddenIPField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y}"
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryLoginForbiddenIPField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryLoginForbiddenIPField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcQryLoginForbiddenIPFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcQryLoginForbiddenIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryLoginForbiddenIPFieldData>(self);
    CThostFtdcQryLoginForbiddenIPField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcQryLoginForbiddenIPFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryLoginForbiddenIPField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryLoginForbiddenIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryLoginForbiddenIPFieldData>(self);
    CThostFtdcQryLoginForbiddenIPField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcQryLoginForbiddenIPFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcQryLoginForbiddenIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryLoginForbiddenIPFieldData>(self);
    CThostFtdcQryLoginForbiddenIPField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcQryLoginForbiddenIPFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryLoginForbiddenIPField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryLoginForbiddenIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryLoginForbiddenIPFieldData>(self);
    CThostFtdcQryLoginForbiddenIPField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryLoginForbiddenIPFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryLoginForbiddenIPFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve1",
    .get = PyCThostFtdcQryLoginForbiddenIPFieldType_get_reserve1,
    .set = PyCThostFtdcQryLoginForbiddenIPFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcQryLoginForbiddenIPFieldType_get_IPAddress,
    .set = PyCThostFtdcQryLoginForbiddenIPFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryLoginForbiddenIPFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryLoginForbiddenIPField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询禁止登录IP")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryLoginForbiddenIPFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryLoginForbiddenIPFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryLoginForbiddenIPFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryLoginForbiddenIPFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryLoginForbiddenIPFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryLoginForbiddenIPFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询禁止登录IP")},
    {Py_tp_members, PyCThostFtdcQryLoginForbiddenIPFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryLoginForbiddenIPFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryLoginForbiddenIPFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryLoginForbiddenIPFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryLoginForbiddenIPFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryLoginForbiddenIPField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryLoginForbiddenIPFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryLoginForbiddenIPFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryLoginForbiddenIPFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryLoginForbiddenIPFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryLoginForbiddenIPFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryLoginForbiddenIPFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryLoginForbiddenIPFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryLoginForbiddenIPFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryLoginForbiddenIPField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryLoginForbiddenIPField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}