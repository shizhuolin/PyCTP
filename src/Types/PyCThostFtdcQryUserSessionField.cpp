
#include "PyCThostFtdcQryUserSessionField.h"

///查询用户会话

static int PyCThostFtdcQryUserSessionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "FrontID", "SessionID", "BrokerID", "UserID", NULL };


    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    int CThostFtdcQryUserSessionField_FrontID = 0;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcQryUserSessionField_SessionID = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryUserSessionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryUserSessionField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcQryUserSessionField_UserID = NULL;
    Py_ssize_t CThostFtdcQryUserSessionField_UserID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iiy#y#", (char **)kwlist
        , &CThostFtdcQryUserSessionField_FrontID
        , &CThostFtdcQryUserSessionField_SessionID
        , &CThostFtdcQryUserSessionField_BrokerID, &CThostFtdcQryUserSessionField_BrokerID_length
        , &CThostFtdcQryUserSessionField_UserID, &CThostFtdcQryUserSessionField_UserID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryUserSessionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryUserSessionFieldData>(self);
    CThostFtdcQryUserSessionField *data = &(extra->data);


    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    data->FrontID = CThostFtdcQryUserSessionField_FrontID;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcQryUserSessionField_SessionID;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryUserSessionField_BrokerID != NULL ) {
        if(CThostFtdcQryUserSessionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryUserSessionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryUserSessionField_BrokerID, CThostFtdcQryUserSessionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryUserSessionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryUserSessionField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcQryUserSessionField_UserID != NULL ) {
        if(CThostFtdcQryUserSessionField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcQryUserSessionField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcQryUserSessionField_UserID, CThostFtdcQryUserSessionField_UserID_length);
        strncpy(data->UserID, CThostFtdcQryUserSessionField_UserID, sizeof(data->UserID));
        CThostFtdcQryUserSessionField_UserID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryUserSessionFieldType_repr(PyObject *self) {

    PyCThostFtdcQryUserSessionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryUserSessionFieldData>(self);
    CThostFtdcQryUserSessionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:i,s:i,s:y,s:y}"
        , "FrontID", data->FrontID
        , "SessionID", data->SessionID
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryUserSessionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryUserSessionField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryUserSessionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryUserSessionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryUserSessionFieldData>(self);
    CThostFtdcQryUserSessionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryUserSessionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryUserSessionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryUserSessionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryUserSessionFieldData>(self);
    CThostFtdcQryUserSessionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcQryUserSessionFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcQryUserSessionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryUserSessionFieldData>(self);
    CThostFtdcQryUserSessionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcQryUserSessionFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryUserSessionField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryUserSessionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryUserSessionFieldData>(self);
    CThostFtdcQryUserSessionField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryUserSessionFieldType_members[] = {
    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    {
        .name = "FrontID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcQryUserSessionFieldData, data.FrontID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("前置编号")
    },
    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    {
        .name = "SessionID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcQryUserSessionFieldData, data.SessionID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("会话编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryUserSessionFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryUserSessionFieldType_get_BrokerID,
    .set = PyCThostFtdcQryUserSessionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcQryUserSessionFieldType_get_UserID,
    .set = PyCThostFtdcQryUserSessionFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryUserSessionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryUserSessionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询用户会话")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryUserSessionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryUserSessionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryUserSessionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryUserSessionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryUserSessionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryUserSessionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询用户会话")},
    {Py_tp_members, PyCThostFtdcQryUserSessionFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryUserSessionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryUserSessionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryUserSessionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryUserSessionFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryUserSessionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryUserSessionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryUserSessionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryUserSessionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryUserSessionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryUserSessionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryUserSessionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryUserSessionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryUserSessionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryUserSessionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryUserSessionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}