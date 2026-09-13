
#include "PyCThostFtdcQryStrikeOffsetField.h"

///期权执行偏移值查询

static int PyCThostFtdcQryStrikeOffsetFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "reserve1", "InstrumentID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryStrikeOffsetField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryStrikeOffsetField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryStrikeOffsetField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryStrikeOffsetField_InvestorID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcQryStrikeOffsetField_reserve1 = NULL;
    Py_ssize_t CThostFtdcQryStrikeOffsetField_reserve1_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryStrikeOffsetField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcQryStrikeOffsetField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
        , &CThostFtdcQryStrikeOffsetField_BrokerID, &CThostFtdcQryStrikeOffsetField_BrokerID_length
        , &CThostFtdcQryStrikeOffsetField_InvestorID, &CThostFtdcQryStrikeOffsetField_InvestorID_length
        , &CThostFtdcQryStrikeOffsetField_reserve1, &CThostFtdcQryStrikeOffsetField_reserve1_length
        , &CThostFtdcQryStrikeOffsetField_InstrumentID, &CThostFtdcQryStrikeOffsetField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryStrikeOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryStrikeOffsetFieldData>(self);
    CThostFtdcQryStrikeOffsetField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryStrikeOffsetField_BrokerID != NULL ) {
        if(CThostFtdcQryStrikeOffsetField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryStrikeOffsetField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryStrikeOffsetField_BrokerID, CThostFtdcQryStrikeOffsetField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryStrikeOffsetField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryStrikeOffsetField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryStrikeOffsetField_InvestorID != NULL ) {
        if(CThostFtdcQryStrikeOffsetField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryStrikeOffsetField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryStrikeOffsetField_InvestorID, CThostFtdcQryStrikeOffsetField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryStrikeOffsetField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryStrikeOffsetField_InvestorID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcQryStrikeOffsetField_reserve1 != NULL ) {
        if(CThostFtdcQryStrikeOffsetField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcQryStrikeOffsetField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcQryStrikeOffsetField_reserve1, CThostFtdcQryStrikeOffsetField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcQryStrikeOffsetField_reserve1, sizeof(data->reserve1));
        CThostFtdcQryStrikeOffsetField_reserve1 = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryStrikeOffsetField_InstrumentID != NULL ) {
        if(CThostFtdcQryStrikeOffsetField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQryStrikeOffsetField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcQryStrikeOffsetField_InstrumentID, CThostFtdcQryStrikeOffsetField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcQryStrikeOffsetField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcQryStrikeOffsetField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryStrikeOffsetFieldType_repr(PyObject *self) {

    PyCThostFtdcQryStrikeOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryStrikeOffsetFieldData>(self);
    CThostFtdcQryStrikeOffsetField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryStrikeOffsetField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryStrikeOffsetField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryStrikeOffsetFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryStrikeOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryStrikeOffsetFieldData>(self);
    CThostFtdcQryStrikeOffsetField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryStrikeOffsetFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryStrikeOffsetField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryStrikeOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryStrikeOffsetFieldData>(self);
    CThostFtdcQryStrikeOffsetField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryStrikeOffsetFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryStrikeOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryStrikeOffsetFieldData>(self);
    CThostFtdcQryStrikeOffsetField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryStrikeOffsetFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryStrikeOffsetField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryStrikeOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryStrikeOffsetFieldData>(self);
    CThostFtdcQryStrikeOffsetField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcQryStrikeOffsetFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcQryStrikeOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryStrikeOffsetFieldData>(self);
    CThostFtdcQryStrikeOffsetField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcQryStrikeOffsetFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryStrikeOffsetField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryStrikeOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryStrikeOffsetFieldData>(self);
    CThostFtdcQryStrikeOffsetField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryStrikeOffsetFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQryStrikeOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryStrikeOffsetFieldData>(self);
    CThostFtdcQryStrikeOffsetField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcQryStrikeOffsetFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryStrikeOffsetField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryStrikeOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryStrikeOffsetFieldData>(self);
    CThostFtdcQryStrikeOffsetField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryStrikeOffsetFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryStrikeOffsetFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryStrikeOffsetFieldType_get_BrokerID,
    .set = PyCThostFtdcQryStrikeOffsetFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryStrikeOffsetFieldType_get_InvestorID,
    .set = PyCThostFtdcQryStrikeOffsetFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcQryStrikeOffsetFieldType_get_reserve1,
    .set = PyCThostFtdcQryStrikeOffsetFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcQryStrikeOffsetFieldType_get_InstrumentID,
    .set = PyCThostFtdcQryStrikeOffsetFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryStrikeOffsetFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryStrikeOffsetField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("期权执行偏移值查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryStrikeOffsetFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryStrikeOffsetFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryStrikeOffsetFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryStrikeOffsetFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryStrikeOffsetFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryStrikeOffsetFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("期权执行偏移值查询")},
    {Py_tp_members, PyCThostFtdcQryStrikeOffsetFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryStrikeOffsetFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryStrikeOffsetFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryStrikeOffsetFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryStrikeOffsetFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryStrikeOffsetField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryStrikeOffsetFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryStrikeOffsetFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryStrikeOffsetFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryStrikeOffsetFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryStrikeOffsetFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryStrikeOffsetFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryStrikeOffsetFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryStrikeOffsetFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryStrikeOffsetField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryStrikeOffsetField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}