
#include "PyCThostFtdcQryErrOrderActionField.h"

///查询错误报单操作

static int PyCThostFtdcQryErrOrderActionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryErrOrderActionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryErrOrderActionField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryErrOrderActionField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryErrOrderActionField_InvestorID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
        , &CThostFtdcQryErrOrderActionField_BrokerID, &CThostFtdcQryErrOrderActionField_BrokerID_length
        , &CThostFtdcQryErrOrderActionField_InvestorID, &CThostFtdcQryErrOrderActionField_InvestorID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryErrOrderActionFieldData>(self);
    CThostFtdcQryErrOrderActionField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryErrOrderActionField_BrokerID != NULL ) {
        if(CThostFtdcQryErrOrderActionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryErrOrderActionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryErrOrderActionField_BrokerID, CThostFtdcQryErrOrderActionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryErrOrderActionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryErrOrderActionField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryErrOrderActionField_InvestorID != NULL ) {
        if(CThostFtdcQryErrOrderActionField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryErrOrderActionField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryErrOrderActionField_InvestorID, CThostFtdcQryErrOrderActionField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryErrOrderActionField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryErrOrderActionField_InvestorID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryErrOrderActionFieldType_repr(PyObject *self) {

    PyCThostFtdcQryErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryErrOrderActionFieldData>(self);
    CThostFtdcQryErrOrderActionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryErrOrderActionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryErrOrderActionField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryErrOrderActionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryErrOrderActionFieldData>(self);
    CThostFtdcQryErrOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryErrOrderActionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryErrOrderActionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryErrOrderActionFieldData>(self);
    CThostFtdcQryErrOrderActionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryErrOrderActionFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryErrOrderActionFieldData>(self);
    CThostFtdcQryErrOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryErrOrderActionFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryErrOrderActionField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryErrOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryErrOrderActionFieldData>(self);
    CThostFtdcQryErrOrderActionField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryErrOrderActionFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryErrOrderActionFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryErrOrderActionFieldType_get_BrokerID,
    .set = PyCThostFtdcQryErrOrderActionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryErrOrderActionFieldType_get_InvestorID,
    .set = PyCThostFtdcQryErrOrderActionFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryErrOrderActionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryErrOrderActionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询错误报单操作")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryErrOrderActionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryErrOrderActionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryErrOrderActionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryErrOrderActionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryErrOrderActionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryErrOrderActionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询错误报单操作")},
    {Py_tp_members, PyCThostFtdcQryErrOrderActionFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryErrOrderActionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryErrOrderActionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryErrOrderActionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryErrOrderActionFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryErrOrderActionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryErrOrderActionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryErrOrderActionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryErrOrderActionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryErrOrderActionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryErrOrderActionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryErrOrderActionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryErrOrderActionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryErrOrderActionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryErrOrderActionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryErrOrderActionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}