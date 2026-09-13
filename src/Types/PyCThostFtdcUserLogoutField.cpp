
#include "PyCThostFtdcUserLogoutField.h"

///用户登出请求

static int PyCThostFtdcUserLogoutFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcUserLogoutField_BrokerID = NULL;
    Py_ssize_t CThostFtdcUserLogoutField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcUserLogoutField_UserID = NULL;
    Py_ssize_t CThostFtdcUserLogoutField_UserID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
        , &CThostFtdcUserLogoutField_BrokerID, &CThostFtdcUserLogoutField_BrokerID_length
        , &CThostFtdcUserLogoutField_UserID, &CThostFtdcUserLogoutField_UserID_length
    )) {
        return -1;
    }

    PyCThostFtdcUserLogoutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserLogoutFieldData>(self);
    CThostFtdcUserLogoutField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcUserLogoutField_BrokerID != NULL ) {
        if(CThostFtdcUserLogoutField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcUserLogoutField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcUserLogoutField_BrokerID, CThostFtdcUserLogoutField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcUserLogoutField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcUserLogoutField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcUserLogoutField_UserID != NULL ) {
        if(CThostFtdcUserLogoutField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcUserLogoutField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcUserLogoutField_UserID, CThostFtdcUserLogoutField_UserID_length);
        strncpy(data->UserID, CThostFtdcUserLogoutField_UserID, sizeof(data->UserID));
        CThostFtdcUserLogoutField_UserID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcUserLogoutFieldType_repr(PyObject *self) {

    PyCThostFtdcUserLogoutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserLogoutFieldData>(self);
    CThostFtdcUserLogoutField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcUserLogoutField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcUserLogoutField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcUserLogoutFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcUserLogoutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserLogoutFieldData>(self);
    CThostFtdcUserLogoutField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcUserLogoutFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserLogoutField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserLogoutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserLogoutFieldData>(self);
    CThostFtdcUserLogoutField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcUserLogoutFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcUserLogoutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserLogoutFieldData>(self);
    CThostFtdcUserLogoutField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcUserLogoutFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserLogoutField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserLogoutFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserLogoutFieldData>(self);
    CThostFtdcUserLogoutField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcUserLogoutFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcUserLogoutFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcUserLogoutFieldType_get_BrokerID,
    .set = PyCThostFtdcUserLogoutFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcUserLogoutFieldType_get_UserID,
    .set = PyCThostFtdcUserLogoutFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcUserLogoutFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcUserLogoutField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("用户登出请求")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcUserLogoutFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcUserLogoutFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcUserLogoutFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcUserLogoutFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcUserLogoutFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcUserLogoutFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("用户登出请求")},
    {Py_tp_members, PyCThostFtdcUserLogoutFieldType_members},
    {Py_tp_getset, PyCThostFtdcUserLogoutFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcUserLogoutFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcUserLogoutFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcUserLogoutFieldType_spec = {
    .name = "PyCTP.CThostFtdcUserLogoutField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcUserLogoutFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcUserLogoutFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcUserLogoutFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcUserLogoutFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcUserLogoutFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcUserLogoutFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcUserLogoutFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcUserLogoutFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcUserLogoutField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcUserLogoutField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}