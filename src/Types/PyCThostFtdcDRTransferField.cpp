
#include "PyCThostFtdcDRTransferField.h"

///灾备交易转换报文

static int PyCThostFtdcDRTransferFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "OrigDRIdentityID", "DestDRIdentityID", "OrigBrokerID", "DestBrokerID", NULL };


    /// 原交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    int CThostFtdcDRTransferField_OrigDRIdentityID = 0;

    /// 目标交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    int CThostFtdcDRTransferField_DestDRIdentityID = 0;

    /// 原应用单元代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcDRTransferField_OrigBrokerID = NULL;
    Py_ssize_t CThostFtdcDRTransferField_OrigBrokerID_length = 0;

    /// 目标易用单元代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcDRTransferField_DestBrokerID = NULL;
    Py_ssize_t CThostFtdcDRTransferField_DestBrokerID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iiy#y#", (char **)kwlist
        , &CThostFtdcDRTransferField_OrigDRIdentityID
        , &CThostFtdcDRTransferField_DestDRIdentityID
        , &CThostFtdcDRTransferField_OrigBrokerID, &CThostFtdcDRTransferField_OrigBrokerID_length
        , &CThostFtdcDRTransferField_DestBrokerID, &CThostFtdcDRTransferField_DestBrokerID_length
    )) {
        return -1;
    }

    PyCThostFtdcDRTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDRTransferFieldData>(self);
    CThostFtdcDRTransferField *data = &(extra->data);


    /// 原交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    data->OrigDRIdentityID = CThostFtdcDRTransferField_OrigDRIdentityID;

    /// 目标交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    data->DestDRIdentityID = CThostFtdcDRTransferField_DestDRIdentityID;

    /// 原应用单元代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcDRTransferField_OrigBrokerID != NULL ) {
        if(CThostFtdcDRTransferField_OrigBrokerID_length >= (Py_ssize_t)sizeof(data->OrigBrokerID)) {
            PyErr_Format(PyExc_ValueError, "OrigBrokerID too long: length=%zd (max allowed is 10)", CThostFtdcDRTransferField_OrigBrokerID_length);
            return -1;
        }
        // memset(data->OrigBrokerID, 0, sizeof(data->OrigBrokerID));
        // memcpy(data->OrigBrokerID, CThostFtdcDRTransferField_OrigBrokerID, CThostFtdcDRTransferField_OrigBrokerID_length);
        strncpy(data->OrigBrokerID, CThostFtdcDRTransferField_OrigBrokerID, sizeof(data->OrigBrokerID));
        CThostFtdcDRTransferField_OrigBrokerID = NULL;
    }

    /// 目标易用单元代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcDRTransferField_DestBrokerID != NULL ) {
        if(CThostFtdcDRTransferField_DestBrokerID_length >= (Py_ssize_t)sizeof(data->DestBrokerID)) {
            PyErr_Format(PyExc_ValueError, "DestBrokerID too long: length=%zd (max allowed is 10)", CThostFtdcDRTransferField_DestBrokerID_length);
            return -1;
        }
        // memset(data->DestBrokerID, 0, sizeof(data->DestBrokerID));
        // memcpy(data->DestBrokerID, CThostFtdcDRTransferField_DestBrokerID, CThostFtdcDRTransferField_DestBrokerID_length);
        strncpy(data->DestBrokerID, CThostFtdcDRTransferField_DestBrokerID, sizeof(data->DestBrokerID));
        CThostFtdcDRTransferField_DestBrokerID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcDRTransferFieldType_repr(PyObject *self) {

    PyCThostFtdcDRTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDRTransferFieldData>(self);
    CThostFtdcDRTransferField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:i,s:i,s:y,s:y}"
        , "OrigDRIdentityID", data->OrigDRIdentityID
        , "DestDRIdentityID", data->DestDRIdentityID
        , "OrigBrokerID", data->OrigBrokerID//, (Py_ssize_t)sizeof(data->OrigBrokerID)
        , "DestBrokerID", data->DestBrokerID//, (Py_ssize_t)sizeof(data->DestBrokerID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcDRTransferField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcDRTransferField repr");
        return NULL;
    }

    return repr;
}


/// 原应用单元代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcDRTransferFieldType_get_OrigBrokerID(PyObject *self, void *closure) {
    PyCThostFtdcDRTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDRTransferFieldData>(self);
    CThostFtdcDRTransferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrigBrokerID, (Py_ssize_t)sizeof(data->OrigBrokerID));
    return PyBytes_FromString(data->OrigBrokerID);
}

static int PyCThostFtdcDRTransferFieldType_set_OrigBrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrigBrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcDRTransferField::OrigBrokerID)) {
        PyErr_SetString(PyExc_ValueError, "OrigBrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcDRTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDRTransferFieldData>(self);
    CThostFtdcDRTransferField *data = &(extra->data);
    // memset(data->OrigBrokerID, 0, sizeof(data->OrigBrokerID));
    // memcpy(data->OrigBrokerID, buf, len);
    strncpy(data->OrigBrokerID, buf, sizeof(data->OrigBrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 目标易用单元代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcDRTransferFieldType_get_DestBrokerID(PyObject *self, void *closure) {
    PyCThostFtdcDRTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDRTransferFieldData>(self);
    CThostFtdcDRTransferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->DestBrokerID, (Py_ssize_t)sizeof(data->DestBrokerID));
    return PyBytes_FromString(data->DestBrokerID);
}

static int PyCThostFtdcDRTransferFieldType_set_DestBrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DestBrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcDRTransferField::DestBrokerID)) {
        PyErr_SetString(PyExc_ValueError, "DestBrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcDRTransferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDRTransferFieldData>(self);
    CThostFtdcDRTransferField *data = &(extra->data);
    // memset(data->DestBrokerID, 0, sizeof(data->DestBrokerID));
    // memcpy(data->DestBrokerID, buf, len);
    strncpy(data->DestBrokerID, buf, sizeof(data->DestBrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcDRTransferFieldType_members[] = {
    /// 原交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    {
        .name = "OrigDRIdentityID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcDRTransferFieldData, data.OrigDRIdentityID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("原交易中心代码")
    },
    /// 目标交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    {
        .name = "DestDRIdentityID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcDRTransferFieldData, data.DestDRIdentityID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("目标交易中心代码")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcDRTransferFieldType_getsets[] = {
    /// 原应用单元代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "OrigBrokerID",
    .get = PyCThostFtdcDRTransferFieldType_get_OrigBrokerID,
    .set = PyCThostFtdcDRTransferFieldType_set_OrigBrokerID,
    .doc = PyDoc_STR("原应用单元代码"),
    },
    /// 目标易用单元代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "DestBrokerID",
    .get = PyCThostFtdcDRTransferFieldType_get_DestBrokerID,
    .set = PyCThostFtdcDRTransferFieldType_set_DestBrokerID,
    .doc = PyDoc_STR("目标易用单元代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcDRTransferFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcDRTransferField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("灾备交易转换报文")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcDRTransferFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcDRTransferFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcDRTransferFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcDRTransferFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcDRTransferFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcDRTransferFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("灾备交易转换报文")},
    {Py_tp_members, PyCThostFtdcDRTransferFieldType_members},
    {Py_tp_getset, PyCThostFtdcDRTransferFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcDRTransferFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcDRTransferFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcDRTransferFieldType_spec = {
    .name = "PyCTP.CThostFtdcDRTransferField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcDRTransferFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcDRTransferFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcDRTransferFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcDRTransferFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcDRTransferFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcDRTransferFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcDRTransferFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcDRTransferFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcDRTransferField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcDRTransferField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}