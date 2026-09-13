
#include "PyCThostFtdcReqVerifyApiKeyField.h"

///api给front的验证key的请求

static int PyCThostFtdcReqVerifyApiKeyFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ApiHandshakeDataLen", "ApiHandshakeData", NULL };


    /// 握手回复数据长度
    /// typedef int TThostFtdcHandshakeDataLenType
    int CThostFtdcReqVerifyApiKeyField_ApiHandshakeDataLen = 0;

    /// 握手回复数据
    /// typedef char TThostFtdcHandshakeDataType[301]
    char *CThostFtdcReqVerifyApiKeyField_ApiHandshakeData = NULL;
    Py_ssize_t CThostFtdcReqVerifyApiKeyField_ApiHandshakeData_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iy#", (char **)kwlist
        , &CThostFtdcReqVerifyApiKeyField_ApiHandshakeDataLen
        , &CThostFtdcReqVerifyApiKeyField_ApiHandshakeData, &CThostFtdcReqVerifyApiKeyField_ApiHandshakeData_length
    )) {
        return -1;
    }

    PyCThostFtdcReqVerifyApiKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqVerifyApiKeyFieldData>(self);
    CThostFtdcReqVerifyApiKeyField *data = &(extra->data);


    /// 握手回复数据长度
    /// typedef int TThostFtdcHandshakeDataLenType
    data->ApiHandshakeDataLen = CThostFtdcReqVerifyApiKeyField_ApiHandshakeDataLen;

    /// 握手回复数据
    /// typedef char TThostFtdcHandshakeDataType[301]
    if( CThostFtdcReqVerifyApiKeyField_ApiHandshakeData != NULL ) {
        if(CThostFtdcReqVerifyApiKeyField_ApiHandshakeData_length >= (Py_ssize_t)sizeof(data->ApiHandshakeData)) {
            PyErr_Format(PyExc_ValueError, "ApiHandshakeData too long: length=%zd (max allowed is 300)", CThostFtdcReqVerifyApiKeyField_ApiHandshakeData_length);
            return -1;
        }
        // memset(data->ApiHandshakeData, 0, sizeof(data->ApiHandshakeData));
        // memcpy(data->ApiHandshakeData, CThostFtdcReqVerifyApiKeyField_ApiHandshakeData, CThostFtdcReqVerifyApiKeyField_ApiHandshakeData_length);
        strncpy(data->ApiHandshakeData, CThostFtdcReqVerifyApiKeyField_ApiHandshakeData, sizeof(data->ApiHandshakeData));
        CThostFtdcReqVerifyApiKeyField_ApiHandshakeData = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcReqVerifyApiKeyFieldType_repr(PyObject *self) {

    PyCThostFtdcReqVerifyApiKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqVerifyApiKeyFieldData>(self);
    CThostFtdcReqVerifyApiKeyField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:i,s:y}"
        , "ApiHandshakeDataLen", data->ApiHandshakeDataLen
        , "ApiHandshakeData", data->ApiHandshakeData//, (Py_ssize_t)sizeof(data->ApiHandshakeData)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqVerifyApiKeyField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqVerifyApiKeyField repr");
        return NULL;
    }

    return repr;
}


/// 握手回复数据
/// typedef char TThostFtdcHandshakeDataType[301]
static PyObject *PyCThostFtdcReqVerifyApiKeyFieldType_get_ApiHandshakeData(PyObject *self, void *closure) {
    PyCThostFtdcReqVerifyApiKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqVerifyApiKeyFieldData>(self);
    CThostFtdcReqVerifyApiKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ApiHandshakeData, (Py_ssize_t)sizeof(data->ApiHandshakeData));
    return PyBytes_FromString(data->ApiHandshakeData);
}

static int PyCThostFtdcReqVerifyApiKeyFieldType_set_ApiHandshakeData(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ApiHandshakeData Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqVerifyApiKeyField::ApiHandshakeData)) {
        PyErr_SetString(PyExc_ValueError, "ApiHandshakeData must be less than 300 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqVerifyApiKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqVerifyApiKeyFieldData>(self);
    CThostFtdcReqVerifyApiKeyField *data = &(extra->data);
    // memset(data->ApiHandshakeData, 0, sizeof(data->ApiHandshakeData));
    // memcpy(data->ApiHandshakeData, buf, len);
    strncpy(data->ApiHandshakeData, buf, sizeof(data->ApiHandshakeData));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcReqVerifyApiKeyFieldType_members[] = {
    /// 握手回复数据长度
    /// typedef int TThostFtdcHandshakeDataLenType
    {
        .name = "ApiHandshakeDataLen",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcReqVerifyApiKeyFieldData, data.ApiHandshakeDataLen),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("握手回复数据长度")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcReqVerifyApiKeyFieldType_getsets[] = {
    /// 握手回复数据
    /// typedef char TThostFtdcHandshakeDataType[301]
    {
    .name = "ApiHandshakeData",
    .get = PyCThostFtdcReqVerifyApiKeyFieldType_get_ApiHandshakeData,
    .set = PyCThostFtdcReqVerifyApiKeyFieldType_set_ApiHandshakeData,
    .doc = PyDoc_STR("握手回复数据"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcReqVerifyApiKeyFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcReqVerifyApiKeyField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("api给front的验证key的请求")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcReqVerifyApiKeyFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcReqVerifyApiKeyFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcReqVerifyApiKeyFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcReqVerifyApiKeyFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcReqVerifyApiKeyFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcReqVerifyApiKeyFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("api给front的验证key的请求")},
    {Py_tp_members, PyCThostFtdcReqVerifyApiKeyFieldType_members},
    {Py_tp_getset, PyCThostFtdcReqVerifyApiKeyFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcReqVerifyApiKeyFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcReqVerifyApiKeyFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcReqVerifyApiKeyFieldType_spec = {
    .name = "PyCTP.CThostFtdcReqVerifyApiKeyField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcReqVerifyApiKeyFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcReqVerifyApiKeyFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcReqVerifyApiKeyFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcReqVerifyApiKeyFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcReqVerifyApiKeyFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcReqVerifyApiKeyFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcReqVerifyApiKeyFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcReqVerifyApiKeyFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcReqVerifyApiKeyField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqVerifyApiKeyField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}