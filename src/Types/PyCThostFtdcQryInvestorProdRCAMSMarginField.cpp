
#include "PyCThostFtdcQryInvestorProdRCAMSMarginField.h"

///投资者品种RCAMS保证金查询

static int PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "CombProductID", "ProductGroupID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryInvestorProdRCAMSMarginField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryInvestorProdRCAMSMarginField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryInvestorProdRCAMSMarginField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryInvestorProdRCAMSMarginField_InvestorID_length = 0;

    /// 产品组合代码
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcQryInvestorProdRCAMSMarginField_CombProductID = NULL;
    Py_ssize_t CThostFtdcQryInvestorProdRCAMSMarginField_CombProductID_length = 0;

    /// 商品群代码
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcQryInvestorProdRCAMSMarginField_ProductGroupID = NULL;
    Py_ssize_t CThostFtdcQryInvestorProdRCAMSMarginField_ProductGroupID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
        , &CThostFtdcQryInvestorProdRCAMSMarginField_BrokerID, &CThostFtdcQryInvestorProdRCAMSMarginField_BrokerID_length
        , &CThostFtdcQryInvestorProdRCAMSMarginField_InvestorID, &CThostFtdcQryInvestorProdRCAMSMarginField_InvestorID_length
        , &CThostFtdcQryInvestorProdRCAMSMarginField_CombProductID, &CThostFtdcQryInvestorProdRCAMSMarginField_CombProductID_length
        , &CThostFtdcQryInvestorProdRCAMSMarginField_ProductGroupID, &CThostFtdcQryInvestorProdRCAMSMarginField_ProductGroupID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryInvestorProdRCAMSMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProdRCAMSMarginFieldData>(self);
    CThostFtdcQryInvestorProdRCAMSMarginField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryInvestorProdRCAMSMarginField_BrokerID != NULL ) {
        if(CThostFtdcQryInvestorProdRCAMSMarginField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryInvestorProdRCAMSMarginField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryInvestorProdRCAMSMarginField_BrokerID, CThostFtdcQryInvestorProdRCAMSMarginField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryInvestorProdRCAMSMarginField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryInvestorProdRCAMSMarginField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryInvestorProdRCAMSMarginField_InvestorID != NULL ) {
        if(CThostFtdcQryInvestorProdRCAMSMarginField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryInvestorProdRCAMSMarginField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryInvestorProdRCAMSMarginField_InvestorID, CThostFtdcQryInvestorProdRCAMSMarginField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryInvestorProdRCAMSMarginField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryInvestorProdRCAMSMarginField_InvestorID = NULL;
    }

    /// 产品组合代码
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcQryInvestorProdRCAMSMarginField_CombProductID != NULL ) {
        if(CThostFtdcQryInvestorProdRCAMSMarginField_CombProductID_length >= (Py_ssize_t)sizeof(data->CombProductID)) {
            PyErr_Format(PyExc_ValueError, "CombProductID too long: length=%zd (max allowed is 40)", CThostFtdcQryInvestorProdRCAMSMarginField_CombProductID_length);
            return -1;
        }
        // memset(data->CombProductID, 0, sizeof(data->CombProductID));
        // memcpy(data->CombProductID, CThostFtdcQryInvestorProdRCAMSMarginField_CombProductID, CThostFtdcQryInvestorProdRCAMSMarginField_CombProductID_length);
        strncpy(data->CombProductID, CThostFtdcQryInvestorProdRCAMSMarginField_CombProductID, sizeof(data->CombProductID));
        CThostFtdcQryInvestorProdRCAMSMarginField_CombProductID = NULL;
    }

    /// 商品群代码
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcQryInvestorProdRCAMSMarginField_ProductGroupID != NULL ) {
        if(CThostFtdcQryInvestorProdRCAMSMarginField_ProductGroupID_length >= (Py_ssize_t)sizeof(data->ProductGroupID)) {
            PyErr_Format(PyExc_ValueError, "ProductGroupID too long: length=%zd (max allowed is 40)", CThostFtdcQryInvestorProdRCAMSMarginField_ProductGroupID_length);
            return -1;
        }
        // memset(data->ProductGroupID, 0, sizeof(data->ProductGroupID));
        // memcpy(data->ProductGroupID, CThostFtdcQryInvestorProdRCAMSMarginField_ProductGroupID, CThostFtdcQryInvestorProdRCAMSMarginField_ProductGroupID_length);
        strncpy(data->ProductGroupID, CThostFtdcQryInvestorProdRCAMSMarginField_ProductGroupID, sizeof(data->ProductGroupID));
        CThostFtdcQryInvestorProdRCAMSMarginField_ProductGroupID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_repr(PyObject *self) {

    PyCThostFtdcQryInvestorProdRCAMSMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProdRCAMSMarginFieldData>(self);
    CThostFtdcQryInvestorProdRCAMSMarginField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "CombProductID", data->CombProductID//, (Py_ssize_t)sizeof(data->CombProductID)
        , "ProductGroupID", data->ProductGroupID//, (Py_ssize_t)sizeof(data->ProductGroupID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorProdRCAMSMarginField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorProdRCAMSMarginField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorProdRCAMSMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProdRCAMSMarginFieldData>(self);
    CThostFtdcQryInvestorProdRCAMSMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorProdRCAMSMarginField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorProdRCAMSMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProdRCAMSMarginFieldData>(self);
    CThostFtdcQryInvestorProdRCAMSMarginField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorProdRCAMSMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProdRCAMSMarginFieldData>(self);
    CThostFtdcQryInvestorProdRCAMSMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorProdRCAMSMarginField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorProdRCAMSMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProdRCAMSMarginFieldData>(self);
    CThostFtdcQryInvestorProdRCAMSMarginField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品组合代码
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_get_CombProductID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorProdRCAMSMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProdRCAMSMarginFieldData>(self);
    CThostFtdcQryInvestorProdRCAMSMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombProductID, (Py_ssize_t)sizeof(data->CombProductID));
    return PyBytes_FromString(data->CombProductID);
}

