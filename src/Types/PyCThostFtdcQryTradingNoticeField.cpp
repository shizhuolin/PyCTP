
#include "PyCThostFtdcQryTradingNoticeField.h"

///查询交易事件通知

static int PyCThostFtdcQryTradingNoticeFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "InvestUnitID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryTradingNoticeField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryTradingNoticeField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryTradingNoticeField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryTradingNoticeField_InvestorID_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcQryTradingNoticeField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcQryTradingNoticeField_InvestUnitID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcQryTradingNoticeField_BrokerID, &CThostFtdcQryTradingNoticeField_BrokerID_length
        , &CThostFtdcQryTradingNoticeField_InvestorID, &CThostFtdcQryTradingNoticeField_InvestorID_length
        , &CThostFtdcQryTradingNoticeField_InvestUnitID, &CThostFtdcQryTradingNoticeField_InvestUnitID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryTradingNoticeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingNoticeFieldData>(self);
    CThostFtdcQryTradingNoticeField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryTradingNoticeField_BrokerID != NULL ) {
        if(CThostFtdcQryTradingNoticeField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryTradingNoticeField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryTradingNoticeField_BrokerID, CThostFtdcQryTradingNoticeField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryTradingNoticeField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryTradingNoticeField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryTradingNoticeField_InvestorID != NULL ) {
        if(CThostFtdcQryTradingNoticeField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryTradingNoticeField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryTradingNoticeField_InvestorID, CThostFtdcQryTradingNoticeField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryTradingNoticeField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryTradingNoticeField_InvestorID = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcQryTradingNoticeField_InvestUnitID != NULL ) {
        if(CThostFtdcQryTradingNoticeField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcQryTradingNoticeField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcQryTradingNoticeField_InvestUnitID, CThostFtdcQryTradingNoticeField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcQryTradingNoticeField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcQryTradingNoticeField_InvestUnitID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryTradingNoticeFieldType_repr(PyObject *self) {

    PyCThostFtdcQryTradingNoticeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingNoticeFieldData>(self);
    CThostFtdcQryTradingNoticeField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryTradingNoticeField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryTradingNoticeField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryTradingNoticeFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryTradingNoticeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingNoticeFieldData>(self);
    CThostFtdcQryTradingNoticeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryTradingNoticeFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryTradingNoticeField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTradingNoticeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingNoticeFieldData>(self);
    CThostFtdcQryTradingNoticeField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryTradingNoticeFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryTradingNoticeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingNoticeFieldData>(self);
    CThostFtdcQryTradingNoticeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryTradingNoticeFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryTradingNoticeField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTradingNoticeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingNoticeFieldData>(self);
    CThostFtdcQryTradingNoticeField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcQryTradingNoticeFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcQryTradingNoticeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingNoticeFieldData>(self);
    CThostFtdcQryTradingNoticeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcQryTradingNoticeFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryTradingNoticeField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTradingNoticeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingNoticeFieldData>(self);
    CThostFtdcQryTradingNoticeField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryTradingNoticeFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryTradingNoticeFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryTradingNoticeFieldType_get_BrokerID,
    .set = PyCThostFtdcQryTradingNoticeFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryTradingNoticeFieldType_get_InvestorID,
    .set = PyCThostFtdcQryTradingNoticeFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcQryTradingNoticeFieldType_get_InvestUnitID,
    .set = PyCThostFtdcQryTradingNoticeFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryTradingNoticeFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryTradingNoticeField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询交易事件通知")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryTradingNoticeFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryTradingNoticeFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryTradingNoticeFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryTradingNoticeFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryTradingNoticeFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryTradingNoticeFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询交易事件通知")},
    {Py_tp_members, PyCThostFtdcQryTradingNoticeFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryTradingNoticeFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryTradingNoticeFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryTradingNoticeFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryTradingNoticeFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryTradingNoticeField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryTradingNoticeFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryTradingNoticeFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryTradingNoticeFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryTradingNoticeFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryTradingNoticeFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryTradingNoticeFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryTradingNoticeFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryTradingNoticeFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryTradingNoticeField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryTradingNoticeField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}