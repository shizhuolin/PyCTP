
#include "PyCThostFtdcQryThostUserFunctionField.h"

///Thost终端用户功能权限查询

static int PyCThostFtdcQryThostUserFunctionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryThostUserFunctionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryThostUserFunctionField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcQryThostUserFunctionField_UserID = NULL;
    Py_ssize_t CThostFtdcQryThostUserFunctionField_UserID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
        , &CThostFtdcQryThostUserFunctionField_BrokerID, &CThostFtdcQryThostUserFunctionField_BrokerID_length
        , &CThostFtdcQryThostUserFunctionField_UserID, &CThostFtdcQryThostUserFunctionField_UserID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryThostUserFunctionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryThostUserFunctionFieldData>(self);
    CThostFtdcQryThostUserFunctionField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryThostUserFunctionField_BrokerID != NULL ) {
        if(CThostFtdcQryThostUserFunctionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryThostUserFunctionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryThostUserFunctionField_BrokerID, CThostFtdcQryThostUserFunctionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryThostUserFunctionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryThostUserFunctionField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcQryThostUserFunctionField_UserID != NULL ) {
        if(CThostFtdcQryThostUserFunctionField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcQryThostUserFunctionField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcQryThostUserFunctionField_UserID, CThostFtdcQryThostUserFunctionField_UserID_length);
        strncpy(data->UserID, CThostFtdcQryThostUserFunctionField_UserID, sizeof(data->UserID));
        CThostFtdcQryThostUserFunctionField_UserID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryThostUserFunctionFieldType_repr(PyObject *self) {

    PyCThostFtdcQryThostUserFunctionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryThostUserFunctionFieldData>(self);
    CThostFtdcQryThostUserFunctionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryThostUserFunctionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryThostUserFunctionField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryThostUserFunctionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryThostUserFunctionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryThostUserFunctionFieldData>(self);
    CThostFtdcQryThostUserFunctionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryThostUserFunctionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryThostUserFunctionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryThostUserFunctionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryThostUserFunctionFieldData>(self);
    CThostFtdcQryThostUserFunctionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcQryThostUserFunctionFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcQryThostUserFunctionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryThostUserFunctionFieldData>(self);
    CThostFtdcQryThostUserFunctionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcQryThostUserFunctionFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryThostUserFunctionField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryThostUserFunctionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryThostUserFunctionFieldData>(self);
    CThostFtdcQryThostUserFunctionField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryThostUserFunctionFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryThostUserFunctionFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryThostUserFunctionFieldType_get_BrokerID,
    .set = PyCThostFtdcQryThostUserFunctionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcQryThostUserFunctionFieldType_get_UserID,
    .set = PyCThostFtdcQryThostUserFunctionFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryThostUserFunctionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryThostUserFunctionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("Thost终端用户功能权限查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryThostUserFunctionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryThostUserFunctionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryThostUserFunctionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryThostUserFunctionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryThostUserFunctionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryThostUserFunctionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("Thost终端用户功能权限查询")},
    {Py_tp_members, PyCThostFtdcQryThostUserFunctionFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryThostUserFunctionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryThostUserFunctionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryThostUserFunctionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryThostUserFunctionFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryThostUserFunctionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryThostUserFunctionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryThostUserFunctionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryThostUserFunctionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryThostUserFunctionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryThostUserFunctionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryThostUserFunctionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryThostUserFunctionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryThostUserFunctionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryThostUserFunctionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryThostUserFunctionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}