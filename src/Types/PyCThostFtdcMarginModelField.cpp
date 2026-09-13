
#include "PyCThostFtdcMarginModelField.h"

///投资者保证金率模板

static int PyCThostFtdcMarginModelFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "MarginModelID", "MarginModelName", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcMarginModelField_BrokerID = NULL;
    Py_ssize_t CThostFtdcMarginModelField_BrokerID_length = 0;

    /// 保证金率模板代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcMarginModelField_MarginModelID = NULL;
    Py_ssize_t CThostFtdcMarginModelField_MarginModelID_length = 0;

    /// 模板名称
    /// typedef char TThostFtdcCommModelNameType[161]
    char *CThostFtdcMarginModelField_MarginModelName = NULL;
    Py_ssize_t CThostFtdcMarginModelField_MarginModelName_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcMarginModelField_BrokerID, &CThostFtdcMarginModelField_BrokerID_length
        , &CThostFtdcMarginModelField_MarginModelID, &CThostFtdcMarginModelField_MarginModelID_length
        , &CThostFtdcMarginModelField_MarginModelName, &CThostFtdcMarginModelField_MarginModelName_length
    )) {
        return -1;
    }

    PyCThostFtdcMarginModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarginModelFieldData>(self);
    CThostFtdcMarginModelField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcMarginModelField_BrokerID != NULL ) {
        if(CThostFtdcMarginModelField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcMarginModelField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcMarginModelField_BrokerID, CThostFtdcMarginModelField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcMarginModelField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcMarginModelField_BrokerID = NULL;
    }

    /// 保证金率模板代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcMarginModelField_MarginModelID != NULL ) {
        if(CThostFtdcMarginModelField_MarginModelID_length >= (Py_ssize_t)sizeof(data->MarginModelID)) {
            PyErr_Format(PyExc_ValueError, "MarginModelID too long: length=%zd (max allowed is 12)", CThostFtdcMarginModelField_MarginModelID_length);
            return -1;
        }
        // memset(data->MarginModelID, 0, sizeof(data->MarginModelID));
        // memcpy(data->MarginModelID, CThostFtdcMarginModelField_MarginModelID, CThostFtdcMarginModelField_MarginModelID_length);
        strncpy(data->MarginModelID, CThostFtdcMarginModelField_MarginModelID, sizeof(data->MarginModelID));
        CThostFtdcMarginModelField_MarginModelID = NULL;
    }

    /// 模板名称
    /// typedef char TThostFtdcCommModelNameType[161]
    if( CThostFtdcMarginModelField_MarginModelName != NULL ) {
        if(CThostFtdcMarginModelField_MarginModelName_length >= (Py_ssize_t)sizeof(data->MarginModelName)) {
            PyErr_Format(PyExc_ValueError, "MarginModelName too long: length=%zd (max allowed is 160)", CThostFtdcMarginModelField_MarginModelName_length);
            return -1;
        }
        // memset(data->MarginModelName, 0, sizeof(data->MarginModelName));
        // memcpy(data->MarginModelName, CThostFtdcMarginModelField_MarginModelName, CThostFtdcMarginModelField_MarginModelName_length);
        strncpy(data->MarginModelName, CThostFtdcMarginModelField_MarginModelName, sizeof(data->MarginModelName));
        CThostFtdcMarginModelField_MarginModelName = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcMarginModelFieldType_repr(PyObject *self) {

    PyCThostFtdcMarginModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarginModelFieldData>(self);
    CThostFtdcMarginModelField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "MarginModelID", data->MarginModelID//, (Py_ssize_t)sizeof(data->MarginModelID)
        , "MarginModelName", data->MarginModelName//, (Py_ssize_t)sizeof(data->MarginModelName)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarginModelField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarginModelField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcMarginModelFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcMarginModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarginModelFieldData>(self);
    CThostFtdcMarginModelField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcMarginModelFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMarginModelField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMarginModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarginModelFieldData>(self);
    CThostFtdcMarginModelField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保证金率模板代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcMarginModelFieldType_get_MarginModelID(PyObject *self, void *closure) {
    PyCThostFtdcMarginModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarginModelFieldData>(self);
    CThostFtdcMarginModelField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MarginModelID, (Py_ssize_t)sizeof(data->MarginModelID));
    return PyBytes_FromString(data->MarginModelID);
}

static int PyCThostFtdcMarginModelFieldType_set_MarginModelID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MarginModelID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMarginModelField::MarginModelID)) {
        PyErr_SetString(PyExc_ValueError, "MarginModelID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMarginModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarginModelFieldData>(self);
    CThostFtdcMarginModelField *data = &(extra->data);
    // memset(data->MarginModelID, 0, sizeof(data->MarginModelID));
    // memcpy(data->MarginModelID, buf, len);
    strncpy(data->MarginModelID, buf, sizeof(data->MarginModelID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 模板名称
/// typedef char TThostFtdcCommModelNameType[161]
static PyObject *PyCThostFtdcMarginModelFieldType_get_MarginModelName(PyObject *self, void *closure) {
    PyCThostFtdcMarginModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarginModelFieldData>(self);
    CThostFtdcMarginModelField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MarginModelName, (Py_ssize_t)sizeof(data->MarginModelName));
    return PyBytes_FromString(data->MarginModelName);
}

static int PyCThostFtdcMarginModelFieldType_set_MarginModelName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MarginModelName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMarginModelField::MarginModelName)) {
        PyErr_SetString(PyExc_ValueError, "MarginModelName must be less than 160 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMarginModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMarginModelFieldData>(self);
    CThostFtdcMarginModelField *data = &(extra->data);
    // memset(data->MarginModelName, 0, sizeof(data->MarginModelName));
    // memcpy(data->MarginModelName, buf, len);
    strncpy(data->MarginModelName, buf, sizeof(data->MarginModelName));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcMarginModelFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcMarginModelFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcMarginModelFieldType_get_BrokerID,
    .set = PyCThostFtdcMarginModelFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 保证金率模板代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "MarginModelID",
    .get = PyCThostFtdcMarginModelFieldType_get_MarginModelID,
    .set = PyCThostFtdcMarginModelFieldType_set_MarginModelID,
    .doc = PyDoc_STR("保证金率模板代码"),
    },
    /// 模板名称
    /// typedef char TThostFtdcCommModelNameType[161]
    {
    .name = "MarginModelName",
    .get = PyCThostFtdcMarginModelFieldType_get_MarginModelName,
    .set = PyCThostFtdcMarginModelFieldType_set_MarginModelName,
    .doc = PyDoc_STR("模板名称"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcMarginModelFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcMarginModelField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者保证金率模板")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcMarginModelFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcMarginModelFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcMarginModelFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcMarginModelFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcMarginModelFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcMarginModelFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者保证金率模板")},
    {Py_tp_members, PyCThostFtdcMarginModelFieldType_members},
    {Py_tp_getset, PyCThostFtdcMarginModelFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcMarginModelFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcMarginModelFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcMarginModelFieldType_spec = {
    .name = "PyCTP.CThostFtdcMarginModelField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcMarginModelFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcMarginModelFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcMarginModelFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcMarginModelFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcMarginModelFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcMarginModelFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcMarginModelFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcMarginModelFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcMarginModelField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMarginModelField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}