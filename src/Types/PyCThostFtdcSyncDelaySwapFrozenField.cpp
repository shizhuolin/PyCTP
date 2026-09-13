
#include "PyCThostFtdcSyncDelaySwapFrozenField.h"

///换汇可提冻结

static int PyCThostFtdcSyncDelaySwapFrozenFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "DelaySwapSeqNo", "BrokerID", "InvestorID", "FromCurrencyID", "FromRemainSwap", "IsManualSwap", NULL };


    /// 换汇流水号
    /// typedef char TThostFtdcDepositSeqNoType[15]
    char *CThostFtdcSyncDelaySwapFrozenField_DelaySwapSeqNo = NULL;
    Py_ssize_t CThostFtdcSyncDelaySwapFrozenField_DelaySwapSeqNo_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSyncDelaySwapFrozenField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSyncDelaySwapFrozenField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcSyncDelaySwapFrozenField_InvestorID = NULL;
    Py_ssize_t CThostFtdcSyncDelaySwapFrozenField_InvestorID_length = 0;

    /// 源币种
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcSyncDelaySwapFrozenField_FromCurrencyID = NULL;
    Py_ssize_t CThostFtdcSyncDelaySwapFrozenField_FromCurrencyID_length = 0;

    /// 源剩余换汇额度(可提冻结)
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcSyncDelaySwapFrozenField_FromRemainSwap = 0.0;

    /// 是否手工换汇
    /// typedef int TThostFtdcBoolType
    int CThostFtdcSyncDelaySwapFrozenField_IsManualSwap = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#di", (char **)kwlist
        , &CThostFtdcSyncDelaySwapFrozenField_DelaySwapSeqNo, &CThostFtdcSyncDelaySwapFrozenField_DelaySwapSeqNo_length
        , &CThostFtdcSyncDelaySwapFrozenField_BrokerID, &CThostFtdcSyncDelaySwapFrozenField_BrokerID_length
        , &CThostFtdcSyncDelaySwapFrozenField_InvestorID, &CThostFtdcSyncDelaySwapFrozenField_InvestorID_length
        , &CThostFtdcSyncDelaySwapFrozenField_FromCurrencyID, &CThostFtdcSyncDelaySwapFrozenField_FromCurrencyID_length
        , &CThostFtdcSyncDelaySwapFrozenField_FromRemainSwap
        , &CThostFtdcSyncDelaySwapFrozenField_IsManualSwap
    )) {
        return -1;
    }

    PyCThostFtdcSyncDelaySwapFrozenFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDelaySwapFrozenFieldData>(self);
    CThostFtdcSyncDelaySwapFrozenField *data = &(extra->data);


    /// 换汇流水号
    /// typedef char TThostFtdcDepositSeqNoType[15]
    if( CThostFtdcSyncDelaySwapFrozenField_DelaySwapSeqNo != NULL ) {
        if(CThostFtdcSyncDelaySwapFrozenField_DelaySwapSeqNo_length >= (Py_ssize_t)sizeof(data->DelaySwapSeqNo)) {
            PyErr_Format(PyExc_ValueError, "DelaySwapSeqNo too long: length=%zd (max allowed is 14)", CThostFtdcSyncDelaySwapFrozenField_DelaySwapSeqNo_length);
            return -1;
        }
        // memset(data->DelaySwapSeqNo, 0, sizeof(data->DelaySwapSeqNo));
        // memcpy(data->DelaySwapSeqNo, CThostFtdcSyncDelaySwapFrozenField_DelaySwapSeqNo, CThostFtdcSyncDelaySwapFrozenField_DelaySwapSeqNo_length);
        strncpy(data->DelaySwapSeqNo, CThostFtdcSyncDelaySwapFrozenField_DelaySwapSeqNo, sizeof(data->DelaySwapSeqNo));
        CThostFtdcSyncDelaySwapFrozenField_DelaySwapSeqNo = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSyncDelaySwapFrozenField_BrokerID != NULL ) {
        if(CThostFtdcSyncDelaySwapFrozenField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSyncDelaySwapFrozenField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSyncDelaySwapFrozenField_BrokerID, CThostFtdcSyncDelaySwapFrozenField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSyncDelaySwapFrozenField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSyncDelaySwapFrozenField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcSyncDelaySwapFrozenField_InvestorID != NULL ) {
        if(CThostFtdcSyncDelaySwapFrozenField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcSyncDelaySwapFrozenField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcSyncDelaySwapFrozenField_InvestorID, CThostFtdcSyncDelaySwapFrozenField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcSyncDelaySwapFrozenField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcSyncDelaySwapFrozenField_InvestorID = NULL;
    }

    /// 源币种
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcSyncDelaySwapFrozenField_FromCurrencyID != NULL ) {
        if(CThostFtdcSyncDelaySwapFrozenField_FromCurrencyID_length >= (Py_ssize_t)sizeof(data->FromCurrencyID)) {
            PyErr_Format(PyExc_ValueError, "FromCurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcSyncDelaySwapFrozenField_FromCurrencyID_length);
            return -1;
        }
        // memset(data->FromCurrencyID, 0, sizeof(data->FromCurrencyID));
        // memcpy(data->FromCurrencyID, CThostFtdcSyncDelaySwapFrozenField_FromCurrencyID, CThostFtdcSyncDelaySwapFrozenField_FromCurrencyID_length);
        strncpy(data->FromCurrencyID, CThostFtdcSyncDelaySwapFrozenField_FromCurrencyID, sizeof(data->FromCurrencyID));
        CThostFtdcSyncDelaySwapFrozenField_FromCurrencyID = NULL;
    }

    /// 源剩余换汇额度(可提冻结)
    /// typedef double TThostFtdcMoneyType
    data->FromRemainSwap = CThostFtdcSyncDelaySwapFrozenField_FromRemainSwap;

    /// 是否手工换汇
    /// typedef int TThostFtdcBoolType
    data->IsManualSwap = CThostFtdcSyncDelaySwapFrozenField_IsManualSwap;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDelaySwapFrozenFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDelaySwapFrozenFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDelaySwapFrozenFieldData>(self);
    CThostFtdcSyncDelaySwapFrozenField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:d,s:i}"
        , "DelaySwapSeqNo", data->DelaySwapSeqNo//, (Py_ssize_t)sizeof(data->DelaySwapSeqNo)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "FromCurrencyID", data->FromCurrencyID//, (Py_ssize_t)sizeof(data->FromCurrencyID)
        , "FromRemainSwap", data->FromRemainSwap
        , "IsManualSwap", data->IsManualSwap
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDelaySwapFrozenField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDelaySwapFrozenField repr");
        return NULL;
    }

    return repr;
}


