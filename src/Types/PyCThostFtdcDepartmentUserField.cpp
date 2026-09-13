
#include "PyCThostFtdcDepartmentUserField.h"

///操作员组织架构关系

static int PyCThostFtdcDepartmentUserFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", "InvestorRange", "InvestorID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcDepartmentUserField_BrokerID = NULL;
    Py_ssize_t CThostFtdcDepartmentUserField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcDepartmentUserField_UserID = NULL;
    Py_ssize_t CThostFtdcDepartmentUserField_UserID_length = 0;

    /// 投资者范围
    /// typedef char TThostFtdcDepartmentRangeType
    char CThostFtdcDepartmentUserField_InvestorRange = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcDepartmentUserField_InvestorID = NULL;
    Py_ssize_t CThostFtdcDepartmentUserField_InvestorID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cy#", (char **)kwlist
        , &CThostFtdcDepartmentUserField_BrokerID, &CThostFtdcDepartmentUserField_BrokerID_length
        , &CThostFtdcDepartmentUserField_UserID, &CThostFtdcDepartmentUserField_UserID_length
        , &CThostFtdcDepartmentUserField_InvestorRange
        , &CThostFtdcDepartmentUserField_InvestorID, &CThostFtdcDepartmentUserField_InvestorID_length
    )) {
        return -1;
    }

    PyCThostFtdcDepartmentUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepartmentUserFieldData>(self);
    CThostFtdcDepartmentUserField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcDepartmentUserField_BrokerID != NULL ) {
        if(CThostFtdcDepartmentUserField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcDepartmentUserField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcDepartmentUserField_BrokerID, CThostFtdcDepartmentUserField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcDepartmentUserField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcDepartmentUserField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcDepartmentUserField_UserID != NULL ) {
        if(CThostFtdcDepartmentUserField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcDepartmentUserField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcDepartmentUserField_UserID, CThostFtdcDepartmentUserField_UserID_length);
        strncpy(data->UserID, CThostFtdcDepartmentUserField_UserID, sizeof(data->UserID));
        CThostFtdcDepartmentUserField_UserID = NULL;
    }

    /// 投资者范围
    /// typedef char TThostFtdcDepartmentRangeType
    data->InvestorRange = CThostFtdcDepartmentUserField_InvestorRange;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcDepartmentUserField_InvestorID != NULL ) {
        if(CThostFtdcDepartmentUserField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcDepartmentUserField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcDepartmentUserField_InvestorID, CThostFtdcDepartmentUserField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcDepartmentUserField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcDepartmentUserField_InvestorID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcDepartmentUserFieldType_repr(PyObject *self) {

    PyCThostFtdcDepartmentUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepartmentUserFieldData>(self);
    CThostFtdcDepartmentUserField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:c,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "InvestorRange", data->InvestorRange
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcDepartmentUserField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcDepartmentUserField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcDepartmentUserFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcDepartmentUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepartmentUserFieldData>(self);
    CThostFtdcDepartmentUserField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcDepartmentUserFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcDepartmentUserField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcDepartmentUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepartmentUserFieldData>(self);
    CThostFtdcDepartmentUserField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcDepartmentUserFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcDepartmentUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepartmentUserFieldData>(self);
    CThostFtdcDepartmentUserField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcDepartmentUserFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcDepartmentUserField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcDepartmentUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepartmentUserFieldData>(self);
    CThostFtdcDepartmentUserField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者范围
/// typedef char TThostFtdcDepartmentRangeType
static PyObject *PyCThostFtdcDepartmentUserFieldType_get_InvestorRange(PyObject *self, void *closure) {
    PyCThostFtdcDepartmentUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepartmentUserFieldData>(self);
    CThostFtdcDepartmentUserField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->InvestorRange), 1);
}

static int PyCThostFtdcDepartmentUserFieldType_set_InvestorRange(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcDepartmentUserField::InvestorRange)) {
        PyErr_SetString(PyExc_ValueError, "InvestorRange must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcDepartmentUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepartmentUserFieldData>(self);
    CThostFtdcDepartmentUserField *data = &(extra->data);
    data->InvestorRange = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcDepartmentUserFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcDepartmentUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepartmentUserFieldData>(self);
    CThostFtdcDepartmentUserField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcDepartmentUserFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcDepartmentUserField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcDepartmentUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDepartmentUserFieldData>(self);
    CThostFtdcDepartmentUserField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcDepartmentUserFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcDepartmentUserFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcDepartmentUserFieldType_get_BrokerID,
    .set = PyCThostFtdcDepartmentUserFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcDepartmentUserFieldType_get_UserID,
    .set = PyCThostFtdcDepartmentUserFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 投资者范围
    /// typedef char TThostFtdcDepartmentRangeType
    {
    .name = "InvestorRange",
    .get = PyCThostFtdcDepartmentUserFieldType_get_InvestorRange,
    .set = PyCThostFtdcDepartmentUserFieldType_set_InvestorRange,
    .doc = PyDoc_STR("投资者范围"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcDepartmentUserFieldType_get_InvestorID,
    .set = PyCThostFtdcDepartmentUserFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcDepartmentUserFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcDepartmentUserField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("操作员组织架构关系")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcDepartmentUserFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcDepartmentUserFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcDepartmentUserFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcDepartmentUserFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcDepartmentUserFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcDepartmentUserFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("操作员组织架构关系")},
    {Py_tp_members, PyCThostFtdcDepartmentUserFieldType_members},
    {Py_tp_getset, PyCThostFtdcDepartmentUserFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcDepartmentUserFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcDepartmentUserFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcDepartmentUserFieldType_spec = {
    .name = "PyCTP.CThostFtdcDepartmentUserField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcDepartmentUserFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcDepartmentUserFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcDepartmentUserFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcDepartmentUserFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcDepartmentUserFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcDepartmentUserFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcDepartmentUserFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcDepartmentUserFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcDepartmentUserField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcDepartmentUserField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}