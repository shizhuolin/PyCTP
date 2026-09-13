
#include "PyCThostFtdcSyncingInvestorGroupField.h"

///正在同步中的投资者分组

static int PyCThostFtdcSyncingInvestorGroupFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorGroupID", "InvestorGroupName", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSyncingInvestorGroupField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSyncingInvestorGroupField_BrokerID_length = 0;

    /// 投资者分组代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcSyncingInvestorGroupField_InvestorGroupID = NULL;
    Py_ssize_t CThostFtdcSyncingInvestorGroupField_InvestorGroupID_length = 0;

    /// 投资者分组名称
    /// typedef char TThostFtdcInvestorGroupNameType[41]
    char *CThostFtdcSyncingInvestorGroupField_InvestorGroupName = NULL;
    Py_ssize_t CThostFtdcSyncingInvestorGroupField_InvestorGroupName_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcSyncingInvestorGroupField_BrokerID, &CThostFtdcSyncingInvestorGroupField_BrokerID_length
        , &CThostFtdcSyncingInvestorGroupField_InvestorGroupID, &CThostFtdcSyncingInvestorGroupField_InvestorGroupID_length
        , &CThostFtdcSyncingInvestorGroupField_InvestorGroupName, &CThostFtdcSyncingInvestorGroupField_InvestorGroupName_length
    )) {
        return -1;
    }

    PyCThostFtdcSyncingInvestorGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorGroupFieldData>(self);
    CThostFtdcSyncingInvestorGroupField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSyncingInvestorGroupField_BrokerID != NULL ) {
        if(CThostFtdcSyncingInvestorGroupField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSyncingInvestorGroupField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSyncingInvestorGroupField_BrokerID, CThostFtdcSyncingInvestorGroupField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSyncingInvestorGroupField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSyncingInvestorGroupField_BrokerID = NULL;
    }

    /// 投资者分组代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcSyncingInvestorGroupField_InvestorGroupID != NULL ) {
        if(CThostFtdcSyncingInvestorGroupField_InvestorGroupID_length >= (Py_ssize_t)sizeof(data->InvestorGroupID)) {
            PyErr_Format(PyExc_ValueError, "InvestorGroupID too long: length=%zd (max allowed is 12)", CThostFtdcSyncingInvestorGroupField_InvestorGroupID_length);
            return -1;
        }
        // memset(data->InvestorGroupID, 0, sizeof(data->InvestorGroupID));
        // memcpy(data->InvestorGroupID, CThostFtdcSyncingInvestorGroupField_InvestorGroupID, CThostFtdcSyncingInvestorGroupField_InvestorGroupID_length);
        strncpy(data->InvestorGroupID, CThostFtdcSyncingInvestorGroupField_InvestorGroupID, sizeof(data->InvestorGroupID));
        CThostFtdcSyncingInvestorGroupField_InvestorGroupID = NULL;
    }

    /// 投资者分组名称
    /// typedef char TThostFtdcInvestorGroupNameType[41]
    if( CThostFtdcSyncingInvestorGroupField_InvestorGroupName != NULL ) {
        if(CThostFtdcSyncingInvestorGroupField_InvestorGroupName_length >= (Py_ssize_t)sizeof(data->InvestorGroupName)) {
            PyErr_Format(PyExc_ValueError, "InvestorGroupName too long: length=%zd (max allowed is 40)", CThostFtdcSyncingInvestorGroupField_InvestorGroupName_length);
            return -1;
        }
        // memset(data->InvestorGroupName, 0, sizeof(data->InvestorGroupName));
        // memcpy(data->InvestorGroupName, CThostFtdcSyncingInvestorGroupField_InvestorGroupName, CThostFtdcSyncingInvestorGroupField_InvestorGroupName_length);
        strncpy(data->InvestorGroupName, CThostFtdcSyncingInvestorGroupField_InvestorGroupName, sizeof(data->InvestorGroupName));
        CThostFtdcSyncingInvestorGroupField_InvestorGroupName = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncingInvestorGroupFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncingInvestorGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorGroupFieldData>(self);
    CThostFtdcSyncingInvestorGroupField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorGroupID", data->InvestorGroupID//, (Py_ssize_t)sizeof(data->InvestorGroupID)
        , "InvestorGroupName", data->InvestorGroupName//, (Py_ssize_t)sizeof(data->InvestorGroupName)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncingInvestorGroupField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncingInvestorGroupField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSyncingInvestorGroupFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInvestorGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorGroupFieldData>(self);
    CThostFtdcSyncingInvestorGroupField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSyncingInvestorGroupFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingInvestorGroupField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInvestorGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorGroupFieldData>(self);
    CThostFtdcSyncingInvestorGroupField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者分组代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcSyncingInvestorGroupFieldType_get_InvestorGroupID(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInvestorGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorGroupFieldData>(self);
    CThostFtdcSyncingInvestorGroupField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorGroupID, (Py_ssize_t)sizeof(data->InvestorGroupID));
    return PyBytes_FromString(data->InvestorGroupID);
}

