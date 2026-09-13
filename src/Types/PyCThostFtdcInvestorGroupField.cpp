
#include "PyCThostFtdcInvestorGroupField.h"

///投资者组

static int PyCThostFtdcInvestorGroupFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorGroupID", "InvestorGroupName", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInvestorGroupField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInvestorGroupField_BrokerID_length = 0;

    /// 投资者分组代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInvestorGroupField_InvestorGroupID = NULL;
    Py_ssize_t CThostFtdcInvestorGroupField_InvestorGroupID_length = 0;

    /// 投资者分组名称
    /// typedef char TThostFtdcInvestorGroupNameType[41]
    char *CThostFtdcInvestorGroupField_InvestorGroupName = NULL;
    Py_ssize_t CThostFtdcInvestorGroupField_InvestorGroupName_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcInvestorGroupField_BrokerID, &CThostFtdcInvestorGroupField_BrokerID_length
        , &CThostFtdcInvestorGroupField_InvestorGroupID, &CThostFtdcInvestorGroupField_InvestorGroupID_length
        , &CThostFtdcInvestorGroupField_InvestorGroupName, &CThostFtdcInvestorGroupField_InvestorGroupName_length
    )) {
        return -1;
    }

    PyCThostFtdcInvestorGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorGroupFieldData>(self);
    CThostFtdcInvestorGroupField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInvestorGroupField_BrokerID != NULL ) {
        if(CThostFtdcInvestorGroupField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInvestorGroupField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInvestorGroupField_BrokerID, CThostFtdcInvestorGroupField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInvestorGroupField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInvestorGroupField_BrokerID = NULL;
    }

    /// 投资者分组代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInvestorGroupField_InvestorGroupID != NULL ) {
        if(CThostFtdcInvestorGroupField_InvestorGroupID_length >= (Py_ssize_t)sizeof(data->InvestorGroupID)) {
            PyErr_Format(PyExc_ValueError, "InvestorGroupID too long: length=%zd (max allowed is 12)", CThostFtdcInvestorGroupField_InvestorGroupID_length);
            return -1;
        }
        // memset(data->InvestorGroupID, 0, sizeof(data->InvestorGroupID));
        // memcpy(data->InvestorGroupID, CThostFtdcInvestorGroupField_InvestorGroupID, CThostFtdcInvestorGroupField_InvestorGroupID_length);
        strncpy(data->InvestorGroupID, CThostFtdcInvestorGroupField_InvestorGroupID, sizeof(data->InvestorGroupID));
        CThostFtdcInvestorGroupField_InvestorGroupID = NULL;
    }

    /// 投资者分组名称
    /// typedef char TThostFtdcInvestorGroupNameType[41]
    if( CThostFtdcInvestorGroupField_InvestorGroupName != NULL ) {
        if(CThostFtdcInvestorGroupField_InvestorGroupName_length >= (Py_ssize_t)sizeof(data->InvestorGroupName)) {
            PyErr_Format(PyExc_ValueError, "InvestorGroupName too long: length=%zd (max allowed is 40)", CThostFtdcInvestorGroupField_InvestorGroupName_length);
            return -1;
        }
        // memset(data->InvestorGroupName, 0, sizeof(data->InvestorGroupName));
        // memcpy(data->InvestorGroupName, CThostFtdcInvestorGroupField_InvestorGroupName, CThostFtdcInvestorGroupField_InvestorGroupName_length);
        strncpy(data->InvestorGroupName, CThostFtdcInvestorGroupField_InvestorGroupName, sizeof(data->InvestorGroupName));
        CThostFtdcInvestorGroupField_InvestorGroupName = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInvestorGroupFieldType_repr(PyObject *self) {

    PyCThostFtdcInvestorGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorGroupFieldData>(self);
    CThostFtdcInvestorGroupField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorGroupID", data->InvestorGroupID//, (Py_ssize_t)sizeof(data->InvestorGroupID)
        , "InvestorGroupName", data->InvestorGroupName//, (Py_ssize_t)sizeof(data->InvestorGroupName)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorGroupField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorGroupField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInvestorGroupFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorGroupFieldData>(self);
    CThostFtdcInvestorGroupField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInvestorGroupFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorGroupField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorGroupFieldData>(self);
    CThostFtdcInvestorGroupField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者分组代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInvestorGroupFieldType_get_InvestorGroupID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorGroupFieldData>(self);
    CThostFtdcInvestorGroupField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorGroupID, (Py_ssize_t)sizeof(data->InvestorGroupID));
    return PyBytes_FromString(data->InvestorGroupID);
}

static int PyCThostFtdcInvestorGroupFieldType_set_InvestorGroupID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorGroupID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorGroupField::InvestorGroupID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorGroupID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorGroupFieldData>(self);
    CThostFtdcInvestorGroupField *data = &(extra->data);
    // memset(data->InvestorGroupID, 0, sizeof(data->InvestorGroupID));
    // memcpy(data->InvestorGroupID, buf, len);
    strncpy(data->InvestorGroupID, buf, sizeof(data->InvestorGroupID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者分组名称
/// typedef char TThostFtdcInvestorGroupNameType[41]
static PyObject *PyCThostFtdcInvestorGroupFieldType_get_InvestorGroupName(PyObject *self, void *closure) {
    PyCThostFtdcInvestorGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorGroupFieldData>(self);
    CThostFtdcInvestorGroupField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorGroupName, (Py_ssize_t)sizeof(data->InvestorGroupName));
    return PyBytes_FromString(data->InvestorGroupName);
}

static int PyCThostFtdcInvestorGroupFieldType_set_InvestorGroupName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorGroupName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorGroupField::InvestorGroupName)) {
        PyErr_SetString(PyExc_ValueError, "InvestorGroupName must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorGroupFieldData>(self);
    CThostFtdcInvestorGroupField *data = &(extra->data);
    // memset(data->InvestorGroupName, 0, sizeof(data->InvestorGroupName));
    // memcpy(data->InvestorGroupName, buf, len);
    strncpy(data->InvestorGroupName, buf, sizeof(data->InvestorGroupName));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInvestorGroupFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInvestorGroupFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInvestorGroupFieldType_get_BrokerID,
    .set = PyCThostFtdcInvestorGroupFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者分组代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorGroupID",
    .get = PyCThostFtdcInvestorGroupFieldType_get_InvestorGroupID,
    .set = PyCThostFtdcInvestorGroupFieldType_set_InvestorGroupID,
    .doc = PyDoc_STR("投资者分组代码"),
    },
    /// 投资者分组名称
    /// typedef char TThostFtdcInvestorGroupNameType[41]
    {
    .name = "InvestorGroupName",
    .get = PyCThostFtdcInvestorGroupFieldType_get_InvestorGroupName,
    .set = PyCThostFtdcInvestorGroupFieldType_set_InvestorGroupName,
    .doc = PyDoc_STR("投资者分组名称"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInvestorGroupFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInvestorGroupField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者组")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInvestorGroupFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInvestorGroupFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInvestorGroupFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInvestorGroupFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInvestorGroupFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInvestorGroupFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者组")},
    {Py_tp_members, PyCThostFtdcInvestorGroupFieldType_members},
    {Py_tp_getset, PyCThostFtdcInvestorGroupFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInvestorGroupFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInvestorGroupFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInvestorGroupFieldType_spec = {
    .name = "PyCTP.CThostFtdcInvestorGroupField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInvestorGroupFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInvestorGroupFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInvestorGroupFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInvestorGroupFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInvestorGroupFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInvestorGroupFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInvestorGroupFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInvestorGroupFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInvestorGroupField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorGroupField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}