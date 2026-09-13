
#include "PyCThostFtdcQrySPBMIntraParameterField.h"

///SPBM品种内对锁仓折扣参数查询

static int PyCThostFtdcQrySPBMIntraParameterFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "ProdFamilyCode", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQrySPBMIntraParameterField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQrySPBMIntraParameterField_ExchangeID_length = 0;

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQrySPBMIntraParameterField_ProdFamilyCode = NULL;
    Py_ssize_t CThostFtdcQrySPBMIntraParameterField_ProdFamilyCode_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
        , &CThostFtdcQrySPBMIntraParameterField_ExchangeID, &CThostFtdcQrySPBMIntraParameterField_ExchangeID_length
        , &CThostFtdcQrySPBMIntraParameterField_ProdFamilyCode, &CThostFtdcQrySPBMIntraParameterField_ProdFamilyCode_length
    )) {
        return -1;
    }

    PyCThostFtdcQrySPBMIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMIntraParameterFieldData>(self);
    CThostFtdcQrySPBMIntraParameterField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQrySPBMIntraParameterField_ExchangeID != NULL ) {
        if(CThostFtdcQrySPBMIntraParameterField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQrySPBMIntraParameterField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQrySPBMIntraParameterField_ExchangeID, CThostFtdcQrySPBMIntraParameterField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQrySPBMIntraParameterField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQrySPBMIntraParameterField_ExchangeID = NULL;
    }

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQrySPBMIntraParameterField_ProdFamilyCode != NULL ) {
        if(CThostFtdcQrySPBMIntraParameterField_ProdFamilyCode_length >= (Py_ssize_t)sizeof(data->ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is 80)", CThostFtdcQrySPBMIntraParameterField_ProdFamilyCode_length);
            return -1;
        }
        // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
        // memcpy(data->ProdFamilyCode, CThostFtdcQrySPBMIntraParameterField_ProdFamilyCode, CThostFtdcQrySPBMIntraParameterField_ProdFamilyCode_length);
        strncpy(data->ProdFamilyCode, CThostFtdcQrySPBMIntraParameterField_ProdFamilyCode, sizeof(data->ProdFamilyCode));
        CThostFtdcQrySPBMIntraParameterField_ProdFamilyCode = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQrySPBMIntraParameterFieldType_repr(PyObject *self) {

    PyCThostFtdcQrySPBMIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMIntraParameterFieldData>(self);
    CThostFtdcQrySPBMIntraParameterField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ProdFamilyCode", data->ProdFamilyCode//, (Py_ssize_t)sizeof(data->ProdFamilyCode)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySPBMIntraParameterField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySPBMIntraParameterField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQrySPBMIntraParameterFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQrySPBMIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMIntraParameterFieldData>(self);
    CThostFtdcQrySPBMIntraParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQrySPBMIntraParameterFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySPBMIntraParameterField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySPBMIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMIntraParameterFieldData>(self);
    CThostFtdcQrySPBMIntraParameterField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 品种代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQrySPBMIntraParameterFieldType_get_ProdFamilyCode(PyObject *self, void *closure) {
    PyCThostFtdcQrySPBMIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMIntraParameterFieldData>(self);
    CThostFtdcQrySPBMIntraParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProdFamilyCode, (Py_ssize_t)sizeof(data->ProdFamilyCode));
    return PyBytes_FromString(data->ProdFamilyCode);
}

static int PyCThostFtdcQrySPBMIntraParameterFieldType_set_ProdFamilyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProdFamilyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySPBMIntraParameterField::ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "ProdFamilyCode must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySPBMIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMIntraParameterFieldData>(self);
    CThostFtdcQrySPBMIntraParameterField *data = &(extra->data);
    // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
    // memcpy(data->ProdFamilyCode, buf, len);
    strncpy(data->ProdFamilyCode, buf, sizeof(data->ProdFamilyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQrySPBMIntraParameterFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQrySPBMIntraParameterFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQrySPBMIntraParameterFieldType_get_ExchangeID,
    .set = PyCThostFtdcQrySPBMIntraParameterFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ProdFamilyCode",
    .get = PyCThostFtdcQrySPBMIntraParameterFieldType_get_ProdFamilyCode,
    .set = PyCThostFtdcQrySPBMIntraParameterFieldType_set_ProdFamilyCode,
    .doc = PyDoc_STR("品种代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQrySPBMIntraParameterFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQrySPBMIntraParameterField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("SPBM品种内对锁仓折扣参数查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQrySPBMIntraParameterFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQrySPBMIntraParameterFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQrySPBMIntraParameterFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQrySPBMIntraParameterFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQrySPBMIntraParameterFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQrySPBMIntraParameterFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("SPBM品种内对锁仓折扣参数查询")},
    {Py_tp_members, PyCThostFtdcQrySPBMIntraParameterFieldType_members},
    {Py_tp_getset, PyCThostFtdcQrySPBMIntraParameterFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQrySPBMIntraParameterFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQrySPBMIntraParameterFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQrySPBMIntraParameterFieldType_spec = {
    .name = "PyCTP.CThostFtdcQrySPBMIntraParameterField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQrySPBMIntraParameterFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQrySPBMIntraParameterFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQrySPBMIntraParameterFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQrySPBMIntraParameterFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQrySPBMIntraParameterFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQrySPBMIntraParameterFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQrySPBMIntraParameterFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQrySPBMIntraParameterFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQrySPBMIntraParameterField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySPBMIntraParameterField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}