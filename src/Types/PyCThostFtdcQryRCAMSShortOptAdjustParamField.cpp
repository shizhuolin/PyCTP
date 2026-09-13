
#include "PyCThostFtdcQryRCAMSShortOptAdjustParamField.h"

///RCAMS空头期权风险调整参数查询

static int PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "CombProductID", NULL };


    /// 产品组合代码
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcQryRCAMSShortOptAdjustParamField_CombProductID = NULL;
    Py_ssize_t CThostFtdcQryRCAMSShortOptAdjustParamField_CombProductID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
        , &CThostFtdcQryRCAMSShortOptAdjustParamField_CombProductID, &CThostFtdcQryRCAMSShortOptAdjustParamField_CombProductID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryRCAMSShortOptAdjustParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSShortOptAdjustParamFieldData>(self);
    CThostFtdcQryRCAMSShortOptAdjustParamField *data = &(extra->data);


    /// 产品组合代码
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcQryRCAMSShortOptAdjustParamField_CombProductID != NULL ) {
        if(CThostFtdcQryRCAMSShortOptAdjustParamField_CombProductID_length >= (Py_ssize_t)sizeof(data->CombProductID)) {
            PyErr_Format(PyExc_ValueError, "CombProductID too long: length=%zd (max allowed is 40)", CThostFtdcQryRCAMSShortOptAdjustParamField_CombProductID_length);
            return -1;
        }
        // memset(data->CombProductID, 0, sizeof(data->CombProductID));
        // memcpy(data->CombProductID, CThostFtdcQryRCAMSShortOptAdjustParamField_CombProductID, CThostFtdcQryRCAMSShortOptAdjustParamField_CombProductID_length);
        strncpy(data->CombProductID, CThostFtdcQryRCAMSShortOptAdjustParamField_CombProductID, sizeof(data->CombProductID));
        CThostFtdcQryRCAMSShortOptAdjustParamField_CombProductID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType_repr(PyObject *self) {

    PyCThostFtdcQryRCAMSShortOptAdjustParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSShortOptAdjustParamFieldData>(self);
    CThostFtdcQryRCAMSShortOptAdjustParamField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y}"
        , "CombProductID", data->CombProductID//, (Py_ssize_t)sizeof(data->CombProductID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryRCAMSShortOptAdjustParamField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryRCAMSShortOptAdjustParamField repr");
        return NULL;
    }

    return repr;
}


/// 产品组合代码
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType_get_CombProductID(PyObject *self, void *closure) {
    PyCThostFtdcQryRCAMSShortOptAdjustParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSShortOptAdjustParamFieldData>(self);
    CThostFtdcQryRCAMSShortOptAdjustParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombProductID, (Py_ssize_t)sizeof(data->CombProductID));
    return PyBytes_FromString(data->CombProductID);
}

static int PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType_set_CombProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryRCAMSShortOptAdjustParamField::CombProductID)) {
        PyErr_SetString(PyExc_ValueError, "CombProductID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryRCAMSShortOptAdjustParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSShortOptAdjustParamFieldData>(self);
    CThostFtdcQryRCAMSShortOptAdjustParamField *data = &(extra->data);
    // memset(data->CombProductID, 0, sizeof(data->CombProductID));
    // memcpy(data->CombProductID, buf, len);
    strncpy(data->CombProductID, buf, sizeof(data->CombProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType_getsets[] = {
    /// 产品组合代码
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "CombProductID",
    .get = PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType_get_CombProductID,
    .set = PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType_set_CombProductID,
    .doc = PyDoc_STR("产品组合代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryRCAMSShortOptAdjustParamField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("RCAMS空头期权风险调整参数查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryRCAMSShortOptAdjustParamFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("RCAMS空头期权风险调整参数查询")},
    {Py_tp_members, PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryRCAMSShortOptAdjustParamField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryRCAMSShortOptAdjustParamFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryRCAMSShortOptAdjustParamFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryRCAMSShortOptAdjustParamField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryRCAMSShortOptAdjustParamField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}