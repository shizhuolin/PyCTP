
#include "PyCThostFtdcQryAuthForbiddenIPField.h"

///查询禁止认证IP

static int PyCThostFtdcQryAuthForbiddenIPFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "IPAddress", NULL };


    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcQryAuthForbiddenIPField_IPAddress = NULL;
    Py_ssize_t CThostFtdcQryAuthForbiddenIPField_IPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
        , &CThostFtdcQryAuthForbiddenIPField_IPAddress, &CThostFtdcQryAuthForbiddenIPField_IPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcQryAuthForbiddenIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryAuthForbiddenIPFieldData>(self);
    CThostFtdcQryAuthForbiddenIPField *data = &(extra->data);


    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcQryAuthForbiddenIPField_IPAddress != NULL ) {
        if(CThostFtdcQryAuthForbiddenIPField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcQryAuthForbiddenIPField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcQryAuthForbiddenIPField_IPAddress, CThostFtdcQryAuthForbiddenIPField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcQryAuthForbiddenIPField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcQryAuthForbiddenIPField_IPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryAuthForbiddenIPFieldType_repr(PyObject *self) {

    PyCThostFtdcQryAuthForbiddenIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryAuthForbiddenIPFieldData>(self);
    CThostFtdcQryAuthForbiddenIPField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y}"
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryAuthForbiddenIPField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryAuthForbiddenIPField repr");
        return NULL;
    }

    return repr;
}


/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcQryAuthForbiddenIPFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcQryAuthForbiddenIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryAuthForbiddenIPFieldData>(self);
    CThostFtdcQryAuthForbiddenIPField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcQryAuthForbiddenIPFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryAuthForbiddenIPField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryAuthForbiddenIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryAuthForbiddenIPFieldData>(self);
    CThostFtdcQryAuthForbiddenIPField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryAuthForbiddenIPFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryAuthForbiddenIPFieldType_getsets[] = {
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcQryAuthForbiddenIPFieldType_get_IPAddress,
    .set = PyCThostFtdcQryAuthForbiddenIPFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryAuthForbiddenIPFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryAuthForbiddenIPField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询禁止认证IP")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryAuthForbiddenIPFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryAuthForbiddenIPFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryAuthForbiddenIPFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryAuthForbiddenIPFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryAuthForbiddenIPFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryAuthForbiddenIPFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询禁止认证IP")},
    {Py_tp_members, PyCThostFtdcQryAuthForbiddenIPFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryAuthForbiddenIPFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryAuthForbiddenIPFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryAuthForbiddenIPFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryAuthForbiddenIPFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryAuthForbiddenIPField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryAuthForbiddenIPFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryAuthForbiddenIPFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryAuthForbiddenIPFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryAuthForbiddenIPFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryAuthForbiddenIPFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryAuthForbiddenIPFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryAuthForbiddenIPFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryAuthForbiddenIPFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryAuthForbiddenIPField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryAuthForbiddenIPField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}