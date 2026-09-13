
#include "PyCThostFtdcBrokerField.h"

///经纪公司

static int PyCThostFtdcBrokerFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "BrokerAbbr", "BrokerName", "IsActive", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcBrokerField_BrokerID = NULL;
    Py_ssize_t CThostFtdcBrokerField_BrokerID_length = 0;

    /// 经纪公司简称
    /// typedef char TThostFtdcBrokerAbbrType[9]
    char *CThostFtdcBrokerField_BrokerAbbr = NULL;
    Py_ssize_t CThostFtdcBrokerField_BrokerAbbr_length = 0;

    /// 经纪公司名称
    /// typedef char TThostFtdcBrokerNameType[81]
    char *CThostFtdcBrokerField_BrokerName = NULL;
    Py_ssize_t CThostFtdcBrokerField_BrokerName_length = 0;

    /// 是否活跃
    /// typedef int TThostFtdcBoolType
    int CThostFtdcBrokerField_IsActive = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#i", (char **)kwlist
        , &CThostFtdcBrokerField_BrokerID, &CThostFtdcBrokerField_BrokerID_length
        , &CThostFtdcBrokerField_BrokerAbbr, &CThostFtdcBrokerField_BrokerAbbr_length
        , &CThostFtdcBrokerField_BrokerName, &CThostFtdcBrokerField_BrokerName_length
        , &CThostFtdcBrokerField_IsActive
    )) {
        return -1;
    }

    PyCThostFtdcBrokerFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerFieldData>(self);
    CThostFtdcBrokerField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcBrokerField_BrokerID != NULL ) {
        if(CThostFtdcBrokerField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcBrokerField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcBrokerField_BrokerID, CThostFtdcBrokerField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcBrokerField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcBrokerField_BrokerID = NULL;
    }

    /// 经纪公司简称
    /// typedef char TThostFtdcBrokerAbbrType[9]
    if( CThostFtdcBrokerField_BrokerAbbr != NULL ) {
        if(CThostFtdcBrokerField_BrokerAbbr_length >= (Py_ssize_t)sizeof(data->BrokerAbbr)) {
            PyErr_Format(PyExc_ValueError, "BrokerAbbr too long: length=%zd (max allowed is 8)", CThostFtdcBrokerField_BrokerAbbr_length);
            return -1;
        }
        // memset(data->BrokerAbbr, 0, sizeof(data->BrokerAbbr));
        // memcpy(data->BrokerAbbr, CThostFtdcBrokerField_BrokerAbbr, CThostFtdcBrokerField_BrokerAbbr_length);
        strncpy(data->BrokerAbbr, CThostFtdcBrokerField_BrokerAbbr, sizeof(data->BrokerAbbr));
        CThostFtdcBrokerField_BrokerAbbr = NULL;
    }

    /// 经纪公司名称
    /// typedef char TThostFtdcBrokerNameType[81]
    if( CThostFtdcBrokerField_BrokerName != NULL ) {
        if(CThostFtdcBrokerField_BrokerName_length >= (Py_ssize_t)sizeof(data->BrokerName)) {
            PyErr_Format(PyExc_ValueError, "BrokerName too long: length=%zd (max allowed is 80)", CThostFtdcBrokerField_BrokerName_length);
            return -1;
        }
        // memset(data->BrokerName, 0, sizeof(data->BrokerName));
        // memcpy(data->BrokerName, CThostFtdcBrokerField_BrokerName, CThostFtdcBrokerField_BrokerName_length);
        strncpy(data->BrokerName, CThostFtdcBrokerField_BrokerName, sizeof(data->BrokerName));
        CThostFtdcBrokerField_BrokerName = NULL;
    }

    /// 是否活跃
    /// typedef int TThostFtdcBoolType
    data->IsActive = CThostFtdcBrokerField_IsActive;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcBrokerFieldType_repr(PyObject *self) {

    PyCThostFtdcBrokerFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerFieldData>(self);
    CThostFtdcBrokerField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:i}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "BrokerAbbr", data->BrokerAbbr//, (Py_ssize_t)sizeof(data->BrokerAbbr)
        , "BrokerName", data->BrokerName//, (Py_ssize_t)sizeof(data->BrokerName)
        , "IsActive", data->IsActive
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcBrokerFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcBrokerFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerFieldData>(self);
    CThostFtdcBrokerField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcBrokerFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerFieldData>(self);
    CThostFtdcBrokerField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司简称
/// typedef char TThostFtdcBrokerAbbrType[9]
static PyObject *PyCThostFtdcBrokerFieldType_get_BrokerAbbr(PyObject *self, void *closure) {
    PyCThostFtdcBrokerFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerFieldData>(self);
    CThostFtdcBrokerField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerAbbr, (Py_ssize_t)sizeof(data->BrokerAbbr));
    return PyBytes_FromString(data->BrokerAbbr);
}

