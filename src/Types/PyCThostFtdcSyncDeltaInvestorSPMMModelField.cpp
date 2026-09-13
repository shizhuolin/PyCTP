
#include "PyCThostFtdcSyncDeltaInvestorSPMMModelField.h"

///风险结算追平投资者SPMM模板选择

static int PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "BrokerID", "InvestorID", "SPMMModelID", "ActionDirection", "SyncDeltaSequenceNo", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSyncDeltaInvestorSPMMModelField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaInvestorSPMMModelField_ExchangeID_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSyncDeltaInvestorSPMMModelField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaInvestorSPMMModelField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcSyncDeltaInvestorSPMMModelField_InvestorID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaInvestorSPMMModelField_InvestorID_length = 0;

    /// SPMM模板ID
    /// typedef char TThostFtdcSPMMModelIDType[33]
    char *CThostFtdcSyncDeltaInvestorSPMMModelField_SPMMModelID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaInvestorSPMMModelField_SPMMModelID_length = 0;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    char CThostFtdcSyncDeltaInvestorSPMMModelField_ActionDirection = 0;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaInvestorSPMMModelField_SyncDeltaSequenceNo = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#ci", (char **)kwlist
        , &CThostFtdcSyncDeltaInvestorSPMMModelField_ExchangeID, &CThostFtdcSyncDeltaInvestorSPMMModelField_ExchangeID_length
        , &CThostFtdcSyncDeltaInvestorSPMMModelField_BrokerID, &CThostFtdcSyncDeltaInvestorSPMMModelField_BrokerID_length
        , &CThostFtdcSyncDeltaInvestorSPMMModelField_InvestorID, &CThostFtdcSyncDeltaInvestorSPMMModelField_InvestorID_length
        , &CThostFtdcSyncDeltaInvestorSPMMModelField_SPMMModelID, &CThostFtdcSyncDeltaInvestorSPMMModelField_SPMMModelID_length
        , &CThostFtdcSyncDeltaInvestorSPMMModelField_ActionDirection
        , &CThostFtdcSyncDeltaInvestorSPMMModelField_SyncDeltaSequenceNo
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaInvestorSPMMModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvestorSPMMModelFieldData>(self);
    CThostFtdcSyncDeltaInvestorSPMMModelField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSyncDeltaInvestorSPMMModelField_ExchangeID != NULL ) {
        if(CThostFtdcSyncDeltaInvestorSPMMModelField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaInvestorSPMMModelField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSyncDeltaInvestorSPMMModelField_ExchangeID, CThostFtdcSyncDeltaInvestorSPMMModelField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSyncDeltaInvestorSPMMModelField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSyncDeltaInvestorSPMMModelField_ExchangeID = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSyncDeltaInvestorSPMMModelField_BrokerID != NULL ) {
        if(CThostFtdcSyncDeltaInvestorSPMMModelField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSyncDeltaInvestorSPMMModelField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSyncDeltaInvestorSPMMModelField_BrokerID, CThostFtdcSyncDeltaInvestorSPMMModelField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSyncDeltaInvestorSPMMModelField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSyncDeltaInvestorSPMMModelField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcSyncDeltaInvestorSPMMModelField_InvestorID != NULL ) {
        if(CThostFtdcSyncDeltaInvestorSPMMModelField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcSyncDeltaInvestorSPMMModelField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcSyncDeltaInvestorSPMMModelField_InvestorID, CThostFtdcSyncDeltaInvestorSPMMModelField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcSyncDeltaInvestorSPMMModelField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcSyncDeltaInvestorSPMMModelField_InvestorID = NULL;
    }

    /// SPMM模板ID
    /// typedef char TThostFtdcSPMMModelIDType[33]
    if( CThostFtdcSyncDeltaInvestorSPMMModelField_SPMMModelID != NULL ) {
        if(CThostFtdcSyncDeltaInvestorSPMMModelField_SPMMModelID_length >= (Py_ssize_t)sizeof(data->SPMMModelID)) {
            PyErr_Format(PyExc_ValueError, "SPMMModelID too long: length=%zd (max allowed is 32)", CThostFtdcSyncDeltaInvestorSPMMModelField_SPMMModelID_length);
            return -1;
        }
        // memset(data->SPMMModelID, 0, sizeof(data->SPMMModelID));
        // memcpy(data->SPMMModelID, CThostFtdcSyncDeltaInvestorSPMMModelField_SPMMModelID, CThostFtdcSyncDeltaInvestorSPMMModelField_SPMMModelID_length);
        strncpy(data->SPMMModelID, CThostFtdcSyncDeltaInvestorSPMMModelField_SPMMModelID, sizeof(data->SPMMModelID));
        CThostFtdcSyncDeltaInvestorSPMMModelField_SPMMModelID = NULL;
    }

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    data->ActionDirection = CThostFtdcSyncDeltaInvestorSPMMModelField_ActionDirection;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaInvestorSPMMModelField_SyncDeltaSequenceNo;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaInvestorSPMMModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvestorSPMMModelFieldData>(self);
    CThostFtdcSyncDeltaInvestorSPMMModelField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:c,s:i}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "SPMMModelID", data->SPMMModelID//, (Py_ssize_t)sizeof(data->SPMMModelID)
        , "ActionDirection", data->ActionDirection
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaInvestorSPMMModelField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaInvestorSPMMModelField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvestorSPMMModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvestorSPMMModelFieldData>(self);
    CThostFtdcSyncDeltaInvestorSPMMModelField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvestorSPMMModelField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvestorSPMMModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvestorSPMMModelFieldData>(self);
    CThostFtdcSyncDeltaInvestorSPMMModelField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvestorSPMMModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvestorSPMMModelFieldData>(self);
    CThostFtdcSyncDeltaInvestorSPMMModelField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvestorSPMMModelField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvestorSPMMModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvestorSPMMModelFieldData>(self);
    CThostFtdcSyncDeltaInvestorSPMMModelField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvestorSPMMModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvestorSPMMModelFieldData>(self);
    CThostFtdcSyncDeltaInvestorSPMMModelField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvestorSPMMModelField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvestorSPMMModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvestorSPMMModelFieldData>(self);
    CThostFtdcSyncDeltaInvestorSPMMModelField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// SPMM模板ID
/// typedef char TThostFtdcSPMMModelIDType[33]
static PyObject *PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_get_SPMMModelID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvestorSPMMModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvestorSPMMModelFieldData>(self);
    CThostFtdcSyncDeltaInvestorSPMMModelField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->SPMMModelID, (Py_ssize_t)sizeof(data->SPMMModelID));
    return PyBytes_FromString(data->SPMMModelID);
}

