
#include "PyCThostFtdcRspApiHandshakeField.h"

///front发给api的握手回复

static int PyCThostFtdcRspApiHandshakeFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "FrontHandshakeDataLen", "FrontHandshakeData", "IsApiAuthEnabled", NULL };


    /// 握手回复数据长度
    /// typedef int TThostFtdcHandshakeDataLenType
    int CThostFtdcRspApiHandshakeField_FrontHandshakeDataLen = 0;

    /// 握手回复数据
    /// typedef char TThostFtdcHandshakeDataType[301]
    char *CThostFtdcRspApiHandshakeField_FrontHandshakeData = NULL;
    Py_ssize_t CThostFtdcRspApiHandshakeField_FrontHandshakeData_length = 0;

    /// API认证是否开启
    /// typedef int TThostFtdcBoolType
    int CThostFtdcRspApiHandshakeField_IsApiAuthEnabled = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iy#i", (char **)kwlist
        , &CThostFtdcRspApiHandshakeField_FrontHandshakeDataLen
        , &CThostFtdcRspApiHandshakeField_FrontHandshakeData, &CThostFtdcRspApiHandshakeField_FrontHandshakeData_length
        , &CThostFtdcRspApiHandshakeField_IsApiAuthEnabled
    )) {
        return -1;
    }

    PyCThostFtdcRspApiHandshakeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspApiHandshakeFieldData>(self);
    CThostFtdcRspApiHandshakeField *data = &(extra->data);


    /// 握手回复数据长度
    /// typedef int TThostFtdcHandshakeDataLenType
    data->FrontHandshakeDataLen = CThostFtdcRspApiHandshakeField_FrontHandshakeDataLen;

    /// 握手回复数据
    /// typedef char TThostFtdcHandshakeDataType[301]
    if( CThostFtdcRspApiHandshakeField_FrontHandshakeData != NULL ) {
        if(CThostFtdcRspApiHandshakeField_FrontHandshakeData_length >= (Py_ssize_t)sizeof(data->FrontHandshakeData)) {
            PyErr_Format(PyExc_ValueError, "FrontHandshakeData too long: length=%zd (max allowed is 300)", CThostFtdcRspApiHandshakeField_FrontHandshakeData_length);
            return -1;
        }
        // memset(data->FrontHandshakeData, 0, sizeof(data->FrontHandshakeData));
        // memcpy(data->FrontHandshakeData, CThostFtdcRspApiHandshakeField_FrontHandshakeData, CThostFtdcRspApiHandshakeField_FrontHandshakeData_length);
        strncpy(data->FrontHandshakeData, CThostFtdcRspApiHandshakeField_FrontHandshakeData, sizeof(data->FrontHandshakeData));
        CThostFtdcRspApiHandshakeField_FrontHandshakeData = NULL;
    }

    /// API认证是否开启
    /// typedef int TThostFtdcBoolType
    data->IsApiAuthEnabled = CThostFtdcRspApiHandshakeField_IsApiAuthEnabled;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcRspApiHandshakeFieldType_repr(PyObject *self) {

    PyCThostFtdcRspApiHandshakeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspApiHandshakeFieldData>(self);
    CThostFtdcRspApiHandshakeField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:i,s:y,s:i}"
        , "FrontHandshakeDataLen", data->FrontHandshakeDataLen
        , "FrontHandshakeData", data->FrontHandshakeData//, (Py_ssize_t)sizeof(data->FrontHandshakeData)
        , "IsApiAuthEnabled", data->IsApiAuthEnabled
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspApiHandshakeField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspApiHandshakeField repr");
        return NULL;
    }

    return repr;
}


/// 握手回复数据
/// typedef char TThostFtdcHandshakeDataType[301]
static PyObject *PyCThostFtdcRspApiHandshakeFieldType_get_FrontHandshakeData(PyObject *self, void *closure) {
    PyCThostFtdcRspApiHandshakeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspApiHandshakeFieldData>(self);
    CThostFtdcRspApiHandshakeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->FrontHandshakeData, (Py_ssize_t)sizeof(data->FrontHandshakeData));
    return PyBytes_FromString(data->FrontHandshakeData);
}

static int PyCThostFtdcRspApiHandshakeFieldType_set_FrontHandshakeData(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FrontHandshakeData Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspApiHandshakeField::FrontHandshakeData)) {
        PyErr_SetString(PyExc_ValueError, "FrontHandshakeData must be less than 300 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspApiHandshakeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspApiHandshakeFieldData>(self);
    CThostFtdcRspApiHandshakeField *data = &(extra->data);
    // memset(data->FrontHandshakeData, 0, sizeof(data->FrontHandshakeData));
    // memcpy(data->FrontHandshakeData, buf, len);
    strncpy(data->FrontHandshakeData, buf, sizeof(data->FrontHandshakeData));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcRspApiHandshakeFieldType_members[] = {
    /// 握手回复数据长度
    /// typedef int TThostFtdcHandshakeDataLenType
    {
        .name = "FrontHandshakeDataLen",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRspApiHandshakeFieldData, data.FrontHandshakeDataLen),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("握手回复数据长度")
    },
    /// API认证是否开启
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsApiAuthEnabled",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRspApiHandshakeFieldData, data.IsApiAuthEnabled),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("API认证是否开启")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcRspApiHandshakeFieldType_getsets[] = {
    /// 握手回复数据
    /// typedef char TThostFtdcHandshakeDataType[301]
    {
    .name = "FrontHandshakeData",
    .get = PyCThostFtdcRspApiHandshakeFieldType_get_FrontHandshakeData,
    .set = PyCThostFtdcRspApiHandshakeFieldType_set_FrontHandshakeData,
    .doc = PyDoc_STR("握手回复数据"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcRspApiHandshakeFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcRspApiHandshakeField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("front发给api的握手回复")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcRspApiHandshakeFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcRspApiHandshakeFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcRspApiHandshakeFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcRspApiHandshakeFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcRspApiHandshakeFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcRspApiHandshakeFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("front发给api的握手回复")},
    {Py_tp_members, PyCThostFtdcRspApiHandshakeFieldType_members},
    {Py_tp_getset, PyCThostFtdcRspApiHandshakeFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcRspApiHandshakeFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcRspApiHandshakeFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcRspApiHandshakeFieldType_spec = {
    .name = "PyCTP.CThostFtdcRspApiHandshakeField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcRspApiHandshakeFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcRspApiHandshakeFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcRspApiHandshakeFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcRspApiHandshakeFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcRspApiHandshakeFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcRspApiHandshakeFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcRspApiHandshakeFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcRspApiHandshakeFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcRspApiHandshakeField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspApiHandshakeField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}