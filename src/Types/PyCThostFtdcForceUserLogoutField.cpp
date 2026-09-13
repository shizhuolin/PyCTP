
#include "PyCThostFtdcForceUserLogoutField.h"

///强制交易员退出

static int PyCThostFtdcForceUserLogoutFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcForceUserLogoutField_BrokerID = NULL;
    Py_ssize_t CThostFtdcForceUserLogoutField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcForceUserLogoutField_UserID = NULL;
    Py_ssize_t CThostFtdcForceUserLogoutField_UserID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
        , &CThostFtdcForceUserLogoutField_BrokerID, &CThostFtdcForceUserLogoutField_BrokerID_length
        , &CThostFtdcForceUserLogoutField_UserID, &CThostFtdcForceUserLogoutField_UserID_length
    )) {
        return -1;
    }

    PyCThostFtdcForceUserLogoutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForceUserLogoutFieldData>(self);
    CThostFtdcForceUserLogoutField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcForceUserLogoutField_BrokerID != NULL ) {
        if(CThostFtdcForceUserLogoutField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcForceUserLogoutField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcForceUserLogoutField_BrokerID, CThostFtdcForceUserLogoutField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcForceUserLogoutField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcForceUserLogoutField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcForceUserLogoutField_UserID != NULL ) {
        if(CThostFtdcForceUserLogoutField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcForceUserLogoutField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcForceUserLogoutField_UserID, CThostFtdcForceUserLogoutField_UserID_length);
        strncpy(data->UserID, CThostFtdcForceUserLogoutField_UserID, sizeof(data->UserID));
        CThostFtdcForceUserLogoutField_UserID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcForceUserLogoutFieldType_repr(PyObject *self) {

    PyCThostFtdcForceUserLogoutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForceUserLogoutFieldData>(self);
    CThostFtdcForceUserLogoutField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcForceUserLogoutField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcForceUserLogoutField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcForceUserLogoutFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcForceUserLogoutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForceUserLogoutFieldData>(self);
    CThostFtdcForceUserLogoutField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcForceUserLogoutFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcForceUserLogoutField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcForceUserLogoutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForceUserLogoutFieldData>(self);
    CThostFtdcForceUserLogoutField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcForceUserLogoutFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcForceUserLogoutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForceUserLogoutFieldData>(self);
    CThostFtdcForceUserLogoutField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcForceUserLogoutFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcForceUserLogoutField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcForceUserLogoutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcForceUserLogoutFieldData>(self);
    CThostFtdcForceUserLogoutField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcForceUserLogoutFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcForceUserLogoutFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcForceUserLogoutFieldType_get_BrokerID,
    .set = PyCThostFtdcForceUserLogoutFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcForceUserLogoutFieldType_get_UserID,
    .set = PyCThostFtdcForceUserLogoutFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcForceUserLogoutFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcForceUserLogoutField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("强制交易员退出")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcForceUserLogoutFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcForceUserLogoutFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcForceUserLogoutFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcForceUserLogoutFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcForceUserLogoutFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcForceUserLogoutFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("强制交易员退出")},
    {Py_tp_members, PyCThostFtdcForceUserLogoutFieldType_members},
    {Py_tp_getset, PyCThostFtdcForceUserLogoutFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcForceUserLogoutFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcForceUserLogoutFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcForceUserLogoutFieldType_spec = {
    .name = "PyCTP.CThostFtdcForceUserLogoutField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcForceUserLogoutFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcForceUserLogoutFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcForceUserLogoutFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcForceUserLogoutFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcForceUserLogoutFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcForceUserLogoutFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcForceUserLogoutFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcForceUserLogoutFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcForceUserLogoutField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcForceUserLogoutField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}