
#include "PyCThostFtdcFensUserInfoField.h"

///Fens用户信息

static int PyCThostFtdcFensUserInfoFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", "LoginMode", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcFensUserInfoField_BrokerID = NULL;
    Py_ssize_t CThostFtdcFensUserInfoField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcFensUserInfoField_UserID = NULL;
    Py_ssize_t CThostFtdcFensUserInfoField_UserID_length = 0;

    /// 登录模式
    /// typedef char TThostFtdcLoginModeType
    char CThostFtdcFensUserInfoField_LoginMode = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#c", (char **)kwlist
        , &CThostFtdcFensUserInfoField_BrokerID, &CThostFtdcFensUserInfoField_BrokerID_length
        , &CThostFtdcFensUserInfoField_UserID, &CThostFtdcFensUserInfoField_UserID_length
        , &CThostFtdcFensUserInfoField_LoginMode
    )) {
        return -1;
    }

    PyCThostFtdcFensUserInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcFensUserInfoFieldData>(self);
    CThostFtdcFensUserInfoField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcFensUserInfoField_BrokerID != NULL ) {
        if(CThostFtdcFensUserInfoField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcFensUserInfoField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcFensUserInfoField_BrokerID, CThostFtdcFensUserInfoField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcFensUserInfoField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcFensUserInfoField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcFensUserInfoField_UserID != NULL ) {
        if(CThostFtdcFensUserInfoField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcFensUserInfoField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcFensUserInfoField_UserID, CThostFtdcFensUserInfoField_UserID_length);
        strncpy(data->UserID, CThostFtdcFensUserInfoField_UserID, sizeof(data->UserID));
        CThostFtdcFensUserInfoField_UserID = NULL;
    }

    /// 登录模式
    /// typedef char TThostFtdcLoginModeType
    data->LoginMode = CThostFtdcFensUserInfoField_LoginMode;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcFensUserInfoFieldType_repr(PyObject *self) {

    PyCThostFtdcFensUserInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcFensUserInfoFieldData>(self);
    CThostFtdcFensUserInfoField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:c}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "LoginMode", data->LoginMode
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcFensUserInfoField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcFensUserInfoField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcFensUserInfoFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcFensUserInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcFensUserInfoFieldData>(self);
    CThostFtdcFensUserInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcFensUserInfoFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcFensUserInfoField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcFensUserInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcFensUserInfoFieldData>(self);
    CThostFtdcFensUserInfoField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcFensUserInfoFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcFensUserInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcFensUserInfoFieldData>(self);
    CThostFtdcFensUserInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcFensUserInfoFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcFensUserInfoField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcFensUserInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcFensUserInfoFieldData>(self);
    CThostFtdcFensUserInfoField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 登录模式
/// typedef char TThostFtdcLoginModeType
static PyObject *PyCThostFtdcFensUserInfoFieldType_get_LoginMode(PyObject *self, void *closure) {
    PyCThostFtdcFensUserInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcFensUserInfoFieldData>(self);
    CThostFtdcFensUserInfoField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->LoginMode), 1);
}

static int PyCThostFtdcFensUserInfoFieldType_set_LoginMode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LoginMode Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcFensUserInfoField::LoginMode)) {
        PyErr_SetString(PyExc_ValueError, "LoginMode must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcFensUserInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcFensUserInfoFieldData>(self);
    CThostFtdcFensUserInfoField *data = &(extra->data);
    data->LoginMode = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcFensUserInfoFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcFensUserInfoFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcFensUserInfoFieldType_get_BrokerID,
    .set = PyCThostFtdcFensUserInfoFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcFensUserInfoFieldType_get_UserID,
    .set = PyCThostFtdcFensUserInfoFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 登录模式
    /// typedef char TThostFtdcLoginModeType
    {
    .name = "LoginMode",
    .get = PyCThostFtdcFensUserInfoFieldType_get_LoginMode,
    .set = PyCThostFtdcFensUserInfoFieldType_set_LoginMode,
    .doc = PyDoc_STR("登录模式"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcFensUserInfoFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcFensUserInfoField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("Fens用户信息")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcFensUserInfoFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcFensUserInfoFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcFensUserInfoFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcFensUserInfoFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcFensUserInfoFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcFensUserInfoFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("Fens用户信息")},
    {Py_tp_members, PyCThostFtdcFensUserInfoFieldType_members},
    {Py_tp_getset, PyCThostFtdcFensUserInfoFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcFensUserInfoFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcFensUserInfoFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcFensUserInfoFieldType_spec = {
    .name = "PyCTP.CThostFtdcFensUserInfoField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcFensUserInfoFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcFensUserInfoFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcFensUserInfoFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcFensUserInfoFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcFensUserInfoFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcFensUserInfoFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcFensUserInfoFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcFensUserInfoFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcFensUserInfoField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcFensUserInfoField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}