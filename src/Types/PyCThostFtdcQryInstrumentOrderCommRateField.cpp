
#include "PyCThostFtdcQryInstrumentOrderCommRateField.h"

///报单手续费率查询

static int PyCThostFtdcQryInstrumentOrderCommRateFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "reserve1", "InstrumentID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryInstrumentOrderCommRateField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryInstrumentOrderCommRateField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryInstrumentOrderCommRateField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryInstrumentOrderCommRateField_InvestorID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcQryInstrumentOrderCommRateField_reserve1 = NULL;
    Py_ssize_t CThostFtdcQryInstrumentOrderCommRateField_reserve1_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryInstrumentOrderCommRateField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcQryInstrumentOrderCommRateField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
        , &CThostFtdcQryInstrumentOrderCommRateField_BrokerID, &CThostFtdcQryInstrumentOrderCommRateField_BrokerID_length
        , &CThostFtdcQryInstrumentOrderCommRateField_InvestorID, &CThostFtdcQryInstrumentOrderCommRateField_InvestorID_length
        , &CThostFtdcQryInstrumentOrderCommRateField_reserve1, &CThostFtdcQryInstrumentOrderCommRateField_reserve1_length
        , &CThostFtdcQryInstrumentOrderCommRateField_InstrumentID, &CThostFtdcQryInstrumentOrderCommRateField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryInstrumentOrderCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentOrderCommRateFieldData>(self);
    CThostFtdcQryInstrumentOrderCommRateField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryInstrumentOrderCommRateField_BrokerID != NULL ) {
        if(CThostFtdcQryInstrumentOrderCommRateField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryInstrumentOrderCommRateField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryInstrumentOrderCommRateField_BrokerID, CThostFtdcQryInstrumentOrderCommRateField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryInstrumentOrderCommRateField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryInstrumentOrderCommRateField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryInstrumentOrderCommRateField_InvestorID != NULL ) {
        if(CThostFtdcQryInstrumentOrderCommRateField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryInstrumentOrderCommRateField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryInstrumentOrderCommRateField_InvestorID, CThostFtdcQryInstrumentOrderCommRateField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryInstrumentOrderCommRateField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryInstrumentOrderCommRateField_InvestorID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcQryInstrumentOrderCommRateField_reserve1 != NULL ) {
        if(CThostFtdcQryInstrumentOrderCommRateField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcQryInstrumentOrderCommRateField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcQryInstrumentOrderCommRateField_reserve1, CThostFtdcQryInstrumentOrderCommRateField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcQryInstrumentOrderCommRateField_reserve1, sizeof(data->reserve1));
        CThostFtdcQryInstrumentOrderCommRateField_reserve1 = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryInstrumentOrderCommRateField_InstrumentID != NULL ) {
        if(CThostFtdcQryInstrumentOrderCommRateField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQryInstrumentOrderCommRateField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcQryInstrumentOrderCommRateField_InstrumentID, CThostFtdcQryInstrumentOrderCommRateField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcQryInstrumentOrderCommRateField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcQryInstrumentOrderCommRateField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryInstrumentOrderCommRateFieldType_repr(PyObject *self) {

    PyCThostFtdcQryInstrumentOrderCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentOrderCommRateFieldData>(self);
    CThostFtdcQryInstrumentOrderCommRateField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInstrumentOrderCommRateField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInstrumentOrderCommRateField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryInstrumentOrderCommRateFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryInstrumentOrderCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentOrderCommRateFieldData>(self);
    CThostFtdcQryInstrumentOrderCommRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryInstrumentOrderCommRateFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInstrumentOrderCommRateField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInstrumentOrderCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentOrderCommRateFieldData>(self);
    CThostFtdcQryInstrumentOrderCommRateField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryInstrumentOrderCommRateFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryInstrumentOrderCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentOrderCommRateFieldData>(self);
    CThostFtdcQryInstrumentOrderCommRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryInstrumentOrderCommRateFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInstrumentOrderCommRateField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInstrumentOrderCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentOrderCommRateFieldData>(self);
    CThostFtdcQryInstrumentOrderCommRateField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcQryInstrumentOrderCommRateFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcQryInstrumentOrderCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentOrderCommRateFieldData>(self);
    CThostFtdcQryInstrumentOrderCommRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcQryInstrumentOrderCommRateFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInstrumentOrderCommRateField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInstrumentOrderCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentOrderCommRateFieldData>(self);
    CThostFtdcQryInstrumentOrderCommRateField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryInstrumentOrderCommRateFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQryInstrumentOrderCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentOrderCommRateFieldData>(self);
    CThostFtdcQryInstrumentOrderCommRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcQryInstrumentOrderCommRateFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInstrumentOrderCommRateField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInstrumentOrderCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentOrderCommRateFieldData>(self);
    CThostFtdcQryInstrumentOrderCommRateField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryInstrumentOrderCommRateFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryInstrumentOrderCommRateFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryInstrumentOrderCommRateFieldType_get_BrokerID,
    .set = PyCThostFtdcQryInstrumentOrderCommRateFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryInstrumentOrderCommRateFieldType_get_InvestorID,
    .set = PyCThostFtdcQryInstrumentOrderCommRateFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcQryInstrumentOrderCommRateFieldType_get_reserve1,
    .set = PyCThostFtdcQryInstrumentOrderCommRateFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcQryInstrumentOrderCommRateFieldType_get_InstrumentID,
    .set = PyCThostFtdcQryInstrumentOrderCommRateFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryInstrumentOrderCommRateFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryInstrumentOrderCommRateField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("报单手续费率查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryInstrumentOrderCommRateFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryInstrumentOrderCommRateFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryInstrumentOrderCommRateFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryInstrumentOrderCommRateFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryInstrumentOrderCommRateFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryInstrumentOrderCommRateFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("报单手续费率查询")},
    {Py_tp_members, PyCThostFtdcQryInstrumentOrderCommRateFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryInstrumentOrderCommRateFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryInstrumentOrderCommRateFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryInstrumentOrderCommRateFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryInstrumentOrderCommRateFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryInstrumentOrderCommRateField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryInstrumentOrderCommRateFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryInstrumentOrderCommRateFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryInstrumentOrderCommRateFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryInstrumentOrderCommRateFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryInstrumentOrderCommRateFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryInstrumentOrderCommRateFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryInstrumentOrderCommRateFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryInstrumentOrderCommRateFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryInstrumentOrderCommRateField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInstrumentOrderCommRateField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}