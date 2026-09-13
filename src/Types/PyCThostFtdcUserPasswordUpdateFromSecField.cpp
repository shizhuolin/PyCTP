
#include "PyCThostFtdcUserPasswordUpdateFromSecField.h"

///来自次席的用户口令变更

static int PyCThostFtdcUserPasswordUpdateFromSecFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", "OldPassword", "NewPassword", "FromSec", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcUserPasswordUpdateFromSecField_BrokerID = NULL;
    Py_ssize_t CThostFtdcUserPasswordUpdateFromSecField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcUserPasswordUpdateFromSecField_UserID = NULL;
    Py_ssize_t CThostFtdcUserPasswordUpdateFromSecField_UserID_length = 0;

    /// 原来的口令
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcUserPasswordUpdateFromSecField_OldPassword = NULL;
    Py_ssize_t CThostFtdcUserPasswordUpdateFromSecField_OldPassword_length = 0;

    /// 新的口令
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcUserPasswordUpdateFromSecField_NewPassword = NULL;
    Py_ssize_t CThostFtdcUserPasswordUpdateFromSecField_NewPassword_length = 0;

    /// 次席的交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    int CThostFtdcUserPasswordUpdateFromSecField_FromSec = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#i", (char **)kwlist
        , &CThostFtdcUserPasswordUpdateFromSecField_BrokerID, &CThostFtdcUserPasswordUpdateFromSecField_BrokerID_length
        , &CThostFtdcUserPasswordUpdateFromSecField_UserID, &CThostFtdcUserPasswordUpdateFromSecField_UserID_length
        , &CThostFtdcUserPasswordUpdateFromSecField_OldPassword, &CThostFtdcUserPasswordUpdateFromSecField_OldPassword_length
        , &CThostFtdcUserPasswordUpdateFromSecField_NewPassword, &CThostFtdcUserPasswordUpdateFromSecField_NewPassword_length
        , &CThostFtdcUserPasswordUpdateFromSecField_FromSec
    )) {
        return -1;
    }

    PyCThostFtdcUserPasswordUpdateFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserPasswordUpdateFromSecFieldData>(self);
    CThostFtdcUserPasswordUpdateFromSecField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcUserPasswordUpdateFromSecField_BrokerID != NULL ) {
        if(CThostFtdcUserPasswordUpdateFromSecField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcUserPasswordUpdateFromSecField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcUserPasswordUpdateFromSecField_BrokerID, CThostFtdcUserPasswordUpdateFromSecField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcUserPasswordUpdateFromSecField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcUserPasswordUpdateFromSecField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcUserPasswordUpdateFromSecField_UserID != NULL ) {
        if(CThostFtdcUserPasswordUpdateFromSecField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcUserPasswordUpdateFromSecField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcUserPasswordUpdateFromSecField_UserID, CThostFtdcUserPasswordUpdateFromSecField_UserID_length);
        strncpy(data->UserID, CThostFtdcUserPasswordUpdateFromSecField_UserID, sizeof(data->UserID));
        CThostFtdcUserPasswordUpdateFromSecField_UserID = NULL;
    }

    /// 原来的口令
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcUserPasswordUpdateFromSecField_OldPassword != NULL ) {
        if(CThostFtdcUserPasswordUpdateFromSecField_OldPassword_length >= (Py_ssize_t)sizeof(data->OldPassword)) {
            PyErr_Format(PyExc_ValueError, "OldPassword too long: length=%zd (max allowed is 40)", CThostFtdcUserPasswordUpdateFromSecField_OldPassword_length);
            return -1;
        }
        // memset(data->OldPassword, 0, sizeof(data->OldPassword));
        // memcpy(data->OldPassword, CThostFtdcUserPasswordUpdateFromSecField_OldPassword, CThostFtdcUserPasswordUpdateFromSecField_OldPassword_length);
        strncpy(data->OldPassword, CThostFtdcUserPasswordUpdateFromSecField_OldPassword, sizeof(data->OldPassword));
        CThostFtdcUserPasswordUpdateFromSecField_OldPassword = NULL;
    }

    /// 新的口令
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcUserPasswordUpdateFromSecField_NewPassword != NULL ) {
        if(CThostFtdcUserPasswordUpdateFromSecField_NewPassword_length >= (Py_ssize_t)sizeof(data->NewPassword)) {
            PyErr_Format(PyExc_ValueError, "NewPassword too long: length=%zd (max allowed is 40)", CThostFtdcUserPasswordUpdateFromSecField_NewPassword_length);
            return -1;
        }
        // memset(data->NewPassword, 0, sizeof(data->NewPassword));
        // memcpy(data->NewPassword, CThostFtdcUserPasswordUpdateFromSecField_NewPassword, CThostFtdcUserPasswordUpdateFromSecField_NewPassword_length);
        strncpy(data->NewPassword, CThostFtdcUserPasswordUpdateFromSecField_NewPassword, sizeof(data->NewPassword));
        CThostFtdcUserPasswordUpdateFromSecField_NewPassword = NULL;
    }

    /// 次席的交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    data->FromSec = CThostFtdcUserPasswordUpdateFromSecField_FromSec;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcUserPasswordUpdateFromSecFieldType_repr(PyObject *self) {

    PyCThostFtdcUserPasswordUpdateFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserPasswordUpdateFromSecFieldData>(self);
    CThostFtdcUserPasswordUpdateFromSecField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "OldPassword", data->OldPassword//, (Py_ssize_t)sizeof(data->OldPassword)
        , "NewPassword", data->NewPassword//, (Py_ssize_t)sizeof(data->NewPassword)
        , "FromSec", data->FromSec
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcUserPasswordUpdateFromSecField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcUserPasswordUpdateFromSecField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcUserPasswordUpdateFromSecFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcUserPasswordUpdateFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserPasswordUpdateFromSecFieldData>(self);
    CThostFtdcUserPasswordUpdateFromSecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcUserPasswordUpdateFromSecFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserPasswordUpdateFromSecField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserPasswordUpdateFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserPasswordUpdateFromSecFieldData>(self);
    CThostFtdcUserPasswordUpdateFromSecField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcUserPasswordUpdateFromSecFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcUserPasswordUpdateFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserPasswordUpdateFromSecFieldData>(self);
    CThostFtdcUserPasswordUpdateFromSecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcUserPasswordUpdateFromSecFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserPasswordUpdateFromSecField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserPasswordUpdateFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserPasswordUpdateFromSecFieldData>(self);
    CThostFtdcUserPasswordUpdateFromSecField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 原来的口令
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcUserPasswordUpdateFromSecFieldType_get_OldPassword(PyObject *self, void *closure) {
    PyCThostFtdcUserPasswordUpdateFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserPasswordUpdateFromSecFieldData>(self);
    CThostFtdcUserPasswordUpdateFromSecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OldPassword, (Py_ssize_t)sizeof(data->OldPassword));
    return PyBytes_FromString(data->OldPassword);
}

