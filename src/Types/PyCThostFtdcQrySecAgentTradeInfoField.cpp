
#include "PyCThostFtdcQrySecAgentTradeInfoField.h"

///查询二级代理商信息

static int PyCThostFtdcQrySecAgentTradeInfoFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "BrokerSecAgentID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQrySecAgentTradeInfoField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQrySecAgentTradeInfoField_BrokerID_length = 0;

    /// 境外中介机构资金帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcQrySecAgentTradeInfoField_BrokerSecAgentID = NULL;
    Py_ssize_t CThostFtdcQrySecAgentTradeInfoField_BrokerSecAgentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
        , &CThostFtdcQrySecAgentTradeInfoField_BrokerID, &CThostFtdcQrySecAgentTradeInfoField_BrokerID_length
        , &CThostFtdcQrySecAgentTradeInfoField_BrokerSecAgentID, &CThostFtdcQrySecAgentTradeInfoField_BrokerSecAgentID_length
    )) {
        return -1;
    }

    PyCThostFtdcQrySecAgentTradeInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySecAgentTradeInfoFieldData>(self);
    CThostFtdcQrySecAgentTradeInfoField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQrySecAgentTradeInfoField_BrokerID != NULL ) {
        if(CThostFtdcQrySecAgentTradeInfoField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQrySecAgentTradeInfoField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQrySecAgentTradeInfoField_BrokerID, CThostFtdcQrySecAgentTradeInfoField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQrySecAgentTradeInfoField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQrySecAgentTradeInfoField_BrokerID = NULL;
    }

    /// 境外中介机构资金帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcQrySecAgentTradeInfoField_BrokerSecAgentID != NULL ) {
        if(CThostFtdcQrySecAgentTradeInfoField_BrokerSecAgentID_length >= (Py_ssize_t)sizeof(data->BrokerSecAgentID)) {
            PyErr_Format(PyExc_ValueError, "BrokerSecAgentID too long: length=%zd (max allowed is 12)", CThostFtdcQrySecAgentTradeInfoField_BrokerSecAgentID_length);
            return -1;
        }
        // memset(data->BrokerSecAgentID, 0, sizeof(data->BrokerSecAgentID));
        // memcpy(data->BrokerSecAgentID, CThostFtdcQrySecAgentTradeInfoField_BrokerSecAgentID, CThostFtdcQrySecAgentTradeInfoField_BrokerSecAgentID_length);
        strncpy(data->BrokerSecAgentID, CThostFtdcQrySecAgentTradeInfoField_BrokerSecAgentID, sizeof(data->BrokerSecAgentID));
        CThostFtdcQrySecAgentTradeInfoField_BrokerSecAgentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQrySecAgentTradeInfoFieldType_repr(PyObject *self) {

    PyCThostFtdcQrySecAgentTradeInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySecAgentTradeInfoFieldData>(self);
    CThostFtdcQrySecAgentTradeInfoField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "BrokerSecAgentID", data->BrokerSecAgentID//, (Py_ssize_t)sizeof(data->BrokerSecAgentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySecAgentTradeInfoField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySecAgentTradeInfoField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQrySecAgentTradeInfoFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQrySecAgentTradeInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySecAgentTradeInfoFieldData>(self);
    CThostFtdcQrySecAgentTradeInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQrySecAgentTradeInfoFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySecAgentTradeInfoField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySecAgentTradeInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySecAgentTradeInfoFieldData>(self);
    CThostFtdcQrySecAgentTradeInfoField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 境外中介机构资金帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcQrySecAgentTradeInfoFieldType_get_BrokerSecAgentID(PyObject *self, void *closure) {
    PyCThostFtdcQrySecAgentTradeInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySecAgentTradeInfoFieldData>(self);
    CThostFtdcQrySecAgentTradeInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerSecAgentID, (Py_ssize_t)sizeof(data->BrokerSecAgentID));
    return PyBytes_FromString(data->BrokerSecAgentID);
}

static int PyCThostFtdcQrySecAgentTradeInfoFieldType_set_BrokerSecAgentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerSecAgentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySecAgentTradeInfoField::BrokerSecAgentID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerSecAgentID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySecAgentTradeInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySecAgentTradeInfoFieldData>(self);
    CThostFtdcQrySecAgentTradeInfoField *data = &(extra->data);
    // memset(data->BrokerSecAgentID, 0, sizeof(data->BrokerSecAgentID));
    // memcpy(data->BrokerSecAgentID, buf, len);
    strncpy(data->BrokerSecAgentID, buf, sizeof(data->BrokerSecAgentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQrySecAgentTradeInfoFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQrySecAgentTradeInfoFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQrySecAgentTradeInfoFieldType_get_BrokerID,
    .set = PyCThostFtdcQrySecAgentTradeInfoFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 境外中介机构资金帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "BrokerSecAgentID",
    .get = PyCThostFtdcQrySecAgentTradeInfoFieldType_get_BrokerSecAgentID,
    .set = PyCThostFtdcQrySecAgentTradeInfoFieldType_set_BrokerSecAgentID,
    .doc = PyDoc_STR("境外中介机构资金帐号"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQrySecAgentTradeInfoFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQrySecAgentTradeInfoField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询二级代理商信息")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQrySecAgentTradeInfoFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQrySecAgentTradeInfoFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQrySecAgentTradeInfoFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQrySecAgentTradeInfoFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQrySecAgentTradeInfoFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQrySecAgentTradeInfoFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询二级代理商信息")},
    {Py_tp_members, PyCThostFtdcQrySecAgentTradeInfoFieldType_members},
    {Py_tp_getset, PyCThostFtdcQrySecAgentTradeInfoFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQrySecAgentTradeInfoFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQrySecAgentTradeInfoFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQrySecAgentTradeInfoFieldType_spec = {
    .name = "PyCTP.CThostFtdcQrySecAgentTradeInfoField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQrySecAgentTradeInfoFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQrySecAgentTradeInfoFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQrySecAgentTradeInfoFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQrySecAgentTradeInfoFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQrySecAgentTradeInfoFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQrySecAgentTradeInfoFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQrySecAgentTradeInfoFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQrySecAgentTradeInfoFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQrySecAgentTradeInfoField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySecAgentTradeInfoField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}