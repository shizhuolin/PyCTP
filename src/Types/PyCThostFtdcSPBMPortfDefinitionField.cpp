
#include "PyCThostFtdcSPBMPortfDefinitionField.h"

///组合保证金套餐

static int PyCThostFtdcSPBMPortfDefinitionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "PortfolioDefID", "ProdFamilyCode", "IsSPBM", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSPBMPortfDefinitionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSPBMPortfDefinitionField_ExchangeID_length = 0;

    /// 组合保证金套餐代码
    /// typedef int TThostFtdcPortfolioDefIDType
    int CThostFtdcSPBMPortfDefinitionField_PortfolioDefID = 0;

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSPBMPortfDefinitionField_ProdFamilyCode = NULL;
    Py_ssize_t CThostFtdcSPBMPortfDefinitionField_ProdFamilyCode_length = 0;

    /// 是否启用SPBM
    /// typedef int TThostFtdcBoolType
    int CThostFtdcSPBMPortfDefinitionField_IsSPBM = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#iy#i", (char **)kwlist
        , &CThostFtdcSPBMPortfDefinitionField_ExchangeID, &CThostFtdcSPBMPortfDefinitionField_ExchangeID_length
        , &CThostFtdcSPBMPortfDefinitionField_PortfolioDefID
        , &CThostFtdcSPBMPortfDefinitionField_ProdFamilyCode, &CThostFtdcSPBMPortfDefinitionField_ProdFamilyCode_length
        , &CThostFtdcSPBMPortfDefinitionField_IsSPBM
    )) {
        return -1;
    }

    PyCThostFtdcSPBMPortfDefinitionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMPortfDefinitionFieldData>(self);
    CThostFtdcSPBMPortfDefinitionField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSPBMPortfDefinitionField_ExchangeID != NULL ) {
        if(CThostFtdcSPBMPortfDefinitionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSPBMPortfDefinitionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSPBMPortfDefinitionField_ExchangeID, CThostFtdcSPBMPortfDefinitionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSPBMPortfDefinitionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSPBMPortfDefinitionField_ExchangeID = NULL;
    }

    /// 组合保证金套餐代码
    /// typedef int TThostFtdcPortfolioDefIDType
    data->PortfolioDefID = CThostFtdcSPBMPortfDefinitionField_PortfolioDefID;

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSPBMPortfDefinitionField_ProdFamilyCode != NULL ) {
        if(CThostFtdcSPBMPortfDefinitionField_ProdFamilyCode_length >= (Py_ssize_t)sizeof(data->ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is 80)", CThostFtdcSPBMPortfDefinitionField_ProdFamilyCode_length);
            return -1;
        }
        // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
        // memcpy(data->ProdFamilyCode, CThostFtdcSPBMPortfDefinitionField_ProdFamilyCode, CThostFtdcSPBMPortfDefinitionField_ProdFamilyCode_length);
        strncpy(data->ProdFamilyCode, CThostFtdcSPBMPortfDefinitionField_ProdFamilyCode, sizeof(data->ProdFamilyCode));
        CThostFtdcSPBMPortfDefinitionField_ProdFamilyCode = NULL;
    }

    /// 是否启用SPBM
    /// typedef int TThostFtdcBoolType
    data->IsSPBM = CThostFtdcSPBMPortfDefinitionField_IsSPBM;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSPBMPortfDefinitionFieldType_repr(PyObject *self) {

    PyCThostFtdcSPBMPortfDefinitionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMPortfDefinitionFieldData>(self);
    CThostFtdcSPBMPortfDefinitionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:i,s:y,s:i}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "PortfolioDefID", data->PortfolioDefID
        , "ProdFamilyCode", data->ProdFamilyCode//, (Py_ssize_t)sizeof(data->ProdFamilyCode)
        , "IsSPBM", data->IsSPBM
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSPBMPortfDefinitionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSPBMPortfDefinitionField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSPBMPortfDefinitionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSPBMPortfDefinitionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMPortfDefinitionFieldData>(self);
    CThostFtdcSPBMPortfDefinitionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSPBMPortfDefinitionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSPBMPortfDefinitionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSPBMPortfDefinitionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMPortfDefinitionFieldData>(self);
    CThostFtdcSPBMPortfDefinitionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 品种代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSPBMPortfDefinitionFieldType_get_ProdFamilyCode(PyObject *self, void *closure) {
    PyCThostFtdcSPBMPortfDefinitionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMPortfDefinitionFieldData>(self);
    CThostFtdcSPBMPortfDefinitionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProdFamilyCode, (Py_ssize_t)sizeof(data->ProdFamilyCode));
    return PyBytes_FromString(data->ProdFamilyCode);
}

static int PyCThostFtdcSPBMPortfDefinitionFieldType_set_ProdFamilyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProdFamilyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSPBMPortfDefinitionField::ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "ProdFamilyCode must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSPBMPortfDefinitionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSPBMPortfDefinitionFieldData>(self);
    CThostFtdcSPBMPortfDefinitionField *data = &(extra->data);
    // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
    // memcpy(data->ProdFamilyCode, buf, len);
    strncpy(data->ProdFamilyCode, buf, sizeof(data->ProdFamilyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSPBMPortfDefinitionFieldType_members[] = {
    /// 组合保证金套餐代码
    /// typedef int TThostFtdcPortfolioDefIDType
    {
        .name = "PortfolioDefID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSPBMPortfDefinitionFieldData, data.PortfolioDefID),
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
        .offset = offsetof(PyCThostFtdcSPBMPortfDefinitionFieldData, data.IsSPBM),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否启用SPBM")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSPBMPortfDefinitionFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSPBMPortfDefinitionFieldType_get_ExchangeID,
    .set = PyCThostFtdcSPBMPortfDefinitionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ProdFamilyCode",
    .get = PyCThostFtdcSPBMPortfDefinitionFieldType_get_ProdFamilyCode,
    .set = PyCThostFtdcSPBMPortfDefinitionFieldType_set_ProdFamilyCode,
    .doc = PyDoc_STR("品种代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSPBMPortfDefinitionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSPBMPortfDefinitionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("组合保证金套餐")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSPBMPortfDefinitionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSPBMPortfDefinitionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSPBMPortfDefinitionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSPBMPortfDefinitionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSPBMPortfDefinitionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSPBMPortfDefinitionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("组合保证金套餐")},
    {Py_tp_members, PyCThostFtdcSPBMPortfDefinitionFieldType_members},
    {Py_tp_getset, PyCThostFtdcSPBMPortfDefinitionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSPBMPortfDefinitionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSPBMPortfDefinitionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSPBMPortfDefinitionFieldType_spec = {
    .name = "PyCTP.CThostFtdcSPBMPortfDefinitionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSPBMPortfDefinitionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSPBMPortfDefinitionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSPBMPortfDefinitionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSPBMPortfDefinitionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSPBMPortfDefinitionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSPBMPortfDefinitionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSPBMPortfDefinitionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSPBMPortfDefinitionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSPBMPortfDefinitionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSPBMPortfDefinitionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}