
#include "PyCThostFtdcUserRightsAssignField.h"

///灾备中心交易权限

static int PyCThostFtdcUserRightsAssignFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", "DRIdentityID", NULL };


    /// 应用单元代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcUserRightsAssignField_BrokerID = NULL;
    Py_ssize_t CThostFtdcUserRightsAssignField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcUserRightsAssignField_UserID = NULL;
    Py_ssize_t CThostFtdcUserRightsAssignField_UserID_length = 0;

    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    int CThostFtdcUserRightsAssignField_DRIdentityID = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#i", (char **)kwlist
        , &CThostFtdcUserRightsAssignField_BrokerID, &CThostFtdcUserRightsAssignField_BrokerID_length
        , &CThostFtdcUserRightsAssignField_UserID, &CThostFtdcUserRightsAssignField_UserID_length
        , &CThostFtdcUserRightsAssignField_DRIdentityID
    )) {
        return -1;
    }

    PyCThostFtdcUserRightsAssignFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserRightsAssignFieldData>(self);
    CThostFtdcUserRightsAssignField *data = &(extra->data);


    /// 应用单元代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcUserRightsAssignField_BrokerID != NULL ) {
        if(CThostFtdcUserRightsAssignField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcUserRightsAssignField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcUserRightsAssignField_BrokerID, CThostFtdcUserRightsAssignField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcUserRightsAssignField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcUserRightsAssignField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcUserRightsAssignField_UserID != NULL ) {
        if(CThostFtdcUserRightsAssignField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcUserRightsAssignField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcUserRightsAssignField_UserID, CThostFtdcUserRightsAssignField_UserID_length);
        strncpy(data->UserID, CThostFtdcUserRightsAssignField_UserID, sizeof(data->UserID));
        CThostFtdcUserRightsAssignField_UserID = NULL;
    }

    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    data->DRIdentityID = CThostFtdcUserRightsAssignField_DRIdentityID;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcUserRightsAssignFieldType_repr(PyObject *self) {

    PyCThostFtdcUserRightsAssignFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserRightsAssignFieldData>(self);
    CThostFtdcUserRightsAssignField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:i}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "DRIdentityID", data->DRIdentityID
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcUserRightsAssignField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcUserRightsAssignField repr");
        return NULL;
    }

    return repr;
}


/// 应用单元代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcUserRightsAssignFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcUserRightsAssignFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserRightsAssignFieldData>(self);
    CThostFtdcUserRightsAssignField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcUserRightsAssignFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserRightsAssignField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserRightsAssignFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserRightsAssignFieldData>(self);
    CThostFtdcUserRightsAssignField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcUserRightsAssignFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcUserRightsAssignFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserRightsAssignFieldData>(self);
    CThostFtdcUserRightsAssignField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcUserRightsAssignFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserRightsAssignField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserRightsAssignFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserRightsAssignFieldData>(self);
    CThostFtdcUserRightsAssignField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcUserRightsAssignFieldType_members[] = {
    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    {
        .name = "DRIdentityID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcUserRightsAssignFieldData, data.DRIdentityID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易中心代码")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcUserRightsAssignFieldType_getsets[] = {
    /// 应用单元代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcUserRightsAssignFieldType_get_BrokerID,
    .set = PyCThostFtdcUserRightsAssignFieldType_set_BrokerID,
    .doc = PyDoc_STR("应用单元代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcUserRightsAssignFieldType_get_UserID,
    .set = PyCThostFtdcUserRightsAssignFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcUserRightsAssignFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcUserRightsAssignField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("灾备中心交易权限")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcUserRightsAssignFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcUserRightsAssignFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcUserRightsAssignFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcUserRightsAssignFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcUserRightsAssignFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcUserRightsAssignFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("灾备中心交易权限")},
    {Py_tp_members, PyCThostFtdcUserRightsAssignFieldType_members},
    {Py_tp_getset, PyCThostFtdcUserRightsAssignFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcUserRightsAssignFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcUserRightsAssignFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcUserRightsAssignFieldType_spec = {
    .name = "PyCTP.CThostFtdcUserRightsAssignField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcUserRightsAssignFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcUserRightsAssignFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcUserRightsAssignFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcUserRightsAssignFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcUserRightsAssignFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcUserRightsAssignFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcUserRightsAssignFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcUserRightsAssignFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcUserRightsAssignField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcUserRightsAssignField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}