
#include "PyCThostFtdcQryRULEInstrParameterField.h"

///RULE合约保证金参数查询

static int PyCThostFtdcQryRULEInstrParameterFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "InstrumentID", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryRULEInstrParameterField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryRULEInstrParameterField_ExchangeID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryRULEInstrParameterField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcQryRULEInstrParameterField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
        , &CThostFtdcQryRULEInstrParameterField_ExchangeID, &CThostFtdcQryRULEInstrParameterField_ExchangeID_length
        , &CThostFtdcQryRULEInstrParameterField_InstrumentID, &CThostFtdcQryRULEInstrParameterField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryRULEInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRULEInstrParameterFieldData>(self);
    CThostFtdcQryRULEInstrParameterField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryRULEInstrParameterField_ExchangeID != NULL ) {
        if(CThostFtdcQryRULEInstrParameterField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryRULEInstrParameterField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryRULEInstrParameterField_ExchangeID, CThostFtdcQryRULEInstrParameterField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryRULEInstrParameterField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryRULEInstrParameterField_ExchangeID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryRULEInstrParameterField_InstrumentID != NULL ) {
        if(CThostFtdcQryRULEInstrParameterField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQryRULEInstrParameterField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcQryRULEInstrParameterField_InstrumentID, CThostFtdcQryRULEInstrParameterField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcQryRULEInstrParameterField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcQryRULEInstrParameterField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryRULEInstrParameterFieldType_repr(PyObject *self) {

    PyCThostFtdcQryRULEInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRULEInstrParameterFieldData>(self);
    CThostFtdcQryRULEInstrParameterField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryRULEInstrParameterField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryRULEInstrParameterField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryRULEInstrParameterFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryRULEInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRULEInstrParameterFieldData>(self);
    CThostFtdcQryRULEInstrParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryRULEInstrParameterFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryRULEInstrParameterField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryRULEInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRULEInstrParameterFieldData>(self);
    CThostFtdcQryRULEInstrParameterField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryRULEInstrParameterFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQryRULEInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRULEInstrParameterFieldData>(self);
    CThostFtdcQryRULEInstrParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcQryRULEInstrParameterFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryRULEInstrParameterField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryRULEInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRULEInstrParameterFieldData>(self);
    CThostFtdcQryRULEInstrParameterField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryRULEInstrParameterFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryRULEInstrParameterFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryRULEInstrParameterFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryRULEInstrParameterFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcQryRULEInstrParameterFieldType_get_InstrumentID,
    .set = PyCThostFtdcQryRULEInstrParameterFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryRULEInstrParameterFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryRULEInstrParameterField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("RULE合约保证金参数查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryRULEInstrParameterFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryRULEInstrParameterFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryRULEInstrParameterFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryRULEInstrParameterFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryRULEInstrParameterFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryRULEInstrParameterFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("RULE合约保证金参数查询")},
    {Py_tp_members, PyCThostFtdcQryRULEInstrParameterFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryRULEInstrParameterFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryRULEInstrParameterFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryRULEInstrParameterFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryRULEInstrParameterFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryRULEInstrParameterField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryRULEInstrParameterFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryRULEInstrParameterFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryRULEInstrParameterFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryRULEInstrParameterFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryRULEInstrParameterFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryRULEInstrParameterFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryRULEInstrParameterFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryRULEInstrParameterFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryRULEInstrParameterField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryRULEInstrParameterField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}