
#include "PyCThostFtdcQryMarginModelField.h"

///请求查询投资者保证金率模板

static int PyCThostFtdcQryMarginModelFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "MarginModelID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryMarginModelField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryMarginModelField_BrokerID_length = 0;

    /// 保证金率模板代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryMarginModelField_MarginModelID = NULL;
    Py_ssize_t CThostFtdcQryMarginModelField_MarginModelID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
        , &CThostFtdcQryMarginModelField_BrokerID, &CThostFtdcQryMarginModelField_BrokerID_length
        , &CThostFtdcQryMarginModelField_MarginModelID, &CThostFtdcQryMarginModelField_MarginModelID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryMarginModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMarginModelFieldData>(self);
    CThostFtdcQryMarginModelField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryMarginModelField_BrokerID != NULL ) {
        if(CThostFtdcQryMarginModelField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryMarginModelField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryMarginModelField_BrokerID, CThostFtdcQryMarginModelField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryMarginModelField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryMarginModelField_BrokerID = NULL;
    }

    /// 保证金率模板代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryMarginModelField_MarginModelID != NULL ) {
        if(CThostFtdcQryMarginModelField_MarginModelID_length >= (Py_ssize_t)sizeof(data->MarginModelID)) {
            PyErr_Format(PyExc_ValueError, "MarginModelID too long: length=%zd (max allowed is 12)", CThostFtdcQryMarginModelField_MarginModelID_length);
            return -1;
        }
        // memset(data->MarginModelID, 0, sizeof(data->MarginModelID));
        // memcpy(data->MarginModelID, CThostFtdcQryMarginModelField_MarginModelID, CThostFtdcQryMarginModelField_MarginModelID_length);
        strncpy(data->MarginModelID, CThostFtdcQryMarginModelField_MarginModelID, sizeof(data->MarginModelID));
        CThostFtdcQryMarginModelField_MarginModelID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryMarginModelFieldType_repr(PyObject *self) {

    PyCThostFtdcQryMarginModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMarginModelFieldData>(self);
    CThostFtdcQryMarginModelField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "MarginModelID", data->MarginModelID//, (Py_ssize_t)sizeof(data->MarginModelID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryMarginModelField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryMarginModelField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryMarginModelFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryMarginModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMarginModelFieldData>(self);
    CThostFtdcQryMarginModelField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryMarginModelFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryMarginModelField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryMarginModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMarginModelFieldData>(self);
    CThostFtdcQryMarginModelField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保证金率模板代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryMarginModelFieldType_get_MarginModelID(PyObject *self, void *closure) {
    PyCThostFtdcQryMarginModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMarginModelFieldData>(self);
    CThostFtdcQryMarginModelField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MarginModelID, (Py_ssize_t)sizeof(data->MarginModelID));
    return PyBytes_FromString(data->MarginModelID);
}

static int PyCThostFtdcQryMarginModelFieldType_set_MarginModelID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MarginModelID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryMarginModelField::MarginModelID)) {
        PyErr_SetString(PyExc_ValueError, "MarginModelID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryMarginModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryMarginModelFieldData>(self);
    CThostFtdcQryMarginModelField *data = &(extra->data);
    // memset(data->MarginModelID, 0, sizeof(data->MarginModelID));
    // memcpy(data->MarginModelID, buf, len);
    strncpy(data->MarginModelID, buf, sizeof(data->MarginModelID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryMarginModelFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryMarginModelFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryMarginModelFieldType_get_BrokerID,
    .set = PyCThostFtdcQryMarginModelFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 保证金率模板代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "MarginModelID",
    .get = PyCThostFtdcQryMarginModelFieldType_get_MarginModelID,
    .set = PyCThostFtdcQryMarginModelFieldType_set_MarginModelID,
    .doc = PyDoc_STR("保证金率模板代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryMarginModelFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryMarginModelField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("请求查询投资者保证金率模板")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryMarginModelFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryMarginModelFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryMarginModelFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryMarginModelFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryMarginModelFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryMarginModelFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("请求查询投资者保证金率模板")},
    {Py_tp_members, PyCThostFtdcQryMarginModelFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryMarginModelFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryMarginModelFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryMarginModelFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryMarginModelFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryMarginModelField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryMarginModelFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryMarginModelFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryMarginModelFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryMarginModelFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryMarginModelFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryMarginModelFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryMarginModelFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryMarginModelFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryMarginModelField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryMarginModelField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}