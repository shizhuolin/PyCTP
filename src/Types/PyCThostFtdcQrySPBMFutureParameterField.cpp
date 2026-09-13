
#include "PyCThostFtdcQrySPBMFutureParameterField.h"

///SPBM期货合约保证金参数查询

static int PyCThostFtdcQrySPBMFutureParameterFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "InstrumentID", "ProdFamilyCode", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQrySPBMFutureParameterField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQrySPBMFutureParameterField_ExchangeID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQrySPBMFutureParameterField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcQrySPBMFutureParameterField_InstrumentID_length = 0;

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQrySPBMFutureParameterField_ProdFamilyCode = NULL;
    Py_ssize_t CThostFtdcQrySPBMFutureParameterField_ProdFamilyCode_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcQrySPBMFutureParameterField_ExchangeID, &CThostFtdcQrySPBMFutureParameterField_ExchangeID_length
        , &CThostFtdcQrySPBMFutureParameterField_InstrumentID, &CThostFtdcQrySPBMFutureParameterField_InstrumentID_length
        , &CThostFtdcQrySPBMFutureParameterField_ProdFamilyCode, &CThostFtdcQrySPBMFutureParameterField_ProdFamilyCode_length
    )) {
        return -1;
    }

    PyCThostFtdcQrySPBMFutureParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMFutureParameterFieldData>(self);
    CThostFtdcQrySPBMFutureParameterField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQrySPBMFutureParameterField_ExchangeID != NULL ) {
        if(CThostFtdcQrySPBMFutureParameterField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQrySPBMFutureParameterField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQrySPBMFutureParameterField_ExchangeID, CThostFtdcQrySPBMFutureParameterField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQrySPBMFutureParameterField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQrySPBMFutureParameterField_ExchangeID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQrySPBMFutureParameterField_InstrumentID != NULL ) {
        if(CThostFtdcQrySPBMFutureParameterField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQrySPBMFutureParameterField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcQrySPBMFutureParameterField_InstrumentID, CThostFtdcQrySPBMFutureParameterField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcQrySPBMFutureParameterField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcQrySPBMFutureParameterField_InstrumentID = NULL;
    }

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQrySPBMFutureParameterField_ProdFamilyCode != NULL ) {
        if(CThostFtdcQrySPBMFutureParameterField_ProdFamilyCode_length >= (Py_ssize_t)sizeof(data->ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is 80)", CThostFtdcQrySPBMFutureParameterField_ProdFamilyCode_length);
            return -1;
        }
        // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
        // memcpy(data->ProdFamilyCode, CThostFtdcQrySPBMFutureParameterField_ProdFamilyCode, CThostFtdcQrySPBMFutureParameterField_ProdFamilyCode_length);
        strncpy(data->ProdFamilyCode, CThostFtdcQrySPBMFutureParameterField_ProdFamilyCode, sizeof(data->ProdFamilyCode));
        CThostFtdcQrySPBMFutureParameterField_ProdFamilyCode = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQrySPBMFutureParameterFieldType_repr(PyObject *self) {

    PyCThostFtdcQrySPBMFutureParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMFutureParameterFieldData>(self);
    CThostFtdcQrySPBMFutureParameterField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "ProdFamilyCode", data->ProdFamilyCode//, (Py_ssize_t)sizeof(data->ProdFamilyCode)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySPBMFutureParameterField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySPBMFutureParameterField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQrySPBMFutureParameterFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQrySPBMFutureParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMFutureParameterFieldData>(self);
    CThostFtdcQrySPBMFutureParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQrySPBMFutureParameterFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySPBMFutureParameterField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySPBMFutureParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMFutureParameterFieldData>(self);
    CThostFtdcQrySPBMFutureParameterField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQrySPBMFutureParameterFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQrySPBMFutureParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMFutureParameterFieldData>(self);
    CThostFtdcQrySPBMFutureParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcQrySPBMFutureParameterFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySPBMFutureParameterField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySPBMFutureParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMFutureParameterFieldData>(self);
    CThostFtdcQrySPBMFutureParameterField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 品种代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQrySPBMFutureParameterFieldType_get_ProdFamilyCode(PyObject *self, void *closure) {
    PyCThostFtdcQrySPBMFutureParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMFutureParameterFieldData>(self);
    CThostFtdcQrySPBMFutureParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProdFamilyCode, (Py_ssize_t)sizeof(data->ProdFamilyCode));
    return PyBytes_FromString(data->ProdFamilyCode);
}

static int PyCThostFtdcQrySPBMFutureParameterFieldType_set_ProdFamilyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProdFamilyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySPBMFutureParameterField::ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "ProdFamilyCode must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySPBMFutureParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMFutureParameterFieldData>(self);
    CThostFtdcQrySPBMFutureParameterField *data = &(extra->data);
    // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
    // memcpy(data->ProdFamilyCode, buf, len);
    strncpy(data->ProdFamilyCode, buf, sizeof(data->ProdFamilyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQrySPBMFutureParameterFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQrySPBMFutureParameterFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQrySPBMFutureParameterFieldType_get_ExchangeID,
    .set = PyCThostFtdcQrySPBMFutureParameterFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcQrySPBMFutureParameterFieldType_get_InstrumentID,
    .set = PyCThostFtdcQrySPBMFutureParameterFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ProdFamilyCode",
    .get = PyCThostFtdcQrySPBMFutureParameterFieldType_get_ProdFamilyCode,
    .set = PyCThostFtdcQrySPBMFutureParameterFieldType_set_ProdFamilyCode,
    .doc = PyDoc_STR("品种代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQrySPBMFutureParameterFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQrySPBMFutureParameterField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("SPBM期货合约保证金参数查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQrySPBMFutureParameterFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQrySPBMFutureParameterFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQrySPBMFutureParameterFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQrySPBMFutureParameterFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQrySPBMFutureParameterFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQrySPBMFutureParameterFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("SPBM期货合约保证金参数查询")},
    {Py_tp_members, PyCThostFtdcQrySPBMFutureParameterFieldType_members},
    {Py_tp_getset, PyCThostFtdcQrySPBMFutureParameterFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQrySPBMFutureParameterFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQrySPBMFutureParameterFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQrySPBMFutureParameterFieldType_spec = {
    .name = "PyCTP.CThostFtdcQrySPBMFutureParameterField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQrySPBMFutureParameterFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQrySPBMFutureParameterFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQrySPBMFutureParameterFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQrySPBMFutureParameterFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQrySPBMFutureParameterFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQrySPBMFutureParameterFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQrySPBMFutureParameterFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQrySPBMFutureParameterFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQrySPBMFutureParameterField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySPBMFutureParameterField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}