
#include "PyCThostFtdcQryCFMMCTradingAccountKeyField.h"

///请求查询保证金监管系统经纪公司资金账户密钥

static int PyCThostFtdcQryCFMMCTradingAccountKeyFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryCFMMCTradingAccountKeyField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryCFMMCTradingAccountKeyField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryCFMMCTradingAccountKeyField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryCFMMCTradingAccountKeyField_InvestorID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
        , &CThostFtdcQryCFMMCTradingAccountKeyField_BrokerID, &CThostFtdcQryCFMMCTradingAccountKeyField_BrokerID_length
        , &CThostFtdcQryCFMMCTradingAccountKeyField_InvestorID, &CThostFtdcQryCFMMCTradingAccountKeyField_InvestorID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryCFMMCTradingAccountKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCFMMCTradingAccountKeyFieldData>(self);
    CThostFtdcQryCFMMCTradingAccountKeyField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryCFMMCTradingAccountKeyField_BrokerID != NULL ) {
        if(CThostFtdcQryCFMMCTradingAccountKeyField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryCFMMCTradingAccountKeyField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryCFMMCTradingAccountKeyField_BrokerID, CThostFtdcQryCFMMCTradingAccountKeyField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryCFMMCTradingAccountKeyField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryCFMMCTradingAccountKeyField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryCFMMCTradingAccountKeyField_InvestorID != NULL ) {
        if(CThostFtdcQryCFMMCTradingAccountKeyField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryCFMMCTradingAccountKeyField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryCFMMCTradingAccountKeyField_InvestorID, CThostFtdcQryCFMMCTradingAccountKeyField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryCFMMCTradingAccountKeyField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryCFMMCTradingAccountKeyField_InvestorID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryCFMMCTradingAccountKeyFieldType_repr(PyObject *self) {

    PyCThostFtdcQryCFMMCTradingAccountKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCFMMCTradingAccountKeyFieldData>(self);
    CThostFtdcQryCFMMCTradingAccountKeyField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryCFMMCTradingAccountKeyField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryCFMMCTradingAccountKeyField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryCFMMCTradingAccountKeyFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryCFMMCTradingAccountKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCFMMCTradingAccountKeyFieldData>(self);
    CThostFtdcQryCFMMCTradingAccountKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryCFMMCTradingAccountKeyFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryCFMMCTradingAccountKeyField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryCFMMCTradingAccountKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCFMMCTradingAccountKeyFieldData>(self);
    CThostFtdcQryCFMMCTradingAccountKeyField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryCFMMCTradingAccountKeyFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryCFMMCTradingAccountKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCFMMCTradingAccountKeyFieldData>(self);
    CThostFtdcQryCFMMCTradingAccountKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryCFMMCTradingAccountKeyFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryCFMMCTradingAccountKeyField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryCFMMCTradingAccountKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCFMMCTradingAccountKeyFieldData>(self);
    CThostFtdcQryCFMMCTradingAccountKeyField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryCFMMCTradingAccountKeyFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryCFMMCTradingAccountKeyFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryCFMMCTradingAccountKeyFieldType_get_BrokerID,
    .set = PyCThostFtdcQryCFMMCTradingAccountKeyFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryCFMMCTradingAccountKeyFieldType_get_InvestorID,
    .set = PyCThostFtdcQryCFMMCTradingAccountKeyFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryCFMMCTradingAccountKeyFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryCFMMCTradingAccountKeyField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("请求查询保证金监管系统经纪公司资金账户密钥")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryCFMMCTradingAccountKeyFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryCFMMCTradingAccountKeyFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryCFMMCTradingAccountKeyFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryCFMMCTradingAccountKeyFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryCFMMCTradingAccountKeyFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryCFMMCTradingAccountKeyFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("请求查询保证金监管系统经纪公司资金账户密钥")},
    {Py_tp_members, PyCThostFtdcQryCFMMCTradingAccountKeyFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryCFMMCTradingAccountKeyFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryCFMMCTradingAccountKeyFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryCFMMCTradingAccountKeyFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryCFMMCTradingAccountKeyFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryCFMMCTradingAccountKeyField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryCFMMCTradingAccountKeyFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryCFMMCTradingAccountKeyFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryCFMMCTradingAccountKeyFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryCFMMCTradingAccountKeyFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryCFMMCTradingAccountKeyFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryCFMMCTradingAccountKeyFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryCFMMCTradingAccountKeyFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryCFMMCTradingAccountKeyFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryCFMMCTradingAccountKeyField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryCFMMCTradingAccountKeyField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}