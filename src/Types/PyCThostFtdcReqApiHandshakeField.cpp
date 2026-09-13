
#include "PyCThostFtdcReqApiHandshakeField.h"

///api握手请求

static int PyCThostFtdcReqApiHandshakeFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "CryptoKeyVersion", NULL };


    /// api与front通信密钥版本号
    /// typedef char TThostFtdcCryptoKeyVersionType[31]
    char *CThostFtdcReqApiHandshakeField_CryptoKeyVersion = NULL;
    Py_ssize_t CThostFtdcReqApiHandshakeField_CryptoKeyVersion_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
        , &CThostFtdcReqApiHandshakeField_CryptoKeyVersion, &CThostFtdcReqApiHandshakeField_CryptoKeyVersion_length
    )) {
        return -1;
    }

    PyCThostFtdcReqApiHandshakeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqApiHandshakeFieldData>(self);
    CThostFtdcReqApiHandshakeField *data = &(extra->data);


    /// api与front通信密钥版本号
    /// typedef char TThostFtdcCryptoKeyVersionType[31]
    if( CThostFtdcReqApiHandshakeField_CryptoKeyVersion != NULL ) {
        if(CThostFtdcReqApiHandshakeField_CryptoKeyVersion_length >= (Py_ssize_t)sizeof(data->CryptoKeyVersion)) {
            PyErr_Format(PyExc_ValueError, "CryptoKeyVersion too long: length=%zd (max allowed is 30)", CThostFtdcReqApiHandshakeField_CryptoKeyVersion_length);
            return -1;
        }
        // memset(data->CryptoKeyVersion, 0, sizeof(data->CryptoKeyVersion));
        // memcpy(data->CryptoKeyVersion, CThostFtdcReqApiHandshakeField_CryptoKeyVersion, CThostFtdcReqApiHandshakeField_CryptoKeyVersion_length);
        strncpy(data->CryptoKeyVersion, CThostFtdcReqApiHandshakeField_CryptoKeyVersion, sizeof(data->CryptoKeyVersion));
        CThostFtdcReqApiHandshakeField_CryptoKeyVersion = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcReqApiHandshakeFieldType_repr(PyObject *self) {

    PyCThostFtdcReqApiHandshakeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqApiHandshakeFieldData>(self);
    CThostFtdcReqApiHandshakeField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y}"
        , "CryptoKeyVersion", data->CryptoKeyVersion//, (Py_ssize_t)sizeof(data->CryptoKeyVersion)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqApiHandshakeField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqApiHandshakeField repr");
        return NULL;
    }

    return repr;
}


/// api与front通信密钥版本号
/// typedef char TThostFtdcCryptoKeyVersionType[31]
static PyObject *PyCThostFtdcReqApiHandshakeFieldType_get_CryptoKeyVersion(PyObject *self, void *closure) {
    PyCThostFtdcReqApiHandshakeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqApiHandshakeFieldData>(self);
    CThostFtdcReqApiHandshakeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CryptoKeyVersion, (Py_ssize_t)sizeof(data->CryptoKeyVersion));
    return PyBytes_FromString(data->CryptoKeyVersion);
}

static int PyCThostFtdcReqApiHandshakeFieldType_set_CryptoKeyVersion(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CryptoKeyVersion Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqApiHandshakeField::CryptoKeyVersion)) {
        PyErr_SetString(PyExc_ValueError, "CryptoKeyVersion must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqApiHandshakeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqApiHandshakeFieldData>(self);
    CThostFtdcReqApiHandshakeField *data = &(extra->data);
    // memset(data->CryptoKeyVersion, 0, sizeof(data->CryptoKeyVersion));
    // memcpy(data->CryptoKeyVersion, buf, len);
    strncpy(data->CryptoKeyVersion, buf, sizeof(data->CryptoKeyVersion));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcReqApiHandshakeFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcReqApiHandshakeFieldType_getsets[] = {
    /// api与front通信密钥版本号
    /// typedef char TThostFtdcCryptoKeyVersionType[31]
    {
    .name = "CryptoKeyVersion",
    .get = PyCThostFtdcReqApiHandshakeFieldType_get_CryptoKeyVersion,
    .set = PyCThostFtdcReqApiHandshakeFieldType_set_CryptoKeyVersion,
    .doc = PyDoc_STR("api与front通信密钥版本号"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcReqApiHandshakeFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcReqApiHandshakeField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("api握手请求")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcReqApiHandshakeFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcReqApiHandshakeFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcReqApiHandshakeFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcReqApiHandshakeFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcReqApiHandshakeFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcReqApiHandshakeFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("api握手请求")},
    {Py_tp_members, PyCThostFtdcReqApiHandshakeFieldType_members},
    {Py_tp_getset, PyCThostFtdcReqApiHandshakeFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcReqApiHandshakeFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcReqApiHandshakeFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcReqApiHandshakeFieldType_spec = {
    .name = "PyCTP.CThostFtdcReqApiHandshakeField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcReqApiHandshakeFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcReqApiHandshakeFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcReqApiHandshakeFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcReqApiHandshakeFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcReqApiHandshakeFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcReqApiHandshakeFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcReqApiHandshakeFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcReqApiHandshakeFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcReqApiHandshakeField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqApiHandshakeField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}