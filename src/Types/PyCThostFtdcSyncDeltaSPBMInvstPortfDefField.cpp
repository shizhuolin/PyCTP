
#include "PyCThostFtdcSyncDeltaSPBMInvstPortfDefField.h"

///风险结算追平投资者SPBM套餐选择

static int PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "BrokerID", "InvestorID", "PortfolioDefID", "ActionDirection", "SyncDeltaSequenceNo", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSyncDeltaSPBMInvstPortfDefField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaSPBMInvstPortfDefField_ExchangeID_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSyncDeltaSPBMInvstPortfDefField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaSPBMInvstPortfDefField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcSyncDeltaSPBMInvstPortfDefField_InvestorID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaSPBMInvstPortfDefField_InvestorID_length = 0;

    /// 组合保证金套餐代码
    /// typedef int TThostFtdcPortfolioDefIDType
    int CThostFtdcSyncDeltaSPBMInvstPortfDefField_PortfolioDefID = 0;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    char CThostFtdcSyncDeltaSPBMInvstPortfDefField_ActionDirection = 0;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaSPBMInvstPortfDefField_SyncDeltaSequenceNo = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ici", (char **)kwlist
        , &CThostFtdcSyncDeltaSPBMInvstPortfDefField_ExchangeID, &CThostFtdcSyncDeltaSPBMInvstPortfDefField_ExchangeID_length
        , &CThostFtdcSyncDeltaSPBMInvstPortfDefField_BrokerID, &CThostFtdcSyncDeltaSPBMInvstPortfDefField_BrokerID_length
        , &CThostFtdcSyncDeltaSPBMInvstPortfDefField_InvestorID, &CThostFtdcSyncDeltaSPBMInvstPortfDefField_InvestorID_length
        , &CThostFtdcSyncDeltaSPBMInvstPortfDefField_PortfolioDefID
        , &CThostFtdcSyncDeltaSPBMInvstPortfDefField_ActionDirection
        , &CThostFtdcSyncDeltaSPBMInvstPortfDefField_SyncDeltaSequenceNo
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldData>(self);
    CThostFtdcSyncDeltaSPBMInvstPortfDefField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSyncDeltaSPBMInvstPortfDefField_ExchangeID != NULL ) {
        if(CThostFtdcSyncDeltaSPBMInvstPortfDefField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaSPBMInvstPortfDefField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSyncDeltaSPBMInvstPortfDefField_ExchangeID, CThostFtdcSyncDeltaSPBMInvstPortfDefField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSyncDeltaSPBMInvstPortfDefField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSyncDeltaSPBMInvstPortfDefField_ExchangeID = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSyncDeltaSPBMInvstPortfDefField_BrokerID != NULL ) {
        if(CThostFtdcSyncDeltaSPBMInvstPortfDefField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSyncDeltaSPBMInvstPortfDefField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSyncDeltaSPBMInvstPortfDefField_BrokerID, CThostFtdcSyncDeltaSPBMInvstPortfDefField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSyncDeltaSPBMInvstPortfDefField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSyncDeltaSPBMInvstPortfDefField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcSyncDeltaSPBMInvstPortfDefField_InvestorID != NULL ) {
        if(CThostFtdcSyncDeltaSPBMInvstPortfDefField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcSyncDeltaSPBMInvstPortfDefField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcSyncDeltaSPBMInvstPortfDefField_InvestorID, CThostFtdcSyncDeltaSPBMInvstPortfDefField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcSyncDeltaSPBMInvstPortfDefField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcSyncDeltaSPBMInvstPortfDefField_InvestorID = NULL;
    }

    /// 组合保证金套餐代码
    /// typedef int TThostFtdcPortfolioDefIDType
    data->PortfolioDefID = CThostFtdcSyncDeltaSPBMInvstPortfDefField_PortfolioDefID;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    data->ActionDirection = CThostFtdcSyncDeltaSPBMInvstPortfDefField_ActionDirection;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaSPBMInvstPortfDefField_SyncDeltaSequenceNo;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldData>(self);
    CThostFtdcSyncDeltaSPBMInvstPortfDefField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:i,s:c,s:i}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "PortfolioDefID", data->PortfolioDefID
        , "ActionDirection", data->ActionDirection
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaSPBMInvstPortfDefField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaSPBMInvstPortfDefField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldData>(self);
    CThostFtdcSyncDeltaSPBMInvstPortfDefField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPBMInvstPortfDefField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldData>(self);
    CThostFtdcSyncDeltaSPBMInvstPortfDefField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldData>(self);
    CThostFtdcSyncDeltaSPBMInvstPortfDefField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPBMInvstPortfDefField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldData>(self);
    CThostFtdcSyncDeltaSPBMInvstPortfDefField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldData>(self);
    CThostFtdcSyncDeltaSPBMInvstPortfDefField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPBMInvstPortfDefField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldData>(self);
    CThostFtdcSyncDeltaSPBMInvstPortfDefField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionDirectionType
static PyObject *PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_get_ActionDirection(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldData>(self);
    CThostFtdcSyncDeltaSPBMInvstPortfDefField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionDirection), 1);
}

static int PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_set_ActionDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPBMInvstPortfDefField::ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldData>(self);
    CThostFtdcSyncDeltaSPBMInvstPortfDefField *data = &(extra->data);
    data->ActionDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_members[] = {
    /// 组合保证金套餐代码
    /// typedef int TThostFtdcPortfolioDefIDType
    {
        .name = "PortfolioDefID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldData, data.PortfolioDefID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("组合保证金套餐代码")
    },
    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "SyncDeltaSequenceNo",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_get_ExchangeID,
    .set = PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_get_BrokerID,
    .set = PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_get_InvestorID,
    .set = PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    {
    .name = "ActionDirection",
    .get = PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_get_ActionDirection,
    .set = PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_set_ActionDirection,
    .doc = PyDoc_STR("操作标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaSPBMInvstPortfDefField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算追平投资者SPBM套餐选择")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算追平投资者SPBM套餐选择")},
    {Py_tp_members, PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaSPBMInvstPortfDefField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaSPBMInvstPortfDefField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaSPBMInvstPortfDefField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}