/// 换汇流水号
/// typedef char TThostFtdcDepositSeqNoType[15]
static PyObject *PyCThostFtdcSyncDelaySwapFrozenFieldType_get_DelaySwapSeqNo(PyObject *self, void *closure) {
    PyCThostFtdcSyncDelaySwapFrozenFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDelaySwapFrozenFieldData>(self);
    CThostFtdcSyncDelaySwapFrozenField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->DelaySwapSeqNo, (Py_ssize_t)sizeof(data->DelaySwapSeqNo));
    return PyBytes_FromString(data->DelaySwapSeqNo);
}

static int PyCThostFtdcSyncDelaySwapFrozenFieldType_set_DelaySwapSeqNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DelaySwapSeqNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDelaySwapFrozenField::DelaySwapSeqNo)) {
        PyErr_SetString(PyExc_ValueError, "DelaySwapSeqNo must be less than 14 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDelaySwapFrozenFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDelaySwapFrozenFieldData>(self);
    CThostFtdcSyncDelaySwapFrozenField *data = &(extra->data);
    // memset(data->DelaySwapSeqNo, 0, sizeof(data->DelaySwapSeqNo));
    // memcpy(data->DelaySwapSeqNo, buf, len);
    strncpy(data->DelaySwapSeqNo, buf, sizeof(data->DelaySwapSeqNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSyncDelaySwapFrozenFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDelaySwapFrozenFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDelaySwapFrozenFieldData>(self);
    CThostFtdcSyncDelaySwapFrozenField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSyncDelaySwapFrozenFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDelaySwapFrozenField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDelaySwapFrozenFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDelaySwapFrozenFieldData>(self);
    CThostFtdcSyncDelaySwapFrozenField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcSyncDelaySwapFrozenFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDelaySwapFrozenFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDelaySwapFrozenFieldData>(self);
    CThostFtdcSyncDelaySwapFrozenField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcSyncDelaySwapFrozenFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDelaySwapFrozenField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDelaySwapFrozenFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDelaySwapFrozenFieldData>(self);
    CThostFtdcSyncDelaySwapFrozenField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 源币种
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcSyncDelaySwapFrozenFieldType_get_FromCurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDelaySwapFrozenFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDelaySwapFrozenFieldData>(self);
    CThostFtdcSyncDelaySwapFrozenField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->FromCurrencyID, (Py_ssize_t)sizeof(data->FromCurrencyID));
    return PyBytes_FromString(data->FromCurrencyID);
}

static int PyCThostFtdcSyncDelaySwapFrozenFieldType_set_FromCurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FromCurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDelaySwapFrozenField::FromCurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "FromCurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDelaySwapFrozenFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDelaySwapFrozenFieldData>(self);
    CThostFtdcSyncDelaySwapFrozenField *data = &(extra->data);
    // memset(data->FromCurrencyID, 0, sizeof(data->FromCurrencyID));
    // memcpy(data->FromCurrencyID, buf, len);
    strncpy(data->FromCurrencyID, buf, sizeof(data->FromCurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDelaySwapFrozenFieldType_members[] = {
    /// 源剩余换汇额度(可提冻结)
    /// typedef double TThostFtdcMoneyType
    {
        .name = "FromRemainSwap",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDelaySwapFrozenFieldData, data.FromRemainSwap),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("源剩余换汇额度(可提冻结)")
    },
    /// 是否手工换汇
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsManualSwap",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDelaySwapFrozenFieldData, data.IsManualSwap),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否手工换汇")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDelaySwapFrozenFieldType_getsets[] = {
    /// 换汇流水号
    /// typedef char TThostFtdcDepositSeqNoType[15]
    {
    .name = "DelaySwapSeqNo",
    .get = PyCThostFtdcSyncDelaySwapFrozenFieldType_get_DelaySwapSeqNo,
    .set = PyCThostFtdcSyncDelaySwapFrozenFieldType_set_DelaySwapSeqNo,
    .doc = PyDoc_STR("换汇流水号"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSyncDelaySwapFrozenFieldType_get_BrokerID,
    .set = PyCThostFtdcSyncDelaySwapFrozenFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcSyncDelaySwapFrozenFieldType_get_InvestorID,
    .set = PyCThostFtdcSyncDelaySwapFrozenFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 源币种
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "FromCurrencyID",
    .get = PyCThostFtdcSyncDelaySwapFrozenFieldType_get_FromCurrencyID,
    .set = PyCThostFtdcSyncDelaySwapFrozenFieldType_set_FromCurrencyID,
    .doc = PyDoc_STR("源币种"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDelaySwapFrozenFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDelaySwapFrozenField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("换汇可提冻结")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDelaySwapFrozenFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDelaySwapFrozenFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDelaySwapFrozenFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDelaySwapFrozenFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDelaySwapFrozenFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDelaySwapFrozenFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("换汇可提冻结")},
    {Py_tp_members, PyCThostFtdcSyncDelaySwapFrozenFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDelaySwapFrozenFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDelaySwapFrozenFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDelaySwapFrozenFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDelaySwapFrozenFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDelaySwapFrozenField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDelaySwapFrozenFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDelaySwapFrozenFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDelaySwapFrozenFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDelaySwapFrozenFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDelaySwapFrozenFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDelaySwapFrozenFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDelaySwapFrozenFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDelaySwapFrozenFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDelaySwapFrozenField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDelaySwapFrozenField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}