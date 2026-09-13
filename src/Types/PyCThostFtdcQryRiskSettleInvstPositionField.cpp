
#include "PyCThostFtdcQryRiskSettleInvstPositionField.h"

///投资者风险结算持仓查询

static int PyCThostFtdcQryRiskSettleInvstPositionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "InstrumentID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryRiskSettleInvstPositionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryRiskSettleInvstPositionField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryRiskSettleInvstPositionField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryRiskSettleInvstPositionField_InvestorID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryRiskSettleInvstPositionField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcQryRiskSettleInvstPositionField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcQryRiskSettleInvstPositionField_BrokerID, &CThostFtdcQryRiskSettleInvstPositionField_BrokerID_length
        , &CThostFtdcQryRiskSettleInvstPositionField_InvestorID, &CThostFtdcQryRiskSettleInvstPositionField_InvestorID_length
        , &CThostFtdcQryRiskSettleInvstPositionField_InstrumentID, &CThostFtdcQryRiskSettleInvstPositionField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryRiskSettleInvstPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRiskSettleInvstPositionFieldData>(self);
    CThostFtdcQryRiskSettleInvstPositionField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryRiskSettleInvstPositionField_BrokerID != NULL ) {
        if(CThostFtdcQryRiskSettleInvstPositionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryRiskSettleInvstPositionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryRiskSettleInvstPositionField_BrokerID, CThostFtdcQryRiskSettleInvstPositionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryRiskSettleInvstPositionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryRiskSettleInvstPositionField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryRiskSettleInvstPositionField_InvestorID != NULL ) {
        if(CThostFtdcQryRiskSettleInvstPositionField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryRiskSettleInvstPositionField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryRiskSettleInvstPositionField_InvestorID, CThostFtdcQryRiskSettleInvstPositionField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryRiskSettleInvstPositionField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryRiskSettleInvstPositionField_InvestorID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryRiskSettleInvstPositionField_InstrumentID != NULL ) {
        if(CThostFtdcQryRiskSettleInvstPositionField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQryRiskSettleInvstPositionField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcQryRiskSettleInvstPositionField_InstrumentID, CThostFtdcQryRiskSettleInvstPositionField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcQryRiskSettleInvstPositionField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcQryRiskSettleInvstPositionField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryRiskSettleInvstPositionFieldType_repr(PyObject *self) {

    PyCThostFtdcQryRiskSettleInvstPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRiskSettleInvstPositionFieldData>(self);
    CThostFtdcQryRiskSettleInvstPositionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryRiskSettleInvstPositionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryRiskSettleInvstPositionField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryRiskSettleInvstPositionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryRiskSettleInvstPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRiskSettleInvstPositionFieldData>(self);
    CThostFtdcQryRiskSettleInvstPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryRiskSettleInvstPositionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryRiskSettleInvstPositionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryRiskSettleInvstPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRiskSettleInvstPositionFieldData>(self);
    CThostFtdcQryRiskSettleInvstPositionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryRiskSettleInvstPositionFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryRiskSettleInvstPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRiskSettleInvstPositionFieldData>(self);
    CThostFtdcQryRiskSettleInvstPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryRiskSettleInvstPositionFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryRiskSettleInvstPositionField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryRiskSettleInvstPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRiskSettleInvstPositionFieldData>(self);
    CThostFtdcQryRiskSettleInvstPositionField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryRiskSettleInvstPositionFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQryRiskSettleInvstPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRiskSettleInvstPositionFieldData>(self);
    CThostFtdcQryRiskSettleInvstPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcQryRiskSettleInvstPositionFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryRiskSettleInvstPositionField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryRiskSettleInvstPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRiskSettleInvstPositionFieldData>(self);
    CThostFtdcQryRiskSettleInvstPositionField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryRiskSettleInvstPositionFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryRiskSettleInvstPositionFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryRiskSettleInvstPositionFieldType_get_BrokerID,
    .set = PyCThostFtdcQryRiskSettleInvstPositionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryRiskSettleInvstPositionFieldType_get_InvestorID,
    .set = PyCThostFtdcQryRiskSettleInvstPositionFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcQryRiskSettleInvstPositionFieldType_get_InstrumentID,
    .set = PyCThostFtdcQryRiskSettleInvstPositionFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryRiskSettleInvstPositionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryRiskSettleInvstPositionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者风险结算持仓查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryRiskSettleInvstPositionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryRiskSettleInvstPositionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryRiskSettleInvstPositionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryRiskSettleInvstPositionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryRiskSettleInvstPositionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryRiskSettleInvstPositionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者风险结算持仓查询")},
    {Py_tp_members, PyCThostFtdcQryRiskSettleInvstPositionFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryRiskSettleInvstPositionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryRiskSettleInvstPositionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryRiskSettleInvstPositionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryRiskSettleInvstPositionFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryRiskSettleInvstPositionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryRiskSettleInvstPositionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryRiskSettleInvstPositionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryRiskSettleInvstPositionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryRiskSettleInvstPositionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryRiskSettleInvstPositionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryRiskSettleInvstPositionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryRiskSettleInvstPositionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryRiskSettleInvstPositionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryRiskSettleInvstPositionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryRiskSettleInvstPositionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}