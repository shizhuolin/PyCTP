
#include "PyCThostFtdcQryRCAMSIntraParameterField.h"

///RCAMS品种内风险对冲参数查询

static int PyCThostFtdcQryRCAMSIntraParameterFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "CombProductID", NULL };


    /// 产品组合代码
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcQryRCAMSIntraParameterField_CombProductID = NULL;
    Py_ssize_t CThostFtdcQryRCAMSIntraParameterField_CombProductID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
        , &CThostFtdcQryRCAMSIntraParameterField_CombProductID, &CThostFtdcQryRCAMSIntraParameterField_CombProductID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryRCAMSIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSIntraParameterFieldData>(self);
    CThostFtdcQryRCAMSIntraParameterField *data = &(extra->data);


    /// 产品组合代码
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcQryRCAMSIntraParameterField_CombProductID != NULL ) {
        if(CThostFtdcQryRCAMSIntraParameterField_CombProductID_length >= (Py_ssize_t)sizeof(data->CombProductID)) {
            PyErr_Format(PyExc_ValueError, "CombProductID too long: length=%zd (max allowed is 40)", CThostFtdcQryRCAMSIntraParameterField_CombProductID_length);
            return -1;
        }
        // memset(data->CombProductID, 0, sizeof(data->CombProductID));
        // memcpy(data->CombProductID, CThostFtdcQryRCAMSIntraParameterField_CombProductID, CThostFtdcQryRCAMSIntraParameterField_CombProductID_length);
        strncpy(data->CombProductID, CThostFtdcQryRCAMSIntraParameterField_CombProductID, sizeof(data->CombProductID));
        CThostFtdcQryRCAMSIntraParameterField_CombProductID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryRCAMSIntraParameterFieldType_repr(PyObject *self) {

    PyCThostFtdcQryRCAMSIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSIntraParameterFieldData>(self);
    CThostFtdcQryRCAMSIntraParameterField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y}"
        , "CombProductID", data->CombProductID//, (Py_ssize_t)sizeof(data->CombProductID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryRCAMSIntraParameterField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryRCAMSIntraParameterField repr");
        return NULL;
    }

    return repr;
}


/// 产品组合代码
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcQryRCAMSIntraParameterFieldType_get_CombProductID(PyObject *self, void *closure) {
    PyCThostFtdcQryRCAMSIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSIntraParameterFieldData>(self);
    CThostFtdcQryRCAMSIntraParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombProductID, (Py_ssize_t)sizeof(data->CombProductID));
    return PyBytes_FromString(data->CombProductID);
}

static int PyCThostFtdcQryRCAMSIntraParameterFieldType_set_CombProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryRCAMSIntraParameterField::CombProductID)) {
        PyErr_SetString(PyExc_ValueError, "CombProductID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryRCAMSIntraParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSIntraParameterFieldData>(self);
    CThostFtdcQryRCAMSIntraParameterField *data = &(extra->data);
    // memset(data->CombProductID, 0, sizeof(data->CombProductID));
    // memcpy(data->CombProductID, buf, len);
    strncpy(data->CombProductID, buf, sizeof(data->CombProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryRCAMSIntraParameterFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryRCAMSIntraParameterFieldType_getsets[] = {
    /// 产品组合代码
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "CombProductID",
    .get = PyCThostFtdcQryRCAMSIntraParameterFieldType_get_CombProductID,
    .set = PyCThostFtdcQryRCAMSIntraParameterFieldType_set_CombProductID,
    .doc = PyDoc_STR("产品组合代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryRCAMSIntraParameterFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryRCAMSIntraParameterField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("RCAMS品种内风险对冲参数查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryRCAMSIntraParameterFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryRCAMSIntraParameterFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryRCAMSIntraParameterFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryRCAMSIntraParameterFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryRCAMSIntraParameterFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryRCAMSIntraParameterFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("RCAMS品种内风险对冲参数查询")},
    {Py_tp_members, PyCThostFtdcQryRCAMSIntraParameterFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryRCAMSIntraParameterFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryRCAMSIntraParameterFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryRCAMSIntraParameterFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryRCAMSIntraParameterFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryRCAMSIntraParameterField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryRCAMSIntraParameterFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryRCAMSIntraParameterFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryRCAMSIntraParameterFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryRCAMSIntraParameterFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryRCAMSIntraParameterFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryRCAMSIntraParameterFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryRCAMSIntraParameterFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryRCAMSIntraParameterFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryRCAMSIntraParameterField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryRCAMSIntraParameterField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}