static int PyCThostFtdcUserPasswordUpdateFromSecFieldType_set_OldPassword(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OldPassword Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserPasswordUpdateFromSecField::OldPassword)) {
        PyErr_SetString(PyExc_ValueError, "OldPassword must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserPasswordUpdateFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserPasswordUpdateFromSecFieldData>(self);
    CThostFtdcUserPasswordUpdateFromSecField *data = &(extra->data);
    // memset(data->OldPassword, 0, sizeof(data->OldPassword));
    // memcpy(data->OldPassword, buf, len);
    strncpy(data->OldPassword, buf, sizeof(data->OldPassword));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 新的口令
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcUserPasswordUpdateFromSecFieldType_get_NewPassword(PyObject *self, void *closure) {
    PyCThostFtdcUserPasswordUpdateFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserPasswordUpdateFromSecFieldData>(self);
    CThostFtdcUserPasswordUpdateFromSecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->NewPassword, (Py_ssize_t)sizeof(data->NewPassword));
    return PyBytes_FromString(data->NewPassword);
}

static int PyCThostFtdcUserPasswordUpdateFromSecFieldType_set_NewPassword(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "NewPassword Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserPasswordUpdateFromSecField::NewPassword)) {
        PyErr_SetString(PyExc_ValueError, "NewPassword must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserPasswordUpdateFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserPasswordUpdateFromSecFieldData>(self);
    CThostFtdcUserPasswordUpdateFromSecField *data = &(extra->data);
    // memset(data->NewPassword, 0, sizeof(data->NewPassword));
    // memcpy(data->NewPassword, buf, len);
    strncpy(data->NewPassword, buf, sizeof(data->NewPassword));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcUserPasswordUpdateFromSecFieldType_members[] = {
    /// 次席的交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    {
        .name = "FromSec",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcUserPasswordUpdateFromSecFieldData, data.FromSec),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("次席的交易中心代码")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcUserPasswordUpdateFromSecFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcUserPasswordUpdateFromSecFieldType_get_BrokerID,
    .set = PyCThostFtdcUserPasswordUpdateFromSecFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcUserPasswordUpdateFromSecFieldType_get_UserID,
    .set = PyCThostFtdcUserPasswordUpdateFromSecFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 原来的口令
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "OldPassword",
    .get = PyCThostFtdcUserPasswordUpdateFromSecFieldType_get_OldPassword,
    .set = PyCThostFtdcUserPasswordUpdateFromSecFieldType_set_OldPassword,
    .doc = PyDoc_STR("原来的口令"),
    },
    /// 新的口令
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "NewPassword",
    .get = PyCThostFtdcUserPasswordUpdateFromSecFieldType_get_NewPassword,
    .set = PyCThostFtdcUserPasswordUpdateFromSecFieldType_set_NewPassword,
    .doc = PyDoc_STR("新的口令"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcUserPasswordUpdateFromSecFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcUserPasswordUpdateFromSecField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("来自次席的用户口令变更")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcUserPasswordUpdateFromSecFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcUserPasswordUpdateFromSecFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcUserPasswordUpdateFromSecFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcUserPasswordUpdateFromSecFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcUserPasswordUpdateFromSecFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcUserPasswordUpdateFromSecFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("来自次席的用户口令变更")},
    {Py_tp_members, PyCThostFtdcUserPasswordUpdateFromSecFieldType_members},
    {Py_tp_getset, PyCThostFtdcUserPasswordUpdateFromSecFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcUserPasswordUpdateFromSecFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcUserPasswordUpdateFromSecFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcUserPasswordUpdateFromSecFieldType_spec = {
    .name = "PyCTP.CThostFtdcUserPasswordUpdateFromSecField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcUserPasswordUpdateFromSecFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcUserPasswordUpdateFromSecFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcUserPasswordUpdateFromSecFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcUserPasswordUpdateFromSecFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcUserPasswordUpdateFromSecFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcUserPasswordUpdateFromSecFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcUserPasswordUpdateFromSecFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcUserPasswordUpdateFromSecFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcUserPasswordUpdateFromSecField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcUserPasswordUpdateFromSecField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}