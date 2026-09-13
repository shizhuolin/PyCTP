
#include "PyCThostFtdcAuthForbiddenIPField.h"

///禁止认证IP

static int PyCThostFtdcAuthForbiddenIPFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "IPAddress", NULL };


    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcAuthForbiddenIPField_IPAddress = NULL;
    Py_ssize_t CThostFtdcAuthForbiddenIPField_IPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
        , &CThostFtdcAuthForbiddenIPField_IPAddress, &CThostFtdcAuthForbiddenIPField_IPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcAuthForbiddenIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthForbiddenIPFieldData>(self);
    CThostFtdcAuthForbiddenIPField *data = &(extra->data);


    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcAuthForbiddenIPField_IPAddress != NULL ) {
        if(CThostFtdcAuthForbiddenIPField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcAuthForbiddenIPField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcAuthForbiddenIPField_IPAddress, CThostFtdcAuthForbiddenIPField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcAuthForbiddenIPField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcAuthForbiddenIPField_IPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcAuthForbiddenIPFieldType_repr(PyObject *self) {

    PyCThostFtdcAuthForbiddenIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthForbiddenIPFieldData>(self);
    CThostFtdcAuthForbiddenIPField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y}"
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcAuthForbiddenIPField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcAuthForbiddenIPField repr");
        return NULL;
    }

    return repr;
}


/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcAuthForbiddenIPFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcAuthForbiddenIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthForbiddenIPFieldData>(self);
    CThostFtdcAuthForbiddenIPField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcAuthForbiddenIPFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAuthForbiddenIPField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAuthForbiddenIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthForbiddenIPFieldData>(self);
    CThostFtdcAuthForbiddenIPField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcAuthForbiddenIPFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcAuthForbiddenIPFieldType_getsets[] = {
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcAuthForbiddenIPFieldType_get_IPAddress,
    .set = PyCThostFtdcAuthForbiddenIPFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcAuthForbiddenIPFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcAuthForbiddenIPField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("禁止认证IP")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcAuthForbiddenIPFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcAuthForbiddenIPFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcAuthForbiddenIPFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcAuthForbiddenIPFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcAuthForbiddenIPFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcAuthForbiddenIPFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("禁止认证IP")},
    {Py_tp_members, PyCThostFtdcAuthForbiddenIPFieldType_members},
    {Py_tp_getset, PyCThostFtdcAuthForbiddenIPFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcAuthForbiddenIPFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcAuthForbiddenIPFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcAuthForbiddenIPFieldType_spec = {
    .name = "PyCTP.CThostFtdcAuthForbiddenIPField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcAuthForbiddenIPFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcAuthForbiddenIPFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcAuthForbiddenIPFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcAuthForbiddenIPFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcAuthForbiddenIPFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcAuthForbiddenIPFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcAuthForbiddenIPFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcAuthForbiddenIPFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcAuthForbiddenIPField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcAuthForbiddenIPField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}