static int PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_set_CombProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorProdRCAMSMarginField::CombProductID)) {
        PyErr_SetString(PyExc_ValueError, "CombProductID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorProdRCAMSMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProdRCAMSMarginFieldData>(self);
    CThostFtdcQryInvestorProdRCAMSMarginField *data = &(extra->data);
    // memset(data->CombProductID, 0, sizeof(data->CombProductID));
    // memcpy(data->CombProductID, buf, len);
    strncpy(data->CombProductID, buf, sizeof(data->CombProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 商品群代码
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_get_ProductGroupID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorProdRCAMSMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProdRCAMSMarginFieldData>(self);
    CThostFtdcQryInvestorProdRCAMSMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductGroupID, (Py_ssize_t)sizeof(data->ProductGroupID));
    return PyBytes_FromString(data->ProductGroupID);
}

static int PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_set_ProductGroupID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductGroupID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorProdRCAMSMarginField::ProductGroupID)) {
        PyErr_SetString(PyExc_ValueError, "ProductGroupID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorProdRCAMSMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProdRCAMSMarginFieldData>(self);
    CThostFtdcQryInvestorProdRCAMSMarginField *data = &(extra->data);
    // memset(data->ProductGroupID, 0, sizeof(data->ProductGroupID));
    // memcpy(data->ProductGroupID, buf, len);
    strncpy(data->ProductGroupID, buf, sizeof(data->ProductGroupID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_get_BrokerID,
    .set = PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_get_InvestorID,
    .set = PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 产品组合代码
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "CombProductID",
    .get = PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_get_CombProductID,
    .set = PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_set_CombProductID,
    .doc = PyDoc_STR("产品组合代码"),
    },
    /// 商品群代码
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "ProductGroupID",
    .get = PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_get_ProductGroupID,
    .set = PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_set_ProductGroupID,
    .doc = PyDoc_STR("商品群代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryInvestorProdRCAMSMarginField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者品种RCAMS保证金查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryInvestorProdRCAMSMarginFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者品种RCAMS保证金查询")},
    {Py_tp_members, PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryInvestorProdRCAMSMarginField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryInvestorProdRCAMSMarginFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryInvestorProdRCAMSMarginFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryInvestorProdRCAMSMarginFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryInvestorProdRCAMSMarginFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryInvestorProdRCAMSMarginField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInvestorProdRCAMSMarginField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}