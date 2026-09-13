
#include "PyCThostFtdcRemoveParkedOrderField.h"

///删除预埋单

static int PyCThostFtdcRemoveParkedOrderFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "ParkedOrderID", "InvestUnitID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcRemoveParkedOrderField_BrokerID = NULL;
    Py_ssize_t CThostFtdcRemoveParkedOrderField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcRemoveParkedOrderField_InvestorID = NULL;
    Py_ssize_t CThostFtdcRemoveParkedOrderField_InvestorID_length = 0;

    /// 预埋报单编号
    /// typedef char TThostFtdcParkedOrderIDType[13]
    char *CThostFtdcRemoveParkedOrderField_ParkedOrderID = NULL;
    Py_ssize_t CThostFtdcRemoveParkedOrderField_ParkedOrderID_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcRemoveParkedOrderField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcRemoveParkedOrderField_InvestUnitID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
        , &CThostFtdcRemoveParkedOrderField_BrokerID, &CThostFtdcRemoveParkedOrderField_BrokerID_length
        , &CThostFtdcRemoveParkedOrderField_InvestorID, &CThostFtdcRemoveParkedOrderField_InvestorID_length
        , &CThostFtdcRemoveParkedOrderField_ParkedOrderID, &CThostFtdcRemoveParkedOrderField_ParkedOrderID_length
        , &CThostFtdcRemoveParkedOrderField_InvestUnitID, &CThostFtdcRemoveParkedOrderField_InvestUnitID_length
    )) {
        return -1;
    }

    PyCThostFtdcRemoveParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRemoveParkedOrderFieldData>(self);
    CThostFtdcRemoveParkedOrderField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcRemoveParkedOrderField_BrokerID != NULL ) {
        if(CThostFtdcRemoveParkedOrderField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcRemoveParkedOrderField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcRemoveParkedOrderField_BrokerID, CThostFtdcRemoveParkedOrderField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcRemoveParkedOrderField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcRemoveParkedOrderField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcRemoveParkedOrderField_InvestorID != NULL ) {
        if(CThostFtdcRemoveParkedOrderField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcRemoveParkedOrderField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcRemoveParkedOrderField_InvestorID, CThostFtdcRemoveParkedOrderField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcRemoveParkedOrderField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcRemoveParkedOrderField_InvestorID = NULL;
    }

    /// 预埋报单编号
    /// typedef char TThostFtdcParkedOrderIDType[13]
    if( CThostFtdcRemoveParkedOrderField_ParkedOrderID != NULL ) {
        if(CThostFtdcRemoveParkedOrderField_ParkedOrderID_length >= (Py_ssize_t)sizeof(data->ParkedOrderID)) {
            PyErr_Format(PyExc_ValueError, "ParkedOrderID too long: length=%zd (max allowed is 12)", CThostFtdcRemoveParkedOrderField_ParkedOrderID_length);
            return -1;
        }
        // memset(data->ParkedOrderID, 0, sizeof(data->ParkedOrderID));
        // memcpy(data->ParkedOrderID, CThostFtdcRemoveParkedOrderField_ParkedOrderID, CThostFtdcRemoveParkedOrderField_ParkedOrderID_length);
        strncpy(data->ParkedOrderID, CThostFtdcRemoveParkedOrderField_ParkedOrderID, sizeof(data->ParkedOrderID));
        CThostFtdcRemoveParkedOrderField_ParkedOrderID = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcRemoveParkedOrderField_InvestUnitID != NULL ) {
        if(CThostFtdcRemoveParkedOrderField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcRemoveParkedOrderField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcRemoveParkedOrderField_InvestUnitID, CThostFtdcRemoveParkedOrderField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcRemoveParkedOrderField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcRemoveParkedOrderField_InvestUnitID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcRemoveParkedOrderFieldType_repr(PyObject *self) {

    PyCThostFtdcRemoveParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRemoveParkedOrderFieldData>(self);
    CThostFtdcRemoveParkedOrderField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "ParkedOrderID", data->ParkedOrderID//, (Py_ssize_t)sizeof(data->ParkedOrderID)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRemoveParkedOrderField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRemoveParkedOrderField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcRemoveParkedOrderFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcRemoveParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRemoveParkedOrderFieldData>(self);
    CThostFtdcRemoveParkedOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcRemoveParkedOrderFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRemoveParkedOrderField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRemoveParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRemoveParkedOrderFieldData>(self);
    CThostFtdcRemoveParkedOrderField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcRemoveParkedOrderFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcRemoveParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRemoveParkedOrderFieldData>(self);
    CThostFtdcRemoveParkedOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcRemoveParkedOrderFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRemoveParkedOrderField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRemoveParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRemoveParkedOrderFieldData>(self);
    CThostFtdcRemoveParkedOrderField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 预埋报单编号
/// typedef char TThostFtdcParkedOrderIDType[13]
static PyObject *PyCThostFtdcRemoveParkedOrderFieldType_get_ParkedOrderID(PyObject *self, void *closure) {
    PyCThostFtdcRemoveParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRemoveParkedOrderFieldData>(self);
    CThostFtdcRemoveParkedOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParkedOrderID, (Py_ssize_t)sizeof(data->ParkedOrderID));
    return PyBytes_FromString(data->ParkedOrderID);
}

static int PyCThostFtdcRemoveParkedOrderFieldType_set_ParkedOrderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParkedOrderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRemoveParkedOrderField::ParkedOrderID)) {
        PyErr_SetString(PyExc_ValueError, "ParkedOrderID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRemoveParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRemoveParkedOrderFieldData>(self);
    CThostFtdcRemoveParkedOrderField *data = &(extra->data);
    // memset(data->ParkedOrderID, 0, sizeof(data->ParkedOrderID));
    // memcpy(data->ParkedOrderID, buf, len);
    strncpy(data->ParkedOrderID, buf, sizeof(data->ParkedOrderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcRemoveParkedOrderFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcRemoveParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRemoveParkedOrderFieldData>(self);
    CThostFtdcRemoveParkedOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcRemoveParkedOrderFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRemoveParkedOrderField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRemoveParkedOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRemoveParkedOrderFieldData>(self);
    CThostFtdcRemoveParkedOrderField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcRemoveParkedOrderFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcRemoveParkedOrderFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcRemoveParkedOrderFieldType_get_BrokerID,
    .set = PyCThostFtdcRemoveParkedOrderFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcRemoveParkedOrderFieldType_get_InvestorID,
    .set = PyCThostFtdcRemoveParkedOrderFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 预埋报单编号
    /// typedef char TThostFtdcParkedOrderIDType[13]
    {
    .name = "ParkedOrderID",
    .get = PyCThostFtdcRemoveParkedOrderFieldType_get_ParkedOrderID,
    .set = PyCThostFtdcRemoveParkedOrderFieldType_set_ParkedOrderID,
    .doc = PyDoc_STR("预埋报单编号"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcRemoveParkedOrderFieldType_get_InvestUnitID,
    .set = PyCThostFtdcRemoveParkedOrderFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcRemoveParkedOrderFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcRemoveParkedOrderField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("删除预埋单")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcRemoveParkedOrderFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcRemoveParkedOrderFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcRemoveParkedOrderFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcRemoveParkedOrderFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcRemoveParkedOrderFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcRemoveParkedOrderFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("删除预埋单")},
    {Py_tp_members, PyCThostFtdcRemoveParkedOrderFieldType_members},
    {Py_tp_getset, PyCThostFtdcRemoveParkedOrderFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcRemoveParkedOrderFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcRemoveParkedOrderFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcRemoveParkedOrderFieldType_spec = {
    .name = "PyCTP.CThostFtdcRemoveParkedOrderField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcRemoveParkedOrderFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcRemoveParkedOrderFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcRemoveParkedOrderFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcRemoveParkedOrderFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcRemoveParkedOrderFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcRemoveParkedOrderFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcRemoveParkedOrderFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcRemoveParkedOrderFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcRemoveParkedOrderField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRemoveParkedOrderField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}