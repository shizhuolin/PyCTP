
#include "PyCThostFtdcWithDrawParamField.h"

///可提控制参数

static int PyCThostFtdcWithDrawParamFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "AccountID", "WithDrawParamID", "WithDrawParamValue", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcWithDrawParamField_BrokerID = NULL;
    Py_ssize_t CThostFtdcWithDrawParamField_BrokerID_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcWithDrawParamField_AccountID = NULL;
    Py_ssize_t CThostFtdcWithDrawParamField_AccountID_length = 0;

    /// 参数代码
    /// typedef char TThostFtdcWithDrawParamIDType
    char CThostFtdcWithDrawParamField_WithDrawParamID = 0;

    /// 参数代码值
    /// typedef char TThostFtdcWithDrawParamValueType[41]
    char *CThostFtdcWithDrawParamField_WithDrawParamValue = NULL;
    Py_ssize_t CThostFtdcWithDrawParamField_WithDrawParamValue_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cy#", (char **)kwlist
        , &CThostFtdcWithDrawParamField_BrokerID, &CThostFtdcWithDrawParamField_BrokerID_length
        , &CThostFtdcWithDrawParamField_AccountID, &CThostFtdcWithDrawParamField_AccountID_length
        , &CThostFtdcWithDrawParamField_WithDrawParamID
        , &CThostFtdcWithDrawParamField_WithDrawParamValue, &CThostFtdcWithDrawParamField_WithDrawParamValue_length
    )) {
        return -1;
    }

    PyCThostFtdcWithDrawParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcWithDrawParamFieldData>(self);
    CThostFtdcWithDrawParamField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcWithDrawParamField_BrokerID != NULL ) {
        if(CThostFtdcWithDrawParamField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcWithDrawParamField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcWithDrawParamField_BrokerID, CThostFtdcWithDrawParamField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcWithDrawParamField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcWithDrawParamField_BrokerID = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcWithDrawParamField_AccountID != NULL ) {
        if(CThostFtdcWithDrawParamField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcWithDrawParamField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcWithDrawParamField_AccountID, CThostFtdcWithDrawParamField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcWithDrawParamField_AccountID, sizeof(data->AccountID));
        CThostFtdcWithDrawParamField_AccountID = NULL;
    }

    /// 参数代码
    /// typedef char TThostFtdcWithDrawParamIDType
    data->WithDrawParamID = CThostFtdcWithDrawParamField_WithDrawParamID;

    /// 参数代码值
    /// typedef char TThostFtdcWithDrawParamValueType[41]
    if( CThostFtdcWithDrawParamField_WithDrawParamValue != NULL ) {
        if(CThostFtdcWithDrawParamField_WithDrawParamValue_length >= (Py_ssize_t)sizeof(data->WithDrawParamValue)) {
            PyErr_Format(PyExc_ValueError, "WithDrawParamValue too long: length=%zd (max allowed is 40)", CThostFtdcWithDrawParamField_WithDrawParamValue_length);
            return -1;
        }
        // memset(data->WithDrawParamValue, 0, sizeof(data->WithDrawParamValue));
        // memcpy(data->WithDrawParamValue, CThostFtdcWithDrawParamField_WithDrawParamValue, CThostFtdcWithDrawParamField_WithDrawParamValue_length);
        strncpy(data->WithDrawParamValue, CThostFtdcWithDrawParamField_WithDrawParamValue, sizeof(data->WithDrawParamValue));
        CThostFtdcWithDrawParamField_WithDrawParamValue = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcWithDrawParamFieldType_repr(PyObject *self) {

    PyCThostFtdcWithDrawParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcWithDrawParamFieldData>(self);
    CThostFtdcWithDrawParamField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:c,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
        , "WithDrawParamID", data->WithDrawParamID
        , "WithDrawParamValue", data->WithDrawParamValue//, (Py_ssize_t)sizeof(data->WithDrawParamValue)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcWithDrawParamField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcWithDrawParamField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcWithDrawParamFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcWithDrawParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcWithDrawParamFieldData>(self);
    CThostFtdcWithDrawParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcWithDrawParamFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcWithDrawParamField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcWithDrawParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcWithDrawParamFieldData>(self);
    CThostFtdcWithDrawParamField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcWithDrawParamFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcWithDrawParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcWithDrawParamFieldData>(self);
    CThostFtdcWithDrawParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcWithDrawParamFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcWithDrawParamField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcWithDrawParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcWithDrawParamFieldData>(self);
    CThostFtdcWithDrawParamField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 参数代码
/// typedef char TThostFtdcWithDrawParamIDType
static PyObject *PyCThostFtdcWithDrawParamFieldType_get_WithDrawParamID(PyObject *self, void *closure) {
    PyCThostFtdcWithDrawParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcWithDrawParamFieldData>(self);
    CThostFtdcWithDrawParamField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->WithDrawParamID), 1);
}

static int PyCThostFtdcWithDrawParamFieldType_set_WithDrawParamID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "WithDrawParamID Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcWithDrawParamField::WithDrawParamID)) {
        PyErr_SetString(PyExc_ValueError, "WithDrawParamID must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcWithDrawParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcWithDrawParamFieldData>(self);
    CThostFtdcWithDrawParamField *data = &(extra->data);
    data->WithDrawParamID = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 参数代码值
/// typedef char TThostFtdcWithDrawParamValueType[41]
static PyObject *PyCThostFtdcWithDrawParamFieldType_get_WithDrawParamValue(PyObject *self, void *closure) {
    PyCThostFtdcWithDrawParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcWithDrawParamFieldData>(self);
    CThostFtdcWithDrawParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->WithDrawParamValue, (Py_ssize_t)sizeof(data->WithDrawParamValue));
    return PyBytes_FromString(data->WithDrawParamValue);
}

static int PyCThostFtdcWithDrawParamFieldType_set_WithDrawParamValue(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "WithDrawParamValue Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcWithDrawParamField::WithDrawParamValue)) {
        PyErr_SetString(PyExc_ValueError, "WithDrawParamValue must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcWithDrawParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcWithDrawParamFieldData>(self);
    CThostFtdcWithDrawParamField *data = &(extra->data);
    // memset(data->WithDrawParamValue, 0, sizeof(data->WithDrawParamValue));
    // memcpy(data->WithDrawParamValue, buf, len);
    strncpy(data->WithDrawParamValue, buf, sizeof(data->WithDrawParamValue));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcWithDrawParamFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcWithDrawParamFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcWithDrawParamFieldType_get_BrokerID,
    .set = PyCThostFtdcWithDrawParamFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcWithDrawParamFieldType_get_AccountID,
    .set = PyCThostFtdcWithDrawParamFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 参数代码
    /// typedef char TThostFtdcWithDrawParamIDType
    {
    .name = "WithDrawParamID",
    .get = PyCThostFtdcWithDrawParamFieldType_get_WithDrawParamID,
    .set = PyCThostFtdcWithDrawParamFieldType_set_WithDrawParamID,
    .doc = PyDoc_STR("参数代码"),
    },
    /// 参数代码值
    /// typedef char TThostFtdcWithDrawParamValueType[41]
    {
    .name = "WithDrawParamValue",
    .get = PyCThostFtdcWithDrawParamFieldType_get_WithDrawParamValue,
    .set = PyCThostFtdcWithDrawParamFieldType_set_WithDrawParamValue,
    .doc = PyDoc_STR("参数代码值"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcWithDrawParamFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcWithDrawParamField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("可提控制参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcWithDrawParamFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcWithDrawParamFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcWithDrawParamFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcWithDrawParamFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcWithDrawParamFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcWithDrawParamFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("可提控制参数")},
    {Py_tp_members, PyCThostFtdcWithDrawParamFieldType_members},
    {Py_tp_getset, PyCThostFtdcWithDrawParamFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcWithDrawParamFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcWithDrawParamFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcWithDrawParamFieldType_spec = {
    .name = "PyCTP.CThostFtdcWithDrawParamField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcWithDrawParamFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcWithDrawParamFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcWithDrawParamFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcWithDrawParamFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcWithDrawParamFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcWithDrawParamFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcWithDrawParamFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcWithDrawParamFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcWithDrawParamField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcWithDrawParamField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}