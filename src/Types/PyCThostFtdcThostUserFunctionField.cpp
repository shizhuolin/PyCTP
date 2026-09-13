
#include "PyCThostFtdcThostUserFunctionField.h"

///Thost终端用户功能权限

static int PyCThostFtdcThostUserFunctionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", "ThostFunctionCode", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcThostUserFunctionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcThostUserFunctionField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcThostUserFunctionField_UserID = NULL;
    Py_ssize_t CThostFtdcThostUserFunctionField_UserID_length = 0;

    /// Thost终端功能代码
    /// typedef int TThostFtdcThostFunctionCodeType
    int CThostFtdcThostUserFunctionField_ThostFunctionCode = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#i", (char **)kwlist
        , &CThostFtdcThostUserFunctionField_BrokerID, &CThostFtdcThostUserFunctionField_BrokerID_length
        , &CThostFtdcThostUserFunctionField_UserID, &CThostFtdcThostUserFunctionField_UserID_length
        , &CThostFtdcThostUserFunctionField_ThostFunctionCode
    )) {
        return -1;
    }

    PyCThostFtdcThostUserFunctionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcThostUserFunctionFieldData>(self);
    CThostFtdcThostUserFunctionField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcThostUserFunctionField_BrokerID != NULL ) {
        if(CThostFtdcThostUserFunctionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcThostUserFunctionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcThostUserFunctionField_BrokerID, CThostFtdcThostUserFunctionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcThostUserFunctionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcThostUserFunctionField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcThostUserFunctionField_UserID != NULL ) {
        if(CThostFtdcThostUserFunctionField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcThostUserFunctionField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcThostUserFunctionField_UserID, CThostFtdcThostUserFunctionField_UserID_length);
        strncpy(data->UserID, CThostFtdcThostUserFunctionField_UserID, sizeof(data->UserID));
        CThostFtdcThostUserFunctionField_UserID = NULL;
    }

    /// Thost终端功能代码
    /// typedef int TThostFtdcThostFunctionCodeType
    data->ThostFunctionCode = CThostFtdcThostUserFunctionField_ThostFunctionCode;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcThostUserFunctionFieldType_repr(PyObject *self) {

    PyCThostFtdcThostUserFunctionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcThostUserFunctionFieldData>(self);
    CThostFtdcThostUserFunctionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:i}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "ThostFunctionCode", data->ThostFunctionCode
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcThostUserFunctionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcThostUserFunctionField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcThostUserFunctionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcThostUserFunctionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcThostUserFunctionFieldData>(self);
    CThostFtdcThostUserFunctionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcThostUserFunctionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcThostUserFunctionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcThostUserFunctionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcThostUserFunctionFieldData>(self);
    CThostFtdcThostUserFunctionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcThostUserFunctionFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcThostUserFunctionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcThostUserFunctionFieldData>(self);
    CThostFtdcThostUserFunctionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcThostUserFunctionFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcThostUserFunctionField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcThostUserFunctionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcThostUserFunctionFieldData>(self);
    CThostFtdcThostUserFunctionField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcThostUserFunctionFieldType_members[] = {
    /// Thost终端功能代码
    /// typedef int TThostFtdcThostFunctionCodeType
    {
        .name = "ThostFunctionCode",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcThostUserFunctionFieldData, data.ThostFunctionCode),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("Thost终端功能代码")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcThostUserFunctionFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcThostUserFunctionFieldType_get_BrokerID,
    .set = PyCThostFtdcThostUserFunctionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcThostUserFunctionFieldType_get_UserID,
    .set = PyCThostFtdcThostUserFunctionFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcThostUserFunctionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcThostUserFunctionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("Thost终端用户功能权限")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcThostUserFunctionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcThostUserFunctionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcThostUserFunctionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcThostUserFunctionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcThostUserFunctionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcThostUserFunctionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("Thost终端用户功能权限")},
    {Py_tp_members, PyCThostFtdcThostUserFunctionFieldType_members},
    {Py_tp_getset, PyCThostFtdcThostUserFunctionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcThostUserFunctionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcThostUserFunctionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcThostUserFunctionFieldType_spec = {
    .name = "PyCTP.CThostFtdcThostUserFunctionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcThostUserFunctionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcThostUserFunctionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcThostUserFunctionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcThostUserFunctionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcThostUserFunctionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcThostUserFunctionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcThostUserFunctionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcThostUserFunctionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcThostUserFunctionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcThostUserFunctionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}