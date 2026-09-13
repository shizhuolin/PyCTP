
#include "PyCThostFtdcQryOptionInstrTradingRightField.h"

///查询期权合约交易权限

static int PyCThostFtdcQryOptionInstrTradingRightFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "reserve1", "Direction", "InstrumentID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryOptionInstrTradingRightField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryOptionInstrTradingRightField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryOptionInstrTradingRightField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryOptionInstrTradingRightField_InvestorID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcQryOptionInstrTradingRightField_reserve1 = NULL;
    Py_ssize_t CThostFtdcQryOptionInstrTradingRightField_reserve1_length = 0;

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    char CThostFtdcQryOptionInstrTradingRightField_Direction = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryOptionInstrTradingRightField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcQryOptionInstrTradingRightField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#cy#", (char **)kwlist
        , &CThostFtdcQryOptionInstrTradingRightField_BrokerID, &CThostFtdcQryOptionInstrTradingRightField_BrokerID_length
        , &CThostFtdcQryOptionInstrTradingRightField_InvestorID, &CThostFtdcQryOptionInstrTradingRightField_InvestorID_length
        , &CThostFtdcQryOptionInstrTradingRightField_reserve1, &CThostFtdcQryOptionInstrTradingRightField_reserve1_length
        , &CThostFtdcQryOptionInstrTradingRightField_Direction
        , &CThostFtdcQryOptionInstrTradingRightField_InstrumentID, &CThostFtdcQryOptionInstrTradingRightField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryOptionInstrTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrTradingRightFieldData>(self);
    CThostFtdcQryOptionInstrTradingRightField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryOptionInstrTradingRightField_BrokerID != NULL ) {
        if(CThostFtdcQryOptionInstrTradingRightField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryOptionInstrTradingRightField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryOptionInstrTradingRightField_BrokerID, CThostFtdcQryOptionInstrTradingRightField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryOptionInstrTradingRightField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryOptionInstrTradingRightField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryOptionInstrTradingRightField_InvestorID != NULL ) {
        if(CThostFtdcQryOptionInstrTradingRightField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryOptionInstrTradingRightField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryOptionInstrTradingRightField_InvestorID, CThostFtdcQryOptionInstrTradingRightField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryOptionInstrTradingRightField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryOptionInstrTradingRightField_InvestorID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcQryOptionInstrTradingRightField_reserve1 != NULL ) {
        if(CThostFtdcQryOptionInstrTradingRightField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcQryOptionInstrTradingRightField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcQryOptionInstrTradingRightField_reserve1, CThostFtdcQryOptionInstrTradingRightField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcQryOptionInstrTradingRightField_reserve1, sizeof(data->reserve1));
        CThostFtdcQryOptionInstrTradingRightField_reserve1 = NULL;
    }

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    data->Direction = CThostFtdcQryOptionInstrTradingRightField_Direction;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryOptionInstrTradingRightField_InstrumentID != NULL ) {
        if(CThostFtdcQryOptionInstrTradingRightField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQryOptionInstrTradingRightField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcQryOptionInstrTradingRightField_InstrumentID, CThostFtdcQryOptionInstrTradingRightField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcQryOptionInstrTradingRightField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcQryOptionInstrTradingRightField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryOptionInstrTradingRightFieldType_repr(PyObject *self) {

    PyCThostFtdcQryOptionInstrTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrTradingRightFieldData>(self);
    CThostFtdcQryOptionInstrTradingRightField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:c,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "Direction", data->Direction
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryOptionInstrTradingRightField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryOptionInstrTradingRightField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryOptionInstrTradingRightFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryOptionInstrTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrTradingRightFieldData>(self);
    CThostFtdcQryOptionInstrTradingRightField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryOptionInstrTradingRightFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOptionInstrTradingRightField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOptionInstrTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrTradingRightFieldData>(self);
    CThostFtdcQryOptionInstrTradingRightField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryOptionInstrTradingRightFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryOptionInstrTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrTradingRightFieldData>(self);
    CThostFtdcQryOptionInstrTradingRightField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryOptionInstrTradingRightFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOptionInstrTradingRightField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOptionInstrTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrTradingRightFieldData>(self);
    CThostFtdcQryOptionInstrTradingRightField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcQryOptionInstrTradingRightFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcQryOptionInstrTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrTradingRightFieldData>(self);
    CThostFtdcQryOptionInstrTradingRightField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcQryOptionInstrTradingRightFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOptionInstrTradingRightField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOptionInstrTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrTradingRightFieldData>(self);
    CThostFtdcQryOptionInstrTradingRightField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 买卖方向
/// typedef char TThostFtdcDirectionType
static PyObject *PyCThostFtdcQryOptionInstrTradingRightFieldType_get_Direction(PyObject *self, void *closure) {
    PyCThostFtdcQryOptionInstrTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrTradingRightFieldData>(self);
    CThostFtdcQryOptionInstrTradingRightField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Direction), 1);
}

static int PyCThostFtdcQryOptionInstrTradingRightFieldType_set_Direction(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcQryOptionInstrTradingRightField::Direction)) {
        PyErr_SetString(PyExc_ValueError, "Direction must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOptionInstrTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrTradingRightFieldData>(self);
    CThostFtdcQryOptionInstrTradingRightField *data = &(extra->data);
    data->Direction = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryOptionInstrTradingRightFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQryOptionInstrTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrTradingRightFieldData>(self);
    CThostFtdcQryOptionInstrTradingRightField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcQryOptionInstrTradingRightFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOptionInstrTradingRightField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOptionInstrTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrTradingRightFieldData>(self);
    CThostFtdcQryOptionInstrTradingRightField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryOptionInstrTradingRightFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryOptionInstrTradingRightFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryOptionInstrTradingRightFieldType_get_BrokerID,
    .set = PyCThostFtdcQryOptionInstrTradingRightFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryOptionInstrTradingRightFieldType_get_InvestorID,
    .set = PyCThostFtdcQryOptionInstrTradingRightFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcQryOptionInstrTradingRightFieldType_get_reserve1,
    .set = PyCThostFtdcQryOptionInstrTradingRightFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    {
    .name = "Direction",
    .get = PyCThostFtdcQryOptionInstrTradingRightFieldType_get_Direction,
    .set = PyCThostFtdcQryOptionInstrTradingRightFieldType_set_Direction,
    .doc = PyDoc_STR("买卖方向"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcQryOptionInstrTradingRightFieldType_get_InstrumentID,
    .set = PyCThostFtdcQryOptionInstrTradingRightFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryOptionInstrTradingRightFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryOptionInstrTradingRightField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询期权合约交易权限")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryOptionInstrTradingRightFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryOptionInstrTradingRightFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryOptionInstrTradingRightFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryOptionInstrTradingRightFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryOptionInstrTradingRightFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryOptionInstrTradingRightFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询期权合约交易权限")},
    {Py_tp_members, PyCThostFtdcQryOptionInstrTradingRightFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryOptionInstrTradingRightFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryOptionInstrTradingRightFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryOptionInstrTradingRightFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryOptionInstrTradingRightFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryOptionInstrTradingRightField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryOptionInstrTradingRightFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryOptionInstrTradingRightFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryOptionInstrTradingRightFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryOptionInstrTradingRightFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryOptionInstrTradingRightFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryOptionInstrTradingRightFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryOptionInstrTradingRightFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryOptionInstrTradingRightFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryOptionInstrTradingRightField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryOptionInstrTradingRightField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}