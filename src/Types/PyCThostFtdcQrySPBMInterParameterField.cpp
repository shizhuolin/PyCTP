
#include "PyCThostFtdcQrySPBMInterParameterField.h"

///SPBM跨品种抵扣参数查询

static int PyCThostFtdcQrySPBMInterParameterFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "Leg1ProdFamilyCode", "Leg2ProdFamilyCode", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQrySPBMInterParameterField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQrySPBMInterParameterField_ExchangeID_length = 0;

    /// 第一腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQrySPBMInterParameterField_Leg1ProdFamilyCode = NULL;
    Py_ssize_t CThostFtdcQrySPBMInterParameterField_Leg1ProdFamilyCode_length = 0;

    /// 第二腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQrySPBMInterParameterField_Leg2ProdFamilyCode = NULL;
    Py_ssize_t CThostFtdcQrySPBMInterParameterField_Leg2ProdFamilyCode_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcQrySPBMInterParameterField_ExchangeID, &CThostFtdcQrySPBMInterParameterField_ExchangeID_length
        , &CThostFtdcQrySPBMInterParameterField_Leg1ProdFamilyCode, &CThostFtdcQrySPBMInterParameterField_Leg1ProdFamilyCode_length
        , &CThostFtdcQrySPBMInterParameterField_Leg2ProdFamilyCode, &CThostFtdcQrySPBMInterParameterField_Leg2ProdFamilyCode_length
    )) {
        return -1;
    }

    PyCThostFtdcQrySPBMInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMInterParameterFieldData>(self);
    CThostFtdcQrySPBMInterParameterField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQrySPBMInterParameterField_ExchangeID != NULL ) {
        if(CThostFtdcQrySPBMInterParameterField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQrySPBMInterParameterField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQrySPBMInterParameterField_ExchangeID, CThostFtdcQrySPBMInterParameterField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQrySPBMInterParameterField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQrySPBMInterParameterField_ExchangeID = NULL;
    }

    /// 第一腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQrySPBMInterParameterField_Leg1ProdFamilyCode != NULL ) {
        if(CThostFtdcQrySPBMInterParameterField_Leg1ProdFamilyCode_length >= (Py_ssize_t)sizeof(data->Leg1ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "Leg1ProdFamilyCode too long: length=%zd (max allowed is 80)", CThostFtdcQrySPBMInterParameterField_Leg1ProdFamilyCode_length);
            return -1;
        }
        // memset(data->Leg1ProdFamilyCode, 0, sizeof(data->Leg1ProdFamilyCode));
        // memcpy(data->Leg1ProdFamilyCode, CThostFtdcQrySPBMInterParameterField_Leg1ProdFamilyCode, CThostFtdcQrySPBMInterParameterField_Leg1ProdFamilyCode_length);
        strncpy(data->Leg1ProdFamilyCode, CThostFtdcQrySPBMInterParameterField_Leg1ProdFamilyCode, sizeof(data->Leg1ProdFamilyCode));
        CThostFtdcQrySPBMInterParameterField_Leg1ProdFamilyCode = NULL;
    }

    /// 第二腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQrySPBMInterParameterField_Leg2ProdFamilyCode != NULL ) {
        if(CThostFtdcQrySPBMInterParameterField_Leg2ProdFamilyCode_length >= (Py_ssize_t)sizeof(data->Leg2ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "Leg2ProdFamilyCode too long: length=%zd (max allowed is 80)", CThostFtdcQrySPBMInterParameterField_Leg2ProdFamilyCode_length);
            return -1;
        }
        // memset(data->Leg2ProdFamilyCode, 0, sizeof(data->Leg2ProdFamilyCode));
        // memcpy(data->Leg2ProdFamilyCode, CThostFtdcQrySPBMInterParameterField_Leg2ProdFamilyCode, CThostFtdcQrySPBMInterParameterField_Leg2ProdFamilyCode_length);
        strncpy(data->Leg2ProdFamilyCode, CThostFtdcQrySPBMInterParameterField_Leg2ProdFamilyCode, sizeof(data->Leg2ProdFamilyCode));
        CThostFtdcQrySPBMInterParameterField_Leg2ProdFamilyCode = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQrySPBMInterParameterFieldType_repr(PyObject *self) {

    PyCThostFtdcQrySPBMInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMInterParameterFieldData>(self);
    CThostFtdcQrySPBMInterParameterField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "Leg1ProdFamilyCode", data->Leg1ProdFamilyCode//, (Py_ssize_t)sizeof(data->Leg1ProdFamilyCode)
        , "Leg2ProdFamilyCode", data->Leg2ProdFamilyCode//, (Py_ssize_t)sizeof(data->Leg2ProdFamilyCode)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySPBMInterParameterField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySPBMInterParameterField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQrySPBMInterParameterFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQrySPBMInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMInterParameterFieldData>(self);
    CThostFtdcQrySPBMInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQrySPBMInterParameterFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySPBMInterParameterField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySPBMInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMInterParameterFieldData>(self);
    CThostFtdcQrySPBMInterParameterField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 第一腿构成品种
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQrySPBMInterParameterFieldType_get_Leg1ProdFamilyCode(PyObject *self, void *closure) {
    PyCThostFtdcQrySPBMInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMInterParameterFieldData>(self);
    CThostFtdcQrySPBMInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Leg1ProdFamilyCode, (Py_ssize_t)sizeof(data->Leg1ProdFamilyCode));
    return PyBytes_FromString(data->Leg1ProdFamilyCode);
}

