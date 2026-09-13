
#include "PyCThostFtdcQryRULEInterParameterField.h"

///RULE跨品种抵扣参数查询

static int PyCThostFtdcQryRULEInterParameterFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "Leg1ProdFamilyCode", "Leg2ProdFamilyCode", "CommodityGroupID", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryRULEInterParameterField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryRULEInterParameterField_ExchangeID_length = 0;

    /// 第一腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryRULEInterParameterField_Leg1ProdFamilyCode = NULL;
    Py_ssize_t CThostFtdcQryRULEInterParameterField_Leg1ProdFamilyCode_length = 0;

    /// 第二腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryRULEInterParameterField_Leg2ProdFamilyCode = NULL;
    Py_ssize_t CThostFtdcQryRULEInterParameterField_Leg2ProdFamilyCode_length = 0;

    /// 商品群号
    /// typedef int TThostFtdcCommodityGroupIDType
    int CThostFtdcQryRULEInterParameterField_CommodityGroupID = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#i", (char **)kwlist
        , &CThostFtdcQryRULEInterParameterField_ExchangeID, &CThostFtdcQryRULEInterParameterField_ExchangeID_length
        , &CThostFtdcQryRULEInterParameterField_Leg1ProdFamilyCode, &CThostFtdcQryRULEInterParameterField_Leg1ProdFamilyCode_length
        , &CThostFtdcQryRULEInterParameterField_Leg2ProdFamilyCode, &CThostFtdcQryRULEInterParameterField_Leg2ProdFamilyCode_length
        , &CThostFtdcQryRULEInterParameterField_CommodityGroupID
    )) {
        return -1;
    }

    PyCThostFtdcQryRULEInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRULEInterParameterFieldData>(self);
    CThostFtdcQryRULEInterParameterField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryRULEInterParameterField_ExchangeID != NULL ) {
        if(CThostFtdcQryRULEInterParameterField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryRULEInterParameterField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryRULEInterParameterField_ExchangeID, CThostFtdcQryRULEInterParameterField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryRULEInterParameterField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryRULEInterParameterField_ExchangeID = NULL;
    }

    /// 第一腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryRULEInterParameterField_Leg1ProdFamilyCode != NULL ) {
        if(CThostFtdcQryRULEInterParameterField_Leg1ProdFamilyCode_length >= (Py_ssize_t)sizeof(data->Leg1ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "Leg1ProdFamilyCode too long: length=%zd (max allowed is 80)", CThostFtdcQryRULEInterParameterField_Leg1ProdFamilyCode_length);
            return -1;
        }
        // memset(data->Leg1ProdFamilyCode, 0, sizeof(data->Leg1ProdFamilyCode));
        // memcpy(data->Leg1ProdFamilyCode, CThostFtdcQryRULEInterParameterField_Leg1ProdFamilyCode, CThostFtdcQryRULEInterParameterField_Leg1ProdFamilyCode_length);
        strncpy(data->Leg1ProdFamilyCode, CThostFtdcQryRULEInterParameterField_Leg1ProdFamilyCode, sizeof(data->Leg1ProdFamilyCode));
        CThostFtdcQryRULEInterParameterField_Leg1ProdFamilyCode = NULL;
    }

    /// 第二腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryRULEInterParameterField_Leg2ProdFamilyCode != NULL ) {
        if(CThostFtdcQryRULEInterParameterField_Leg2ProdFamilyCode_length >= (Py_ssize_t)sizeof(data->Leg2ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "Leg2ProdFamilyCode too long: length=%zd (max allowed is 80)", CThostFtdcQryRULEInterParameterField_Leg2ProdFamilyCode_length);
            return -1;
        }
        // memset(data->Leg2ProdFamilyCode, 0, sizeof(data->Leg2ProdFamilyCode));
        // memcpy(data->Leg2ProdFamilyCode, CThostFtdcQryRULEInterParameterField_Leg2ProdFamilyCode, CThostFtdcQryRULEInterParameterField_Leg2ProdFamilyCode_length);
        strncpy(data->Leg2ProdFamilyCode, CThostFtdcQryRULEInterParameterField_Leg2ProdFamilyCode, sizeof(data->Leg2ProdFamilyCode));
        CThostFtdcQryRULEInterParameterField_Leg2ProdFamilyCode = NULL;
    }

    /// 商品群号
    /// typedef int TThostFtdcCommodityGroupIDType
    data->CommodityGroupID = CThostFtdcQryRULEInterParameterField_CommodityGroupID;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryRULEInterParameterFieldType_repr(PyObject *self) {

    PyCThostFtdcQryRULEInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRULEInterParameterFieldData>(self);
    CThostFtdcQryRULEInterParameterField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:i}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "Leg1ProdFamilyCode", data->Leg1ProdFamilyCode//, (Py_ssize_t)sizeof(data->Leg1ProdFamilyCode)
        , "Leg2ProdFamilyCode", data->Leg2ProdFamilyCode//, (Py_ssize_t)sizeof(data->Leg2ProdFamilyCode)
        , "CommodityGroupID", data->CommodityGroupID
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryRULEInterParameterField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryRULEInterParameterField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryRULEInterParameterFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryRULEInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRULEInterParameterFieldData>(self);
    CThostFtdcQryRULEInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryRULEInterParameterFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryRULEInterParameterField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryRULEInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRULEInterParameterFieldData>(self);
    CThostFtdcQryRULEInterParameterField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 第一腿构成品种
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryRULEInterParameterFieldType_get_Leg1ProdFamilyCode(PyObject *self, void *closure) {
    PyCThostFtdcQryRULEInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRULEInterParameterFieldData>(self);
    CThostFtdcQryRULEInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Leg1ProdFamilyCode, (Py_ssize_t)sizeof(data->Leg1ProdFamilyCode));
    return PyBytes_FromString(data->Leg1ProdFamilyCode);
}

