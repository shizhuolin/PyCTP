
#include "PyCThostFtdcQryRCAMSInstrParameterField.h"

///RCAMS同合约风险对冲参数查询

static int PyCThostFtdcQryRCAMSInstrParameterFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ProductID", NULL };


    /// 产品代码
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcQryRCAMSInstrParameterField_ProductID = NULL;
    Py_ssize_t CThostFtdcQryRCAMSInstrParameterField_ProductID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
        , &CThostFtdcQryRCAMSInstrParameterField_ProductID, &CThostFtdcQryRCAMSInstrParameterField_ProductID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryRCAMSInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSInstrParameterFieldData>(self);
    CThostFtdcQryRCAMSInstrParameterField *data = &(extra->data);


    /// 产品代码
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcQryRCAMSInstrParameterField_ProductID != NULL ) {
        if(CThostFtdcQryRCAMSInstrParameterField_ProductID_length >= (Py_ssize_t)sizeof(data->ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is 40)", CThostFtdcQryRCAMSInstrParameterField_ProductID_length);
            return -1;
        }
        // memset(data->ProductID, 0, sizeof(data->ProductID));
        // memcpy(data->ProductID, CThostFtdcQryRCAMSInstrParameterField_ProductID, CThostFtdcQryRCAMSInstrParameterField_ProductID_length);
        strncpy(data->ProductID, CThostFtdcQryRCAMSInstrParameterField_ProductID, sizeof(data->ProductID));
        CThostFtdcQryRCAMSInstrParameterField_ProductID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryRCAMSInstrParameterFieldType_repr(PyObject *self) {

    PyCThostFtdcQryRCAMSInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSInstrParameterFieldData>(self);
    CThostFtdcQryRCAMSInstrParameterField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y}"
        , "ProductID", data->ProductID//, (Py_ssize_t)sizeof(data->ProductID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryRCAMSInstrParameterField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryRCAMSInstrParameterField repr");
        return NULL;
    }

    return repr;
}


/// 产品代码
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcQryRCAMSInstrParameterFieldType_get_ProductID(PyObject *self, void *closure) {
    PyCThostFtdcQryRCAMSInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSInstrParameterFieldData>(self);
    CThostFtdcQryRCAMSInstrParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductID, (Py_ssize_t)sizeof(data->ProductID));
    return PyBytes_FromString(data->ProductID);
}

static int PyCThostFtdcQryRCAMSInstrParameterFieldType_set_ProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryRCAMSInstrParameterField::ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryRCAMSInstrParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSInstrParameterFieldData>(self);
    CThostFtdcQryRCAMSInstrParameterField *data = &(extra->data);
    // memset(data->ProductID, 0, sizeof(data->ProductID));
    // memcpy(data->ProductID, buf, len);
    strncpy(data->ProductID, buf, sizeof(data->ProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryRCAMSInstrParameterFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryRCAMSInstrParameterFieldType_getsets[] = {
    /// 产品代码
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "ProductID",
    .get = PyCThostFtdcQryRCAMSInstrParameterFieldType_get_ProductID,
    .set = PyCThostFtdcQryRCAMSInstrParameterFieldType_set_ProductID,
    .doc = PyDoc_STR("产品代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryRCAMSInstrParameterFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryRCAMSInstrParameterField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("RCAMS同合约风险对冲参数查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryRCAMSInstrParameterFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryRCAMSInstrParameterFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryRCAMSInstrParameterFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryRCAMSInstrParameterFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryRCAMSInstrParameterFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryRCAMSInstrParameterFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("RCAMS同合约风险对冲参数查询")},
    {Py_tp_members, PyCThostFtdcQryRCAMSInstrParameterFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryRCAMSInstrParameterFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryRCAMSInstrParameterFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryRCAMSInstrParameterFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryRCAMSInstrParameterFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryRCAMSInstrParameterField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryRCAMSInstrParameterFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryRCAMSInstrParameterFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryRCAMSInstrParameterFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryRCAMSInstrParameterFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryRCAMSInstrParameterFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryRCAMSInstrParameterFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryRCAMSInstrParameterFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryRCAMSInstrParameterFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryRCAMSInstrParameterField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryRCAMSInstrParameterField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}