
#include "PyCThostFtdcAppIDAuthAssignField.h"

///App客户端权限分配

static int PyCThostFtdcAppIDAuthAssignFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "AppID", "DRIdentityID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcAppIDAuthAssignField_BrokerID = NULL;
    Py_ssize_t CThostFtdcAppIDAuthAssignField_BrokerID_length = 0;

    /// App代码
    /// typedef char TThostFtdcAppIDType[33]
    char *CThostFtdcAppIDAuthAssignField_AppID = NULL;
    Py_ssize_t CThostFtdcAppIDAuthAssignField_AppID_length = 0;

    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    int CThostFtdcAppIDAuthAssignField_DRIdentityID = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#i", (char **)kwlist
        , &CThostFtdcAppIDAuthAssignField_BrokerID, &CThostFtdcAppIDAuthAssignField_BrokerID_length
        , &CThostFtdcAppIDAuthAssignField_AppID, &CThostFtdcAppIDAuthAssignField_AppID_length
        , &CThostFtdcAppIDAuthAssignField_DRIdentityID
    )) {
        return -1;
    }

    PyCThostFtdcAppIDAuthAssignFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAppIDAuthAssignFieldData>(self);
    CThostFtdcAppIDAuthAssignField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcAppIDAuthAssignField_BrokerID != NULL ) {
        if(CThostFtdcAppIDAuthAssignField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcAppIDAuthAssignField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcAppIDAuthAssignField_BrokerID, CThostFtdcAppIDAuthAssignField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcAppIDAuthAssignField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcAppIDAuthAssignField_BrokerID = NULL;
    }

    /// App代码
    /// typedef char TThostFtdcAppIDType[33]
    if( CThostFtdcAppIDAuthAssignField_AppID != NULL ) {
        if(CThostFtdcAppIDAuthAssignField_AppID_length >= (Py_ssize_t)sizeof(data->AppID)) {
            PyErr_Format(PyExc_ValueError, "AppID too long: length=%zd (max allowed is 32)", CThostFtdcAppIDAuthAssignField_AppID_length);
            return -1;
        }
        // memset(data->AppID, 0, sizeof(data->AppID));
        // memcpy(data->AppID, CThostFtdcAppIDAuthAssignField_AppID, CThostFtdcAppIDAuthAssignField_AppID_length);
        strncpy(data->AppID, CThostFtdcAppIDAuthAssignField_AppID, sizeof(data->AppID));
        CThostFtdcAppIDAuthAssignField_AppID = NULL;
    }

    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    data->DRIdentityID = CThostFtdcAppIDAuthAssignField_DRIdentityID;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcAppIDAuthAssignFieldType_repr(PyObject *self) {

    PyCThostFtdcAppIDAuthAssignFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAppIDAuthAssignFieldData>(self);
    CThostFtdcAppIDAuthAssignField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:i}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "AppID", data->AppID//, (Py_ssize_t)sizeof(data->AppID)
        , "DRIdentityID", data->DRIdentityID
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcAppIDAuthAssignField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcAppIDAuthAssignField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcAppIDAuthAssignFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcAppIDAuthAssignFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAppIDAuthAssignFieldData>(self);
    CThostFtdcAppIDAuthAssignField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcAppIDAuthAssignFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAppIDAuthAssignField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAppIDAuthAssignFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAppIDAuthAssignFieldData>(self);
    CThostFtdcAppIDAuthAssignField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// App代码
/// typedef char TThostFtdcAppIDType[33]
static PyObject *PyCThostFtdcAppIDAuthAssignFieldType_get_AppID(PyObject *self, void *closure) {
    PyCThostFtdcAppIDAuthAssignFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAppIDAuthAssignFieldData>(self);
    CThostFtdcAppIDAuthAssignField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AppID, (Py_ssize_t)sizeof(data->AppID));
    return PyBytes_FromString(data->AppID);
}

static int PyCThostFtdcAppIDAuthAssignFieldType_set_AppID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AppID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAppIDAuthAssignField::AppID)) {
        PyErr_SetString(PyExc_ValueError, "AppID must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAppIDAuthAssignFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAppIDAuthAssignFieldData>(self);
    CThostFtdcAppIDAuthAssignField *data = &(extra->data);
    // memset(data->AppID, 0, sizeof(data->AppID));
    // memcpy(data->AppID, buf, len);
    strncpy(data->AppID, buf, sizeof(data->AppID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcAppIDAuthAssignFieldType_members[] = {
    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    {
        .name = "DRIdentityID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcAppIDAuthAssignFieldData, data.DRIdentityID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易中心代码")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcAppIDAuthAssignFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcAppIDAuthAssignFieldType_get_BrokerID,
    .set = PyCThostFtdcAppIDAuthAssignFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// App代码
    /// typedef char TThostFtdcAppIDType[33]
    {
    .name = "AppID",
    .get = PyCThostFtdcAppIDAuthAssignFieldType_get_AppID,
    .set = PyCThostFtdcAppIDAuthAssignFieldType_set_AppID,
    .doc = PyDoc_STR("App代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcAppIDAuthAssignFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcAppIDAuthAssignField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("App客户端权限分配")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcAppIDAuthAssignFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcAppIDAuthAssignFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcAppIDAuthAssignFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcAppIDAuthAssignFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcAppIDAuthAssignFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcAppIDAuthAssignFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("App客户端权限分配")},
    {Py_tp_members, PyCThostFtdcAppIDAuthAssignFieldType_members},
    {Py_tp_getset, PyCThostFtdcAppIDAuthAssignFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcAppIDAuthAssignFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcAppIDAuthAssignFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcAppIDAuthAssignFieldType_spec = {
    .name = "PyCTP.CThostFtdcAppIDAuthAssignField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcAppIDAuthAssignFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcAppIDAuthAssignFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcAppIDAuthAssignFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcAppIDAuthAssignFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcAppIDAuthAssignFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcAppIDAuthAssignFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcAppIDAuthAssignFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcAppIDAuthAssignFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcAppIDAuthAssignField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcAppIDAuthAssignField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}