static int PyCThostFtdcSyncingInvestorGroupFieldType_set_InvestorGroupID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorGroupID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingInvestorGroupField::InvestorGroupID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorGroupID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInvestorGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorGroupFieldData>(self);
    CThostFtdcSyncingInvestorGroupField *data = &(extra->data);
    // memset(data->InvestorGroupID, 0, sizeof(data->InvestorGroupID));
    // memcpy(data->InvestorGroupID, buf, len);
    strncpy(data->InvestorGroupID, buf, sizeof(data->InvestorGroupID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者分组名称
/// typedef char TThostFtdcInvestorGroupNameType[41]
static PyObject *PyCThostFtdcSyncingInvestorGroupFieldType_get_InvestorGroupName(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInvestorGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorGroupFieldData>(self);
    CThostFtdcSyncingInvestorGroupField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorGroupName, (Py_ssize_t)sizeof(data->InvestorGroupName));
    return PyBytes_FromString(data->InvestorGroupName);
}

static int PyCThostFtdcSyncingInvestorGroupFieldType_set_InvestorGroupName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorGroupName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingInvestorGroupField::InvestorGroupName)) {
        PyErr_SetString(PyExc_ValueError, "InvestorGroupName must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInvestorGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInvestorGroupFieldData>(self);
    CThostFtdcSyncingInvestorGroupField *data = &(extra->data);
    // memset(data->InvestorGroupName, 0, sizeof(data->InvestorGroupName));
    // memcpy(data->InvestorGroupName, buf, len);
    strncpy(data->InvestorGroupName, buf, sizeof(data->InvestorGroupName));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncingInvestorGroupFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncingInvestorGroupFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSyncingInvestorGroupFieldType_get_BrokerID,
    .set = PyCThostFtdcSyncingInvestorGroupFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者分组代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorGroupID",
    .get = PyCThostFtdcSyncingInvestorGroupFieldType_get_InvestorGroupID,
    .set = PyCThostFtdcSyncingInvestorGroupFieldType_set_InvestorGroupID,
    .doc = PyDoc_STR("投资者分组代码"),
    },
    /// 投资者分组名称
    /// typedef char TThostFtdcInvestorGroupNameType[41]
    {
    .name = "InvestorGroupName",
    .get = PyCThostFtdcSyncingInvestorGroupFieldType_get_InvestorGroupName,
    .set = PyCThostFtdcSyncingInvestorGroupFieldType_set_InvestorGroupName,
    .doc = PyDoc_STR("投资者分组名称"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncingInvestorGroupFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncingInvestorGroupField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("正在同步中的投资者分组")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncingInvestorGroupFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncingInvestorGroupFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncingInvestorGroupFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncingInvestorGroupFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncingInvestorGroupFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncingInvestorGroupFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("正在同步中的投资者分组")},
    {Py_tp_members, PyCThostFtdcSyncingInvestorGroupFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncingInvestorGroupFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncingInvestorGroupFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncingInvestorGroupFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncingInvestorGroupFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncingInvestorGroupField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncingInvestorGroupFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncingInvestorGroupFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncingInvestorGroupFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncingInvestorGroupFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncingInvestorGroupFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncingInvestorGroupFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncingInvestorGroupFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncingInvestorGroupFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncingInvestorGroupField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncingInvestorGroupField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}