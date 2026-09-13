
#include "PyCThostFtdcQryErrExecOrderField.h"

///查询错误执行宣告

static int PyCThostFtdcQryErrExecOrderFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryErrExecOrderField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryErrExecOrderField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryErrExecOrderField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryErrExecOrderField_InvestorID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
        , &CThostFtdcQryErrExecOrderField_BrokerID, &CThostFtdcQryErrExecOrderField_BrokerID_length
        , &CThostFtdcQryErrExecOrderField_InvestorID, &CThostFtdcQryErrExecOrderField_InvestorID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryErrExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryErrExecOrderFieldData>(self);
    CThostFtdcQryErrExecOrderField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryErrExecOrderField_BrokerID != NULL ) {
        if(CThostFtdcQryErrExecOrderField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryErrExecOrderField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryErrExecOrderField_BrokerID, CThostFtdcQryErrExecOrderField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryErrExecOrderField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryErrExecOrderField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryErrExecOrderField_InvestorID != NULL ) {
        if(CThostFtdcQryErrExecOrderField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryErrExecOrderField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryErrExecOrderField_InvestorID, CThostFtdcQryErrExecOrderField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryErrExecOrderField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryErrExecOrderField_InvestorID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryErrExecOrderFieldType_repr(PyObject *self) {

    PyCThostFtdcQryErrExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryErrExecOrderFieldData>(self);
    CThostFtdcQryErrExecOrderField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryErrExecOrderField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryErrExecOrderField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryErrExecOrderFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryErrExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryErrExecOrderFieldData>(self);
    CThostFtdcQryErrExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryErrExecOrderFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryErrExecOrderField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryErrExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryErrExecOrderFieldData>(self);
    CThostFtdcQryErrExecOrderField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryErrExecOrderFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryErrExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryErrExecOrderFieldData>(self);
    CThostFtdcQryErrExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryErrExecOrderFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryErrExecOrderField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryErrExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryErrExecOrderFieldData>(self);
    CThostFtdcQryErrExecOrderField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryErrExecOrderFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryErrExecOrderFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryErrExecOrderFieldType_get_BrokerID,
    .set = PyCThostFtdcQryErrExecOrderFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryErrExecOrderFieldType_get_InvestorID,
    .set = PyCThostFtdcQryErrExecOrderFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryErrExecOrderFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryErrExecOrderField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询错误执行宣告")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryErrExecOrderFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryErrExecOrderFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryErrExecOrderFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryErrExecOrderFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryErrExecOrderFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryErrExecOrderFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询错误执行宣告")},
    {Py_tp_members, PyCThostFtdcQryErrExecOrderFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryErrExecOrderFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryErrExecOrderFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryErrExecOrderFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryErrExecOrderFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryErrExecOrderField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryErrExecOrderFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryErrExecOrderFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryErrExecOrderFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryErrExecOrderFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryErrExecOrderFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryErrExecOrderFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryErrExecOrderFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryErrExecOrderFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryErrExecOrderField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryErrExecOrderField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}