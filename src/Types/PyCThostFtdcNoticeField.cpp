
#include "PyCThostFtdcNoticeField.h"

///客户通知

static int PyCThostFtdcNoticeFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "Content", "SequenceLabel", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcNoticeField_BrokerID = NULL;
    Py_ssize_t CThostFtdcNoticeField_BrokerID_length = 0;

    /// 消息正文
    /// typedef char TThostFtdcContentType[501]
    char *CThostFtdcNoticeField_Content = NULL;
    Py_ssize_t CThostFtdcNoticeField_Content_length = 0;

    /// 经纪公司通知内容序列号
    /// typedef char TThostFtdcSequenceLabelType[2]
    char *CThostFtdcNoticeField_SequenceLabel = NULL;
    Py_ssize_t CThostFtdcNoticeField_SequenceLabel_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcNoticeField_BrokerID, &CThostFtdcNoticeField_BrokerID_length
        , &CThostFtdcNoticeField_Content, &CThostFtdcNoticeField_Content_length
        , &CThostFtdcNoticeField_SequenceLabel, &CThostFtdcNoticeField_SequenceLabel_length
    )) {
        return -1;
    }

    PyCThostFtdcNoticeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNoticeFieldData>(self);
    CThostFtdcNoticeField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcNoticeField_BrokerID != NULL ) {
        if(CThostFtdcNoticeField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcNoticeField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcNoticeField_BrokerID, CThostFtdcNoticeField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcNoticeField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcNoticeField_BrokerID = NULL;
    }

    /// 消息正文
    /// typedef char TThostFtdcContentType[501]
    if( CThostFtdcNoticeField_Content != NULL ) {
        if(CThostFtdcNoticeField_Content_length >= (Py_ssize_t)sizeof(data->Content)) {
            PyErr_Format(PyExc_ValueError, "Content too long: length=%zd (max allowed is 500)", CThostFtdcNoticeField_Content_length);
            return -1;
        }
        // memset(data->Content, 0, sizeof(data->Content));
        // memcpy(data->Content, CThostFtdcNoticeField_Content, CThostFtdcNoticeField_Content_length);
        strncpy(data->Content, CThostFtdcNoticeField_Content, sizeof(data->Content));
        CThostFtdcNoticeField_Content = NULL;
    }

    /// 经纪公司通知内容序列号
    /// typedef char TThostFtdcSequenceLabelType[2]
    if( CThostFtdcNoticeField_SequenceLabel != NULL ) {
        if(CThostFtdcNoticeField_SequenceLabel_length >= (Py_ssize_t)sizeof(data->SequenceLabel)) {
            PyErr_Format(PyExc_ValueError, "SequenceLabel too long: length=%zd (max allowed is 1)", CThostFtdcNoticeField_SequenceLabel_length);
            return -1;
        }
        // memset(data->SequenceLabel, 0, sizeof(data->SequenceLabel));
        // memcpy(data->SequenceLabel, CThostFtdcNoticeField_SequenceLabel, CThostFtdcNoticeField_SequenceLabel_length);
        strncpy(data->SequenceLabel, CThostFtdcNoticeField_SequenceLabel, sizeof(data->SequenceLabel));
        CThostFtdcNoticeField_SequenceLabel = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcNoticeFieldType_repr(PyObject *self) {

    PyCThostFtdcNoticeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNoticeFieldData>(self);
    CThostFtdcNoticeField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "Content", data->Content//, (Py_ssize_t)sizeof(data->Content)
        , "SequenceLabel", data->SequenceLabel//, (Py_ssize_t)sizeof(data->SequenceLabel)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcNoticeField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcNoticeField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcNoticeFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcNoticeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNoticeFieldData>(self);
    CThostFtdcNoticeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcNoticeFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNoticeField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNoticeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNoticeFieldData>(self);
    CThostFtdcNoticeField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 消息正文
/// typedef char TThostFtdcContentType[501]
static PyObject *PyCThostFtdcNoticeFieldType_get_Content(PyObject *self, void *closure) {
    PyCThostFtdcNoticeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNoticeFieldData>(self);
    CThostFtdcNoticeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Content, (Py_ssize_t)sizeof(data->Content));
    return PyBytes_FromString(data->Content);
}

static int PyCThostFtdcNoticeFieldType_set_Content(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Content Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNoticeField::Content)) {
        PyErr_SetString(PyExc_ValueError, "Content must be less than 500 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNoticeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNoticeFieldData>(self);
    CThostFtdcNoticeField *data = &(extra->data);
    // memset(data->Content, 0, sizeof(data->Content));
    // memcpy(data->Content, buf, len);
    strncpy(data->Content, buf, sizeof(data->Content));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司通知内容序列号
/// typedef char TThostFtdcSequenceLabelType[2]
static PyObject *PyCThostFtdcNoticeFieldType_get_SequenceLabel(PyObject *self, void *closure) {
    PyCThostFtdcNoticeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNoticeFieldData>(self);
    CThostFtdcNoticeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->SequenceLabel, (Py_ssize_t)sizeof(data->SequenceLabel));
    return PyBytes_FromString(data->SequenceLabel);
}

static int PyCThostFtdcNoticeFieldType_set_SequenceLabel(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SequenceLabel Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcNoticeField::SequenceLabel)) {
        PyErr_SetString(PyExc_ValueError, "SequenceLabel must be less than 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcNoticeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcNoticeFieldData>(self);
    CThostFtdcNoticeField *data = &(extra->data);
    // memset(data->SequenceLabel, 0, sizeof(data->SequenceLabel));
    // memcpy(data->SequenceLabel, buf, len);
    strncpy(data->SequenceLabel, buf, sizeof(data->SequenceLabel));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcNoticeFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcNoticeFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcNoticeFieldType_get_BrokerID,
    .set = PyCThostFtdcNoticeFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 消息正文
    /// typedef char TThostFtdcContentType[501]
    {
    .name = "Content",
    .get = PyCThostFtdcNoticeFieldType_get_Content,
    .set = PyCThostFtdcNoticeFieldType_set_Content,
    .doc = PyDoc_STR("消息正文"),
    },
    /// 经纪公司通知内容序列号
    /// typedef char TThostFtdcSequenceLabelType[2]
    {
    .name = "SequenceLabel",
    .get = PyCThostFtdcNoticeFieldType_get_SequenceLabel,
    .set = PyCThostFtdcNoticeFieldType_set_SequenceLabel,
    .doc = PyDoc_STR("经纪公司通知内容序列号"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcNoticeFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcNoticeField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("客户通知")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcNoticeFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcNoticeFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcNoticeFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcNoticeFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcNoticeFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcNoticeFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("客户通知")},
    {Py_tp_members, PyCThostFtdcNoticeFieldType_members},
    {Py_tp_getset, PyCThostFtdcNoticeFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcNoticeFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcNoticeFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcNoticeFieldType_spec = {
    .name = "PyCTP.CThostFtdcNoticeField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcNoticeFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcNoticeFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcNoticeFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcNoticeFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcNoticeFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcNoticeFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcNoticeFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcNoticeFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcNoticeField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcNoticeField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}