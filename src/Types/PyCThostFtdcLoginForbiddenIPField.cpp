
#include "PyCThostFtdcLoginForbiddenIPField.h"

///禁止登录IP

static int PyCThostFtdcLoginForbiddenIPFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "IPAddress", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcLoginForbiddenIPField_reserve1 = NULL;
    Py_ssize_t CThostFtdcLoginForbiddenIPField_reserve1_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcLoginForbiddenIPField_IPAddress = NULL;
    Py_ssize_t CThostFtdcLoginForbiddenIPField_IPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
        , &CThostFtdcLoginForbiddenIPField_reserve1, &CThostFtdcLoginForbiddenIPField_reserve1_length
        , &CThostFtdcLoginForbiddenIPField_IPAddress, &CThostFtdcLoginForbiddenIPField_IPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcLoginForbiddenIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginForbiddenIPFieldData>(self);
    CThostFtdcLoginForbiddenIPField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcLoginForbiddenIPField_reserve1 != NULL ) {
        if(CThostFtdcLoginForbiddenIPField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 15)", CThostFtdcLoginForbiddenIPField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcLoginForbiddenIPField_reserve1, CThostFtdcLoginForbiddenIPField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcLoginForbiddenIPField_reserve1, sizeof(data->reserve1));
        CThostFtdcLoginForbiddenIPField_reserve1 = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcLoginForbiddenIPField_IPAddress != NULL ) {
        if(CThostFtdcLoginForbiddenIPField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcLoginForbiddenIPField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcLoginForbiddenIPField_IPAddress, CThostFtdcLoginForbiddenIPField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcLoginForbiddenIPField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcLoginForbiddenIPField_IPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcLoginForbiddenIPFieldType_repr(PyObject *self) {

    PyCThostFtdcLoginForbiddenIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginForbiddenIPFieldData>(self);
    CThostFtdcLoginForbiddenIPField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y}"
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcLoginForbiddenIPField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcLoginForbiddenIPField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcLoginForbiddenIPFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcLoginForbiddenIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginForbiddenIPFieldData>(self);
    CThostFtdcLoginForbiddenIPField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcLoginForbiddenIPFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLoginForbiddenIPField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLoginForbiddenIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginForbiddenIPFieldData>(self);
    CThostFtdcLoginForbiddenIPField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcLoginForbiddenIPFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcLoginForbiddenIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginForbiddenIPFieldData>(self);
    CThostFtdcLoginForbiddenIPField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcLoginForbiddenIPFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLoginForbiddenIPField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLoginForbiddenIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginForbiddenIPFieldData>(self);
    CThostFtdcLoginForbiddenIPField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcLoginForbiddenIPFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcLoginForbiddenIPFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve1",
    .get = PyCThostFtdcLoginForbiddenIPFieldType_get_reserve1,
    .set = PyCThostFtdcLoginForbiddenIPFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcLoginForbiddenIPFieldType_get_IPAddress,
    .set = PyCThostFtdcLoginForbiddenIPFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcLoginForbiddenIPFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcLoginForbiddenIPField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("禁止登录IP")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcLoginForbiddenIPFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcLoginForbiddenIPFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcLoginForbiddenIPFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcLoginForbiddenIPFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcLoginForbiddenIPFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcLoginForbiddenIPFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("禁止登录IP")},
    {Py_tp_members, PyCThostFtdcLoginForbiddenIPFieldType_members},
    {Py_tp_getset, PyCThostFtdcLoginForbiddenIPFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcLoginForbiddenIPFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcLoginForbiddenIPFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcLoginForbiddenIPFieldType_spec = {
    .name = "PyCTP.CThostFtdcLoginForbiddenIPField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcLoginForbiddenIPFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcLoginForbiddenIPFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcLoginForbiddenIPFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcLoginForbiddenIPFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcLoginForbiddenIPFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcLoginForbiddenIPFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcLoginForbiddenIPFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcLoginForbiddenIPFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcLoginForbiddenIPField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcLoginForbiddenIPField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}