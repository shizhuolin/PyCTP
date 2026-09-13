
#include "PyCThostFtdcQryCombLegField.h"

///组合腿信息查询

static int PyCThostFtdcQryCombLegFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "LegInstrumentID", NULL };


    /// 单腿合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryCombLegField_LegInstrumentID = NULL;
    Py_ssize_t CThostFtdcQryCombLegField_LegInstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
        , &CThostFtdcQryCombLegField_LegInstrumentID, &CThostFtdcQryCombLegField_LegInstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryCombLegFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCombLegFieldData>(self);
    CThostFtdcQryCombLegField *data = &(extra->data);


    /// 单腿合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryCombLegField_LegInstrumentID != NULL ) {
        if(CThostFtdcQryCombLegField_LegInstrumentID_length >= (Py_ssize_t)sizeof(data->LegInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "LegInstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQryCombLegField_LegInstrumentID_length);
            return -1;
        }
        // memset(data->LegInstrumentID, 0, sizeof(data->LegInstrumentID));
        // memcpy(data->LegInstrumentID, CThostFtdcQryCombLegField_LegInstrumentID, CThostFtdcQryCombLegField_LegInstrumentID_length);
        strncpy(data->LegInstrumentID, CThostFtdcQryCombLegField_LegInstrumentID, sizeof(data->LegInstrumentID));
        CThostFtdcQryCombLegField_LegInstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryCombLegFieldType_repr(PyObject *self) {

    PyCThostFtdcQryCombLegFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCombLegFieldData>(self);
    CThostFtdcQryCombLegField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y}"
        , "LegInstrumentID", data->LegInstrumentID//, (Py_ssize_t)sizeof(data->LegInstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryCombLegField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryCombLegField repr");
        return NULL;
    }

    return repr;
}


/// 单腿合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryCombLegFieldType_get_LegInstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQryCombLegFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCombLegFieldData>(self);
    CThostFtdcQryCombLegField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LegInstrumentID, (Py_ssize_t)sizeof(data->LegInstrumentID));
    return PyBytes_FromString(data->LegInstrumentID);
}

static int PyCThostFtdcQryCombLegFieldType_set_LegInstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LegInstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryCombLegField::LegInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "LegInstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryCombLegFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCombLegFieldData>(self);
    CThostFtdcQryCombLegField *data = &(extra->data);
    // memset(data->LegInstrumentID, 0, sizeof(data->LegInstrumentID));
    // memcpy(data->LegInstrumentID, buf, len);
    strncpy(data->LegInstrumentID, buf, sizeof(data->LegInstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryCombLegFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryCombLegFieldType_getsets[] = {
    /// 单腿合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "LegInstrumentID",
    .get = PyCThostFtdcQryCombLegFieldType_get_LegInstrumentID,
    .set = PyCThostFtdcQryCombLegFieldType_set_LegInstrumentID,
    .doc = PyDoc_STR("单腿合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryCombLegFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryCombLegField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("组合腿信息查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryCombLegFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryCombLegFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryCombLegFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryCombLegFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryCombLegFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryCombLegFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("组合腿信息查询")},
    {Py_tp_members, PyCThostFtdcQryCombLegFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryCombLegFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryCombLegFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryCombLegFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryCombLegFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryCombLegField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryCombLegFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryCombLegFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryCombLegFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryCombLegFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryCombLegFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryCombLegFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryCombLegFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryCombLegFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryCombLegField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryCombLegField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}