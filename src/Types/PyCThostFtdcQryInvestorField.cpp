
#include "PyCThostFtdcQryInvestorField.h"

///查询投资者

static int PyCThostFtdcQryInvestorFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryInvestorField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryInvestorField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryInvestorField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryInvestorField_InvestorID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
        , &CThostFtdcQryInvestorField_BrokerID, &CThostFtdcQryInvestorField_BrokerID_length
        , &CThostFtdcQryInvestorField_InvestorID, &CThostFtdcQryInvestorField_InvestorID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorFieldData>(self);
    CThostFtdcQryInvestorField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryInvestorField_BrokerID != NULL ) {
        if(CThostFtdcQryInvestorField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryInvestorField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryInvestorField_BrokerID, CThostFtdcQryInvestorField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryInvestorField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryInvestorField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryInvestorField_InvestorID != NULL ) {
        if(CThostFtdcQryInvestorField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryInvestorField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryInvestorField_InvestorID, CThostFtdcQryInvestorField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryInvestorField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryInvestorField_InvestorID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryInvestorFieldType_repr(PyObject *self) {

    PyCThostFtdcQryInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorFieldData>(self);
    CThostFtdcQryInvestorField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryInvestorFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorFieldData>(self);
    CThostFtdcQryInvestorField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryInvestorFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorFieldData>(self);
    CThostFtdcQryInvestorField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryInvestorFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorFieldData>(self);
    CThostFtdcQryInvestorField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryInvestorFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorFieldData>(self);
    CThostFtdcQryInvestorField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryInvestorFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryInvestorFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryInvestorFieldType_get_BrokerID,
    .set = PyCThostFtdcQryInvestorFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryInvestorFieldType_get_InvestorID,
    .set = PyCThostFtdcQryInvestorFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryInvestorFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryInvestorField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询投资者")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryInvestorFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryInvestorFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryInvestorFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryInvestorFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryInvestorFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryInvestorFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询投资者")},
    {Py_tp_members, PyCThostFtdcQryInvestorFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryInvestorFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryInvestorFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryInvestorFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryInvestorFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryInvestorField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryInvestorFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryInvestorFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryInvestorFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryInvestorFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryInvestorFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryInvestorFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryInvestorFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryInvestorFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryInvestorField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInvestorField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}