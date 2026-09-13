
#include "PyCThostFtdcQryBrokerUserEventField.h"

///查询经纪公司用户事件

static int PyCThostFtdcQryBrokerUserEventFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", "UserEventType", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryBrokerUserEventField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryBrokerUserEventField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcQryBrokerUserEventField_UserID = NULL;
    Py_ssize_t CThostFtdcQryBrokerUserEventField_UserID_length = 0;

    /// 用户事件类型
    /// typedef char TThostFtdcUserEventTypeType
    char CThostFtdcQryBrokerUserEventField_UserEventType = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#c", (char **)kwlist
        , &CThostFtdcQryBrokerUserEventField_BrokerID, &CThostFtdcQryBrokerUserEventField_BrokerID_length
        , &CThostFtdcQryBrokerUserEventField_UserID, &CThostFtdcQryBrokerUserEventField_UserID_length
        , &CThostFtdcQryBrokerUserEventField_UserEventType
    )) {
        return -1;
    }

    PyCThostFtdcQryBrokerUserEventFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerUserEventFieldData>(self);
    CThostFtdcQryBrokerUserEventField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryBrokerUserEventField_BrokerID != NULL ) {
        if(CThostFtdcQryBrokerUserEventField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryBrokerUserEventField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryBrokerUserEventField_BrokerID, CThostFtdcQryBrokerUserEventField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryBrokerUserEventField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryBrokerUserEventField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcQryBrokerUserEventField_UserID != NULL ) {
        if(CThostFtdcQryBrokerUserEventField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcQryBrokerUserEventField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcQryBrokerUserEventField_UserID, CThostFtdcQryBrokerUserEventField_UserID_length);
        strncpy(data->UserID, CThostFtdcQryBrokerUserEventField_UserID, sizeof(data->UserID));
        CThostFtdcQryBrokerUserEventField_UserID = NULL;
    }

    /// 用户事件类型
    /// typedef char TThostFtdcUserEventTypeType
    data->UserEventType = CThostFtdcQryBrokerUserEventField_UserEventType;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryBrokerUserEventFieldType_repr(PyObject *self) {

    PyCThostFtdcQryBrokerUserEventFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerUserEventFieldData>(self);
    CThostFtdcQryBrokerUserEventField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:c}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "UserEventType", data->UserEventType
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryBrokerUserEventField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryBrokerUserEventField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryBrokerUserEventFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryBrokerUserEventFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerUserEventFieldData>(self);
    CThostFtdcQryBrokerUserEventField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryBrokerUserEventFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryBrokerUserEventField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryBrokerUserEventFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerUserEventFieldData>(self);
    CThostFtdcQryBrokerUserEventField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcQryBrokerUserEventFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcQryBrokerUserEventFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerUserEventFieldData>(self);
    CThostFtdcQryBrokerUserEventField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcQryBrokerUserEventFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryBrokerUserEventField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryBrokerUserEventFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerUserEventFieldData>(self);
    CThostFtdcQryBrokerUserEventField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户事件类型
/// typedef char TThostFtdcUserEventTypeType
static PyObject *PyCThostFtdcQryBrokerUserEventFieldType_get_UserEventType(PyObject *self, void *closure) {
    PyCThostFtdcQryBrokerUserEventFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerUserEventFieldData>(self);
    CThostFtdcQryBrokerUserEventField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->UserEventType), 1);
}

static int PyCThostFtdcQryBrokerUserEventFieldType_set_UserEventType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserEventType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcQryBrokerUserEventField::UserEventType)) {
        PyErr_SetString(PyExc_ValueError, "UserEventType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryBrokerUserEventFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerUserEventFieldData>(self);
    CThostFtdcQryBrokerUserEventField *data = &(extra->data);
    data->UserEventType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryBrokerUserEventFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryBrokerUserEventFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryBrokerUserEventFieldType_get_BrokerID,
    .set = PyCThostFtdcQryBrokerUserEventFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcQryBrokerUserEventFieldType_get_UserID,
    .set = PyCThostFtdcQryBrokerUserEventFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 用户事件类型
    /// typedef char TThostFtdcUserEventTypeType
    {
    .name = "UserEventType",
    .get = PyCThostFtdcQryBrokerUserEventFieldType_get_UserEventType,
    .set = PyCThostFtdcQryBrokerUserEventFieldType_set_UserEventType,
    .doc = PyDoc_STR("用户事件类型"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryBrokerUserEventFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryBrokerUserEventField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询经纪公司用户事件")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryBrokerUserEventFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryBrokerUserEventFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryBrokerUserEventFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryBrokerUserEventFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryBrokerUserEventFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryBrokerUserEventFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询经纪公司用户事件")},
    {Py_tp_members, PyCThostFtdcQryBrokerUserEventFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryBrokerUserEventFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryBrokerUserEventFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryBrokerUserEventFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryBrokerUserEventFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryBrokerUserEventField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryBrokerUserEventFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryBrokerUserEventFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryBrokerUserEventFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryBrokerUserEventFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryBrokerUserEventFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryBrokerUserEventFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryBrokerUserEventFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryBrokerUserEventFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryBrokerUserEventField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryBrokerUserEventField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}