static int PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_set_SPMMModelID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SPMMModelID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvestorSPMMModelField::SPMMModelID)) {
        PyErr_SetString(PyExc_ValueError, "SPMMModelID must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvestorSPMMModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvestorSPMMModelFieldData>(self);
    CThostFtdcSyncDeltaInvestorSPMMModelField *data = &(extra->data);
    // memset(data->SPMMModelID, 0, sizeof(data->SPMMModelID));
    // memcpy(data->SPMMModelID, buf, len);
    strncpy(data->SPMMModelID, buf, sizeof(data->SPMMModelID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionDirectionType
static PyObject *PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_get_ActionDirection(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaInvestorSPMMModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvestorSPMMModelFieldData>(self);
    CThostFtdcSyncDeltaInvestorSPMMModelField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionDirection), 1);
}

static int PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_set_ActionDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaInvestorSPMMModelField::ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaInvestorSPMMModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaInvestorSPMMModelFieldData>(self);
    CThostFtdcSyncDeltaInvestorSPMMModelField *data = &(extra->data);
    data->ActionDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_members[] = {
    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "SyncDeltaSequenceNo",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaInvestorSPMMModelFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_get_ExchangeID,
    .set = PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_get_BrokerID,
    .set = PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_get_InvestorID,
    .set = PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// SPMM模板ID
    /// typedef char TThostFtdcSPMMModelIDType[33]
    {
    .name = "SPMMModelID",
    .get = PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_get_SPMMModelID,
    .set = PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_set_SPMMModelID,
    .doc = PyDoc_STR("SPMM模板ID"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    {
    .name = "ActionDirection",
    .get = PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_get_ActionDirection,
    .set = PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_set_ActionDirection,
    .doc = PyDoc_STR("操作标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaInvestorSPMMModelField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算追平投资者SPMM模板选择")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaInvestorSPMMModelFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算追平投资者SPMM模板选择")},
    {Py_tp_members, PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaInvestorSPMMModelField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaInvestorSPMMModelFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaInvestorSPMMModelFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaInvestorSPMMModelField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaInvestorSPMMModelField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}