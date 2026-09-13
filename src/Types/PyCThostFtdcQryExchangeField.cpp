
#include "PyCThostFtdcQryExchangeField.h"

///查询交易所

static int PyCThostFtdcQryExchangeFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryExchangeField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryExchangeField_ExchangeID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
        , &CThostFtdcQryExchangeField_ExchangeID, &CThostFtdcQryExchangeField_ExchangeID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryExchangeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeFieldData>(self);
    CThostFtdcQryExchangeField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryExchangeField_ExchangeID != NULL ) {
        if(CThostFtdcQryExchangeField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryExchangeField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryExchangeField_ExchangeID, CThostFtdcQryExchangeField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryExchangeField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryExchangeField_ExchangeID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryExchangeFieldType_repr(PyObject *self) {

    PyCThostFtdcQryExchangeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeFieldData>(self);
    CThostFtdcQryExchangeField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExchangeField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExchangeField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryExchangeFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryExchangeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeFieldData>(self);
    CThostFtdcQryExchangeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryExchangeFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExchangeField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExchangeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeFieldData>(self);
    CThostFtdcQryExchangeField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryExchangeFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryExchangeFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryExchangeFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryExchangeFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryExchangeFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryExchangeField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询交易所")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryExchangeFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryExchangeFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryExchangeFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryExchangeFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryExchangeFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryExchangeFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询交易所")},
    {Py_tp_members, PyCThostFtdcQryExchangeFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryExchangeFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryExchangeFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryExchangeFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryExchangeFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryExchangeField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryExchangeFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryExchangeFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryExchangeFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryExchangeFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryExchangeFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryExchangeFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryExchangeFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryExchangeFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryExchangeField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryExchangeField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}