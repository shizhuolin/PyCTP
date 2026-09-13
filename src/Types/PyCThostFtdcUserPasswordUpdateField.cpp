
#include "PyCThostFtdcUserPasswordUpdateField.h"

///用户口令变更

static int PyCThostFtdcUserPasswordUpdateFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", "OldPassword", "NewPassword", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcUserPasswordUpdateField_BrokerID = NULL;
    Py_ssize_t CThostFtdcUserPasswordUpdateField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcUserPasswordUpdateField_UserID = NULL;
    Py_ssize_t CThostFtdcUserPasswordUpdateField_UserID_length = 0;

    /// 原来的口令
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcUserPasswordUpdateField_OldPassword = NULL;
    Py_ssize_t CThostFtdcUserPasswordUpdateField_OldPassword_length = 0;

    /// 新的口令
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcUserPasswordUpdateField_NewPassword = NULL;
    Py_ssize_t CThostFtdcUserPasswordUpdateField_NewPassword_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
        , &CThostFtdcUserPasswordUpdateField_BrokerID, &CThostFtdcUserPasswordUpdateField_BrokerID_length
        , &CThostFtdcUserPasswordUpdateField_UserID, &CThostFtdcUserPasswordUpdateField_UserID_length
        , &CThostFtdcUserPasswordUpdateField_OldPassword, &CThostFtdcUserPasswordUpdateField_OldPassword_length
        , &CThostFtdcUserPasswordUpdateField_NewPassword, &CThostFtdcUserPasswordUpdateField_NewPassword_length
    )) {
        return -1;
    }

    PyCThostFtdcUserPasswordUpdateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserPasswordUpdateFieldData>(self);
    CThostFtdcUserPasswordUpdateField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcUserPasswordUpdateField_BrokerID != NULL ) {
        if(CThostFtdcUserPasswordUpdateField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcUserPasswordUpdateField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcUserPasswordUpdateField_BrokerID, CThostFtdcUserPasswordUpdateField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcUserPasswordUpdateField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcUserPasswordUpdateField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcUserPasswordUpdateField_UserID != NULL ) {
        if(CThostFtdcUserPasswordUpdateField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcUserPasswordUpdateField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcUserPasswordUpdateField_UserID, CThostFtdcUserPasswordUpdateField_UserID_length);
        strncpy(data->UserID, CThostFtdcUserPasswordUpdateField_UserID, sizeof(data->UserID));
        CThostFtdcUserPasswordUpdateField_UserID = NULL;
    }

    /// 原来的口令
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcUserPasswordUpdateField_OldPassword != NULL ) {
        if(CThostFtdcUserPasswordUpdateField_OldPassword_length >= (Py_ssize_t)sizeof(data->OldPassword)) {
            PyErr_Format(PyExc_ValueError, "OldPassword too long: length=%zd (max allowed is 40)", CThostFtdcUserPasswordUpdateField_OldPassword_length);
            return -1;
        }
        // memset(data->OldPassword, 0, sizeof(data->OldPassword));
        // memcpy(data->OldPassword, CThostFtdcUserPasswordUpdateField_OldPassword, CThostFtdcUserPasswordUpdateField_OldPassword_length);
        strncpy(data->OldPassword, CThostFtdcUserPasswordUpdateField_OldPassword, sizeof(data->OldPassword));
        CThostFtdcUserPasswordUpdateField_OldPassword = NULL;
    }

    /// 新的口令
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcUserPasswordUpdateField_NewPassword != NULL ) {
        if(CThostFtdcUserPasswordUpdateField_NewPassword_length >= (Py_ssize_t)sizeof(data->NewPassword)) {
            PyErr_Format(PyExc_ValueError, "NewPassword too long: length=%zd (max allowed is 40)", CThostFtdcUserPasswordUpdateField_NewPassword_length);
            return -1;
        }
        // memset(data->NewPassword, 0, sizeof(data->NewPassword));
        // memcpy(data->NewPassword, CThostFtdcUserPasswordUpdateField_NewPassword, CThostFtdcUserPasswordUpdateField_NewPassword_length);
        strncpy(data->NewPassword, CThostFtdcUserPasswordUpdateField_NewPassword, sizeof(data->NewPassword));
        CThostFtdcUserPasswordUpdateField_NewPassword = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcUserPasswordUpdateFieldType_repr(PyObject *self) {

    PyCThostFtdcUserPasswordUpdateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserPasswordUpdateFieldData>(self);
    CThostFtdcUserPasswordUpdateField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "OldPassword", data->OldPassword//, (Py_ssize_t)sizeof(data->OldPassword)
        , "NewPassword", data->NewPassword//, (Py_ssize_t)sizeof(data->NewPassword)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcUserPasswordUpdateField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcUserPasswordUpdateField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcUserPasswordUpdateFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcUserPasswordUpdateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserPasswordUpdateFieldData>(self);
    CThostFtdcUserPasswordUpdateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcUserPasswordUpdateFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserPasswordUpdateField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserPasswordUpdateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserPasswordUpdateFieldData>(self);
    CThostFtdcUserPasswordUpdateField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcUserPasswordUpdateFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcUserPasswordUpdateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserPasswordUpdateFieldData>(self);
    CThostFtdcUserPasswordUpdateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcUserPasswordUpdateFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserPasswordUpdateField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserPasswordUpdateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserPasswordUpdateFieldData>(self);
    CThostFtdcUserPasswordUpdateField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 原来的口令
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcUserPasswordUpdateFieldType_get_OldPassword(PyObject *self, void *closure) {
    PyCThostFtdcUserPasswordUpdateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserPasswordUpdateFieldData>(self);
    CThostFtdcUserPasswordUpdateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OldPassword, (Py_ssize_t)sizeof(data->OldPassword));
    return PyBytes_FromString(data->OldPassword);
}

static int PyCThostFtdcUserPasswordUpdateFieldType_set_OldPassword(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OldPassword Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserPasswordUpdateField::OldPassword)) {
        PyErr_SetString(PyExc_ValueError, "OldPassword must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserPasswordUpdateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserPasswordUpdateFieldData>(self);
    CThostFtdcUserPasswordUpdateField *data = &(extra->data);
    // memset(data->OldPassword, 0, sizeof(data->OldPassword));
    // memcpy(data->OldPassword, buf, len);
    strncpy(data->OldPassword, buf, sizeof(data->OldPassword));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 新的口令
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcUserPasswordUpdateFieldType_get_NewPassword(PyObject *self, void *closure) {
    PyCThostFtdcUserPasswordUpdateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserPasswordUpdateFieldData>(self);
    CThostFtdcUserPasswordUpdateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->NewPassword, (Py_ssize_t)sizeof(data->NewPassword));
    return PyBytes_FromString(data->NewPassword);
}

static int PyCThostFtdcUserPasswordUpdateFieldType_set_NewPassword(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "NewPassword Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserPasswordUpdateField::NewPassword)) {
        PyErr_SetString(PyExc_ValueError, "NewPassword must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserPasswordUpdateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserPasswordUpdateFieldData>(self);
    CThostFtdcUserPasswordUpdateField *data = &(extra->data);
    // memset(data->NewPassword, 0, sizeof(data->NewPassword));
    // memcpy(data->NewPassword, buf, len);
    strncpy(data->NewPassword, buf, sizeof(data->NewPassword));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcUserPasswordUpdateFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcUserPasswordUpdateFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcUserPasswordUpdateFieldType_get_BrokerID,
    .set = PyCThostFtdcUserPasswordUpdateFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcUserPasswordUpdateFieldType_get_UserID,
    .set = PyCThostFtdcUserPasswordUpdateFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 原来的口令
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "OldPassword",
    .get = PyCThostFtdcUserPasswordUpdateFieldType_get_OldPassword,
    .set = PyCThostFtdcUserPasswordUpdateFieldType_set_OldPassword,
    .doc = PyDoc_STR("原来的口令"),
    },
    /// 新的口令
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "NewPassword",
    .get = PyCThostFtdcUserPasswordUpdateFieldType_get_NewPassword,
    .set = PyCThostFtdcUserPasswordUpdateFieldType_set_NewPassword,
    .doc = PyDoc_STR("新的口令"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcUserPasswordUpdateFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcUserPasswordUpdateField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("用户口令变更")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcUserPasswordUpdateFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcUserPasswordUpdateFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcUserPasswordUpdateFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcUserPasswordUpdateFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcUserPasswordUpdateFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcUserPasswordUpdateFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("用户口令变更")},
    {Py_tp_members, PyCThostFtdcUserPasswordUpdateFieldType_members},
    {Py_tp_getset, PyCThostFtdcUserPasswordUpdateFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcUserPasswordUpdateFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcUserPasswordUpdateFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcUserPasswordUpdateFieldType_spec = {
    .name = "PyCTP.CThostFtdcUserPasswordUpdateField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcUserPasswordUpdateFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcUserPasswordUpdateFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcUserPasswordUpdateFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcUserPasswordUpdateFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcUserPasswordUpdateFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcUserPasswordUpdateFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcUserPasswordUpdateFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcUserPasswordUpdateFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcUserPasswordUpdateField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcUserPasswordUpdateField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}