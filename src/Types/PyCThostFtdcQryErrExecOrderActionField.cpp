
#include "PyCThostFtdcQryErrExecOrderActionField.h"

///查询错误执行宣告操作

static int PyCThostFtdcQryErrExecOrderActionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryErrExecOrderActionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryErrExecOrderActionField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryErrExecOrderActionField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryErrExecOrderActionField_InvestorID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
        , &CThostFtdcQryErrExecOrderActionField_BrokerID, &CThostFtdcQryErrExecOrderActionField_BrokerID_length
        , &CThostFtdcQryErrExecOrderActionField_InvestorID, &CThostFtdcQryErrExecOrderActionField_InvestorID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryErrExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryErrExecOrderActionFieldData>(self);
    CThostFtdcQryErrExecOrderActionField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryErrExecOrderActionField_BrokerID != NULL ) {
        if(CThostFtdcQryErrExecOrderActionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryErrExecOrderActionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryErrExecOrderActionField_BrokerID, CThostFtdcQryErrExecOrderActionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryErrExecOrderActionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryErrExecOrderActionField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryErrExecOrderActionField_InvestorID != NULL ) {
        if(CThostFtdcQryErrExecOrderActionField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryErrExecOrderActionField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryErrExecOrderActionField_InvestorID, CThostFtdcQryErrExecOrderActionField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryErrExecOrderActionField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryErrExecOrderActionField_InvestorID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryErrExecOrderActionFieldType_repr(PyObject *self) {

    PyCThostFtdcQryErrExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryErrExecOrderActionFieldData>(self);
    CThostFtdcQryErrExecOrderActionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryErrExecOrderActionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryErrExecOrderActionField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryErrExecOrderActionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryErrExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryErrExecOrderActionFieldData>(self);
    CThostFtdcQryErrExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryErrExecOrderActionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryErrExecOrderActionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryErrExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryErrExecOrderActionFieldData>(self);
    CThostFtdcQryErrExecOrderActionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryErrExecOrderActionFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryErrExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryErrExecOrderActionFieldData>(self);
    CThostFtdcQryErrExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryErrExecOrderActionFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryErrExecOrderActionField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryErrExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryErrExecOrderActionFieldData>(self);
    CThostFtdcQryErrExecOrderActionField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryErrExecOrderActionFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryErrExecOrderActionFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryErrExecOrderActionFieldType_get_BrokerID,
    .set = PyCThostFtdcQryErrExecOrderActionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryErrExecOrderActionFieldType_get_InvestorID,
    .set = PyCThostFtdcQryErrExecOrderActionFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryErrExecOrderActionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryErrExecOrderActionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询错误执行宣告操作")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryErrExecOrderActionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryErrExecOrderActionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryErrExecOrderActionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryErrExecOrderActionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryErrExecOrderActionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryErrExecOrderActionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询错误执行宣告操作")},
    {Py_tp_members, PyCThostFtdcQryErrExecOrderActionFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryErrExecOrderActionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryErrExecOrderActionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryErrExecOrderActionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryErrExecOrderActionFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryErrExecOrderActionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryErrExecOrderActionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryErrExecOrderActionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryErrExecOrderActionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryErrExecOrderActionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryErrExecOrderActionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryErrExecOrderActionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryErrExecOrderActionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryErrExecOrderActionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryErrExecOrderActionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryErrExecOrderActionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}