static int PyCThostFtdcBrokerFieldType_set_BrokerAbbr(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerAbbr Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerField::BrokerAbbr)) {
        PyErr_SetString(PyExc_ValueError, "BrokerAbbr must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerFieldData>(self);
    CThostFtdcBrokerField *data = &(extra->data);
    // memset(data->BrokerAbbr, 0, sizeof(data->BrokerAbbr));
    // memcpy(data->BrokerAbbr, buf, len);
    strncpy(data->BrokerAbbr, buf, sizeof(data->BrokerAbbr));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司名称
/// typedef char TThostFtdcBrokerNameType[81]
static PyObject *PyCThostFtdcBrokerFieldType_get_BrokerName(PyObject *self, void *closure) {
    PyCThostFtdcBrokerFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerFieldData>(self);
    CThostFtdcBrokerField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerName, (Py_ssize_t)sizeof(data->BrokerName));
    return PyBytes_FromString(data->BrokerName);
}

static int PyCThostFtdcBrokerFieldType_set_BrokerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerField::BrokerName)) {
        PyErr_SetString(PyExc_ValueError, "BrokerName must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerFieldData>(self);
    CThostFtdcBrokerField *data = &(extra->data);
    // memset(data->BrokerName, 0, sizeof(data->BrokerName));
    // memcpy(data->BrokerName, buf, len);
    strncpy(data->BrokerName, buf, sizeof(data->BrokerName));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcBrokerFieldType_members[] = {
    /// 是否活跃
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsActive",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcBrokerFieldData, data.IsActive),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否活跃")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcBrokerFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcBrokerFieldType_get_BrokerID,
    .set = PyCThostFtdcBrokerFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 经纪公司简称
    /// typedef char TThostFtdcBrokerAbbrType[9]
    {
    .name = "BrokerAbbr",
    .get = PyCThostFtdcBrokerFieldType_get_BrokerAbbr,
    .set = PyCThostFtdcBrokerFieldType_set_BrokerAbbr,
    .doc = PyDoc_STR("经纪公司简称"),
    },
    /// 经纪公司名称
    /// typedef char TThostFtdcBrokerNameType[81]
    {
    .name = "BrokerName",
    .get = PyCThostFtdcBrokerFieldType_get_BrokerName,
    .set = PyCThostFtdcBrokerFieldType_set_BrokerName,
    .doc = PyDoc_STR("经纪公司名称"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcBrokerFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcBrokerField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("经纪公司")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcBrokerFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcBrokerFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcBrokerFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcBrokerFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcBrokerFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcBrokerFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("经纪公司")},
    {Py_tp_members, PyCThostFtdcBrokerFieldType_members},
    {Py_tp_getset, PyCThostFtdcBrokerFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcBrokerFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcBrokerFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcBrokerFieldType_spec = {
    .name = "PyCTP.CThostFtdcBrokerField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcBrokerFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcBrokerFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcBrokerFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcBrokerFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcBrokerFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcBrokerFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcBrokerFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcBrokerFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcBrokerField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcBrokerField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}