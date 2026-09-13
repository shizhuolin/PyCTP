
#include "PyCThostFtdcUserDRIBypassField.h"

///客户中心权限豁免

static int PyCThostFtdcUserDRIBypassFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", "DRIdentityID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcUserDRIBypassField_BrokerID = NULL;
    Py_ssize_t CThostFtdcUserDRIBypassField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcUserDRIBypassField_UserID = NULL;
    Py_ssize_t CThostFtdcUserDRIBypassField_UserID_length = 0;

    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    int CThostFtdcUserDRIBypassField_DRIdentityID = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#i", (char **)kwlist
        , &CThostFtdcUserDRIBypassField_BrokerID, &CThostFtdcUserDRIBypassField_BrokerID_length
        , &CThostFtdcUserDRIBypassField_UserID, &CThostFtdcUserDRIBypassField_UserID_length
        , &CThostFtdcUserDRIBypassField_DRIdentityID
    )) {
        return -1;
    }

    PyCThostFtdcUserDRIBypassFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserDRIBypassFieldData>(self);
    CThostFtdcUserDRIBypassField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcUserDRIBypassField_BrokerID != NULL ) {
        if(CThostFtdcUserDRIBypassField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcUserDRIBypassField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcUserDRIBypassField_BrokerID, CThostFtdcUserDRIBypassField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcUserDRIBypassField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcUserDRIBypassField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcUserDRIBypassField_UserID != NULL ) {
        if(CThostFtdcUserDRIBypassField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcUserDRIBypassField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcUserDRIBypassField_UserID, CThostFtdcUserDRIBypassField_UserID_length);
        strncpy(data->UserID, CThostFtdcUserDRIBypassField_UserID, sizeof(data->UserID));
        CThostFtdcUserDRIBypassField_UserID = NULL;
    }

    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    data->DRIdentityID = CThostFtdcUserDRIBypassField_DRIdentityID;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcUserDRIBypassFieldType_repr(PyObject *self) {

    PyCThostFtdcUserDRIBypassFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserDRIBypassFieldData>(self);
    CThostFtdcUserDRIBypassField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:i}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "DRIdentityID", data->DRIdentityID
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcUserDRIBypassField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcUserDRIBypassField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcUserDRIBypassFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcUserDRIBypassFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserDRIBypassFieldData>(self);
    CThostFtdcUserDRIBypassField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcUserDRIBypassFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserDRIBypassField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserDRIBypassFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserDRIBypassFieldData>(self);
    CThostFtdcUserDRIBypassField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcUserDRIBypassFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcUserDRIBypassFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserDRIBypassFieldData>(self);
    CThostFtdcUserDRIBypassField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcUserDRIBypassFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserDRIBypassField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserDRIBypassFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserDRIBypassFieldData>(self);
    CThostFtdcUserDRIBypassField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcUserDRIBypassFieldType_members[] = {
    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    {
        .name = "DRIdentityID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcUserDRIBypassFieldData, data.DRIdentityID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易中心代码")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcUserDRIBypassFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcUserDRIBypassFieldType_get_BrokerID,
    .set = PyCThostFtdcUserDRIBypassFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcUserDRIBypassFieldType_get_UserID,
    .set = PyCThostFtdcUserDRIBypassFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcUserDRIBypassFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcUserDRIBypassField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("客户中心权限豁免")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcUserDRIBypassFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcUserDRIBypassFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcUserDRIBypassFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcUserDRIBypassFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcUserDRIBypassFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcUserDRIBypassFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("客户中心权限豁免")},
    {Py_tp_members, PyCThostFtdcUserDRIBypassFieldType_members},
    {Py_tp_getset, PyCThostFtdcUserDRIBypassFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcUserDRIBypassFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcUserDRIBypassFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcUserDRIBypassFieldType_spec = {
    .name = "PyCTP.CThostFtdcUserDRIBypassField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcUserDRIBypassFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcUserDRIBypassFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcUserDRIBypassFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcUserDRIBypassFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcUserDRIBypassFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcUserDRIBypassFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcUserDRIBypassFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcUserDRIBypassFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcUserDRIBypassField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcUserDRIBypassField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}