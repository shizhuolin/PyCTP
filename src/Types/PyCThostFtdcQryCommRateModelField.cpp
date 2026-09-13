
#include "PyCThostFtdcQryCommRateModelField.h"

///请求查询投资者手续费率模板

static int PyCThostFtdcQryCommRateModelFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "CommModelID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryCommRateModelField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryCommRateModelField_BrokerID_length = 0;

    /// 手续费率模板代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryCommRateModelField_CommModelID = NULL;
    Py_ssize_t CThostFtdcQryCommRateModelField_CommModelID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
        , &CThostFtdcQryCommRateModelField_BrokerID, &CThostFtdcQryCommRateModelField_BrokerID_length
        , &CThostFtdcQryCommRateModelField_CommModelID, &CThostFtdcQryCommRateModelField_CommModelID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryCommRateModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCommRateModelFieldData>(self);
    CThostFtdcQryCommRateModelField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryCommRateModelField_BrokerID != NULL ) {
        if(CThostFtdcQryCommRateModelField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryCommRateModelField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryCommRateModelField_BrokerID, CThostFtdcQryCommRateModelField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryCommRateModelField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryCommRateModelField_BrokerID = NULL;
    }

    /// 手续费率模板代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryCommRateModelField_CommModelID != NULL ) {
        if(CThostFtdcQryCommRateModelField_CommModelID_length >= (Py_ssize_t)sizeof(data->CommModelID)) {
            PyErr_Format(PyExc_ValueError, "CommModelID too long: length=%zd (max allowed is 12)", CThostFtdcQryCommRateModelField_CommModelID_length);
            return -1;
        }
        // memset(data->CommModelID, 0, sizeof(data->CommModelID));
        // memcpy(data->CommModelID, CThostFtdcQryCommRateModelField_CommModelID, CThostFtdcQryCommRateModelField_CommModelID_length);
        strncpy(data->CommModelID, CThostFtdcQryCommRateModelField_CommModelID, sizeof(data->CommModelID));
        CThostFtdcQryCommRateModelField_CommModelID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryCommRateModelFieldType_repr(PyObject *self) {

    PyCThostFtdcQryCommRateModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCommRateModelFieldData>(self);
    CThostFtdcQryCommRateModelField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "CommModelID", data->CommModelID//, (Py_ssize_t)sizeof(data->CommModelID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryCommRateModelField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryCommRateModelField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryCommRateModelFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryCommRateModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCommRateModelFieldData>(self);
    CThostFtdcQryCommRateModelField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryCommRateModelFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryCommRateModelField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryCommRateModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCommRateModelFieldData>(self);
    CThostFtdcQryCommRateModelField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 手续费率模板代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryCommRateModelFieldType_get_CommModelID(PyObject *self, void *closure) {
    PyCThostFtdcQryCommRateModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCommRateModelFieldData>(self);
    CThostFtdcQryCommRateModelField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CommModelID, (Py_ssize_t)sizeof(data->CommModelID));
    return PyBytes_FromString(data->CommModelID);
}

static int PyCThostFtdcQryCommRateModelFieldType_set_CommModelID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CommModelID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryCommRateModelField::CommModelID)) {
        PyErr_SetString(PyExc_ValueError, "CommModelID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryCommRateModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCommRateModelFieldData>(self);
    CThostFtdcQryCommRateModelField *data = &(extra->data);
    // memset(data->CommModelID, 0, sizeof(data->CommModelID));
    // memcpy(data->CommModelID, buf, len);
    strncpy(data->CommModelID, buf, sizeof(data->CommModelID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryCommRateModelFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryCommRateModelFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryCommRateModelFieldType_get_BrokerID,
    .set = PyCThostFtdcQryCommRateModelFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 手续费率模板代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "CommModelID",
    .get = PyCThostFtdcQryCommRateModelFieldType_get_CommModelID,
    .set = PyCThostFtdcQryCommRateModelFieldType_set_CommModelID,
    .doc = PyDoc_STR("手续费率模板代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryCommRateModelFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryCommRateModelField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("请求查询投资者手续费率模板")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryCommRateModelFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryCommRateModelFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryCommRateModelFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryCommRateModelFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryCommRateModelFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryCommRateModelFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("请求查询投资者手续费率模板")},
    {Py_tp_members, PyCThostFtdcQryCommRateModelFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryCommRateModelFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryCommRateModelFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryCommRateModelFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryCommRateModelFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryCommRateModelField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryCommRateModelFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryCommRateModelFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryCommRateModelFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryCommRateModelFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryCommRateModelFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryCommRateModelFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryCommRateModelFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryCommRateModelFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryCommRateModelField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryCommRateModelField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}