
#include "PyCThostFtdcQryOffsetSettingField.h"

///查询对冲设置

static int PyCThostFtdcQryOffsetSettingFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "ProductID", "OffsetType", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryOffsetSettingField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryOffsetSettingField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryOffsetSettingField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryOffsetSettingField_InvestorID_length = 0;

    /// 产品代码
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcQryOffsetSettingField_ProductID = NULL;
    Py_ssize_t CThostFtdcQryOffsetSettingField_ProductID_length = 0;

    /// 对冲类型
    /// typedef char TThostFtdcOffsetTypeType
    char CThostFtdcQryOffsetSettingField_OffsetType = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#c", (char **)kwlist
        , &CThostFtdcQryOffsetSettingField_BrokerID, &CThostFtdcQryOffsetSettingField_BrokerID_length
        , &CThostFtdcQryOffsetSettingField_InvestorID, &CThostFtdcQryOffsetSettingField_InvestorID_length
        , &CThostFtdcQryOffsetSettingField_ProductID, &CThostFtdcQryOffsetSettingField_ProductID_length
        , &CThostFtdcQryOffsetSettingField_OffsetType
    )) {
        return -1;
    }

    PyCThostFtdcQryOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOffsetSettingFieldData>(self);
    CThostFtdcQryOffsetSettingField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryOffsetSettingField_BrokerID != NULL ) {
        if(CThostFtdcQryOffsetSettingField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryOffsetSettingField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryOffsetSettingField_BrokerID, CThostFtdcQryOffsetSettingField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryOffsetSettingField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryOffsetSettingField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryOffsetSettingField_InvestorID != NULL ) {
        if(CThostFtdcQryOffsetSettingField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryOffsetSettingField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryOffsetSettingField_InvestorID, CThostFtdcQryOffsetSettingField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryOffsetSettingField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryOffsetSettingField_InvestorID = NULL;
    }

    /// 产品代码
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcQryOffsetSettingField_ProductID != NULL ) {
        if(CThostFtdcQryOffsetSettingField_ProductID_length >= (Py_ssize_t)sizeof(data->ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is 40)", CThostFtdcQryOffsetSettingField_ProductID_length);
            return -1;
        }
        // memset(data->ProductID, 0, sizeof(data->ProductID));
        // memcpy(data->ProductID, CThostFtdcQryOffsetSettingField_ProductID, CThostFtdcQryOffsetSettingField_ProductID_length);
        strncpy(data->ProductID, CThostFtdcQryOffsetSettingField_ProductID, sizeof(data->ProductID));
        CThostFtdcQryOffsetSettingField_ProductID = NULL;
    }

    /// 对冲类型
    /// typedef char TThostFtdcOffsetTypeType
    data->OffsetType = CThostFtdcQryOffsetSettingField_OffsetType;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryOffsetSettingFieldType_repr(PyObject *self) {

    PyCThostFtdcQryOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOffsetSettingFieldData>(self);
    CThostFtdcQryOffsetSettingField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:c}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "ProductID", data->ProductID//, (Py_ssize_t)sizeof(data->ProductID)
        , "OffsetType", data->OffsetType
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryOffsetSettingField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryOffsetSettingField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryOffsetSettingFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOffsetSettingFieldData>(self);
    CThostFtdcQryOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryOffsetSettingFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOffsetSettingField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOffsetSettingFieldData>(self);
    CThostFtdcQryOffsetSettingField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryOffsetSettingFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOffsetSettingFieldData>(self);
    CThostFtdcQryOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryOffsetSettingFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOffsetSettingField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOffsetSettingFieldData>(self);
    CThostFtdcQryOffsetSettingField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品代码
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcQryOffsetSettingFieldType_get_ProductID(PyObject *self, void *closure) {
    PyCThostFtdcQryOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOffsetSettingFieldData>(self);
    CThostFtdcQryOffsetSettingField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductID, (Py_ssize_t)sizeof(data->ProductID));
    return PyBytes_FromString(data->ProductID);
}

static int PyCThostFtdcQryOffsetSettingFieldType_set_ProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOffsetSettingField::ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOffsetSettingFieldData>(self);
    CThostFtdcQryOffsetSettingField *data = &(extra->data);
    // memset(data->ProductID, 0, sizeof(data->ProductID));
    // memcpy(data->ProductID, buf, len);
    strncpy(data->ProductID, buf, sizeof(data->ProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 对冲类型
/// typedef char TThostFtdcOffsetTypeType
static PyObject *PyCThostFtdcQryOffsetSettingFieldType_get_OffsetType(PyObject *self, void *closure) {
    PyCThostFtdcQryOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOffsetSettingFieldData>(self);
    CThostFtdcQryOffsetSettingField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OffsetType), 1);
}

static int PyCThostFtdcQryOffsetSettingFieldType_set_OffsetType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OffsetType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcQryOffsetSettingField::OffsetType)) {
        PyErr_SetString(PyExc_ValueError, "OffsetType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOffsetSettingFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOffsetSettingFieldData>(self);
    CThostFtdcQryOffsetSettingField *data = &(extra->data);
    data->OffsetType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryOffsetSettingFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryOffsetSettingFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryOffsetSettingFieldType_get_BrokerID,
    .set = PyCThostFtdcQryOffsetSettingFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryOffsetSettingFieldType_get_InvestorID,
    .set = PyCThostFtdcQryOffsetSettingFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 产品代码
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "ProductID",
    .get = PyCThostFtdcQryOffsetSettingFieldType_get_ProductID,
    .set = PyCThostFtdcQryOffsetSettingFieldType_set_ProductID,
    .doc = PyDoc_STR("产品代码"),
    },
    /// 对冲类型
    /// typedef char TThostFtdcOffsetTypeType
    {
    .name = "OffsetType",
    .get = PyCThostFtdcQryOffsetSettingFieldType_get_OffsetType,
    .set = PyCThostFtdcQryOffsetSettingFieldType_set_OffsetType,
    .doc = PyDoc_STR("对冲类型"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryOffsetSettingFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryOffsetSettingField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询对冲设置")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryOffsetSettingFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryOffsetSettingFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryOffsetSettingFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryOffsetSettingFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryOffsetSettingFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryOffsetSettingFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询对冲设置")},
    {Py_tp_members, PyCThostFtdcQryOffsetSettingFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryOffsetSettingFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryOffsetSettingFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryOffsetSettingFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryOffsetSettingFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryOffsetSettingField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryOffsetSettingFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryOffsetSettingFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryOffsetSettingFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryOffsetSettingFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryOffsetSettingFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryOffsetSettingFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryOffsetSettingFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryOffsetSettingFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryOffsetSettingField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryOffsetSettingField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}