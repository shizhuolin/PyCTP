
#include "PyCThostFtdcQrySPMMInstParamField.h"

///SPMM合约参数查询

static int PyCThostFtdcQrySPMMInstParamFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "InstrumentID", NULL };


    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQrySPMMInstParamField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcQrySPMMInstParamField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
        , &CThostFtdcQrySPMMInstParamField_InstrumentID, &CThostFtdcQrySPMMInstParamField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcQrySPMMInstParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPMMInstParamFieldData>(self);
    CThostFtdcQrySPMMInstParamField *data = &(extra->data);


    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQrySPMMInstParamField_InstrumentID != NULL ) {
        if(CThostFtdcQrySPMMInstParamField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQrySPMMInstParamField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcQrySPMMInstParamField_InstrumentID, CThostFtdcQrySPMMInstParamField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcQrySPMMInstParamField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcQrySPMMInstParamField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQrySPMMInstParamFieldType_repr(PyObject *self) {

    PyCThostFtdcQrySPMMInstParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPMMInstParamFieldData>(self);
    CThostFtdcQrySPMMInstParamField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y}"
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySPMMInstParamField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySPMMInstParamField repr");
        return NULL;
    }

    return repr;
}


/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQrySPMMInstParamFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQrySPMMInstParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPMMInstParamFieldData>(self);
    CThostFtdcQrySPMMInstParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcQrySPMMInstParamFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySPMMInstParamField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySPMMInstParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPMMInstParamFieldData>(self);
    CThostFtdcQrySPMMInstParamField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQrySPMMInstParamFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQrySPMMInstParamFieldType_getsets[] = {
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcQrySPMMInstParamFieldType_get_InstrumentID,
    .set = PyCThostFtdcQrySPMMInstParamFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQrySPMMInstParamFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQrySPMMInstParamField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("SPMM合约参数查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQrySPMMInstParamFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQrySPMMInstParamFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQrySPMMInstParamFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQrySPMMInstParamFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQrySPMMInstParamFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQrySPMMInstParamFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("SPMM合约参数查询")},
    {Py_tp_members, PyCThostFtdcQrySPMMInstParamFieldType_members},
    {Py_tp_getset, PyCThostFtdcQrySPMMInstParamFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQrySPMMInstParamFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQrySPMMInstParamFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQrySPMMInstParamFieldType_spec = {
    .name = "PyCTP.CThostFtdcQrySPMMInstParamField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQrySPMMInstParamFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQrySPMMInstParamFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQrySPMMInstParamFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQrySPMMInstParamFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQrySPMMInstParamFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQrySPMMInstParamFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQrySPMMInstParamFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQrySPMMInstParamFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQrySPMMInstParamField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySPMMInstParamField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}