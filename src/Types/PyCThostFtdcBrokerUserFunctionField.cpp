
#include "PyCThostFtdcBrokerUserFunctionField.h"

///经纪公司用户功能权限

static int PyCThostFtdcBrokerUserFunctionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", "BrokerFunctionCode", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcBrokerUserFunctionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcBrokerUserFunctionField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcBrokerUserFunctionField_UserID = NULL;
    Py_ssize_t CThostFtdcBrokerUserFunctionField_UserID_length = 0;

    /// 经纪公司功能代码
    /// typedef char TThostFtdcBrokerFunctionCodeType
    char CThostFtdcBrokerUserFunctionField_BrokerFunctionCode = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#c", (char **)kwlist
        , &CThostFtdcBrokerUserFunctionField_BrokerID, &CThostFtdcBrokerUserFunctionField_BrokerID_length
        , &CThostFtdcBrokerUserFunctionField_UserID, &CThostFtdcBrokerUserFunctionField_UserID_length
        , &CThostFtdcBrokerUserFunctionField_BrokerFunctionCode
    )) {
        return -1;
    }

    PyCThostFtdcBrokerUserFunctionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserFunctionFieldData>(self);
    CThostFtdcBrokerUserFunctionField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcBrokerUserFunctionField_BrokerID != NULL ) {
        if(CThostFtdcBrokerUserFunctionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcBrokerUserFunctionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcBrokerUserFunctionField_BrokerID, CThostFtdcBrokerUserFunctionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcBrokerUserFunctionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcBrokerUserFunctionField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcBrokerUserFunctionField_UserID != NULL ) {
        if(CThostFtdcBrokerUserFunctionField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcBrokerUserFunctionField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcBrokerUserFunctionField_UserID, CThostFtdcBrokerUserFunctionField_UserID_length);
        strncpy(data->UserID, CThostFtdcBrokerUserFunctionField_UserID, sizeof(data->UserID));
        CThostFtdcBrokerUserFunctionField_UserID = NULL;
    }

    /// 经纪公司功能代码
    /// typedef char TThostFtdcBrokerFunctionCodeType
    data->BrokerFunctionCode = CThostFtdcBrokerUserFunctionField_BrokerFunctionCode;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcBrokerUserFunctionFieldType_repr(PyObject *self) {

    PyCThostFtdcBrokerUserFunctionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserFunctionFieldData>(self);
    CThostFtdcBrokerUserFunctionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:c}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "BrokerFunctionCode", data->BrokerFunctionCode
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerUserFunctionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerUserFunctionField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcBrokerUserFunctionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcBrokerUserFunctionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserFunctionFieldData>(self);
    CThostFtdcBrokerUserFunctionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcBrokerUserFunctionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerUserFunctionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerUserFunctionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserFunctionFieldData>(self);
    CThostFtdcBrokerUserFunctionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcBrokerUserFunctionFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcBrokerUserFunctionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserFunctionFieldData>(self);
    CThostFtdcBrokerUserFunctionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcBrokerUserFunctionFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerUserFunctionField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerUserFunctionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserFunctionFieldData>(self);
    CThostFtdcBrokerUserFunctionField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司功能代码
/// typedef char TThostFtdcBrokerFunctionCodeType
static PyObject *PyCThostFtdcBrokerUserFunctionFieldType_get_BrokerFunctionCode(PyObject *self, void *closure) {
    PyCThostFtdcBrokerUserFunctionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserFunctionFieldData>(self);
    CThostFtdcBrokerUserFunctionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BrokerFunctionCode), 1);
}

static int PyCThostFtdcBrokerUserFunctionFieldType_set_BrokerFunctionCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerFunctionCode Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcBrokerUserFunctionField::BrokerFunctionCode)) {
        PyErr_SetString(PyExc_ValueError, "BrokerFunctionCode must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerUserFunctionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserFunctionFieldData>(self);
    CThostFtdcBrokerUserFunctionField *data = &(extra->data);
    data->BrokerFunctionCode = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcBrokerUserFunctionFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcBrokerUserFunctionFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcBrokerUserFunctionFieldType_get_BrokerID,
    .set = PyCThostFtdcBrokerUserFunctionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcBrokerUserFunctionFieldType_get_UserID,
    .set = PyCThostFtdcBrokerUserFunctionFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 经纪公司功能代码
    /// typedef char TThostFtdcBrokerFunctionCodeType
    {
    .name = "BrokerFunctionCode",
    .get = PyCThostFtdcBrokerUserFunctionFieldType_get_BrokerFunctionCode,
    .set = PyCThostFtdcBrokerUserFunctionFieldType_set_BrokerFunctionCode,
    .doc = PyDoc_STR("经纪公司功能代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcBrokerUserFunctionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcBrokerUserFunctionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("经纪公司用户功能权限")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcBrokerUserFunctionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcBrokerUserFunctionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcBrokerUserFunctionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcBrokerUserFunctionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcBrokerUserFunctionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcBrokerUserFunctionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("经纪公司用户功能权限")},
    {Py_tp_members, PyCThostFtdcBrokerUserFunctionFieldType_members},
    {Py_tp_getset, PyCThostFtdcBrokerUserFunctionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcBrokerUserFunctionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcBrokerUserFunctionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcBrokerUserFunctionFieldType_spec = {
    .name = "PyCTP.CThostFtdcBrokerUserFunctionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcBrokerUserFunctionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcBrokerUserFunctionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcBrokerUserFunctionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcBrokerUserFunctionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcBrokerUserFunctionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcBrokerUserFunctionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcBrokerUserFunctionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcBrokerUserFunctionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcBrokerUserFunctionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcBrokerUserFunctionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}