
#include "PyCThostFtdcQrySPBMOptionParameterField.h"

///SPBM期权合约保证金参数查询

static int PyCThostFtdcQrySPBMOptionParameterFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "InstrumentID", "ProdFamilyCode", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQrySPBMOptionParameterField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQrySPBMOptionParameterField_ExchangeID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQrySPBMOptionParameterField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcQrySPBMOptionParameterField_InstrumentID_length = 0;

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQrySPBMOptionParameterField_ProdFamilyCode = NULL;
    Py_ssize_t CThostFtdcQrySPBMOptionParameterField_ProdFamilyCode_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcQrySPBMOptionParameterField_ExchangeID, &CThostFtdcQrySPBMOptionParameterField_ExchangeID_length
        , &CThostFtdcQrySPBMOptionParameterField_InstrumentID, &CThostFtdcQrySPBMOptionParameterField_InstrumentID_length
        , &CThostFtdcQrySPBMOptionParameterField_ProdFamilyCode, &CThostFtdcQrySPBMOptionParameterField_ProdFamilyCode_length
    )) {
        return -1;
    }

    PyCThostFtdcQrySPBMOptionParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMOptionParameterFieldData>(self);
    CThostFtdcQrySPBMOptionParameterField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQrySPBMOptionParameterField_ExchangeID != NULL ) {
        if(CThostFtdcQrySPBMOptionParameterField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQrySPBMOptionParameterField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQrySPBMOptionParameterField_ExchangeID, CThostFtdcQrySPBMOptionParameterField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQrySPBMOptionParameterField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQrySPBMOptionParameterField_ExchangeID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQrySPBMOptionParameterField_InstrumentID != NULL ) {
        if(CThostFtdcQrySPBMOptionParameterField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQrySPBMOptionParameterField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcQrySPBMOptionParameterField_InstrumentID, CThostFtdcQrySPBMOptionParameterField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcQrySPBMOptionParameterField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcQrySPBMOptionParameterField_InstrumentID = NULL;
    }

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQrySPBMOptionParameterField_ProdFamilyCode != NULL ) {
        if(CThostFtdcQrySPBMOptionParameterField_ProdFamilyCode_length >= (Py_ssize_t)sizeof(data->ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is 80)", CThostFtdcQrySPBMOptionParameterField_ProdFamilyCode_length);
            return -1;
        }
        // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
        // memcpy(data->ProdFamilyCode, CThostFtdcQrySPBMOptionParameterField_ProdFamilyCode, CThostFtdcQrySPBMOptionParameterField_ProdFamilyCode_length);
        strncpy(data->ProdFamilyCode, CThostFtdcQrySPBMOptionParameterField_ProdFamilyCode, sizeof(data->ProdFamilyCode));
        CThostFtdcQrySPBMOptionParameterField_ProdFamilyCode = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQrySPBMOptionParameterFieldType_repr(PyObject *self) {

    PyCThostFtdcQrySPBMOptionParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMOptionParameterFieldData>(self);
    CThostFtdcQrySPBMOptionParameterField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "ProdFamilyCode", data->ProdFamilyCode//, (Py_ssize_t)sizeof(data->ProdFamilyCode)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySPBMOptionParameterField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySPBMOptionParameterField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQrySPBMOptionParameterFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQrySPBMOptionParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMOptionParameterFieldData>(self);
    CThostFtdcQrySPBMOptionParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQrySPBMOptionParameterFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySPBMOptionParameterField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySPBMOptionParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMOptionParameterFieldData>(self);
    CThostFtdcQrySPBMOptionParameterField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQrySPBMOptionParameterFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQrySPBMOptionParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMOptionParameterFieldData>(self);
    CThostFtdcQrySPBMOptionParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcQrySPBMOptionParameterFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySPBMOptionParameterField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySPBMOptionParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMOptionParameterFieldData>(self);
    CThostFtdcQrySPBMOptionParameterField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 品种代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQrySPBMOptionParameterFieldType_get_ProdFamilyCode(PyObject *self, void *closure) {
    PyCThostFtdcQrySPBMOptionParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMOptionParameterFieldData>(self);
    CThostFtdcQrySPBMOptionParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProdFamilyCode, (Py_ssize_t)sizeof(data->ProdFamilyCode));
    return PyBytes_FromString(data->ProdFamilyCode);
}

static int PyCThostFtdcQrySPBMOptionParameterFieldType_set_ProdFamilyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProdFamilyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySPBMOptionParameterField::ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "ProdFamilyCode must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySPBMOptionParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMOptionParameterFieldData>(self);
    CThostFtdcQrySPBMOptionParameterField *data = &(extra->data);
    // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
    // memcpy(data->ProdFamilyCode, buf, len);
    strncpy(data->ProdFamilyCode, buf, sizeof(data->ProdFamilyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQrySPBMOptionParameterFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQrySPBMOptionParameterFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQrySPBMOptionParameterFieldType_get_ExchangeID,
    .set = PyCThostFtdcQrySPBMOptionParameterFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcQrySPBMOptionParameterFieldType_get_InstrumentID,
    .set = PyCThostFtdcQrySPBMOptionParameterFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ProdFamilyCode",
    .get = PyCThostFtdcQrySPBMOptionParameterFieldType_get_ProdFamilyCode,
    .set = PyCThostFtdcQrySPBMOptionParameterFieldType_set_ProdFamilyCode,
    .doc = PyDoc_STR("品种代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQrySPBMOptionParameterFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQrySPBMOptionParameterField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("SPBM期权合约保证金参数查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQrySPBMOptionParameterFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQrySPBMOptionParameterFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQrySPBMOptionParameterFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQrySPBMOptionParameterFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQrySPBMOptionParameterFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQrySPBMOptionParameterFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("SPBM期权合约保证金参数查询")},
    {Py_tp_members, PyCThostFtdcQrySPBMOptionParameterFieldType_members},
    {Py_tp_getset, PyCThostFtdcQrySPBMOptionParameterFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQrySPBMOptionParameterFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQrySPBMOptionParameterFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQrySPBMOptionParameterFieldType_spec = {
    .name = "PyCTP.CThostFtdcQrySPBMOptionParameterField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQrySPBMOptionParameterFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQrySPBMOptionParameterFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQrySPBMOptionParameterFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQrySPBMOptionParameterFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQrySPBMOptionParameterFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQrySPBMOptionParameterFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQrySPBMOptionParameterFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQrySPBMOptionParameterFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQrySPBMOptionParameterField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySPBMOptionParameterField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}