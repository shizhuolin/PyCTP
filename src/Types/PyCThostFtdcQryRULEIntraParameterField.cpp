
#include "PyCThostFtdcQryRULEIntraParameterField.h"

///RULE品种内对锁仓折扣参数查询

static int PyCThostFtdcQryRULEIntraParameterFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "ProdFamilyCode", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryRULEIntraParameterField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryRULEIntraParameterField_ExchangeID_length = 0;

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryRULEIntraParameterField_ProdFamilyCode = NULL;
    Py_ssize_t CThostFtdcQryRULEIntraParameterField_ProdFamilyCode_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
        , &CThostFtdcQryRULEIntraParameterField_ExchangeID, &CThostFtdcQryRULEIntraParameterField_ExchangeID_length
        , &CThostFtdcQryRULEIntraParameterField_ProdFamilyCode, &CThostFtdcQryRULEIntraParameterField_ProdFamilyCode_length
    )) {
        return -1;
    }

    PyCThostFtdcQryRULEIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRULEIntraParameterFieldData>(self);
    CThostFtdcQryRULEIntraParameterField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryRULEIntraParameterField_ExchangeID != NULL ) {
        if(CThostFtdcQryRULEIntraParameterField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryRULEIntraParameterField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryRULEIntraParameterField_ExchangeID, CThostFtdcQryRULEIntraParameterField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryRULEIntraParameterField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryRULEIntraParameterField_ExchangeID = NULL;
    }

    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryRULEIntraParameterField_ProdFamilyCode != NULL ) {
        if(CThostFtdcQryRULEIntraParameterField_ProdFamilyCode_length >= (Py_ssize_t)sizeof(data->ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is 80)", CThostFtdcQryRULEIntraParameterField_ProdFamilyCode_length);
            return -1;
        }
        // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
        // memcpy(data->ProdFamilyCode, CThostFtdcQryRULEIntraParameterField_ProdFamilyCode, CThostFtdcQryRULEIntraParameterField_ProdFamilyCode_length);
        strncpy(data->ProdFamilyCode, CThostFtdcQryRULEIntraParameterField_ProdFamilyCode, sizeof(data->ProdFamilyCode));
        CThostFtdcQryRULEIntraParameterField_ProdFamilyCode = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryRULEIntraParameterFieldType_repr(PyObject *self) {

    PyCThostFtdcQryRULEIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRULEIntraParameterFieldData>(self);
    CThostFtdcQryRULEIntraParameterField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ProdFamilyCode", data->ProdFamilyCode//, (Py_ssize_t)sizeof(data->ProdFamilyCode)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryRULEIntraParameterField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryRULEIntraParameterField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryRULEIntraParameterFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryRULEIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRULEIntraParameterFieldData>(self);
    CThostFtdcQryRULEIntraParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryRULEIntraParameterFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryRULEIntraParameterField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryRULEIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRULEIntraParameterFieldData>(self);
    CThostFtdcQryRULEIntraParameterField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 品种代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryRULEIntraParameterFieldType_get_ProdFamilyCode(PyObject *self, void *closure) {
    PyCThostFtdcQryRULEIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRULEIntraParameterFieldData>(self);
    CThostFtdcQryRULEIntraParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProdFamilyCode, (Py_ssize_t)sizeof(data->ProdFamilyCode));
    return PyBytes_FromString(data->ProdFamilyCode);
}

static int PyCThostFtdcQryRULEIntraParameterFieldType_set_ProdFamilyCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProdFamilyCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryRULEIntraParameterField::ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "ProdFamilyCode must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryRULEIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRULEIntraParameterFieldData>(self);
    CThostFtdcQryRULEIntraParameterField *data = &(extra->data);
    // memset(data->ProdFamilyCode, 0, sizeof(data->ProdFamilyCode));
    // memcpy(data->ProdFamilyCode, buf, len);
    strncpy(data->ProdFamilyCode, buf, sizeof(data->ProdFamilyCode));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryRULEIntraParameterFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryRULEIntraParameterFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryRULEIntraParameterFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryRULEIntraParameterFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 品种代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ProdFamilyCode",
    .get = PyCThostFtdcQryRULEIntraParameterFieldType_get_ProdFamilyCode,
    .set = PyCThostFtdcQryRULEIntraParameterFieldType_set_ProdFamilyCode,
    .doc = PyDoc_STR("品种代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryRULEIntraParameterFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryRULEIntraParameterField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("RULE品种内对锁仓折扣参数查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryRULEIntraParameterFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryRULEIntraParameterFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryRULEIntraParameterFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryRULEIntraParameterFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryRULEIntraParameterFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryRULEIntraParameterFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("RULE品种内对锁仓折扣参数查询")},
    {Py_tp_members, PyCThostFtdcQryRULEIntraParameterFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryRULEIntraParameterFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryRULEIntraParameterFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryRULEIntraParameterFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryRULEIntraParameterFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryRULEIntraParameterField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryRULEIntraParameterFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryRULEIntraParameterFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryRULEIntraParameterFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryRULEIntraParameterFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryRULEIntraParameterFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryRULEIntraParameterFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryRULEIntraParameterFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryRULEIntraParameterFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryRULEIntraParameterField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryRULEIntraParameterField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}