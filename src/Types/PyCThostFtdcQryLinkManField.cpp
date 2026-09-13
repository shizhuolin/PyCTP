
#include "PyCThostFtdcQryLinkManField.h"

///查询联系人

static int PyCThostFtdcQryLinkManFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryLinkManField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryLinkManField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryLinkManField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryLinkManField_InvestorID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
        , &CThostFtdcQryLinkManField_BrokerID, &CThostFtdcQryLinkManField_BrokerID_length
        , &CThostFtdcQryLinkManField_InvestorID, &CThostFtdcQryLinkManField_InvestorID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryLinkManFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryLinkManFieldData>(self);
    CThostFtdcQryLinkManField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryLinkManField_BrokerID != NULL ) {
        if(CThostFtdcQryLinkManField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryLinkManField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryLinkManField_BrokerID, CThostFtdcQryLinkManField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryLinkManField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryLinkManField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryLinkManField_InvestorID != NULL ) {
        if(CThostFtdcQryLinkManField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryLinkManField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryLinkManField_InvestorID, CThostFtdcQryLinkManField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryLinkManField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryLinkManField_InvestorID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryLinkManFieldType_repr(PyObject *self) {

    PyCThostFtdcQryLinkManFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryLinkManFieldData>(self);
    CThostFtdcQryLinkManField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryLinkManField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryLinkManField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryLinkManFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryLinkManFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryLinkManFieldData>(self);
    CThostFtdcQryLinkManField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryLinkManFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryLinkManField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryLinkManFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryLinkManFieldData>(self);
    CThostFtdcQryLinkManField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryLinkManFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryLinkManFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryLinkManFieldData>(self);
    CThostFtdcQryLinkManField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryLinkManFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryLinkManField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryLinkManFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryLinkManFieldData>(self);
    CThostFtdcQryLinkManField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryLinkManFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryLinkManFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryLinkManFieldType_get_BrokerID,
    .set = PyCThostFtdcQryLinkManFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryLinkManFieldType_get_InvestorID,
    .set = PyCThostFtdcQryLinkManFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryLinkManFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryLinkManField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询联系人")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryLinkManFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryLinkManFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryLinkManFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryLinkManFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryLinkManFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryLinkManFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询联系人")},
    {Py_tp_members, PyCThostFtdcQryLinkManFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryLinkManFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryLinkManFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryLinkManFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryLinkManFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryLinkManField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryLinkManFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryLinkManFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryLinkManFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryLinkManFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryLinkManFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryLinkManFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryLinkManFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryLinkManFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryLinkManField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryLinkManField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}