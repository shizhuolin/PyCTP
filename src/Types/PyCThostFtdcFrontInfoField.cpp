
#include "PyCThostFtdcFrontInfoField.h"

///前置信息

static int PyCThostFtdcFrontInfoFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "FrontAddr", "QryFreq", "FTDPkgFreq", NULL };


    /// 前置地址
    /// typedef char TThostFtdcAddressType[101]
    char *CThostFtdcFrontInfoField_FrontAddr = NULL;
    Py_ssize_t CThostFtdcFrontInfoField_FrontAddr_length = 0;

    /// 查询流控
    /// typedef int TThostFtdcQueryFreqType
    int CThostFtdcFrontInfoField_QryFreq = 0;

    /// FTD流控
    /// typedef int TThostFtdcQueryFreqType
    int CThostFtdcFrontInfoField_FTDPkgFreq = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#ii", (char **)kwlist
        , &CThostFtdcFrontInfoField_FrontAddr, &CThostFtdcFrontInfoField_FrontAddr_length
        , &CThostFtdcFrontInfoField_QryFreq
        , &CThostFtdcFrontInfoField_FTDPkgFreq
    )) {
        return -1;
    }

    PyCThostFtdcFrontInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcFrontInfoFieldData>(self);
    CThostFtdcFrontInfoField *data = &(extra->data);


    /// 前置地址
    /// typedef char TThostFtdcAddressType[101]
    if( CThostFtdcFrontInfoField_FrontAddr != NULL ) {
        if(CThostFtdcFrontInfoField_FrontAddr_length >= (Py_ssize_t)sizeof(data->FrontAddr)) {
            PyErr_Format(PyExc_ValueError, "FrontAddr too long: length=%zd (max allowed is 100)", CThostFtdcFrontInfoField_FrontAddr_length);
            return -1;
        }
        // memset(data->FrontAddr, 0, sizeof(data->FrontAddr));
        // memcpy(data->FrontAddr, CThostFtdcFrontInfoField_FrontAddr, CThostFtdcFrontInfoField_FrontAddr_length);
        strncpy(data->FrontAddr, CThostFtdcFrontInfoField_FrontAddr, sizeof(data->FrontAddr));
        CThostFtdcFrontInfoField_FrontAddr = NULL;
    }

    /// 查询流控
    /// typedef int TThostFtdcQueryFreqType
    data->QryFreq = CThostFtdcFrontInfoField_QryFreq;

    /// FTD流控
    /// typedef int TThostFtdcQueryFreqType
    data->FTDPkgFreq = CThostFtdcFrontInfoField_FTDPkgFreq;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcFrontInfoFieldType_repr(PyObject *self) {

    PyCThostFtdcFrontInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcFrontInfoFieldData>(self);
    CThostFtdcFrontInfoField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:i,s:i}"
        , "FrontAddr", data->FrontAddr//, (Py_ssize_t)sizeof(data->FrontAddr)
        , "QryFreq", data->QryFreq
        , "FTDPkgFreq", data->FTDPkgFreq
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcFrontInfoField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcFrontInfoField repr");
        return NULL;
    }

    return repr;
}


/// 前置地址
/// typedef char TThostFtdcAddressType[101]
static PyObject *PyCThostFtdcFrontInfoFieldType_get_FrontAddr(PyObject *self, void *closure) {
    PyCThostFtdcFrontInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcFrontInfoFieldData>(self);
    CThostFtdcFrontInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->FrontAddr, (Py_ssize_t)sizeof(data->FrontAddr));
    return PyBytes_FromString(data->FrontAddr);
}

static int PyCThostFtdcFrontInfoFieldType_set_FrontAddr(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FrontAddr Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcFrontInfoField::FrontAddr)) {
        PyErr_SetString(PyExc_ValueError, "FrontAddr must be less than 100 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcFrontInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcFrontInfoFieldData>(self);
    CThostFtdcFrontInfoField *data = &(extra->data);
    // memset(data->FrontAddr, 0, sizeof(data->FrontAddr));
    // memcpy(data->FrontAddr, buf, len);
    strncpy(data->FrontAddr, buf, sizeof(data->FrontAddr));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcFrontInfoFieldType_members[] = {
    /// 查询流控
    /// typedef int TThostFtdcQueryFreqType
    {
        .name = "QryFreq",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcFrontInfoFieldData, data.QryFreq),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("查询流控")
    },
    /// FTD流控
    /// typedef int TThostFtdcQueryFreqType
    {
        .name = "FTDPkgFreq",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcFrontInfoFieldData, data.FTDPkgFreq),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("FTD流控")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcFrontInfoFieldType_getsets[] = {
    /// 前置地址
    /// typedef char TThostFtdcAddressType[101]
    {
    .name = "FrontAddr",
    .get = PyCThostFtdcFrontInfoFieldType_get_FrontAddr,
    .set = PyCThostFtdcFrontInfoFieldType_set_FrontAddr,
    .doc = PyDoc_STR("前置地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcFrontInfoFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcFrontInfoField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("前置信息")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcFrontInfoFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcFrontInfoFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcFrontInfoFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcFrontInfoFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcFrontInfoFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcFrontInfoFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("前置信息")},
    {Py_tp_members, PyCThostFtdcFrontInfoFieldType_members},
    {Py_tp_getset, PyCThostFtdcFrontInfoFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcFrontInfoFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcFrontInfoFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcFrontInfoFieldType_spec = {
    .name = "PyCTP.CThostFtdcFrontInfoField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcFrontInfoFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcFrontInfoFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcFrontInfoFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcFrontInfoFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcFrontInfoFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcFrontInfoFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcFrontInfoFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcFrontInfoFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcFrontInfoField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcFrontInfoField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}