
#include "PyCThostFtdcUserRightField.h"

///用户权限

static int PyCThostFtdcUserRightFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", "UserRightType", "IsForbidden", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcUserRightField_BrokerID = NULL;
    Py_ssize_t CThostFtdcUserRightField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcUserRightField_UserID = NULL;
    Py_ssize_t CThostFtdcUserRightField_UserID_length = 0;

    /// 客户权限类型
    /// typedef char TThostFtdcUserRightTypeType
    char CThostFtdcUserRightField_UserRightType = 0;

    /// 是否禁止
    /// typedef int TThostFtdcBoolType
    int CThostFtdcUserRightField_IsForbidden = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#ci", (char **)kwlist
        , &CThostFtdcUserRightField_BrokerID, &CThostFtdcUserRightField_BrokerID_length
        , &CThostFtdcUserRightField_UserID, &CThostFtdcUserRightField_UserID_length
        , &CThostFtdcUserRightField_UserRightType
        , &CThostFtdcUserRightField_IsForbidden
    )) {
        return -1;
    }

    PyCThostFtdcUserRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserRightFieldData>(self);
    CThostFtdcUserRightField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcUserRightField_BrokerID != NULL ) {
        if(CThostFtdcUserRightField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcUserRightField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcUserRightField_BrokerID, CThostFtdcUserRightField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcUserRightField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcUserRightField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcUserRightField_UserID != NULL ) {
        if(CThostFtdcUserRightField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcUserRightField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcUserRightField_UserID, CThostFtdcUserRightField_UserID_length);
        strncpy(data->UserID, CThostFtdcUserRightField_UserID, sizeof(data->UserID));
        CThostFtdcUserRightField_UserID = NULL;
    }

    /// 客户权限类型
    /// typedef char TThostFtdcUserRightTypeType
    data->UserRightType = CThostFtdcUserRightField_UserRightType;

    /// 是否禁止
    /// typedef int TThostFtdcBoolType
    data->IsForbidden = CThostFtdcUserRightField_IsForbidden;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcUserRightFieldType_repr(PyObject *self) {

    PyCThostFtdcUserRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserRightFieldData>(self);
    CThostFtdcUserRightField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:c,s:i}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "UserRightType", data->UserRightType
        , "IsForbidden", data->IsForbidden
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcUserRightField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcUserRightField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcUserRightFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcUserRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserRightFieldData>(self);
    CThostFtdcUserRightField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcUserRightFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserRightField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserRightFieldData>(self);
    CThostFtdcUserRightField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcUserRightFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcUserRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserRightFieldData>(self);
    CThostFtdcUserRightField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcUserRightFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserRightField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserRightFieldData>(self);
    CThostFtdcUserRightField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户权限类型
/// typedef char TThostFtdcUserRightTypeType
static PyObject *PyCThostFtdcUserRightFieldType_get_UserRightType(PyObject *self, void *closure) {
    PyCThostFtdcUserRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserRightFieldData>(self);
    CThostFtdcUserRightField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->UserRightType), 1);
}

static int PyCThostFtdcUserRightFieldType_set_UserRightType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserRightType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcUserRightField::UserRightType)) {
        PyErr_SetString(PyExc_ValueError, "UserRightType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserRightFieldData>(self);
    CThostFtdcUserRightField *data = &(extra->data);
    data->UserRightType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcUserRightFieldType_members[] = {
    /// 是否禁止
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsForbidden",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcUserRightFieldData, data.IsForbidden),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否禁止")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcUserRightFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcUserRightFieldType_get_BrokerID,
    .set = PyCThostFtdcUserRightFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcUserRightFieldType_get_UserID,
    .set = PyCThostFtdcUserRightFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 客户权限类型
    /// typedef char TThostFtdcUserRightTypeType
    {
    .name = "UserRightType",
    .get = PyCThostFtdcUserRightFieldType_get_UserRightType,
    .set = PyCThostFtdcUserRightFieldType_set_UserRightType,
    .doc = PyDoc_STR("客户权限类型"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcUserRightFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcUserRightField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("用户权限")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcUserRightFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcUserRightFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcUserRightFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcUserRightFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcUserRightFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcUserRightFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("用户权限")},
    {Py_tp_members, PyCThostFtdcUserRightFieldType_members},
    {Py_tp_getset, PyCThostFtdcUserRightFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcUserRightFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcUserRightFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcUserRightFieldType_spec = {
    .name = "PyCTP.CThostFtdcUserRightField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcUserRightFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcUserRightFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcUserRightFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcUserRightFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcUserRightFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcUserRightFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcUserRightFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcUserRightFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcUserRightField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcUserRightField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}