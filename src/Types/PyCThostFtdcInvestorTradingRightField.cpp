
#include "PyCThostFtdcInvestorTradingRightField.h"

///投资者交易权限设置

static int PyCThostFtdcInvestorTradingRightFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "InvstTradingRight", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInvestorTradingRightField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInvestorTradingRightField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInvestorTradingRightField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInvestorTradingRightField_InvestorID_length = 0;

    /// 交易权限
    /// typedef char TThostFtdcInvstTradingRightType
    char CThostFtdcInvestorTradingRightField_InvstTradingRight = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#c", (char **)kwlist
        , &CThostFtdcInvestorTradingRightField_BrokerID, &CThostFtdcInvestorTradingRightField_BrokerID_length
        , &CThostFtdcInvestorTradingRightField_InvestorID, &CThostFtdcInvestorTradingRightField_InvestorID_length
        , &CThostFtdcInvestorTradingRightField_InvstTradingRight
    )) {
        return -1;
    }

    PyCThostFtdcInvestorTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorTradingRightFieldData>(self);
    CThostFtdcInvestorTradingRightField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInvestorTradingRightField_BrokerID != NULL ) {
        if(CThostFtdcInvestorTradingRightField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInvestorTradingRightField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInvestorTradingRightField_BrokerID, CThostFtdcInvestorTradingRightField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInvestorTradingRightField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInvestorTradingRightField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInvestorTradingRightField_InvestorID != NULL ) {
        if(CThostFtdcInvestorTradingRightField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInvestorTradingRightField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInvestorTradingRightField_InvestorID, CThostFtdcInvestorTradingRightField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInvestorTradingRightField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInvestorTradingRightField_InvestorID = NULL;
    }

    /// 交易权限
    /// typedef char TThostFtdcInvstTradingRightType
    data->InvstTradingRight = CThostFtdcInvestorTradingRightField_InvstTradingRight;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInvestorTradingRightFieldType_repr(PyObject *self) {

    PyCThostFtdcInvestorTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorTradingRightFieldData>(self);
    CThostFtdcInvestorTradingRightField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:c}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "InvstTradingRight", data->InvstTradingRight
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorTradingRightField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorTradingRightField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInvestorTradingRightFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorTradingRightFieldData>(self);
    CThostFtdcInvestorTradingRightField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInvestorTradingRightFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorTradingRightField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorTradingRightFieldData>(self);
    CThostFtdcInvestorTradingRightField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInvestorTradingRightFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorTradingRightFieldData>(self);
    CThostFtdcInvestorTradingRightField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInvestorTradingRightFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorTradingRightField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorTradingRightFieldData>(self);
    CThostFtdcInvestorTradingRightField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易权限
/// typedef char TThostFtdcInvstTradingRightType
static PyObject *PyCThostFtdcInvestorTradingRightFieldType_get_InvstTradingRight(PyObject *self, void *closure) {
    PyCThostFtdcInvestorTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorTradingRightFieldData>(self);
    CThostFtdcInvestorTradingRightField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->InvstTradingRight), 1);
}

static int PyCThostFtdcInvestorTradingRightFieldType_set_InvstTradingRight(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvstTradingRight Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcInvestorTradingRightField::InvstTradingRight)) {
        PyErr_SetString(PyExc_ValueError, "InvstTradingRight must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorTradingRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorTradingRightFieldData>(self);
    CThostFtdcInvestorTradingRightField *data = &(extra->data);
    data->InvstTradingRight = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInvestorTradingRightFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInvestorTradingRightFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInvestorTradingRightFieldType_get_BrokerID,
    .set = PyCThostFtdcInvestorTradingRightFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInvestorTradingRightFieldType_get_InvestorID,
    .set = PyCThostFtdcInvestorTradingRightFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 交易权限
    /// typedef char TThostFtdcInvstTradingRightType
    {
    .name = "InvstTradingRight",
    .get = PyCThostFtdcInvestorTradingRightFieldType_get_InvstTradingRight,
    .set = PyCThostFtdcInvestorTradingRightFieldType_set_InvstTradingRight,
    .doc = PyDoc_STR("交易权限"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInvestorTradingRightFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInvestorTradingRightField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者交易权限设置")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInvestorTradingRightFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInvestorTradingRightFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInvestorTradingRightFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInvestorTradingRightFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInvestorTradingRightFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInvestorTradingRightFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者交易权限设置")},
    {Py_tp_members, PyCThostFtdcInvestorTradingRightFieldType_members},
    {Py_tp_getset, PyCThostFtdcInvestorTradingRightFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInvestorTradingRightFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInvestorTradingRightFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInvestorTradingRightFieldType_spec = {
    .name = "PyCTP.CThostFtdcInvestorTradingRightField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInvestorTradingRightFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInvestorTradingRightFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInvestorTradingRightFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInvestorTradingRightFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInvestorTradingRightFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInvestorTradingRightFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInvestorTradingRightFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInvestorTradingRightFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInvestorTradingRightField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorTradingRightField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}