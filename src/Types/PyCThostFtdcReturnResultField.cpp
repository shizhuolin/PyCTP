
#include "PyCThostFtdcReturnResultField.h"

///返回结果

static int PyCThostFtdcReturnResultFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ReturnCode", "DescrInfoForReturnCode", NULL };


    /// 返回代码
    /// typedef char TThostFtdcReturnCodeType[7]
    char *CThostFtdcReturnResultField_ReturnCode = NULL;
    Py_ssize_t CThostFtdcReturnResultField_ReturnCode_length = 0;

    /// 返回码描述
    /// typedef char TThostFtdcDescrInfoForReturnCodeType[129]
    char *CThostFtdcReturnResultField_DescrInfoForReturnCode = NULL;
    Py_ssize_t CThostFtdcReturnResultField_DescrInfoForReturnCode_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
        , &CThostFtdcReturnResultField_ReturnCode, &CThostFtdcReturnResultField_ReturnCode_length
        , &CThostFtdcReturnResultField_DescrInfoForReturnCode, &CThostFtdcReturnResultField_DescrInfoForReturnCode_length
    )) {
        return -1;
    }

    PyCThostFtdcReturnResultFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReturnResultFieldData>(self);
    CThostFtdcReturnResultField *data = &(extra->data);


    /// 返回代码
    /// typedef char TThostFtdcReturnCodeType[7]
    if( CThostFtdcReturnResultField_ReturnCode != NULL ) {
        if(CThostFtdcReturnResultField_ReturnCode_length >= (Py_ssize_t)sizeof(data->ReturnCode)) {
            PyErr_Format(PyExc_ValueError, "ReturnCode too long: length=%zd (max allowed is 6)", CThostFtdcReturnResultField_ReturnCode_length);
            return -1;
        }
        // memset(data->ReturnCode, 0, sizeof(data->ReturnCode));
        // memcpy(data->ReturnCode, CThostFtdcReturnResultField_ReturnCode, CThostFtdcReturnResultField_ReturnCode_length);
        strncpy(data->ReturnCode, CThostFtdcReturnResultField_ReturnCode, sizeof(data->ReturnCode));
        CThostFtdcReturnResultField_ReturnCode = NULL;
    }

    /// 返回码描述
    /// typedef char TThostFtdcDescrInfoForReturnCodeType[129]
    if( CThostFtdcReturnResultField_DescrInfoForReturnCode != NULL ) {
        if(CThostFtdcReturnResultField_DescrInfoForReturnCode_length >= (Py_ssize_t)sizeof(data->DescrInfoForReturnCode)) {
            PyErr_Format(PyExc_ValueError, "DescrInfoForReturnCode too long: length=%zd (max allowed is 128)", CThostFtdcReturnResultField_DescrInfoForReturnCode_length);
            return -1;
        }
        // memset(data->DescrInfoForReturnCode, 0, sizeof(data->DescrInfoForReturnCode));
        // memcpy(data->DescrInfoForReturnCode, CThostFtdcReturnResultField_DescrInfoForReturnCode, CThostFtdcReturnResultField_DescrInfoForReturnCode_length);
        strncpy(data->DescrInfoForReturnCode, CThostFtdcReturnResultField_DescrInfoForReturnCode, sizeof(data->DescrInfoForReturnCode));
        CThostFtdcReturnResultField_DescrInfoForReturnCode = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcReturnResultFieldType_repr(PyObject *self) {

    PyCThostFtdcReturnResultFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReturnResultFieldData>(self);
    CThostFtdcReturnResultField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y}"
        , "ReturnCode", data->ReturnCode//, (Py_ssize_t)sizeof(data->ReturnCode)
        , "DescrInfoForReturnCode", data->DescrInfoForReturnCode//, (Py_ssize_t)sizeof(data->DescrInfoForReturnCode)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReturnResultField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReturnResultField repr");
        return NULL;
    }

    return repr;
}


/// 返回代码
/// typedef char TThostFtdcReturnCodeType[7]
static PyObject *PyCThostFtdcReturnResultFieldType_get_ReturnCode(PyObject *self, void *closure) {
    PyCThostFtdcReturnResultFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReturnResultFieldData>(self);
    CThostFtdcReturnResultField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ReturnCode, (Py_ssize_t)sizeof(data->ReturnCode));
    return PyBytes_FromString(data->ReturnCode);
}

static int PyCThostFtdcReturnResultFieldType_set_ReturnCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ReturnCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReturnResultField::ReturnCode)) {
        PyErr_SetString(PyExc_ValueError, "ReturnCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReturnResultFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReturnResultFieldData>(self);
    CThostFtdcReturnResultField *data = &(extra->data);
    // memset(data->ReturnCode, 0, sizeof(data->ReturnCode));
    // memcpy(data->ReturnCode, buf, len);
    strncpy(data->ReturnCode, buf, sizeof(data->ReturnCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 返回码描述
/// typedef char TThostFtdcDescrInfoForReturnCodeType[129]
static PyObject *PyCThostFtdcReturnResultFieldType_get_DescrInfoForReturnCode(PyObject *self, void *closure) {
    PyCThostFtdcReturnResultFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReturnResultFieldData>(self);
    CThostFtdcReturnResultField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->DescrInfoForReturnCode, (Py_ssize_t)sizeof(data->DescrInfoForReturnCode));
    return PyBytes_FromString(data->DescrInfoForReturnCode);
}

static int PyCThostFtdcReturnResultFieldType_set_DescrInfoForReturnCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DescrInfoForReturnCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReturnResultField::DescrInfoForReturnCode)) {
        PyErr_SetString(PyExc_ValueError, "DescrInfoForReturnCode must be less than 128 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReturnResultFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReturnResultFieldData>(self);
    CThostFtdcReturnResultField *data = &(extra->data);
    // memset(data->DescrInfoForReturnCode, 0, sizeof(data->DescrInfoForReturnCode));
    // memcpy(data->DescrInfoForReturnCode, buf, len);
    strncpy(data->DescrInfoForReturnCode, buf, sizeof(data->DescrInfoForReturnCode));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcReturnResultFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcReturnResultFieldType_getsets[] = {
    /// 返回代码
    /// typedef char TThostFtdcReturnCodeType[7]
    {
    .name = "ReturnCode",
    .get = PyCThostFtdcReturnResultFieldType_get_ReturnCode,
    .set = PyCThostFtdcReturnResultFieldType_set_ReturnCode,
    .doc = PyDoc_STR("返回代码"),
    },
    /// 返回码描述
    /// typedef char TThostFtdcDescrInfoForReturnCodeType[129]
    {
    .name = "DescrInfoForReturnCode",
    .get = PyCThostFtdcReturnResultFieldType_get_DescrInfoForReturnCode,
    .set = PyCThostFtdcReturnResultFieldType_set_DescrInfoForReturnCode,
    .doc = PyDoc_STR("返回码描述"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcReturnResultFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcReturnResultField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("返回结果")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcReturnResultFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcReturnResultFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcReturnResultFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcReturnResultFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcReturnResultFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcReturnResultFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("返回结果")},
    {Py_tp_members, PyCThostFtdcReturnResultFieldType_members},
    {Py_tp_getset, PyCThostFtdcReturnResultFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcReturnResultFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcReturnResultFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcReturnResultFieldType_spec = {
    .name = "PyCTP.CThostFtdcReturnResultField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcReturnResultFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcReturnResultFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcReturnResultFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcReturnResultFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcReturnResultFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcReturnResultFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcReturnResultFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcReturnResultFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcReturnResultField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReturnResultField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}