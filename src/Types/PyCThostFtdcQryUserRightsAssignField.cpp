
#include "PyCThostFtdcQryUserRightsAssignField.h"

///查询用户下单权限分配表

static int PyCThostFtdcQryUserRightsAssignFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", NULL };


    /// 应用单元代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryUserRightsAssignField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryUserRightsAssignField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcQryUserRightsAssignField_UserID = NULL;
    Py_ssize_t CThostFtdcQryUserRightsAssignField_UserID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
        , &CThostFtdcQryUserRightsAssignField_BrokerID, &CThostFtdcQryUserRightsAssignField_BrokerID_length
        , &CThostFtdcQryUserRightsAssignField_UserID, &CThostFtdcQryUserRightsAssignField_UserID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryUserRightsAssignFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryUserRightsAssignFieldData>(self);
    CThostFtdcQryUserRightsAssignField *data = &(extra->data);


    /// 应用单元代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryUserRightsAssignField_BrokerID != NULL ) {
        if(CThostFtdcQryUserRightsAssignField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryUserRightsAssignField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryUserRightsAssignField_BrokerID, CThostFtdcQryUserRightsAssignField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryUserRightsAssignField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryUserRightsAssignField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcQryUserRightsAssignField_UserID != NULL ) {
        if(CThostFtdcQryUserRightsAssignField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcQryUserRightsAssignField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcQryUserRightsAssignField_UserID, CThostFtdcQryUserRightsAssignField_UserID_length);
        strncpy(data->UserID, CThostFtdcQryUserRightsAssignField_UserID, sizeof(data->UserID));
        CThostFtdcQryUserRightsAssignField_UserID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryUserRightsAssignFieldType_repr(PyObject *self) {

    PyCThostFtdcQryUserRightsAssignFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryUserRightsAssignFieldData>(self);
    CThostFtdcQryUserRightsAssignField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryUserRightsAssignField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryUserRightsAssignField repr");
        return NULL;
    }

    return repr;
}


/// 应用单元代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryUserRightsAssignFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryUserRightsAssignFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryUserRightsAssignFieldData>(self);
    CThostFtdcQryUserRightsAssignField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryUserRightsAssignFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryUserRightsAssignField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryUserRightsAssignFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryUserRightsAssignFieldData>(self);
    CThostFtdcQryUserRightsAssignField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcQryUserRightsAssignFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcQryUserRightsAssignFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryUserRightsAssignFieldData>(self);
    CThostFtdcQryUserRightsAssignField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcQryUserRightsAssignFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryUserRightsAssignField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryUserRightsAssignFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryUserRightsAssignFieldData>(self);
    CThostFtdcQryUserRightsAssignField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryUserRightsAssignFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryUserRightsAssignFieldType_getsets[] = {
    /// 应用单元代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryUserRightsAssignFieldType_get_BrokerID,
    .set = PyCThostFtdcQryUserRightsAssignFieldType_set_BrokerID,
    .doc = PyDoc_STR("应用单元代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcQryUserRightsAssignFieldType_get_UserID,
    .set = PyCThostFtdcQryUserRightsAssignFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryUserRightsAssignFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryUserRightsAssignField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询用户下单权限分配表")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryUserRightsAssignFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryUserRightsAssignFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryUserRightsAssignFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryUserRightsAssignFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryUserRightsAssignFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryUserRightsAssignFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询用户下单权限分配表")},
    {Py_tp_members, PyCThostFtdcQryUserRightsAssignFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryUserRightsAssignFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryUserRightsAssignFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryUserRightsAssignFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryUserRightsAssignFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryUserRightsAssignField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryUserRightsAssignFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryUserRightsAssignFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryUserRightsAssignFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryUserRightsAssignFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryUserRightsAssignFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryUserRightsAssignFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryUserRightsAssignFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryUserRightsAssignFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryUserRightsAssignField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryUserRightsAssignField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}