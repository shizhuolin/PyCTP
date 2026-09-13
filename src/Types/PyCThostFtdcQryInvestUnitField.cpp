
#include "PyCThostFtdcQryInvestUnitField.h"

///查询投资单元

static int PyCThostFtdcQryInvestUnitFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "InvestUnitID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryInvestUnitField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryInvestUnitField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryInvestUnitField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryInvestUnitField_InvestorID_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcQryInvestUnitField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcQryInvestUnitField_InvestUnitID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcQryInvestUnitField_BrokerID, &CThostFtdcQryInvestUnitField_BrokerID_length
        , &CThostFtdcQryInvestUnitField_InvestorID, &CThostFtdcQryInvestUnitField_InvestorID_length
        , &CThostFtdcQryInvestUnitField_InvestUnitID, &CThostFtdcQryInvestUnitField_InvestUnitID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryInvestUnitFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestUnitFieldData>(self);
    CThostFtdcQryInvestUnitField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryInvestUnitField_BrokerID != NULL ) {
        if(CThostFtdcQryInvestUnitField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryInvestUnitField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryInvestUnitField_BrokerID, CThostFtdcQryInvestUnitField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryInvestUnitField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryInvestUnitField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryInvestUnitField_InvestorID != NULL ) {
        if(CThostFtdcQryInvestUnitField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryInvestUnitField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryInvestUnitField_InvestorID, CThostFtdcQryInvestUnitField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryInvestUnitField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryInvestUnitField_InvestorID = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcQryInvestUnitField_InvestUnitID != NULL ) {
        if(CThostFtdcQryInvestUnitField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcQryInvestUnitField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcQryInvestUnitField_InvestUnitID, CThostFtdcQryInvestUnitField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcQryInvestUnitField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcQryInvestUnitField_InvestUnitID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryInvestUnitFieldType_repr(PyObject *self) {

    PyCThostFtdcQryInvestUnitFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestUnitFieldData>(self);
    CThostFtdcQryInvestUnitField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestUnitField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestUnitField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryInvestUnitFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestUnitFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestUnitFieldData>(self);
    CThostFtdcQryInvestUnitField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryInvestUnitFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestUnitField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestUnitFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestUnitFieldData>(self);
    CThostFtdcQryInvestUnitField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryInvestUnitFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestUnitFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestUnitFieldData>(self);
    CThostFtdcQryInvestUnitField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryInvestUnitFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestUnitField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestUnitFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestUnitFieldData>(self);
    CThostFtdcQryInvestUnitField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcQryInvestUnitFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestUnitFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestUnitFieldData>(self);
    CThostFtdcQryInvestUnitField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcQryInvestUnitFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestUnitField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestUnitFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestUnitFieldData>(self);
    CThostFtdcQryInvestUnitField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryInvestUnitFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryInvestUnitFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryInvestUnitFieldType_get_BrokerID,
    .set = PyCThostFtdcQryInvestUnitFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryInvestUnitFieldType_get_InvestorID,
    .set = PyCThostFtdcQryInvestUnitFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcQryInvestUnitFieldType_get_InvestUnitID,
    .set = PyCThostFtdcQryInvestUnitFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryInvestUnitFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryInvestUnitField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询投资单元")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryInvestUnitFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryInvestUnitFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryInvestUnitFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryInvestUnitFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryInvestUnitFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryInvestUnitFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询投资单元")},
    {Py_tp_members, PyCThostFtdcQryInvestUnitFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryInvestUnitFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryInvestUnitFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryInvestUnitFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryInvestUnitFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryInvestUnitField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryInvestUnitFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryInvestUnitFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryInvestUnitFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryInvestUnitFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryInvestUnitFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryInvestUnitFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryInvestUnitFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryInvestUnitFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryInvestUnitField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInvestUnitField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}