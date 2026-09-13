
#include "PyCThostFtdcQryInstrumentTradingRightField.h"

///查询合约交易权限

static int PyCThostFtdcQryInstrumentTradingRightFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "reserve1", "InstrumentID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryInstrumentTradingRightField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryInstrumentTradingRightField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryInstrumentTradingRightField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryInstrumentTradingRightField_InvestorID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcQryInstrumentTradingRightField_reserve1 = NULL;
    Py_ssize_t CThostFtdcQryInstrumentTradingRightField_reserve1_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryInstrumentTradingRightField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcQryInstrumentTradingRightField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
        , &CThostFtdcQryInstrumentTradingRightField_BrokerID, &CThostFtdcQryInstrumentTradingRightField_BrokerID_length
        , &CThostFtdcQryInstrumentTradingRightField_InvestorID, &CThostFtdcQryInstrumentTradingRightField_InvestorID_length
        , &CThostFtdcQryInstrumentTradingRightField_reserve1, &CThostFtdcQryInstrumentTradingRightField_reserve1_length
        , &CThostFtdcQryInstrumentTradingRightField_InstrumentID, &CThostFtdcQryInstrumentTradingRightField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentTradingRightFieldData>(self);
    CThostFtdcQryInstrumentTradingRightField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryInstrumentTradingRightField_BrokerID != NULL ) {
        if(CThostFtdcQryInstrumentTradingRightField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryInstrumentTradingRightField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryInstrumentTradingRightField_BrokerID, CThostFtdcQryInstrumentTradingRightField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryInstrumentTradingRightField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryInstrumentTradingRightField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryInstrumentTradingRightField_InvestorID != NULL ) {
        if(CThostFtdcQryInstrumentTradingRightField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryInstrumentTradingRightField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryInstrumentTradingRightField_InvestorID, CThostFtdcQryInstrumentTradingRightField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryInstrumentTradingRightField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryInstrumentTradingRightField_InvestorID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcQryInstrumentTradingRightField_reserve1 != NULL ) {
        if(CThostFtdcQryInstrumentTradingRightField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcQryInstrumentTradingRightField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcQryInstrumentTradingRightField_reserve1, CThostFtdcQryInstrumentTradingRightField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcQryInstrumentTradingRightField_reserve1, sizeof(data->reserve1));
        CThostFtdcQryInstrumentTradingRightField_reserve1 = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryInstrumentTradingRightField_InstrumentID != NULL ) {
        if(CThostFtdcQryInstrumentTradingRightField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQryInstrumentTradingRightField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcQryInstrumentTradingRightField_InstrumentID, CThostFtdcQryInstrumentTradingRightField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcQryInstrumentTradingRightField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcQryInstrumentTradingRightField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryInstrumentTradingRightFieldType_repr(PyObject *self) {

    PyCThostFtdcQryInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentTradingRightFieldData>(self);
    CThostFtdcQryInstrumentTradingRightField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInstrumentTradingRightField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInstrumentTradingRightField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryInstrumentTradingRightFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentTradingRightFieldData>(self);
    CThostFtdcQryInstrumentTradingRightField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryInstrumentTradingRightFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInstrumentTradingRightField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentTradingRightFieldData>(self);
    CThostFtdcQryInstrumentTradingRightField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryInstrumentTradingRightFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentTradingRightFieldData>(self);
    CThostFtdcQryInstrumentTradingRightField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryInstrumentTradingRightFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInstrumentTradingRightField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentTradingRightFieldData>(self);
    CThostFtdcQryInstrumentTradingRightField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcQryInstrumentTradingRightFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcQryInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentTradingRightFieldData>(self);
    CThostFtdcQryInstrumentTradingRightField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcQryInstrumentTradingRightFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInstrumentTradingRightField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentTradingRightFieldData>(self);
    CThostFtdcQryInstrumentTradingRightField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryInstrumentTradingRightFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQryInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentTradingRightFieldData>(self);
    CThostFtdcQryInstrumentTradingRightField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcQryInstrumentTradingRightFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInstrumentTradingRightField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInstrumentTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentTradingRightFieldData>(self);
    CThostFtdcQryInstrumentTradingRightField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryInstrumentTradingRightFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryInstrumentTradingRightFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryInstrumentTradingRightFieldType_get_BrokerID,
    .set = PyCThostFtdcQryInstrumentTradingRightFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryInstrumentTradingRightFieldType_get_InvestorID,
    .set = PyCThostFtdcQryInstrumentTradingRightFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcQryInstrumentTradingRightFieldType_get_reserve1,
    .set = PyCThostFtdcQryInstrumentTradingRightFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcQryInstrumentTradingRightFieldType_get_InstrumentID,
    .set = PyCThostFtdcQryInstrumentTradingRightFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryInstrumentTradingRightFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryInstrumentTradingRightField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询合约交易权限")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryInstrumentTradingRightFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryInstrumentTradingRightFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryInstrumentTradingRightFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryInstrumentTradingRightFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryInstrumentTradingRightFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryInstrumentTradingRightFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询合约交易权限")},
    {Py_tp_members, PyCThostFtdcQryInstrumentTradingRightFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryInstrumentTradingRightFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryInstrumentTradingRightFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryInstrumentTradingRightFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryInstrumentTradingRightFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryInstrumentTradingRightField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryInstrumentTradingRightFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryInstrumentTradingRightFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryInstrumentTradingRightFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryInstrumentTradingRightFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryInstrumentTradingRightFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryInstrumentTradingRightFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryInstrumentTradingRightFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryInstrumentTradingRightFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryInstrumentTradingRightField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInstrumentTradingRightField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}