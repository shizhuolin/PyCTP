
#include "PyCThostFtdcQryInvestorCommoditySPMMMarginField.h"

///投资者商品组SPMM记录查询

static int PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "CommodityID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryInvestorCommoditySPMMMarginField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryInvestorCommoditySPMMMarginField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryInvestorCommoditySPMMMarginField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryInvestorCommoditySPMMMarginField_InvestorID_length = 0;

    /// 商品组代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    char *CThostFtdcQryInvestorCommoditySPMMMarginField_CommodityID = NULL;
    Py_ssize_t CThostFtdcQryInvestorCommoditySPMMMarginField_CommodityID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcQryInvestorCommoditySPMMMarginField_BrokerID, &CThostFtdcQryInvestorCommoditySPMMMarginField_BrokerID_length
        , &CThostFtdcQryInvestorCommoditySPMMMarginField_InvestorID, &CThostFtdcQryInvestorCommoditySPMMMarginField_InvestorID_length
        , &CThostFtdcQryInvestorCommoditySPMMMarginField_CommodityID, &CThostFtdcQryInvestorCommoditySPMMMarginField_CommodityID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryInvestorCommoditySPMMMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorCommoditySPMMMarginFieldData>(self);
    CThostFtdcQryInvestorCommoditySPMMMarginField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryInvestorCommoditySPMMMarginField_BrokerID != NULL ) {
        if(CThostFtdcQryInvestorCommoditySPMMMarginField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryInvestorCommoditySPMMMarginField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryInvestorCommoditySPMMMarginField_BrokerID, CThostFtdcQryInvestorCommoditySPMMMarginField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryInvestorCommoditySPMMMarginField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryInvestorCommoditySPMMMarginField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryInvestorCommoditySPMMMarginField_InvestorID != NULL ) {
        if(CThostFtdcQryInvestorCommoditySPMMMarginField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryInvestorCommoditySPMMMarginField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryInvestorCommoditySPMMMarginField_InvestorID, CThostFtdcQryInvestorCommoditySPMMMarginField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryInvestorCommoditySPMMMarginField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryInvestorCommoditySPMMMarginField_InvestorID = NULL;
    }

    /// 商品组代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    if( CThostFtdcQryInvestorCommoditySPMMMarginField_CommodityID != NULL ) {
        if(CThostFtdcQryInvestorCommoditySPMMMarginField_CommodityID_length >= (Py_ssize_t)sizeof(data->CommodityID)) {
            PyErr_Format(PyExc_ValueError, "CommodityID too long: length=%zd (max allowed is 40)", CThostFtdcQryInvestorCommoditySPMMMarginField_CommodityID_length);
            return -1;
        }
        // memset(data->CommodityID, 0, sizeof(data->CommodityID));
        // memcpy(data->CommodityID, CThostFtdcQryInvestorCommoditySPMMMarginField_CommodityID, CThostFtdcQryInvestorCommoditySPMMMarginField_CommodityID_length);
        strncpy(data->CommodityID, CThostFtdcQryInvestorCommoditySPMMMarginField_CommodityID, sizeof(data->CommodityID));
        CThostFtdcQryInvestorCommoditySPMMMarginField_CommodityID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType_repr(PyObject *self) {

    PyCThostFtdcQryInvestorCommoditySPMMMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorCommoditySPMMMarginFieldData>(self);
    CThostFtdcQryInvestorCommoditySPMMMarginField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "CommodityID", data->CommodityID//, (Py_ssize_t)sizeof(data->CommodityID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorCommoditySPMMMarginField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorCommoditySPMMMarginField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorCommoditySPMMMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorCommoditySPMMMarginFieldData>(self);
    CThostFtdcQryInvestorCommoditySPMMMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorCommoditySPMMMarginField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorCommoditySPMMMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorCommoditySPMMMarginFieldData>(self);
    CThostFtdcQryInvestorCommoditySPMMMarginField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorCommoditySPMMMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorCommoditySPMMMarginFieldData>(self);
    CThostFtdcQryInvestorCommoditySPMMMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorCommoditySPMMMarginField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorCommoditySPMMMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorCommoditySPMMMarginFieldData>(self);
    CThostFtdcQryInvestorCommoditySPMMMarginField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 商品组代码
/// typedef char TThostFtdcSPMMProductIDType[41]
static PyObject *PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType_get_CommodityID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorCommoditySPMMMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorCommoditySPMMMarginFieldData>(self);
    CThostFtdcQryInvestorCommoditySPMMMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CommodityID, (Py_ssize_t)sizeof(data->CommodityID));
    return PyBytes_FromString(data->CommodityID);
}

static int PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType_set_CommodityID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CommodityID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorCommoditySPMMMarginField::CommodityID)) {
        PyErr_SetString(PyExc_ValueError, "CommodityID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorCommoditySPMMMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorCommoditySPMMMarginFieldData>(self);
    CThostFtdcQryInvestorCommoditySPMMMarginField *data = &(extra->data);
    // memset(data->CommodityID, 0, sizeof(data->CommodityID));
    // memcpy(data->CommodityID, buf, len);
    strncpy(data->CommodityID, buf, sizeof(data->CommodityID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType_get_BrokerID,
    .set = PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType_get_InvestorID,
    .set = PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 商品组代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    {
    .name = "CommodityID",
    .get = PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType_get_CommodityID,
    .set = PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType_set_CommodityID,
    .doc = PyDoc_STR("商品组代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryInvestorCommoditySPMMMarginField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者商品组SPMM记录查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryInvestorCommoditySPMMMarginFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者商品组SPMM记录查询")},
    {Py_tp_members, PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryInvestorCommoditySPMMMarginField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryInvestorCommoditySPMMMarginFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryInvestorCommoditySPMMMarginFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryInvestorCommoditySPMMMarginField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInvestorCommoditySPMMMarginField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}