static int PyCThostFtdcQryRULEInterParameterFieldType_set_Leg1ProdFamilyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Leg1ProdFamilyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryRULEInterParameterField::Leg1ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "Leg1ProdFamilyCode must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryRULEInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRULEInterParameterFieldData>(self);
    CThostFtdcQryRULEInterParameterField *data = &(extra->data);
    // memset(data->Leg1ProdFamilyCode, 0, sizeof(data->Leg1ProdFamilyCode));
    // memcpy(data->Leg1ProdFamilyCode, buf, len);
    strncpy(data->Leg1ProdFamilyCode, buf, sizeof(data->Leg1ProdFamilyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 第二腿构成品种
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryRULEInterParameterFieldType_get_Leg2ProdFamilyCode(PyObject *self, void *closure) {
    PyCThostFtdcQryRULEInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRULEInterParameterFieldData>(self);
    CThostFtdcQryRULEInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Leg2ProdFamilyCode, (Py_ssize_t)sizeof(data->Leg2ProdFamilyCode));
    return PyBytes_FromString(data->Leg2ProdFamilyCode);
}

static int PyCThostFtdcQryRULEInterParameterFieldType_set_Leg2ProdFamilyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Leg2ProdFamilyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryRULEInterParameterField::Leg2ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "Leg2ProdFamilyCode must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryRULEInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRULEInterParameterFieldData>(self);
    CThostFtdcQryRULEInterParameterField *data = &(extra->data);
    // memset(data->Leg2ProdFamilyCode, 0, sizeof(data->Leg2ProdFamilyCode));
    // memcpy(data->Leg2ProdFamilyCode, buf, len);
    strncpy(data->Leg2ProdFamilyCode, buf, sizeof(data->Leg2ProdFamilyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryRULEInterParameterFieldType_members[] = {
    /// 商品群号
    /// typedef int TThostFtdcCommodityGroupIDType
    {
        .name = "CommodityGroupID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcQryRULEInterParameterFieldData, data.CommodityGroupID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("商品群号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryRULEInterParameterFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryRULEInterParameterFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryRULEInterParameterFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 第一腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "Leg1ProdFamilyCode",
    .get = PyCThostFtdcQryRULEInterParameterFieldType_get_Leg1ProdFamilyCode,
    .set = PyCThostFtdcQryRULEInterParameterFieldType_set_Leg1ProdFamilyCode,
    .doc = PyDoc_STR("第一腿构成品种"),
    },
    /// 第二腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "Leg2ProdFamilyCode",
    .get = PyCThostFtdcQryRULEInterParameterFieldType_get_Leg2ProdFamilyCode,
    .set = PyCThostFtdcQryRULEInterParameterFieldType_set_Leg2ProdFamilyCode,
    .doc = PyDoc_STR("第二腿构成品种"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryRULEInterParameterFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryRULEInterParameterField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("RULE跨品种抵扣参数查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryRULEInterParameterFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryRULEInterParameterFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryRULEInterParameterFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryRULEInterParameterFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryRULEInterParameterFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryRULEInterParameterFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("RULE跨品种抵扣参数查询")},
    {Py_tp_members, PyCThostFtdcQryRULEInterParameterFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryRULEInterParameterFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryRULEInterParameterFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryRULEInterParameterFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryRULEInterParameterFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryRULEInterParameterField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryRULEInterParameterFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryRULEInterParameterFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryRULEInterParameterFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryRULEInterParameterFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryRULEInterParameterFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryRULEInterParameterFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryRULEInterParameterFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryRULEInterParameterFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryRULEInterParameterField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryRULEInterParameterField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}