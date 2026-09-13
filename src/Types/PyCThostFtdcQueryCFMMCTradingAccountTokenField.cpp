
#include "PyCThostFtdcQueryCFMMCTradingAccountTokenField.h"

///查询监控中心用户令牌

static int PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "InvestUnitID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQueryCFMMCTradingAccountTokenField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQueryCFMMCTradingAccountTokenField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQueryCFMMCTradingAccountTokenField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQueryCFMMCTradingAccountTokenField_InvestorID_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcQueryCFMMCTradingAccountTokenField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcQueryCFMMCTradingAccountTokenField_InvestUnitID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcQueryCFMMCTradingAccountTokenField_BrokerID, &CThostFtdcQueryCFMMCTradingAccountTokenField_BrokerID_length
        , &CThostFtdcQueryCFMMCTradingAccountTokenField_InvestorID, &CThostFtdcQueryCFMMCTradingAccountTokenField_InvestorID_length
        , &CThostFtdcQueryCFMMCTradingAccountTokenField_InvestUnitID, &CThostFtdcQueryCFMMCTradingAccountTokenField_InvestUnitID_length
    )) {
        return -1;
    }

    PyCThostFtdcQueryCFMMCTradingAccountTokenFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQueryCFMMCTradingAccountTokenFieldData>(self);
    CThostFtdcQueryCFMMCTradingAccountTokenField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQueryCFMMCTradingAccountTokenField_BrokerID != NULL ) {
        if(CThostFtdcQueryCFMMCTradingAccountTokenField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQueryCFMMCTradingAccountTokenField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQueryCFMMCTradingAccountTokenField_BrokerID, CThostFtdcQueryCFMMCTradingAccountTokenField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQueryCFMMCTradingAccountTokenField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQueryCFMMCTradingAccountTokenField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQueryCFMMCTradingAccountTokenField_InvestorID != NULL ) {
        if(CThostFtdcQueryCFMMCTradingAccountTokenField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQueryCFMMCTradingAccountTokenField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQueryCFMMCTradingAccountTokenField_InvestorID, CThostFtdcQueryCFMMCTradingAccountTokenField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQueryCFMMCTradingAccountTokenField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQueryCFMMCTradingAccountTokenField_InvestorID = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcQueryCFMMCTradingAccountTokenField_InvestUnitID != NULL ) {
        if(CThostFtdcQueryCFMMCTradingAccountTokenField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcQueryCFMMCTradingAccountTokenField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcQueryCFMMCTradingAccountTokenField_InvestUnitID, CThostFtdcQueryCFMMCTradingAccountTokenField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcQueryCFMMCTradingAccountTokenField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcQueryCFMMCTradingAccountTokenField_InvestUnitID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType_repr(PyObject *self) {

    PyCThostFtdcQueryCFMMCTradingAccountTokenFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQueryCFMMCTradingAccountTokenFieldData>(self);
    CThostFtdcQueryCFMMCTradingAccountTokenField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQueryCFMMCTradingAccountTokenField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQueryCFMMCTradingAccountTokenField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQueryCFMMCTradingAccountTokenFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQueryCFMMCTradingAccountTokenFieldData>(self);
    CThostFtdcQueryCFMMCTradingAccountTokenField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQueryCFMMCTradingAccountTokenField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQueryCFMMCTradingAccountTokenFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQueryCFMMCTradingAccountTokenFieldData>(self);
    CThostFtdcQueryCFMMCTradingAccountTokenField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQueryCFMMCTradingAccountTokenFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQueryCFMMCTradingAccountTokenFieldData>(self);
    CThostFtdcQueryCFMMCTradingAccountTokenField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQueryCFMMCTradingAccountTokenField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQueryCFMMCTradingAccountTokenFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQueryCFMMCTradingAccountTokenFieldData>(self);
    CThostFtdcQueryCFMMCTradingAccountTokenField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcQueryCFMMCTradingAccountTokenFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQueryCFMMCTradingAccountTokenFieldData>(self);
    CThostFtdcQueryCFMMCTradingAccountTokenField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQueryCFMMCTradingAccountTokenField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQueryCFMMCTradingAccountTokenFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQueryCFMMCTradingAccountTokenFieldData>(self);
    CThostFtdcQueryCFMMCTradingAccountTokenField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType_get_BrokerID,
    .set = PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType_get_InvestorID,
    .set = PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType_get_InvestUnitID,
    .set = PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQueryCFMMCTradingAccountTokenField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询监控中心用户令牌")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQueryCFMMCTradingAccountTokenFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询监控中心用户令牌")},
    {Py_tp_members, PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType_members},
    {Py_tp_getset, PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType_spec = {
    .name = "PyCTP.CThostFtdcQueryCFMMCTradingAccountTokenField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQueryCFMMCTradingAccountTokenFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQueryCFMMCTradingAccountTokenFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQueryCFMMCTradingAccountTokenField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQueryCFMMCTradingAccountTokenField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}