
#include "PyCThostFtdcQrySPBMPortfDefinitionField.h"

///组合保证金套餐查询

static int PyCThostFtdcQrySPBMPortfDefinitionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "PortfolioDefID", "ProdFamilyCode", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQrySPBMPortfDefinitionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQrySPBMPortfDefinitionField_ExchangeID_length = 0;

    /// 组合保证金套餐代码
    /// typedef int TThostFtdcPortfolioDefIDType
    int CThostFtdcQrySPBMPortfDefinitionField_PortfolioDefID = 0;

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQrySPBMPortfDefinitionField_ProdFamilyCode = NULL;
    Py_ssize_t CThostFtdcQrySPBMPortfDefinitionField_ProdFamilyCode_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#iy#", (char **)kwlist
        , &CThostFtdcQrySPBMPortfDefinitionField_ExchangeID, &CThostFtdcQrySPBMPortfDefinitionField_ExchangeID_length
        , &CThostFtdcQrySPBMPortfDefinitionField_PortfolioDefID
        , &CThostFtdcQrySPBMPortfDefinitionField_ProdFamilyCode, &CThostFtdcQrySPBMPortfDefinitionField_ProdFamilyCode_length
    )) {
        return -1;
    }

    PyCThostFtdcQrySPBMPortfDefinitionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMPortfDefinitionFieldData>(self);
    CThostFtdcQrySPBMPortfDefinitionField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQrySPBMPortfDefinitionField_ExchangeID != NULL ) {
        if(CThostFtdcQrySPBMPortfDefinitionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQrySPBMPortfDefinitionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQrySPBMPortfDefinitionField_ExchangeID, CThostFtdcQrySPBMPortfDefinitionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQrySPBMPortfDefinitionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQrySPBMPortfDefinitionField_ExchangeID = NULL;
    }

    /// 组合保证金套餐代码
    /// typedef int TThostFtdcPortfolioDefIDType
    data->PortfolioDefID = CThostFtdcQrySPBMPortfDefinitionField_PortfolioDefID;

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQrySPBMPortfDefinitionField_ProdFamilyCode != NULL ) {
        if(CThostFtdcQrySPBMPortfDefinitionField_ProdFamilyCode_length >= (Py_ssize_t)sizeof(data->ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is 80)", CThostFtdcQrySPBMPortfDefinitionField_ProdFamilyCode_length);
            return -1;
        }
        // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
        // memcpy(data->ProdFamilyCode, CThostFtdcQrySPBMPortfDefinitionField_ProdFamilyCode, CThostFtdcQrySPBMPortfDefinitionField_ProdFamilyCode_length);
        strncpy(data->ProdFamilyCode, CThostFtdcQrySPBMPortfDefinitionField_ProdFamilyCode, sizeof(data->ProdFamilyCode));
        CThostFtdcQrySPBMPortfDefinitionField_ProdFamilyCode = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQrySPBMPortfDefinitionFieldType_repr(PyObject *self) {

    PyCThostFtdcQrySPBMPortfDefinitionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMPortfDefinitionFieldData>(self);
    CThostFtdcQrySPBMPortfDefinitionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:i,s:y}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "PortfolioDefID", data->PortfolioDefID
        , "ProdFamilyCode", data->ProdFamilyCode//, (Py_ssize_t)sizeof(data->ProdFamilyCode)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySPBMPortfDefinitionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySPBMPortfDefinitionField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQrySPBMPortfDefinitionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQrySPBMPortfDefinitionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMPortfDefinitionFieldData>(self);
    CThostFtdcQrySPBMPortfDefinitionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQrySPBMPortfDefinitionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySPBMPortfDefinitionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySPBMPortfDefinitionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMPortfDefinitionFieldData>(self);
    CThostFtdcQrySPBMPortfDefinitionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 品种代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQrySPBMPortfDefinitionFieldType_get_ProdFamilyCode(PyObject *self, void *closure) {
    PyCThostFtdcQrySPBMPortfDefinitionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMPortfDefinitionFieldData>(self);
    CThostFtdcQrySPBMPortfDefinitionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProdFamilyCode, (Py_ssize_t)sizeof(data->ProdFamilyCode));
    return PyBytes_FromString(data->ProdFamilyCode);
}

static int PyCThostFtdcQrySPBMPortfDefinitionFieldType_set_ProdFamilyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProdFamilyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySPBMPortfDefinitionField::ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "ProdFamilyCode must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySPBMPortfDefinitionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMPortfDefinitionFieldData>(self);
    CThostFtdcQrySPBMPortfDefinitionField *data = &(extra->data);
    // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
    // memcpy(data->ProdFamilyCode, buf, len);
    strncpy(data->ProdFamilyCode, buf, sizeof(data->ProdFamilyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQrySPBMPortfDefinitionFieldType_members[] = {
    /// 组合保证金套餐代码
    /// typedef int TThostFtdcPortfolioDefIDType
    {
        .name = "PortfolioDefID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcQrySPBMPortfDefinitionFieldData, data.PortfolioDefID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("组合保证金套餐代码")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQrySPBMPortfDefinitionFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQrySPBMPortfDefinitionFieldType_get_ExchangeID,
    .set = PyCThostFtdcQrySPBMPortfDefinitionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ProdFamilyCode",
    .get = PyCThostFtdcQrySPBMPortfDefinitionFieldType_get_ProdFamilyCode,
    .set = PyCThostFtdcQrySPBMPortfDefinitionFieldType_set_ProdFamilyCode,
    .doc = PyDoc_STR("品种代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQrySPBMPortfDefinitionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQrySPBMPortfDefinitionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("组合保证金套餐查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQrySPBMPortfDefinitionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQrySPBMPortfDefinitionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQrySPBMPortfDefinitionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQrySPBMPortfDefinitionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQrySPBMPortfDefinitionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQrySPBMPortfDefinitionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("组合保证金套餐查询")},
    {Py_tp_members, PyCThostFtdcQrySPBMPortfDefinitionFieldType_members},
    {Py_tp_getset, PyCThostFtdcQrySPBMPortfDefinitionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQrySPBMPortfDefinitionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQrySPBMPortfDefinitionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQrySPBMPortfDefinitionFieldType_spec = {
    .name = "PyCTP.CThostFtdcQrySPBMPortfDefinitionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQrySPBMPortfDefinitionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQrySPBMPortfDefinitionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQrySPBMPortfDefinitionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQrySPBMPortfDefinitionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQrySPBMPortfDefinitionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQrySPBMPortfDefinitionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQrySPBMPortfDefinitionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQrySPBMPortfDefinitionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQrySPBMPortfDefinitionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySPBMPortfDefinitionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}