static int PyCThostFtdcQrySPBMInterParameterFieldType_set_Leg1ProdFamilyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Leg1ProdFamilyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySPBMInterParameterField::Leg1ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "Leg1ProdFamilyCode must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySPBMInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMInterParameterFieldData>(self);
    CThostFtdcQrySPBMInterParameterField *data = &(extra->data);
    // memset(data->Leg1ProdFamilyCode, 0, sizeof(data->Leg1ProdFamilyCode));
    // memcpy(data->Leg1ProdFamilyCode, buf, len);
    strncpy(data->Leg1ProdFamilyCode, buf, sizeof(data->Leg1ProdFamilyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 第二腿构成品种
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQrySPBMInterParameterFieldType_get_Leg2ProdFamilyCode(PyObject *self, void *closure) {
    PyCThostFtdcQrySPBMInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMInterParameterFieldData>(self);
    CThostFtdcQrySPBMInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Leg2ProdFamilyCode, (Py_ssize_t)sizeof(data->Leg2ProdFamilyCode));
    return PyBytes_FromString(data->Leg2ProdFamilyCode);
}

static int PyCThostFtdcQrySPBMInterParameterFieldType_set_Leg2ProdFamilyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Leg2ProdFamilyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySPBMInterParameterField::Leg2ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "Leg2ProdFamilyCode must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySPBMInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMInterParameterFieldData>(self);
    CThostFtdcQrySPBMInterParameterField *data = &(extra->data);
    // memset(data->Leg2ProdFamilyCode, 0, sizeof(data->Leg2ProdFamilyCode));
    // memcpy(data->Leg2ProdFamilyCode, buf, len);
    strncpy(data->Leg2ProdFamilyCode, buf, sizeof(data->Leg2ProdFamilyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQrySPBMInterParameterFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQrySPBMInterParameterFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQrySPBMInterParameterFieldType_get_ExchangeID,
    .set = PyCThostFtdcQrySPBMInterParameterFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 第一腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "Leg1ProdFamilyCode",
    .get = PyCThostFtdcQrySPBMInterParameterFieldType_get_Leg1ProdFamilyCode,
    .set = PyCThostFtdcQrySPBMInterParameterFieldType_set_Leg1ProdFamilyCode,
    .doc = PyDoc_STR("第一腿构成品种"),
    },
    /// 第二腿构成品种
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "Leg2ProdFamilyCode",
    .get = PyCThostFtdcQrySPBMInterParameterFieldType_get_Leg2ProdFamilyCode,
    .set = PyCThostFtdcQrySPBMInterParameterFieldType_set_Leg2ProdFamilyCode,
    .doc = PyDoc_STR("第二腿构成品种"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQrySPBMInterParameterFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQrySPBMInterParameterField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("SPBM跨品种抵扣参数查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQrySPBMInterParameterFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQrySPBMInterParameterFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQrySPBMInterParameterFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQrySPBMInterParameterFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQrySPBMInterParameterFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQrySPBMInterParameterFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("SPBM跨品种抵扣参数查询")},
    {Py_tp_members, PyCThostFtdcQrySPBMInterParameterFieldType_members},
    {Py_tp_getset, PyCThostFtdcQrySPBMInterParameterFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQrySPBMInterParameterFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQrySPBMInterParameterFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQrySPBMInterParameterFieldType_spec = {
    .name = "PyCTP.CThostFtdcQrySPBMInterParameterField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQrySPBMInterParameterFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQrySPBMInterParameterFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQrySPBMInterParameterFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQrySPBMInterParameterFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQrySPBMInterParameterFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQrySPBMInterParameterFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQrySPBMInterParameterFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQrySPBMInterParameterFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQrySPBMInterParameterField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySPBMInterParameterField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}