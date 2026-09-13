
#include "PyCThostFtdcQrySecAgentCheckModeField.h"

///查询二级代理商资金校验模式

static int PyCThostFtdcQrySecAgentCheckModeFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQrySecAgentCheckModeField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQrySecAgentCheckModeField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQrySecAgentCheckModeField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQrySecAgentCheckModeField_InvestorID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
        , &CThostFtdcQrySecAgentCheckModeField_BrokerID, &CThostFtdcQrySecAgentCheckModeField_BrokerID_length
        , &CThostFtdcQrySecAgentCheckModeField_InvestorID, &CThostFtdcQrySecAgentCheckModeField_InvestorID_length
    )) {
        return -1;
    }

    PyCThostFtdcQrySecAgentCheckModeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySecAgentCheckModeFieldData>(self);
    CThostFtdcQrySecAgentCheckModeField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQrySecAgentCheckModeField_BrokerID != NULL ) {
        if(CThostFtdcQrySecAgentCheckModeField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQrySecAgentCheckModeField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQrySecAgentCheckModeField_BrokerID, CThostFtdcQrySecAgentCheckModeField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQrySecAgentCheckModeField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQrySecAgentCheckModeField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQrySecAgentCheckModeField_InvestorID != NULL ) {
        if(CThostFtdcQrySecAgentCheckModeField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQrySecAgentCheckModeField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQrySecAgentCheckModeField_InvestorID, CThostFtdcQrySecAgentCheckModeField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQrySecAgentCheckModeField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQrySecAgentCheckModeField_InvestorID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQrySecAgentCheckModeFieldType_repr(PyObject *self) {

    PyCThostFtdcQrySecAgentCheckModeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySecAgentCheckModeFieldData>(self);
    CThostFtdcQrySecAgentCheckModeField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySecAgentCheckModeField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySecAgentCheckModeField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQrySecAgentCheckModeFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQrySecAgentCheckModeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySecAgentCheckModeFieldData>(self);
    CThostFtdcQrySecAgentCheckModeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQrySecAgentCheckModeFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySecAgentCheckModeField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySecAgentCheckModeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySecAgentCheckModeFieldData>(self);
    CThostFtdcQrySecAgentCheckModeField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQrySecAgentCheckModeFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQrySecAgentCheckModeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySecAgentCheckModeFieldData>(self);
    CThostFtdcQrySecAgentCheckModeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQrySecAgentCheckModeFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySecAgentCheckModeField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySecAgentCheckModeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySecAgentCheckModeFieldData>(self);
    CThostFtdcQrySecAgentCheckModeField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQrySecAgentCheckModeFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQrySecAgentCheckModeFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQrySecAgentCheckModeFieldType_get_BrokerID,
    .set = PyCThostFtdcQrySecAgentCheckModeFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQrySecAgentCheckModeFieldType_get_InvestorID,
    .set = PyCThostFtdcQrySecAgentCheckModeFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQrySecAgentCheckModeFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQrySecAgentCheckModeField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询二级代理商资金校验模式")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQrySecAgentCheckModeFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQrySecAgentCheckModeFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQrySecAgentCheckModeFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQrySecAgentCheckModeFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQrySecAgentCheckModeFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQrySecAgentCheckModeFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询二级代理商资金校验模式")},
    {Py_tp_members, PyCThostFtdcQrySecAgentCheckModeFieldType_members},
    {Py_tp_getset, PyCThostFtdcQrySecAgentCheckModeFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQrySecAgentCheckModeFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQrySecAgentCheckModeFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQrySecAgentCheckModeFieldType_spec = {
    .name = "PyCTP.CThostFtdcQrySecAgentCheckModeField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQrySecAgentCheckModeFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQrySecAgentCheckModeFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQrySecAgentCheckModeFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQrySecAgentCheckModeFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQrySecAgentCheckModeFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQrySecAgentCheckModeFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQrySecAgentCheckModeFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQrySecAgentCheckModeFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQrySecAgentCheckModeField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySecAgentCheckModeField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}