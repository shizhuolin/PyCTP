
#include "PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField.h"

///投资者商品群SPMM记录查询

static int PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "CommodityGroupID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryInvestorCommodityGroupSPMMMarginField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryInvestorCommodityGroupSPMMMarginField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryInvestorCommodityGroupSPMMMarginField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryInvestorCommodityGroupSPMMMarginField_InvestorID_length = 0;

    /// 商品群代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    char *CThostFtdcQryInvestorCommodityGroupSPMMMarginField_CommodityGroupID = NULL;
    Py_ssize_t CThostFtdcQryInvestorCommodityGroupSPMMMarginField_CommodityGroupID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcQryInvestorCommodityGroupSPMMMarginField_BrokerID, &CThostFtdcQryInvestorCommodityGroupSPMMMarginField_BrokerID_length
        , &CThostFtdcQryInvestorCommodityGroupSPMMMarginField_InvestorID, &CThostFtdcQryInvestorCommodityGroupSPMMMarginField_InvestorID_length
        , &CThostFtdcQryInvestorCommodityGroupSPMMMarginField_CommodityGroupID, &CThostFtdcQryInvestorCommodityGroupSPMMMarginField_CommodityGroupID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldData>(self);
    CThostFtdcQryInvestorCommodityGroupSPMMMarginField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryInvestorCommodityGroupSPMMMarginField_BrokerID != NULL ) {
        if(CThostFtdcQryInvestorCommodityGroupSPMMMarginField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryInvestorCommodityGroupSPMMMarginField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryInvestorCommodityGroupSPMMMarginField_BrokerID, CThostFtdcQryInvestorCommodityGroupSPMMMarginField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryInvestorCommodityGroupSPMMMarginField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryInvestorCommodityGroupSPMMMarginField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryInvestorCommodityGroupSPMMMarginField_InvestorID != NULL ) {
        if(CThostFtdcQryInvestorCommodityGroupSPMMMarginField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryInvestorCommodityGroupSPMMMarginField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryInvestorCommodityGroupSPMMMarginField_InvestorID, CThostFtdcQryInvestorCommodityGroupSPMMMarginField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryInvestorCommodityGroupSPMMMarginField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryInvestorCommodityGroupSPMMMarginField_InvestorID = NULL;
    }

    /// 商品群代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    if( CThostFtdcQryInvestorCommodityGroupSPMMMarginField_CommodityGroupID != NULL ) {
        if(CThostFtdcQryInvestorCommodityGroupSPMMMarginField_CommodityGroupID_length >= (Py_ssize_t)sizeof(data->CommodityGroupID)) {
            PyErr_Format(PyExc_ValueError, "CommodityGroupID too long: length=%zd (max allowed is 40)", CThostFtdcQryInvestorCommodityGroupSPMMMarginField_CommodityGroupID_length);
            return -1;
        }
        // memset(data->CommodityGroupID, 0, sizeof(data->CommodityGroupID));
        // memcpy(data->CommodityGroupID, CThostFtdcQryInvestorCommodityGroupSPMMMarginField_CommodityGroupID, CThostFtdcQryInvestorCommodityGroupSPMMMarginField_CommodityGroupID_length);
        strncpy(data->CommodityGroupID, CThostFtdcQryInvestorCommodityGroupSPMMMarginField_CommodityGroupID, sizeof(data->CommodityGroupID));
        CThostFtdcQryInvestorCommodityGroupSPMMMarginField_CommodityGroupID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType_repr(PyObject *self) {

    PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldData>(self);
    CThostFtdcQryInvestorCommodityGroupSPMMMarginField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "CommodityGroupID", data->CommodityGroupID//, (Py_ssize_t)sizeof(data->CommodityGroupID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorCommodityGroupSPMMMarginField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorCommodityGroupSPMMMarginField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldData>(self);
    CThostFtdcQryInvestorCommodityGroupSPMMMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorCommodityGroupSPMMMarginField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldData>(self);
    CThostFtdcQryInvestorCommodityGroupSPMMMarginField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldData>(self);
    CThostFtdcQryInvestorCommodityGroupSPMMMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorCommodityGroupSPMMMarginField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldData>(self);
    CThostFtdcQryInvestorCommodityGroupSPMMMarginField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 商品群代码
/// typedef char TThostFtdcSPMMProductIDType[41]
static PyObject *PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType_get_CommodityGroupID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldData>(self);
    CThostFtdcQryInvestorCommodityGroupSPMMMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CommodityGroupID, (Py_ssize_t)sizeof(data->CommodityGroupID));
    return PyBytes_FromString(data->CommodityGroupID);
}

static int PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType_set_CommodityGroupID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CommodityGroupID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorCommodityGroupSPMMMarginField::CommodityGroupID)) {
        PyErr_SetString(PyExc_ValueError, "CommodityGroupID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldData>(self);
    CThostFtdcQryInvestorCommodityGroupSPMMMarginField *data = &(extra->data);
    // memset(data->CommodityGroupID, 0, sizeof(data->CommodityGroupID));
    // memcpy(data->CommodityGroupID, buf, len);
    strncpy(data->CommodityGroupID, buf, sizeof(data->CommodityGroupID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType_get_BrokerID,
    .set = PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType_get_InvestorID,
    .set = PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 商品群代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    {
    .name = "CommodityGroupID",
    .get = PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType_get_CommodityGroupID,
    .set = PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType_set_CommodityGroupID,
    .doc = PyDoc_STR("商品群代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryInvestorCommodityGroupSPMMMarginField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者商品群SPMM记录查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者商品群SPMM记录查询")},
    {Py_tp_members, PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryInvestorCommodityGroupSPMMMarginField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryInvestorCommodityGroupSPMMMarginField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInvestorCommodityGroupSPMMMarginField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}