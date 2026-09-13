
#include "PyCThostFtdcSyncDeltaSPBMPortfDefinitionField.h"

///风险结算追平SPBM组合保证金套餐

static int PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "PortfolioDefID", "ProdFamilyCode", "IsSPBM", "ActionDirection", "SyncDeltaSequenceNo", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSyncDeltaSPBMPortfDefinitionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaSPBMPortfDefinitionField_ExchangeID_length = 0;

    /// 组合保证金套餐代码
    /// typedef int TThostFtdcPortfolioDefIDType
    int CThostFtdcSyncDeltaSPBMPortfDefinitionField_PortfolioDefID = 0;

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncDeltaSPBMPortfDefinitionField_ProdFamilyCode = NULL;
    Py_ssize_t CThostFtdcSyncDeltaSPBMPortfDefinitionField_ProdFamilyCode_length = 0;

    /// 是否启用SPBM
    /// typedef int TThostFtdcBoolType
    int CThostFtdcSyncDeltaSPBMPortfDefinitionField_IsSPBM = 0;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    char CThostFtdcSyncDeltaSPBMPortfDefinitionField_ActionDirection = 0;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaSPBMPortfDefinitionField_SyncDeltaSequenceNo = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#iy#ici", (char **)kwlist
        , &CThostFtdcSyncDeltaSPBMPortfDefinitionField_ExchangeID, &CThostFtdcSyncDeltaSPBMPortfDefinitionField_ExchangeID_length
        , &CThostFtdcSyncDeltaSPBMPortfDefinitionField_PortfolioDefID
        , &CThostFtdcSyncDeltaSPBMPortfDefinitionField_ProdFamilyCode, &CThostFtdcSyncDeltaSPBMPortfDefinitionField_ProdFamilyCode_length
        , &CThostFtdcSyncDeltaSPBMPortfDefinitionField_IsSPBM
        , &CThostFtdcSyncDeltaSPBMPortfDefinitionField_ActionDirection
        , &CThostFtdcSyncDeltaSPBMPortfDefinitionField_SyncDeltaSequenceNo
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldData>(self);
    CThostFtdcSyncDeltaSPBMPortfDefinitionField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSyncDeltaSPBMPortfDefinitionField_ExchangeID != NULL ) {
        if(CThostFtdcSyncDeltaSPBMPortfDefinitionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaSPBMPortfDefinitionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSyncDeltaSPBMPortfDefinitionField_ExchangeID, CThostFtdcSyncDeltaSPBMPortfDefinitionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSyncDeltaSPBMPortfDefinitionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSyncDeltaSPBMPortfDefinitionField_ExchangeID = NULL;
    }

    /// 组合保证金套餐代码
    /// typedef int TThostFtdcPortfolioDefIDType
    data->PortfolioDefID = CThostFtdcSyncDeltaSPBMPortfDefinitionField_PortfolioDefID;

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncDeltaSPBMPortfDefinitionField_ProdFamilyCode != NULL ) {
        if(CThostFtdcSyncDeltaSPBMPortfDefinitionField_ProdFamilyCode_length >= (Py_ssize_t)sizeof(data->ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaSPBMPortfDefinitionField_ProdFamilyCode_length);
            return -1;
        }
        // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
        // memcpy(data->ProdFamilyCode, CThostFtdcSyncDeltaSPBMPortfDefinitionField_ProdFamilyCode, CThostFtdcSyncDeltaSPBMPortfDefinitionField_ProdFamilyCode_length);
        strncpy(data->ProdFamilyCode, CThostFtdcSyncDeltaSPBMPortfDefinitionField_ProdFamilyCode, sizeof(data->ProdFamilyCode));
        CThostFtdcSyncDeltaSPBMPortfDefinitionField_ProdFamilyCode = NULL;
    }

    /// 是否启用SPBM
    /// typedef int TThostFtdcBoolType
    data->IsSPBM = CThostFtdcSyncDeltaSPBMPortfDefinitionField_IsSPBM;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    data->ActionDirection = CThostFtdcSyncDeltaSPBMPortfDefinitionField_ActionDirection;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaSPBMPortfDefinitionField_SyncDeltaSequenceNo;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldData>(self);
    CThostFtdcSyncDeltaSPBMPortfDefinitionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:i,s:y,s:i,s:c,s:i}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "PortfolioDefID", data->PortfolioDefID
        , "ProdFamilyCode", data->ProdFamilyCode//, (Py_ssize_t)sizeof(data->ProdFamilyCode)
        , "IsSPBM", data->IsSPBM
        , "ActionDirection", data->ActionDirection
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaSPBMPortfDefinitionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaSPBMPortfDefinitionField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldData>(self);
    CThostFtdcSyncDeltaSPBMPortfDefinitionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPBMPortfDefinitionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldData>(self);
    CThostFtdcSyncDeltaSPBMPortfDefinitionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 品种代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType_get_ProdFamilyCode(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldData>(self);
    CThostFtdcSyncDeltaSPBMPortfDefinitionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProdFamilyCode, (Py_ssize_t)sizeof(data->ProdFamilyCode));
    return PyBytes_FromString(data->ProdFamilyCode);
}

static int PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType_set_ProdFamilyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProdFamilyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPBMPortfDefinitionField::ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "ProdFamilyCode must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldData>(self);
    CThostFtdcSyncDeltaSPBMPortfDefinitionField *data = &(extra->data);
    // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
    // memcpy(data->ProdFamilyCode, buf, len);
    strncpy(data->ProdFamilyCode, buf, sizeof(data->ProdFamilyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionDirectionType
static PyObject *PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType_get_ActionDirection(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldData>(self);
    CThostFtdcSyncDeltaSPBMPortfDefinitionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionDirection), 1);
}

static int PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType_set_ActionDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaSPBMPortfDefinitionField::ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldData>(self);
    CThostFtdcSyncDeltaSPBMPortfDefinitionField *data = &(extra->data);
    data->ActionDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType_members[] = {
    /// 组合保证金套餐代码
    /// typedef int TThostFtdcPortfolioDefIDType
    {
        .name = "PortfolioDefID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldData, data.PortfolioDefID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("组合保证金套餐代码")
    },
    /// 是否启用SPBM
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsSPBM",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldData, data.IsSPBM),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否启用SPBM")
    },
    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "SyncDeltaSequenceNo",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType_get_ExchangeID,
    .set = PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ProdFamilyCode",
    .get = PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType_get_ProdFamilyCode,
    .set = PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType_set_ProdFamilyCode,
    .doc = PyDoc_STR("品种代码"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    {
    .name = "ActionDirection",
    .get = PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType_get_ActionDirection,
    .set = PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType_set_ActionDirection,
    .doc = PyDoc_STR("操作标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaSPBMPortfDefinitionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算追平SPBM组合保证金套餐")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算追平SPBM组合保证金套餐")},
    {Py_tp_members, PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaSPBMPortfDefinitionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaSPBMPortfDefinitionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaSPBMPortfDefinitionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}