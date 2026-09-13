
#include "PyCThostFtdcQryLoginForbiddenUserField.h"

///查询禁止登录用户

static int PyCThostFtdcQryLoginForbiddenUserFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryLoginForbiddenUserField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryLoginForbiddenUserField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcQryLoginForbiddenUserField_UserID = NULL;
    Py_ssize_t CThostFtdcQryLoginForbiddenUserField_UserID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
        , &CThostFtdcQryLoginForbiddenUserField_BrokerID, &CThostFtdcQryLoginForbiddenUserField_BrokerID_length
        , &CThostFtdcQryLoginForbiddenUserField_UserID, &CThostFtdcQryLoginForbiddenUserField_UserID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryLoginForbiddenUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryLoginForbiddenUserFieldData>(self);
    CThostFtdcQryLoginForbiddenUserField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryLoginForbiddenUserField_BrokerID != NULL ) {
        if(CThostFtdcQryLoginForbiddenUserField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryLoginForbiddenUserField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryLoginForbiddenUserField_BrokerID, CThostFtdcQryLoginForbiddenUserField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryLoginForbiddenUserField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryLoginForbiddenUserField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcQryLoginForbiddenUserField_UserID != NULL ) {
        if(CThostFtdcQryLoginForbiddenUserField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcQryLoginForbiddenUserField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcQryLoginForbiddenUserField_UserID, CThostFtdcQryLoginForbiddenUserField_UserID_length);
        strncpy(data->UserID, CThostFtdcQryLoginForbiddenUserField_UserID, sizeof(data->UserID));
        CThostFtdcQryLoginForbiddenUserField_UserID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryLoginForbiddenUserFieldType_repr(PyObject *self) {

    PyCThostFtdcQryLoginForbiddenUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryLoginForbiddenUserFieldData>(self);
    CThostFtdcQryLoginForbiddenUserField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryLoginForbiddenUserField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryLoginForbiddenUserField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryLoginForbiddenUserFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryLoginForbiddenUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryLoginForbiddenUserFieldData>(self);
    CThostFtdcQryLoginForbiddenUserField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryLoginForbiddenUserFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryLoginForbiddenUserField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryLoginForbiddenUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryLoginForbiddenUserFieldData>(self);
    CThostFtdcQryLoginForbiddenUserField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcQryLoginForbiddenUserFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcQryLoginForbiddenUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryLoginForbiddenUserFieldData>(self);
    CThostFtdcQryLoginForbiddenUserField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcQryLoginForbiddenUserFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryLoginForbiddenUserField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryLoginForbiddenUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryLoginForbiddenUserFieldData>(self);
    CThostFtdcQryLoginForbiddenUserField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryLoginForbiddenUserFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryLoginForbiddenUserFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryLoginForbiddenUserFieldType_get_BrokerID,
    .set = PyCThostFtdcQryLoginForbiddenUserFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcQryLoginForbiddenUserFieldType_get_UserID,
    .set = PyCThostFtdcQryLoginForbiddenUserFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryLoginForbiddenUserFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryLoginForbiddenUserField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询禁止登录用户")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryLoginForbiddenUserFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryLoginForbiddenUserFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryLoginForbiddenUserFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryLoginForbiddenUserFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryLoginForbiddenUserFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryLoginForbiddenUserFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询禁止登录用户")},
    {Py_tp_members, PyCThostFtdcQryLoginForbiddenUserFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryLoginForbiddenUserFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryLoginForbiddenUserFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryLoginForbiddenUserFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryLoginForbiddenUserFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryLoginForbiddenUserField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryLoginForbiddenUserFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryLoginForbiddenUserFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryLoginForbiddenUserFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryLoginForbiddenUserFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryLoginForbiddenUserFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryLoginForbiddenUserFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryLoginForbiddenUserFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryLoginForbiddenUserFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryLoginForbiddenUserField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryLoginForbiddenUserField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}