
#include "PyCThostFtdcQryBrokerUserField.h"

///查询经纪公司用户

static int PyCThostFtdcQryBrokerUserFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryBrokerUserField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryBrokerUserField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcQryBrokerUserField_UserID = NULL;
    Py_ssize_t CThostFtdcQryBrokerUserField_UserID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
        , &CThostFtdcQryBrokerUserField_BrokerID, &CThostFtdcQryBrokerUserField_BrokerID_length
        , &CThostFtdcQryBrokerUserField_UserID, &CThostFtdcQryBrokerUserField_UserID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryBrokerUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerUserFieldData>(self);
    CThostFtdcQryBrokerUserField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryBrokerUserField_BrokerID != NULL ) {
        if(CThostFtdcQryBrokerUserField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryBrokerUserField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryBrokerUserField_BrokerID, CThostFtdcQryBrokerUserField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryBrokerUserField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryBrokerUserField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcQryBrokerUserField_UserID != NULL ) {
        if(CThostFtdcQryBrokerUserField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcQryBrokerUserField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcQryBrokerUserField_UserID, CThostFtdcQryBrokerUserField_UserID_length);
        strncpy(data->UserID, CThostFtdcQryBrokerUserField_UserID, sizeof(data->UserID));
        CThostFtdcQryBrokerUserField_UserID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryBrokerUserFieldType_repr(PyObject *self) {

    PyCThostFtdcQryBrokerUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerUserFieldData>(self);
    CThostFtdcQryBrokerUserField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryBrokerUserField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryBrokerUserField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryBrokerUserFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryBrokerUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerUserFieldData>(self);
    CThostFtdcQryBrokerUserField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryBrokerUserFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryBrokerUserField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryBrokerUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerUserFieldData>(self);
    CThostFtdcQryBrokerUserField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcQryBrokerUserFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcQryBrokerUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerUserFieldData>(self);
    CThostFtdcQryBrokerUserField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcQryBrokerUserFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryBrokerUserField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryBrokerUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerUserFieldData>(self);
    CThostFtdcQryBrokerUserField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryBrokerUserFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryBrokerUserFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryBrokerUserFieldType_get_BrokerID,
    .set = PyCThostFtdcQryBrokerUserFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcQryBrokerUserFieldType_get_UserID,
    .set = PyCThostFtdcQryBrokerUserFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryBrokerUserFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryBrokerUserField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询经纪公司用户")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryBrokerUserFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryBrokerUserFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryBrokerUserFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryBrokerUserFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryBrokerUserFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryBrokerUserFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询经纪公司用户")},
    {Py_tp_members, PyCThostFtdcQryBrokerUserFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryBrokerUserFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryBrokerUserFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryBrokerUserFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryBrokerUserFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryBrokerUserField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryBrokerUserFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryBrokerUserFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryBrokerUserFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryBrokerUserFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryBrokerUserFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryBrokerUserFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryBrokerUserFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryBrokerUserFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryBrokerUserField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryBrokerUserField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}