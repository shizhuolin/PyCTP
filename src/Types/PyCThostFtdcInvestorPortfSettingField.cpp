
#include "PyCThostFtdcInvestorPortfSettingField.h"

///投资者新组保设置

static int PyCThostFtdcInvestorPortfSettingFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "BrokerID", "InvestorID", "HedgeFlag", "UsePortf", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcInvestorPortfSettingField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcInvestorPortfSettingField_ExchangeID_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInvestorPortfSettingField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInvestorPortfSettingField_BrokerID_length = 0;

    /// 投资者编号
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInvestorPortfSettingField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInvestorPortfSettingField_InvestorID_length = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcInvestorPortfSettingField_HedgeFlag = 0;

    /// 是否开启新组保
    /// typedef int TThostFtdcBoolType
    int CThostFtdcInvestorPortfSettingField_UsePortf = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ci", (char **)kwlist
        , &CThostFtdcInvestorPortfSettingField_ExchangeID, &CThostFtdcInvestorPortfSettingField_ExchangeID_length
        , &CThostFtdcInvestorPortfSettingField_BrokerID, &CThostFtdcInvestorPortfSettingField_BrokerID_length
        , &CThostFtdcInvestorPortfSettingField_InvestorID, &CThostFtdcInvestorPortfSettingField_InvestorID_length
        , &CThostFtdcInvestorPortfSettingField_HedgeFlag
        , &CThostFtdcInvestorPortfSettingField_UsePortf
    )) {
        return -1;
    }

    PyCThostFtdcInvestorPortfSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPortfSettingFieldData>(self);
    CThostFtdcInvestorPortfSettingField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcInvestorPortfSettingField_ExchangeID != NULL ) {
        if(CThostFtdcInvestorPortfSettingField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcInvestorPortfSettingField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcInvestorPortfSettingField_ExchangeID, CThostFtdcInvestorPortfSettingField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcInvestorPortfSettingField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcInvestorPortfSettingField_ExchangeID = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInvestorPortfSettingField_BrokerID != NULL ) {
        if(CThostFtdcInvestorPortfSettingField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInvestorPortfSettingField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInvestorPortfSettingField_BrokerID, CThostFtdcInvestorPortfSettingField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInvestorPortfSettingField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInvestorPortfSettingField_BrokerID = NULL;
    }

    /// 投资者编号
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInvestorPortfSettingField_InvestorID != NULL ) {
        if(CThostFtdcInvestorPortfSettingField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInvestorPortfSettingField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInvestorPortfSettingField_InvestorID, CThostFtdcInvestorPortfSettingField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInvestorPortfSettingField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInvestorPortfSettingField_InvestorID = NULL;
    }

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcInvestorPortfSettingField_HedgeFlag;

    /// 是否开启新组保
    /// typedef int TThostFtdcBoolType
    data->UsePortf = CThostFtdcInvestorPortfSettingField_UsePortf;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInvestorPortfSettingFieldType_repr(PyObject *self) {

    PyCThostFtdcInvestorPortfSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPortfSettingFieldData>(self);
    CThostFtdcInvestorPortfSettingField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:c,s:i}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "HedgeFlag", data->HedgeFlag
        , "UsePortf", data->UsePortf
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorPortfSettingField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorPortfSettingField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcInvestorPortfSettingFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPortfSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPortfSettingFieldData>(self);
    CThostFtdcInvestorPortfSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcInvestorPortfSettingFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPortfSettingField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPortfSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPortfSettingFieldData>(self);
    CThostFtdcInvestorPortfSettingField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInvestorPortfSettingFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPortfSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPortfSettingFieldData>(self);
    CThostFtdcInvestorPortfSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInvestorPortfSettingFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPortfSettingField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPortfSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPortfSettingFieldData>(self);
    CThostFtdcInvestorPortfSettingField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者编号
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInvestorPortfSettingFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPortfSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPortfSettingFieldData>(self);
    CThostFtdcInvestorPortfSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInvestorPortfSettingFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPortfSettingField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPortfSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPortfSettingFieldData>(self);
    CThostFtdcInvestorPortfSettingField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcInvestorPortfSettingFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPortfSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPortfSettingFieldData>(self);
    CThostFtdcInvestorPortfSettingField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcInvestorPortfSettingFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInvestorPortfSettingField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPortfSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPortfSettingFieldData>(self);
    CThostFtdcInvestorPortfSettingField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInvestorPortfSettingFieldType_members[] = {
    /// 是否开启新组保
    /// typedef int TThostFtdcBoolType
    {
        .name = "UsePortf",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorPortfSettingFieldData, data.UsePortf),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否开启新组保")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInvestorPortfSettingFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcInvestorPortfSettingFieldType_get_ExchangeID,
    .set = PyCThostFtdcInvestorPortfSettingFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInvestorPortfSettingFieldType_get_BrokerID,
    .set = PyCThostFtdcInvestorPortfSettingFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者编号
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInvestorPortfSettingFieldType_get_InvestorID,
    .set = PyCThostFtdcInvestorPortfSettingFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者编号"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcInvestorPortfSettingFieldType_get_HedgeFlag,
    .set = PyCThostFtdcInvestorPortfSettingFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInvestorPortfSettingFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInvestorPortfSettingField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者新组保设置")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInvestorPortfSettingFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInvestorPortfSettingFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInvestorPortfSettingFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInvestorPortfSettingFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInvestorPortfSettingFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInvestorPortfSettingFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者新组保设置")},
    {Py_tp_members, PyCThostFtdcInvestorPortfSettingFieldType_members},
    {Py_tp_getset, PyCThostFtdcInvestorPortfSettingFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInvestorPortfSettingFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInvestorPortfSettingFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInvestorPortfSettingFieldType_spec = {
    .name = "PyCTP.CThostFtdcInvestorPortfSettingField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInvestorPortfSettingFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInvestorPortfSettingFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInvestorPortfSettingFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInvestorPortfSettingFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInvestorPortfSettingFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInvestorPortfSettingFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInvestorPortfSettingFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInvestorPortfSettingFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInvestorPortfSettingField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorPortfSettingField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}