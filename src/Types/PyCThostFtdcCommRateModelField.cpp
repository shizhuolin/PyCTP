
#include "PyCThostFtdcCommRateModelField.h"

///投资者手续费率模板

static int PyCThostFtdcCommRateModelFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "CommModelID", "CommModelName", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcCommRateModelField_BrokerID = NULL;
    Py_ssize_t CThostFtdcCommRateModelField_BrokerID_length = 0;

    /// 手续费率模板代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcCommRateModelField_CommModelID = NULL;
    Py_ssize_t CThostFtdcCommRateModelField_CommModelID_length = 0;

    /// 模板名称
    /// typedef char TThostFtdcCommModelNameType[161]
    char *CThostFtdcCommRateModelField_CommModelName = NULL;
    Py_ssize_t CThostFtdcCommRateModelField_CommModelName_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcCommRateModelField_BrokerID, &CThostFtdcCommRateModelField_BrokerID_length
        , &CThostFtdcCommRateModelField_CommModelID, &CThostFtdcCommRateModelField_CommModelID_length
        , &CThostFtdcCommRateModelField_CommModelName, &CThostFtdcCommRateModelField_CommModelName_length
    )) {
        return -1;
    }

    PyCThostFtdcCommRateModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCommRateModelFieldData>(self);
    CThostFtdcCommRateModelField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcCommRateModelField_BrokerID != NULL ) {
        if(CThostFtdcCommRateModelField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcCommRateModelField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcCommRateModelField_BrokerID, CThostFtdcCommRateModelField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcCommRateModelField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcCommRateModelField_BrokerID = NULL;
    }

    /// 手续费率模板代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcCommRateModelField_CommModelID != NULL ) {
        if(CThostFtdcCommRateModelField_CommModelID_length >= (Py_ssize_t)sizeof(data->CommModelID)) {
            PyErr_Format(PyExc_ValueError, "CommModelID too long: length=%zd (max allowed is 12)", CThostFtdcCommRateModelField_CommModelID_length);
            return -1;
        }
        // memset(data->CommModelID, 0, sizeof(data->CommModelID));
        // memcpy(data->CommModelID, CThostFtdcCommRateModelField_CommModelID, CThostFtdcCommRateModelField_CommModelID_length);
        strncpy(data->CommModelID, CThostFtdcCommRateModelField_CommModelID, sizeof(data->CommModelID));
        CThostFtdcCommRateModelField_CommModelID = NULL;
    }

    /// 模板名称
    /// typedef char TThostFtdcCommModelNameType[161]
    if( CThostFtdcCommRateModelField_CommModelName != NULL ) {
        if(CThostFtdcCommRateModelField_CommModelName_length >= (Py_ssize_t)sizeof(data->CommModelName)) {
            PyErr_Format(PyExc_ValueError, "CommModelName too long: length=%zd (max allowed is 160)", CThostFtdcCommRateModelField_CommModelName_length);
            return -1;
        }
        // memset(data->CommModelName, 0, sizeof(data->CommModelName));
        // memcpy(data->CommModelName, CThostFtdcCommRateModelField_CommModelName, CThostFtdcCommRateModelField_CommModelName_length);
        strncpy(data->CommModelName, CThostFtdcCommRateModelField_CommModelName, sizeof(data->CommModelName));
        CThostFtdcCommRateModelField_CommModelName = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcCommRateModelFieldType_repr(PyObject *self) {

    PyCThostFtdcCommRateModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCommRateModelFieldData>(self);
    CThostFtdcCommRateModelField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "CommModelID", data->CommModelID//, (Py_ssize_t)sizeof(data->CommModelID)
        , "CommModelName", data->CommModelName//, (Py_ssize_t)sizeof(data->CommModelName)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCommRateModelField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCommRateModelField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcCommRateModelFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcCommRateModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCommRateModelFieldData>(self);
    CThostFtdcCommRateModelField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcCommRateModelFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCommRateModelField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCommRateModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCommRateModelFieldData>(self);
    CThostFtdcCommRateModelField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 手续费率模板代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcCommRateModelFieldType_get_CommModelID(PyObject *self, void *closure) {
    PyCThostFtdcCommRateModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCommRateModelFieldData>(self);
    CThostFtdcCommRateModelField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CommModelID, (Py_ssize_t)sizeof(data->CommModelID));
    return PyBytes_FromString(data->CommModelID);
}

static int PyCThostFtdcCommRateModelFieldType_set_CommModelID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CommModelID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCommRateModelField::CommModelID)) {
        PyErr_SetString(PyExc_ValueError, "CommModelID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCommRateModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCommRateModelFieldData>(self);
    CThostFtdcCommRateModelField *data = &(extra->data);
    // memset(data->CommModelID, 0, sizeof(data->CommModelID));
    // memcpy(data->CommModelID, buf, len);
    strncpy(data->CommModelID, buf, sizeof(data->CommModelID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 模板名称
/// typedef char TThostFtdcCommModelNameType[161]
static PyObject *PyCThostFtdcCommRateModelFieldType_get_CommModelName(PyObject *self, void *closure) {
    PyCThostFtdcCommRateModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCommRateModelFieldData>(self);
    CThostFtdcCommRateModelField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CommModelName, (Py_ssize_t)sizeof(data->CommModelName));
    return PyBytes_FromString(data->CommModelName);
}

static int PyCThostFtdcCommRateModelFieldType_set_CommModelName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CommModelName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCommRateModelField::CommModelName)) {
        PyErr_SetString(PyExc_ValueError, "CommModelName must be less than 160 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCommRateModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCommRateModelFieldData>(self);
    CThostFtdcCommRateModelField *data = &(extra->data);
    // memset(data->CommModelName, 0, sizeof(data->CommModelName));
    // memcpy(data->CommModelName, buf, len);
    strncpy(data->CommModelName, buf, sizeof(data->CommModelName));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcCommRateModelFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcCommRateModelFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcCommRateModelFieldType_get_BrokerID,
    .set = PyCThostFtdcCommRateModelFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 手续费率模板代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "CommModelID",
    .get = PyCThostFtdcCommRateModelFieldType_get_CommModelID,
    .set = PyCThostFtdcCommRateModelFieldType_set_CommModelID,
    .doc = PyDoc_STR("手续费率模板代码"),
    },
    /// 模板名称
    /// typedef char TThostFtdcCommModelNameType[161]
    {
    .name = "CommModelName",
    .get = PyCThostFtdcCommRateModelFieldType_get_CommModelName,
    .set = PyCThostFtdcCommRateModelFieldType_set_CommModelName,
    .doc = PyDoc_STR("模板名称"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcCommRateModelFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcCommRateModelField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者手续费率模板")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcCommRateModelFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcCommRateModelFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcCommRateModelFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcCommRateModelFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcCommRateModelFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcCommRateModelFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者手续费率模板")},
    {Py_tp_members, PyCThostFtdcCommRateModelFieldType_members},
    {Py_tp_getset, PyCThostFtdcCommRateModelFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcCommRateModelFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcCommRateModelFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcCommRateModelFieldType_spec = {
    .name = "PyCTP.CThostFtdcCommRateModelField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcCommRateModelFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcCommRateModelFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcCommRateModelFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcCommRateModelFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcCommRateModelFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcCommRateModelFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcCommRateModelFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcCommRateModelFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcCommRateModelField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcCommRateModelField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}