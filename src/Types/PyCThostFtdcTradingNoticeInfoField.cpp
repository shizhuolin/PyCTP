
#include "PyCThostFtdcTradingNoticeInfoField.h"

///用户事件通知信息

static int PyCThostFtdcTradingNoticeInfoFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "SendTime", "FieldContent", "SequenceSeries", "SequenceNo", "InvestUnitID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcTradingNoticeInfoField_BrokerID = NULL;
    Py_ssize_t CThostFtdcTradingNoticeInfoField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcTradingNoticeInfoField_InvestorID = NULL;
    Py_ssize_t CThostFtdcTradingNoticeInfoField_InvestorID_length = 0;

    /// 发送时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcTradingNoticeInfoField_SendTime = NULL;
    Py_ssize_t CThostFtdcTradingNoticeInfoField_SendTime_length = 0;

    /// 消息正文
    /// typedef char TThostFtdcContentType[501]
    char *CThostFtdcTradingNoticeInfoField_FieldContent = NULL;
    Py_ssize_t CThostFtdcTradingNoticeInfoField_FieldContent_length = 0;

    /// 序列系列号
    /// typedef short TThostFtdcSequenceSeriesType
    short CThostFtdcTradingNoticeInfoField_SequenceSeries = 0;

    /// 序列号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcTradingNoticeInfoField_SequenceNo = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcTradingNoticeInfoField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcTradingNoticeInfoField_InvestUnitID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#hiy#", (char **)kwlist
        , &CThostFtdcTradingNoticeInfoField_BrokerID, &CThostFtdcTradingNoticeInfoField_BrokerID_length
        , &CThostFtdcTradingNoticeInfoField_InvestorID, &CThostFtdcTradingNoticeInfoField_InvestorID_length
        , &CThostFtdcTradingNoticeInfoField_SendTime, &CThostFtdcTradingNoticeInfoField_SendTime_length
        , &CThostFtdcTradingNoticeInfoField_FieldContent, &CThostFtdcTradingNoticeInfoField_FieldContent_length
        , &CThostFtdcTradingNoticeInfoField_SequenceSeries
        , &CThostFtdcTradingNoticeInfoField_SequenceNo
        , &CThostFtdcTradingNoticeInfoField_InvestUnitID, &CThostFtdcTradingNoticeInfoField_InvestUnitID_length
    )) {
        return -1;
    }

    PyCThostFtdcTradingNoticeInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingNoticeInfoFieldData>(self);
    CThostFtdcTradingNoticeInfoField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcTradingNoticeInfoField_BrokerID != NULL ) {
        if(CThostFtdcTradingNoticeInfoField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcTradingNoticeInfoField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcTradingNoticeInfoField_BrokerID, CThostFtdcTradingNoticeInfoField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcTradingNoticeInfoField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcTradingNoticeInfoField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcTradingNoticeInfoField_InvestorID != NULL ) {
        if(CThostFtdcTradingNoticeInfoField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcTradingNoticeInfoField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcTradingNoticeInfoField_InvestorID, CThostFtdcTradingNoticeInfoField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcTradingNoticeInfoField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcTradingNoticeInfoField_InvestorID = NULL;
    }

    /// 发送时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcTradingNoticeInfoField_SendTime != NULL ) {
        if(CThostFtdcTradingNoticeInfoField_SendTime_length >= (Py_ssize_t)sizeof(data->SendTime)) {
            PyErr_Format(PyExc_ValueError, "SendTime too long: length=%zd (max allowed is 8)", CThostFtdcTradingNoticeInfoField_SendTime_length);
            return -1;
        }
        // memset(data->SendTime, 0, sizeof(data->SendTime));
        // memcpy(data->SendTime, CThostFtdcTradingNoticeInfoField_SendTime, CThostFtdcTradingNoticeInfoField_SendTime_length);
        strncpy(data->SendTime, CThostFtdcTradingNoticeInfoField_SendTime, sizeof(data->SendTime));
        CThostFtdcTradingNoticeInfoField_SendTime = NULL;
    }

    /// 消息正文
    /// typedef char TThostFtdcContentType[501]
    if( CThostFtdcTradingNoticeInfoField_FieldContent != NULL ) {
        if(CThostFtdcTradingNoticeInfoField_FieldContent_length >= (Py_ssize_t)sizeof(data->FieldContent)) {
            PyErr_Format(PyExc_ValueError, "FieldContent too long: length=%zd (max allowed is 500)", CThostFtdcTradingNoticeInfoField_FieldContent_length);
            return -1;
        }
        // memset(data->FieldContent, 0, sizeof(data->FieldContent));
        // memcpy(data->FieldContent, CThostFtdcTradingNoticeInfoField_FieldContent, CThostFtdcTradingNoticeInfoField_FieldContent_length);
        strncpy(data->FieldContent, CThostFtdcTradingNoticeInfoField_FieldContent, sizeof(data->FieldContent));
        CThostFtdcTradingNoticeInfoField_FieldContent = NULL;
    }

    /// 序列系列号
    /// typedef short TThostFtdcSequenceSeriesType
    data->SequenceSeries = CThostFtdcTradingNoticeInfoField_SequenceSeries;

    /// 序列号
    /// typedef int TThostFtdcSequenceNoType
    data->SequenceNo = CThostFtdcTradingNoticeInfoField_SequenceNo;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcTradingNoticeInfoField_InvestUnitID != NULL ) {
        if(CThostFtdcTradingNoticeInfoField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcTradingNoticeInfoField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcTradingNoticeInfoField_InvestUnitID, CThostFtdcTradingNoticeInfoField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcTradingNoticeInfoField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcTradingNoticeInfoField_InvestUnitID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcTradingNoticeInfoFieldType_repr(PyObject *self) {

    PyCThostFtdcTradingNoticeInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingNoticeInfoFieldData>(self);
    CThostFtdcTradingNoticeInfoField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:h,s:i,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "SendTime", data->SendTime//, (Py_ssize_t)sizeof(data->SendTime)
        , "FieldContent", data->FieldContent//, (Py_ssize_t)sizeof(data->FieldContent)
        , "SequenceSeries", data->SequenceSeries
        , "SequenceNo", data->SequenceNo
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradingNoticeInfoField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradingNoticeInfoField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcTradingNoticeInfoFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcTradingNoticeInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingNoticeInfoFieldData>(self);
    CThostFtdcTradingNoticeInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcTradingNoticeInfoFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingNoticeInfoField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingNoticeInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingNoticeInfoFieldData>(self);
    CThostFtdcTradingNoticeInfoField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcTradingNoticeInfoFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcTradingNoticeInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingNoticeInfoFieldData>(self);
    CThostFtdcTradingNoticeInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcTradingNoticeInfoFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingNoticeInfoField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingNoticeInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingNoticeInfoFieldData>(self);
    CThostFtdcTradingNoticeInfoField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 发送时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcTradingNoticeInfoFieldType_get_SendTime(PyObject *self, void *closure) {
    PyCThostFtdcTradingNoticeInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingNoticeInfoFieldData>(self);
    CThostFtdcTradingNoticeInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->SendTime, (Py_ssize_t)sizeof(data->SendTime));
    return PyBytes_FromString(data->SendTime);
}

static int PyCThostFtdcTradingNoticeInfoFieldType_set_SendTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SendTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingNoticeInfoField::SendTime)) {
        PyErr_SetString(PyExc_ValueError, "SendTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingNoticeInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingNoticeInfoFieldData>(self);
    CThostFtdcTradingNoticeInfoField *data = &(extra->data);
    // memset(data->SendTime, 0, sizeof(data->SendTime));
    // memcpy(data->SendTime, buf, len);
    strncpy(data->SendTime, buf, sizeof(data->SendTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 消息正文
/// typedef char TThostFtdcContentType[501]
static PyObject *PyCThostFtdcTradingNoticeInfoFieldType_get_FieldContent(PyObject *self, void *closure) {
    PyCThostFtdcTradingNoticeInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingNoticeInfoFieldData>(self);
    CThostFtdcTradingNoticeInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->FieldContent, (Py_ssize_t)sizeof(data->FieldContent));
    return PyBytes_FromString(data->FieldContent);
}

static int PyCThostFtdcTradingNoticeInfoFieldType_set_FieldContent(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FieldContent Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingNoticeInfoField::FieldContent)) {
        PyErr_SetString(PyExc_ValueError, "FieldContent must be less than 500 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingNoticeInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingNoticeInfoFieldData>(self);
    CThostFtdcTradingNoticeInfoField *data = &(extra->data);
    // memset(data->FieldContent, 0, sizeof(data->FieldContent));
    // memcpy(data->FieldContent, buf, len);
    strncpy(data->FieldContent, buf, sizeof(data->FieldContent));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcTradingNoticeInfoFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcTradingNoticeInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingNoticeInfoFieldData>(self);
    CThostFtdcTradingNoticeInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcTradingNoticeInfoFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTradingNoticeInfoField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTradingNoticeInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTradingNoticeInfoFieldData>(self);
    CThostFtdcTradingNoticeInfoField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcTradingNoticeInfoFieldType_members[] = {
    /// 序列系列号
    /// typedef short TThostFtdcSequenceSeriesType
    {
        .name = "SequenceSeries",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_SHORT,
#else
        .type = Py_T_SHORT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcTradingNoticeInfoFieldData, data.SequenceSeries),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("序列系列号")
    },
    /// 序列号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "SequenceNo",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcTradingNoticeInfoFieldData, data.SequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("序列号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcTradingNoticeInfoFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcTradingNoticeInfoFieldType_get_BrokerID,
    .set = PyCThostFtdcTradingNoticeInfoFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcTradingNoticeInfoFieldType_get_InvestorID,
    .set = PyCThostFtdcTradingNoticeInfoFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 发送时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "SendTime",
    .get = PyCThostFtdcTradingNoticeInfoFieldType_get_SendTime,
    .set = PyCThostFtdcTradingNoticeInfoFieldType_set_SendTime,
    .doc = PyDoc_STR("发送时间"),
    },
    /// 消息正文
    /// typedef char TThostFtdcContentType[501]
    {
    .name = "FieldContent",
    .get = PyCThostFtdcTradingNoticeInfoFieldType_get_FieldContent,
    .set = PyCThostFtdcTradingNoticeInfoFieldType_set_FieldContent,
    .doc = PyDoc_STR("消息正文"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcTradingNoticeInfoFieldType_get_InvestUnitID,
    .set = PyCThostFtdcTradingNoticeInfoFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcTradingNoticeInfoFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcTradingNoticeInfoField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("用户事件通知信息")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcTradingNoticeInfoFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcTradingNoticeInfoFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcTradingNoticeInfoFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcTradingNoticeInfoFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcTradingNoticeInfoFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcTradingNoticeInfoFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("用户事件通知信息")},
    {Py_tp_members, PyCThostFtdcTradingNoticeInfoFieldType_members},
    {Py_tp_getset, PyCThostFtdcTradingNoticeInfoFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcTradingNoticeInfoFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcTradingNoticeInfoFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcTradingNoticeInfoFieldType_spec = {
    .name = "PyCTP.CThostFtdcTradingNoticeInfoField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcTradingNoticeInfoFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcTradingNoticeInfoFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcTradingNoticeInfoFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcTradingNoticeInfoFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcTradingNoticeInfoFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcTradingNoticeInfoFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcTradingNoticeInfoFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcTradingNoticeInfoFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcTradingNoticeInfoField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTradingNoticeInfoField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}