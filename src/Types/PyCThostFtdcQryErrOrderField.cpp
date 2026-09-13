
#include "PyCThostFtdcQryErrOrderField.h"

///查询错误报单

static int PyCThostFtdcQryErrOrderFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryErrOrderField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryErrOrderField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryErrOrderField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryErrOrderField_InvestorID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
        , &CThostFtdcQryErrOrderField_BrokerID, &CThostFtdcQryErrOrderField_BrokerID_length
        , &CThostFtdcQryErrOrderField_InvestorID, &CThostFtdcQryErrOrderField_InvestorID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryErrOrderFieldData>(self);
    CThostFtdcQryErrOrderField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryErrOrderField_BrokerID != NULL ) {
        if(CThostFtdcQryErrOrderField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryErrOrderField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryErrOrderField_BrokerID, CThostFtdcQryErrOrderField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryErrOrderField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryErrOrderField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryErrOrderField_InvestorID != NULL ) {
        if(CThostFtdcQryErrOrderField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryErrOrderField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryErrOrderField_InvestorID, CThostFtdcQryErrOrderField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryErrOrderField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryErrOrderField_InvestorID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryErrOrderFieldType_repr(PyObject *self) {

    PyCThostFtdcQryErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryErrOrderFieldData>(self);
    CThostFtdcQryErrOrderField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryErrOrderField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryErrOrderField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryErrOrderFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryErrOrderFieldData>(self);
    CThostFtdcQryErrOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryErrOrderFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryErrOrderField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryErrOrderFieldData>(self);
    CThostFtdcQryErrOrderField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryErrOrderFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryErrOrderFieldData>(self);
    CThostFtdcQryErrOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryErrOrderFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryErrOrderField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryErrOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryErrOrderFieldData>(self);
    CThostFtdcQryErrOrderField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryErrOrderFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryErrOrderFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryErrOrderFieldType_get_BrokerID,
    .set = PyCThostFtdcQryErrOrderFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryErrOrderFieldType_get_InvestorID,
    .set = PyCThostFtdcQryErrOrderFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryErrOrderFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryErrOrderField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询错误报单")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryErrOrderFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryErrOrderFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryErrOrderFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryErrOrderFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryErrOrderFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryErrOrderFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询错误报单")},
    {Py_tp_members, PyCThostFtdcQryErrOrderFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryErrOrderFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryErrOrderFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryErrOrderFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryErrOrderFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryErrOrderField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryErrOrderFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryErrOrderFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryErrOrderFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryErrOrderFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryErrOrderFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryErrOrderFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryErrOrderFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryErrOrderFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryErrOrderField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryErrOrderField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}