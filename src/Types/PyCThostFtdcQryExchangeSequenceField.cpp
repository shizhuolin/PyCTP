
#include "PyCThostFtdcQryExchangeSequenceField.h"

///查询交易所状态

static int PyCThostFtdcQryExchangeSequenceFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryExchangeSequenceField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryExchangeSequenceField_ExchangeID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
        , &CThostFtdcQryExchangeSequenceField_ExchangeID, &CThostFtdcQryExchangeSequenceField_ExchangeID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryExchangeSequenceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeSequenceFieldData>(self);
    CThostFtdcQryExchangeSequenceField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryExchangeSequenceField_ExchangeID != NULL ) {
        if(CThostFtdcQryExchangeSequenceField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryExchangeSequenceField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryExchangeSequenceField_ExchangeID, CThostFtdcQryExchangeSequenceField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryExchangeSequenceField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryExchangeSequenceField_ExchangeID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryExchangeSequenceFieldType_repr(PyObject *self) {

    PyCThostFtdcQryExchangeSequenceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeSequenceFieldData>(self);
    CThostFtdcQryExchangeSequenceField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExchangeSequenceField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExchangeSequenceField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryExchangeSequenceFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryExchangeSequenceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeSequenceFieldData>(self);
    CThostFtdcQryExchangeSequenceField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryExchangeSequenceFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExchangeSequenceField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExchangeSequenceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeSequenceFieldData>(self);
    CThostFtdcQryExchangeSequenceField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryExchangeSequenceFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryExchangeSequenceFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryExchangeSequenceFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryExchangeSequenceFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryExchangeSequenceFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryExchangeSequenceField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询交易所状态")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryExchangeSequenceFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryExchangeSequenceFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryExchangeSequenceFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryExchangeSequenceFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryExchangeSequenceFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryExchangeSequenceFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询交易所状态")},
    {Py_tp_members, PyCThostFtdcQryExchangeSequenceFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryExchangeSequenceFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryExchangeSequenceFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryExchangeSequenceFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryExchangeSequenceFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryExchangeSequenceField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryExchangeSequenceFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryExchangeSequenceFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryExchangeSequenceFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryExchangeSequenceFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryExchangeSequenceFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryExchangeSequenceFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryExchangeSequenceFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryExchangeSequenceFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryExchangeSequenceField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryExchangeSequenceField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}