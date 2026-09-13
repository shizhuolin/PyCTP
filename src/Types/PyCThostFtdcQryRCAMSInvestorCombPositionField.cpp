
#include "PyCThostFtdcQryRCAMSInvestorCombPositionField.h"

///RCAMS策略组合持仓查询

static int PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "InstrumentID", "CombInstrumentID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryRCAMSInvestorCombPositionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryRCAMSInvestorCombPositionField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryRCAMSInvestorCombPositionField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryRCAMSInvestorCombPositionField_InvestorID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryRCAMSInvestorCombPositionField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcQryRCAMSInvestorCombPositionField_InstrumentID_length = 0;

    /// 组合合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryRCAMSInvestorCombPositionField_CombInstrumentID = NULL;
    Py_ssize_t CThostFtdcQryRCAMSInvestorCombPositionField_CombInstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
        , &CThostFtdcQryRCAMSInvestorCombPositionField_BrokerID, &CThostFtdcQryRCAMSInvestorCombPositionField_BrokerID_length
        , &CThostFtdcQryRCAMSInvestorCombPositionField_InvestorID, &CThostFtdcQryRCAMSInvestorCombPositionField_InvestorID_length
        , &CThostFtdcQryRCAMSInvestorCombPositionField_InstrumentID, &CThostFtdcQryRCAMSInvestorCombPositionField_InstrumentID_length
        , &CThostFtdcQryRCAMSInvestorCombPositionField_CombInstrumentID, &CThostFtdcQryRCAMSInvestorCombPositionField_CombInstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryRCAMSInvestorCombPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSInvestorCombPositionFieldData>(self);
    CThostFtdcQryRCAMSInvestorCombPositionField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryRCAMSInvestorCombPositionField_BrokerID != NULL ) {
        if(CThostFtdcQryRCAMSInvestorCombPositionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryRCAMSInvestorCombPositionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryRCAMSInvestorCombPositionField_BrokerID, CThostFtdcQryRCAMSInvestorCombPositionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryRCAMSInvestorCombPositionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryRCAMSInvestorCombPositionField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryRCAMSInvestorCombPositionField_InvestorID != NULL ) {
        if(CThostFtdcQryRCAMSInvestorCombPositionField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryRCAMSInvestorCombPositionField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryRCAMSInvestorCombPositionField_InvestorID, CThostFtdcQryRCAMSInvestorCombPositionField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryRCAMSInvestorCombPositionField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryRCAMSInvestorCombPositionField_InvestorID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryRCAMSInvestorCombPositionField_InstrumentID != NULL ) {
        if(CThostFtdcQryRCAMSInvestorCombPositionField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQryRCAMSInvestorCombPositionField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcQryRCAMSInvestorCombPositionField_InstrumentID, CThostFtdcQryRCAMSInvestorCombPositionField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcQryRCAMSInvestorCombPositionField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcQryRCAMSInvestorCombPositionField_InstrumentID = NULL;
    }

    /// 组合合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryRCAMSInvestorCombPositionField_CombInstrumentID != NULL ) {
        if(CThostFtdcQryRCAMSInvestorCombPositionField_CombInstrumentID_length >= (Py_ssize_t)sizeof(data->CombInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "CombInstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQryRCAMSInvestorCombPositionField_CombInstrumentID_length);
            return -1;
        }
        // memset(data->CombInstrumentID, 0, sizeof(data->CombInstrumentID));
        // memcpy(data->CombInstrumentID, CThostFtdcQryRCAMSInvestorCombPositionField_CombInstrumentID, CThostFtdcQryRCAMSInvestorCombPositionField_CombInstrumentID_length);
        strncpy(data->CombInstrumentID, CThostFtdcQryRCAMSInvestorCombPositionField_CombInstrumentID, sizeof(data->CombInstrumentID));
        CThostFtdcQryRCAMSInvestorCombPositionField_CombInstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_repr(PyObject *self) {

    PyCThostFtdcQryRCAMSInvestorCombPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSInvestorCombPositionFieldData>(self);
    CThostFtdcQryRCAMSInvestorCombPositionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "CombInstrumentID", data->CombInstrumentID//, (Py_ssize_t)sizeof(data->CombInstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryRCAMSInvestorCombPositionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryRCAMSInvestorCombPositionField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryRCAMSInvestorCombPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSInvestorCombPositionFieldData>(self);
    CThostFtdcQryRCAMSInvestorCombPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryRCAMSInvestorCombPositionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryRCAMSInvestorCombPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSInvestorCombPositionFieldData>(self);
    CThostFtdcQryRCAMSInvestorCombPositionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryRCAMSInvestorCombPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSInvestorCombPositionFieldData>(self);
    CThostFtdcQryRCAMSInvestorCombPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryRCAMSInvestorCombPositionField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryRCAMSInvestorCombPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSInvestorCombPositionFieldData>(self);
    CThostFtdcQryRCAMSInvestorCombPositionField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQryRCAMSInvestorCombPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSInvestorCombPositionFieldData>(self);
    CThostFtdcQryRCAMSInvestorCombPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryRCAMSInvestorCombPositionField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryRCAMSInvestorCombPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSInvestorCombPositionFieldData>(self);
    CThostFtdcQryRCAMSInvestorCombPositionField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 组合合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_get_CombInstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQryRCAMSInvestorCombPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSInvestorCombPositionFieldData>(self);
    CThostFtdcQryRCAMSInvestorCombPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombInstrumentID, (Py_ssize_t)sizeof(data->CombInstrumentID));
    return PyBytes_FromString(data->CombInstrumentID);
}

static int PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_set_CombInstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombInstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryRCAMSInvestorCombPositionField::CombInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "CombInstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryRCAMSInvestorCombPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSInvestorCombPositionFieldData>(self);
    CThostFtdcQryRCAMSInvestorCombPositionField *data = &(extra->data);
    // memset(data->CombInstrumentID, 0, sizeof(data->CombInstrumentID));
    // memcpy(data->CombInstrumentID, buf, len);
    strncpy(data->CombInstrumentID, buf, sizeof(data->CombInstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_get_BrokerID,
    .set = PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_get_InvestorID,
    .set = PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_get_InstrumentID,
    .set = PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 组合合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "CombInstrumentID",
    .get = PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_get_CombInstrumentID,
    .set = PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_set_CombInstrumentID,
    .doc = PyDoc_STR("组合合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryRCAMSInvestorCombPositionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("RCAMS策略组合持仓查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryRCAMSInvestorCombPositionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("RCAMS策略组合持仓查询")},
    {Py_tp_members, PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryRCAMSInvestorCombPositionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryRCAMSInvestorCombPositionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryRCAMSInvestorCombPositionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryRCAMSInvestorCombPositionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryRCAMSInvestorCombPositionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryRCAMSInvestorCombPositionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryRCAMSInvestorCombPositionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}