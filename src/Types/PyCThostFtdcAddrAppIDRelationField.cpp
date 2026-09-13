
#include "PyCThostFtdcAddrAppIDRelationField.h"

///服务地址和AppID的关系

static int PyCThostFtdcAddrAppIDRelationFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "Address", "DRIdentityID", "AppID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcAddrAppIDRelationField_BrokerID = NULL;
    Py_ssize_t CThostFtdcAddrAppIDRelationField_BrokerID_length = 0;

    /// 服务地址
    /// typedef char TThostFtdcIpAddrType[129]
    char *CThostFtdcAddrAppIDRelationField_Address = NULL;
    Py_ssize_t CThostFtdcAddrAppIDRelationField_Address_length = 0;

    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    int CThostFtdcAddrAppIDRelationField_DRIdentityID = 0;

    /// App代码
    /// typedef char TThostFtdcAppIDType[33]
    char *CThostFtdcAddrAppIDRelationField_AppID = NULL;
    Py_ssize_t CThostFtdcAddrAppIDRelationField_AppID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#", (char **)kwlist
        , &CThostFtdcAddrAppIDRelationField_BrokerID, &CThostFtdcAddrAppIDRelationField_BrokerID_length
        , &CThostFtdcAddrAppIDRelationField_Address, &CThostFtdcAddrAppIDRelationField_Address_length
        , &CThostFtdcAddrAppIDRelationField_DRIdentityID
        , &CThostFtdcAddrAppIDRelationField_AppID, &CThostFtdcAddrAppIDRelationField_AppID_length
    )) {
        return -1;
    }

    PyCThostFtdcAddrAppIDRelationFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAddrAppIDRelationFieldData>(self);
    CThostFtdcAddrAppIDRelationField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcAddrAppIDRelationField_BrokerID != NULL ) {
        if(CThostFtdcAddrAppIDRelationField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcAddrAppIDRelationField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcAddrAppIDRelationField_BrokerID, CThostFtdcAddrAppIDRelationField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcAddrAppIDRelationField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcAddrAppIDRelationField_BrokerID = NULL;
    }

    /// 服务地址
    /// typedef char TThostFtdcIpAddrType[129]
    if( CThostFtdcAddrAppIDRelationField_Address != NULL ) {
        if(CThostFtdcAddrAppIDRelationField_Address_length >= (Py_ssize_t)sizeof(data->Address)) {
            PyErr_Format(PyExc_ValueError, "Address too long: length=%zd (max allowed is 128)", CThostFtdcAddrAppIDRelationField_Address_length);
            return -1;
        }
        // memset(data->Address, 0, sizeof(data->Address));
        // memcpy(data->Address, CThostFtdcAddrAppIDRelationField_Address, CThostFtdcAddrAppIDRelationField_Address_length);
        strncpy(data->Address, CThostFtdcAddrAppIDRelationField_Address, sizeof(data->Address));
        CThostFtdcAddrAppIDRelationField_Address = NULL;
    }

    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    data->DRIdentityID = CThostFtdcAddrAppIDRelationField_DRIdentityID;

    /// App代码
    /// typedef char TThostFtdcAppIDType[33]
    if( CThostFtdcAddrAppIDRelationField_AppID != NULL ) {
        if(CThostFtdcAddrAppIDRelationField_AppID_length >= (Py_ssize_t)sizeof(data->AppID)) {
            PyErr_Format(PyExc_ValueError, "AppID too long: length=%zd (max allowed is 32)", CThostFtdcAddrAppIDRelationField_AppID_length);
            return -1;
        }
        // memset(data->AppID, 0, sizeof(data->AppID));
        // memcpy(data->AppID, CThostFtdcAddrAppIDRelationField_AppID, CThostFtdcAddrAppIDRelationField_AppID_length);
        strncpy(data->AppID, CThostFtdcAddrAppIDRelationField_AppID, sizeof(data->AppID));
        CThostFtdcAddrAppIDRelationField_AppID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcAddrAppIDRelationFieldType_repr(PyObject *self) {

    PyCThostFtdcAddrAppIDRelationFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAddrAppIDRelationFieldData>(self);
    CThostFtdcAddrAppIDRelationField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:i,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "Address", data->Address//, (Py_ssize_t)sizeof(data->Address)
        , "DRIdentityID", data->DRIdentityID
        , "AppID", data->AppID//, (Py_ssize_t)sizeof(data->AppID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcAddrAppIDRelationField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcAddrAppIDRelationField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcAddrAppIDRelationFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcAddrAppIDRelationFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAddrAppIDRelationFieldData>(self);
    CThostFtdcAddrAppIDRelationField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcAddrAppIDRelationFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAddrAppIDRelationField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAddrAppIDRelationFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAddrAppIDRelationFieldData>(self);
    CThostFtdcAddrAppIDRelationField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 服务地址
/// typedef char TThostFtdcIpAddrType[129]
static PyObject *PyCThostFtdcAddrAppIDRelationFieldType_get_Address(PyObject *self, void *closure) {
    PyCThostFtdcAddrAppIDRelationFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAddrAppIDRelationFieldData>(self);
    CThostFtdcAddrAppIDRelationField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Address, (Py_ssize_t)sizeof(data->Address));
    return PyBytes_FromString(data->Address);
}

static int PyCThostFtdcAddrAppIDRelationFieldType_set_Address(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Address Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAddrAppIDRelationField::Address)) {
        PyErr_SetString(PyExc_ValueError, "Address must be less than 128 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAddrAppIDRelationFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAddrAppIDRelationFieldData>(self);
    CThostFtdcAddrAppIDRelationField *data = &(extra->data);
    // memset(data->Address, 0, sizeof(data->Address));
    // memcpy(data->Address, buf, len);
    strncpy(data->Address, buf, sizeof(data->Address));
    extra = NULL;
    data = NULL;
    return 0;
}

/// App代码
/// typedef char TThostFtdcAppIDType[33]
static PyObject *PyCThostFtdcAddrAppIDRelationFieldType_get_AppID(PyObject *self, void *closure) {
    PyCThostFtdcAddrAppIDRelationFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAddrAppIDRelationFieldData>(self);
    CThostFtdcAddrAppIDRelationField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AppID, (Py_ssize_t)sizeof(data->AppID));
    return PyBytes_FromString(data->AppID);
}

static int PyCThostFtdcAddrAppIDRelationFieldType_set_AppID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AppID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAddrAppIDRelationField::AppID)) {
        PyErr_SetString(PyExc_ValueError, "AppID must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAddrAppIDRelationFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAddrAppIDRelationFieldData>(self);
    CThostFtdcAddrAppIDRelationField *data = &(extra->data);
    // memset(data->AppID, 0, sizeof(data->AppID));
    // memcpy(data->AppID, buf, len);
    strncpy(data->AppID, buf, sizeof(data->AppID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcAddrAppIDRelationFieldType_members[] = {
    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    {
        .name = "DRIdentityID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcAddrAppIDRelationFieldData, data.DRIdentityID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易中心代码")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcAddrAppIDRelationFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcAddrAppIDRelationFieldType_get_BrokerID,
    .set = PyCThostFtdcAddrAppIDRelationFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 服务地址
    /// typedef char TThostFtdcIpAddrType[129]
    {
    .name = "Address",
    .get = PyCThostFtdcAddrAppIDRelationFieldType_get_Address,
    .set = PyCThostFtdcAddrAppIDRelationFieldType_set_Address,
    .doc = PyDoc_STR("服务地址"),
    },
    /// App代码
    /// typedef char TThostFtdcAppIDType[33]
    {
    .name = "AppID",
    .get = PyCThostFtdcAddrAppIDRelationFieldType_get_AppID,
    .set = PyCThostFtdcAddrAppIDRelationFieldType_set_AppID,
    .doc = PyDoc_STR("App代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcAddrAppIDRelationFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcAddrAppIDRelationField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("服务地址和AppID的关系")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcAddrAppIDRelationFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcAddrAppIDRelationFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcAddrAppIDRelationFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcAddrAppIDRelationFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcAddrAppIDRelationFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcAddrAppIDRelationFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("服务地址和AppID的关系")},
    {Py_tp_members, PyCThostFtdcAddrAppIDRelationFieldType_members},
    {Py_tp_getset, PyCThostFtdcAddrAppIDRelationFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcAddrAppIDRelationFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcAddrAppIDRelationFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcAddrAppIDRelationFieldType_spec = {
    .name = "PyCTP.CThostFtdcAddrAppIDRelationField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcAddrAppIDRelationFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcAddrAppIDRelationFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcAddrAppIDRelationFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcAddrAppIDRelationFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcAddrAppIDRelationFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcAddrAppIDRelationFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcAddrAppIDRelationFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcAddrAppIDRelationFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcAddrAppIDRelationField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcAddrAppIDRelationField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}