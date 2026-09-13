
#include "PyCThostFtdcExchangeField.h"

///交易所

static int PyCThostFtdcExchangeFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "ExchangeName", "ExchangeProperty", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcExchangeField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcExchangeField_ExchangeID_length = 0;

    /// 交易所名称
    /// typedef char TThostFtdcExchangeNameType[61]
    char *CThostFtdcExchangeField_ExchangeName = NULL;
    Py_ssize_t CThostFtdcExchangeField_ExchangeName_length = 0;

    /// 交易所属性
    /// typedef char TThostFtdcExchangePropertyType
    char CThostFtdcExchangeField_ExchangeProperty = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#c", (char **)kwlist
        , &CThostFtdcExchangeField_ExchangeID, &CThostFtdcExchangeField_ExchangeID_length
        , &CThostFtdcExchangeField_ExchangeName, &CThostFtdcExchangeField_ExchangeName_length
        , &CThostFtdcExchangeField_ExchangeProperty
    )) {
        return -1;
    }

    PyCThostFtdcExchangeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeFieldData>(self);
    CThostFtdcExchangeField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcExchangeField_ExchangeID != NULL ) {
        if(CThostFtdcExchangeField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcExchangeField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcExchangeField_ExchangeID, CThostFtdcExchangeField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcExchangeField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcExchangeField_ExchangeID = NULL;
    }

    /// 交易所名称
    /// typedef char TThostFtdcExchangeNameType[61]
    if( CThostFtdcExchangeField_ExchangeName != NULL ) {
        if(CThostFtdcExchangeField_ExchangeName_length >= (Py_ssize_t)sizeof(data->ExchangeName)) {
            PyErr_Format(PyExc_ValueError, "ExchangeName too long: length=%zd (max allowed is 60)", CThostFtdcExchangeField_ExchangeName_length);
            return -1;
        }
        // memset(data->ExchangeName, 0, sizeof(data->ExchangeName));
        // memcpy(data->ExchangeName, CThostFtdcExchangeField_ExchangeName, CThostFtdcExchangeField_ExchangeName_length);
        strncpy(data->ExchangeName, CThostFtdcExchangeField_ExchangeName, sizeof(data->ExchangeName));
        CThostFtdcExchangeField_ExchangeName = NULL;
    }

    /// 交易所属性
    /// typedef char TThostFtdcExchangePropertyType
    data->ExchangeProperty = CThostFtdcExchangeField_ExchangeProperty;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcExchangeFieldType_repr(PyObject *self) {

    PyCThostFtdcExchangeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeFieldData>(self);
    CThostFtdcExchangeField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:c}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ExchangeName", data->ExchangeName//, (Py_ssize_t)sizeof(data->ExchangeName)
        , "ExchangeProperty", data->ExchangeProperty
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcExchangeFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeFieldData>(self);
    CThostFtdcExchangeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcExchangeFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeFieldData>(self);
    CThostFtdcExchangeField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所名称
/// typedef char TThostFtdcExchangeNameType[61]
static PyObject *PyCThostFtdcExchangeFieldType_get_ExchangeName(PyObject *self, void *closure) {
    PyCThostFtdcExchangeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeFieldData>(self);
    CThostFtdcExchangeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeName, (Py_ssize_t)sizeof(data->ExchangeName));
    return PyBytes_FromString(data->ExchangeName);
}

static int PyCThostFtdcExchangeFieldType_set_ExchangeName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeField::ExchangeName)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeName must be less than 60 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeFieldData>(self);
    CThostFtdcExchangeField *data = &(extra->data);
    // memset(data->ExchangeName, 0, sizeof(data->ExchangeName));
    // memcpy(data->ExchangeName, buf, len);
    strncpy(data->ExchangeName, buf, sizeof(data->ExchangeName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所属性
/// typedef char TThostFtdcExchangePropertyType
static PyObject *PyCThostFtdcExchangeFieldType_get_ExchangeProperty(PyObject *self, void *closure) {
    PyCThostFtdcExchangeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeFieldData>(self);
    CThostFtdcExchangeField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ExchangeProperty), 1);
}

static int PyCThostFtdcExchangeFieldType_set_ExchangeProperty(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeProperty Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeField::ExchangeProperty)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeProperty must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeFieldData>(self);
    CThostFtdcExchangeField *data = &(extra->data);
    data->ExchangeProperty = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcExchangeFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcExchangeFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcExchangeFieldType_get_ExchangeID,
    .set = PyCThostFtdcExchangeFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 交易所名称
    /// typedef char TThostFtdcExchangeNameType[61]
    {
    .name = "ExchangeName",
    .get = PyCThostFtdcExchangeFieldType_get_ExchangeName,
    .set = PyCThostFtdcExchangeFieldType_set_ExchangeName,
    .doc = PyDoc_STR("交易所名称"),
    },
    /// 交易所属性
    /// typedef char TThostFtdcExchangePropertyType
    {
    .name = "ExchangeProperty",
    .get = PyCThostFtdcExchangeFieldType_get_ExchangeProperty,
    .set = PyCThostFtdcExchangeFieldType_set_ExchangeProperty,
    .doc = PyDoc_STR("交易所属性"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcExchangeFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcExchangeField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("交易所")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcExchangeFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcExchangeFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcExchangeFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcExchangeFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcExchangeFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcExchangeFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("交易所")},
    {Py_tp_members, PyCThostFtdcExchangeFieldType_members},
    {Py_tp_getset, PyCThostFtdcExchangeFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcExchangeFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcExchangeFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcExchangeFieldType_spec = {
    .name = "PyCTP.CThostFtdcExchangeField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcExchangeFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcExchangeFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcExchangeFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcExchangeFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcExchangeFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcExchangeFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcExchangeFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcExchangeFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcExchangeField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}