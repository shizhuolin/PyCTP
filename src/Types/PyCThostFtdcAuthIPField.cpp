
#include "PyCThostFtdcAuthIPField.h"

///用户IP绑定信息

static int PyCThostFtdcAuthIPFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "AppID", "IPAddress", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcAuthIPField_BrokerID = NULL;
    Py_ssize_t CThostFtdcAuthIPField_BrokerID_length = 0;

    /// App代码
    /// typedef char TThostFtdcAppIDType[33]
    char *CThostFtdcAuthIPField_AppID = NULL;
    Py_ssize_t CThostFtdcAuthIPField_AppID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcAuthIPField_IPAddress = NULL;
    Py_ssize_t CThostFtdcAuthIPField_IPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcAuthIPField_BrokerID, &CThostFtdcAuthIPField_BrokerID_length
        , &CThostFtdcAuthIPField_AppID, &CThostFtdcAuthIPField_AppID_length
        , &CThostFtdcAuthIPField_IPAddress, &CThostFtdcAuthIPField_IPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcAuthIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthIPFieldData>(self);
    CThostFtdcAuthIPField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcAuthIPField_BrokerID != NULL ) {
        if(CThostFtdcAuthIPField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcAuthIPField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcAuthIPField_BrokerID, CThostFtdcAuthIPField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcAuthIPField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcAuthIPField_BrokerID = NULL;
    }

    /// App代码
    /// typedef char TThostFtdcAppIDType[33]
    if( CThostFtdcAuthIPField_AppID != NULL ) {
        if(CThostFtdcAuthIPField_AppID_length >= (Py_ssize_t)sizeof(data->AppID)) {
            PyErr_Format(PyExc_ValueError, "AppID too long: length=%zd (max allowed is 32)", CThostFtdcAuthIPField_AppID_length);
            return -1;
        }
        // memset(data->AppID, 0, sizeof(data->AppID));
        // memcpy(data->AppID, CThostFtdcAuthIPField_AppID, CThostFtdcAuthIPField_AppID_length);
        strncpy(data->AppID, CThostFtdcAuthIPField_AppID, sizeof(data->AppID));
        CThostFtdcAuthIPField_AppID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcAuthIPField_IPAddress != NULL ) {
        if(CThostFtdcAuthIPField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcAuthIPField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcAuthIPField_IPAddress, CThostFtdcAuthIPField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcAuthIPField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcAuthIPField_IPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcAuthIPFieldType_repr(PyObject *self) {

    PyCThostFtdcAuthIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthIPFieldData>(self);
    CThostFtdcAuthIPField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "AppID", data->AppID//, (Py_ssize_t)sizeof(data->AppID)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcAuthIPField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcAuthIPField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcAuthIPFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcAuthIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthIPFieldData>(self);
    CThostFtdcAuthIPField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcAuthIPFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAuthIPField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAuthIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthIPFieldData>(self);
    CThostFtdcAuthIPField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// App代码
/// typedef char TThostFtdcAppIDType[33]
static PyObject *PyCThostFtdcAuthIPFieldType_get_AppID(PyObject *self, void *closure) {
    PyCThostFtdcAuthIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthIPFieldData>(self);
    CThostFtdcAuthIPField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AppID, (Py_ssize_t)sizeof(data->AppID));
    return PyBytes_FromString(data->AppID);
}

static int PyCThostFtdcAuthIPFieldType_set_AppID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AppID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAuthIPField::AppID)) {
        PyErr_SetString(PyExc_ValueError, "AppID must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAuthIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthIPFieldData>(self);
    CThostFtdcAuthIPField *data = &(extra->data);
    // memset(data->AppID, 0, sizeof(data->AppID));
    // memcpy(data->AppID, buf, len);
    strncpy(data->AppID, buf, sizeof(data->AppID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcAuthIPFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcAuthIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthIPFieldData>(self);
    CThostFtdcAuthIPField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcAuthIPFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAuthIPField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAuthIPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthIPFieldData>(self);
    CThostFtdcAuthIPField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcAuthIPFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcAuthIPFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcAuthIPFieldType_get_BrokerID,
    .set = PyCThostFtdcAuthIPFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// App代码
    /// typedef char TThostFtdcAppIDType[33]
    {
    .name = "AppID",
    .get = PyCThostFtdcAuthIPFieldType_get_AppID,
    .set = PyCThostFtdcAuthIPFieldType_set_AppID,
    .doc = PyDoc_STR("App代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcAuthIPFieldType_get_IPAddress,
    .set = PyCThostFtdcAuthIPFieldType_set_IPAddress,
    .doc = PyDoc_STR("用户代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcAuthIPFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcAuthIPField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("用户IP绑定信息")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcAuthIPFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcAuthIPFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcAuthIPFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcAuthIPFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcAuthIPFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcAuthIPFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("用户IP绑定信息")},
    {Py_tp_members, PyCThostFtdcAuthIPFieldType_members},
    {Py_tp_getset, PyCThostFtdcAuthIPFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcAuthIPFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcAuthIPFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcAuthIPFieldType_spec = {
    .name = "PyCTP.CThostFtdcAuthIPField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcAuthIPFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcAuthIPFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcAuthIPFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcAuthIPFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcAuthIPFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcAuthIPFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcAuthIPFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcAuthIPFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcAuthIPField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcAuthIPField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}