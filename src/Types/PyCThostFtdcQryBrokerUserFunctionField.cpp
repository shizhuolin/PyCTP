
#include "PyCThostFtdcQryBrokerUserFunctionField.h"

///查询经纪公司用户权限

static int PyCThostFtdcQryBrokerUserFunctionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryBrokerUserFunctionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryBrokerUserFunctionField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcQryBrokerUserFunctionField_UserID = NULL;
    Py_ssize_t CThostFtdcQryBrokerUserFunctionField_UserID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
        , &CThostFtdcQryBrokerUserFunctionField_BrokerID, &CThostFtdcQryBrokerUserFunctionField_BrokerID_length
        , &CThostFtdcQryBrokerUserFunctionField_UserID, &CThostFtdcQryBrokerUserFunctionField_UserID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryBrokerUserFunctionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerUserFunctionFieldData>(self);
    CThostFtdcQryBrokerUserFunctionField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryBrokerUserFunctionField_BrokerID != NULL ) {
        if(CThostFtdcQryBrokerUserFunctionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryBrokerUserFunctionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryBrokerUserFunctionField_BrokerID, CThostFtdcQryBrokerUserFunctionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryBrokerUserFunctionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryBrokerUserFunctionField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcQryBrokerUserFunctionField_UserID != NULL ) {
        if(CThostFtdcQryBrokerUserFunctionField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcQryBrokerUserFunctionField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcQryBrokerUserFunctionField_UserID, CThostFtdcQryBrokerUserFunctionField_UserID_length);
        strncpy(data->UserID, CThostFtdcQryBrokerUserFunctionField_UserID, sizeof(data->UserID));
        CThostFtdcQryBrokerUserFunctionField_UserID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryBrokerUserFunctionFieldType_repr(PyObject *self) {

    PyCThostFtdcQryBrokerUserFunctionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerUserFunctionFieldData>(self);
    CThostFtdcQryBrokerUserFunctionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryBrokerUserFunctionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryBrokerUserFunctionField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryBrokerUserFunctionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryBrokerUserFunctionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerUserFunctionFieldData>(self);
    CThostFtdcQryBrokerUserFunctionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryBrokerUserFunctionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryBrokerUserFunctionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryBrokerUserFunctionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerUserFunctionFieldData>(self);
    CThostFtdcQryBrokerUserFunctionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcQryBrokerUserFunctionFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcQryBrokerUserFunctionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerUserFunctionFieldData>(self);
    CThostFtdcQryBrokerUserFunctionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcQryBrokerUserFunctionFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryBrokerUserFunctionField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryBrokerUserFunctionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerUserFunctionFieldData>(self);
    CThostFtdcQryBrokerUserFunctionField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryBrokerUserFunctionFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryBrokerUserFunctionFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryBrokerUserFunctionFieldType_get_BrokerID,
    .set = PyCThostFtdcQryBrokerUserFunctionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcQryBrokerUserFunctionFieldType_get_UserID,
    .set = PyCThostFtdcQryBrokerUserFunctionFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryBrokerUserFunctionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryBrokerUserFunctionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询经纪公司用户权限")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryBrokerUserFunctionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryBrokerUserFunctionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryBrokerUserFunctionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryBrokerUserFunctionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryBrokerUserFunctionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryBrokerUserFunctionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询经纪公司用户权限")},
    {Py_tp_members, PyCThostFtdcQryBrokerUserFunctionFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryBrokerUserFunctionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryBrokerUserFunctionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryBrokerUserFunctionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryBrokerUserFunctionFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryBrokerUserFunctionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryBrokerUserFunctionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryBrokerUserFunctionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryBrokerUserFunctionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryBrokerUserFunctionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryBrokerUserFunctionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryBrokerUserFunctionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryBrokerUserFunctionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryBrokerUserFunctionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryBrokerUserFunctionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryBrokerUserFunctionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}