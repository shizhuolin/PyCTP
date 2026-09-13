
#include "PyCThostFtdcQrySPMMProductParamField.h"

///SPMM产品参数查询

static int PyCThostFtdcQrySPMMProductParamFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ProductID", NULL };


    /// 产品代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    char *CThostFtdcQrySPMMProductParamField_ProductID = NULL;
    Py_ssize_t CThostFtdcQrySPMMProductParamField_ProductID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
        , &CThostFtdcQrySPMMProductParamField_ProductID, &CThostFtdcQrySPMMProductParamField_ProductID_length
    )) {
        return -1;
    }

    PyCThostFtdcQrySPMMProductParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPMMProductParamFieldData>(self);
    CThostFtdcQrySPMMProductParamField *data = &(extra->data);


    /// 产品代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    if( CThostFtdcQrySPMMProductParamField_ProductID != NULL ) {
        if(CThostFtdcQrySPMMProductParamField_ProductID_length >= (Py_ssize_t)sizeof(data->ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is 40)", CThostFtdcQrySPMMProductParamField_ProductID_length);
            return -1;
        }
        // memset(data->ProductID, 0, sizeof(data->ProductID));
        // memcpy(data->ProductID, CThostFtdcQrySPMMProductParamField_ProductID, CThostFtdcQrySPMMProductParamField_ProductID_length);
        strncpy(data->ProductID, CThostFtdcQrySPMMProductParamField_ProductID, sizeof(data->ProductID));
        CThostFtdcQrySPMMProductParamField_ProductID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQrySPMMProductParamFieldType_repr(PyObject *self) {

    PyCThostFtdcQrySPMMProductParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPMMProductParamFieldData>(self);
    CThostFtdcQrySPMMProductParamField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y}"
        , "ProductID", data->ProductID//, (Py_ssize_t)sizeof(data->ProductID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySPMMProductParamField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySPMMProductParamField repr");
        return NULL;
    }

    return repr;
}


/// 产品代码
/// typedef char TThostFtdcSPMMProductIDType[41]
static PyObject *PyCThostFtdcQrySPMMProductParamFieldType_get_ProductID(PyObject *self, void *closure) {
    PyCThostFtdcQrySPMMProductParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPMMProductParamFieldData>(self);
    CThostFtdcQrySPMMProductParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductID, (Py_ssize_t)sizeof(data->ProductID));
    return PyBytes_FromString(data->ProductID);
}

static int PyCThostFtdcQrySPMMProductParamFieldType_set_ProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySPMMProductParamField::ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySPMMProductParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySPMMProductParamFieldData>(self);
    CThostFtdcQrySPMMProductParamField *data = &(extra->data);
    // memset(data->ProductID, 0, sizeof(data->ProductID));
    // memcpy(data->ProductID, buf, len);
    strncpy(data->ProductID, buf, sizeof(data->ProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQrySPMMProductParamFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQrySPMMProductParamFieldType_getsets[] = {
    /// 产品代码
    /// typedef char TThostFtdcSPMMProductIDType[41]
    {
    .name = "ProductID",
    .get = PyCThostFtdcQrySPMMProductParamFieldType_get_ProductID,
    .set = PyCThostFtdcQrySPMMProductParamFieldType_set_ProductID,
    .doc = PyDoc_STR("产品代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQrySPMMProductParamFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQrySPMMProductParamField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("SPMM产品参数查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQrySPMMProductParamFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQrySPMMProductParamFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQrySPMMProductParamFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQrySPMMProductParamFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQrySPMMProductParamFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQrySPMMProductParamFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("SPMM产品参数查询")},
    {Py_tp_members, PyCThostFtdcQrySPMMProductParamFieldType_members},
    {Py_tp_getset, PyCThostFtdcQrySPMMProductParamFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQrySPMMProductParamFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQrySPMMProductParamFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQrySPMMProductParamFieldType_spec = {
    .name = "PyCTP.CThostFtdcQrySPMMProductParamField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQrySPMMProductParamFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQrySPMMProductParamFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQrySPMMProductParamFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQrySPMMProductParamFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQrySPMMProductParamFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQrySPMMProductParamFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQrySPMMProductParamFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQrySPMMProductParamFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQrySPMMProductParamField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySPMMProductParamField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}