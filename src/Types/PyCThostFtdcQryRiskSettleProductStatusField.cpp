
#include "PyCThostFtdcQryRiskSettleProductStatusField.h"

///风险结算产品查询

static int PyCThostFtdcQryRiskSettleProductStatusFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ProductID", NULL };


    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryRiskSettleProductStatusField_ProductID = NULL;
    Py_ssize_t CThostFtdcQryRiskSettleProductStatusField_ProductID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
        , &CThostFtdcQryRiskSettleProductStatusField_ProductID, &CThostFtdcQryRiskSettleProductStatusField_ProductID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryRiskSettleProductStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRiskSettleProductStatusFieldData>(self);
    CThostFtdcQryRiskSettleProductStatusField *data = &(extra->data);


    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryRiskSettleProductStatusField_ProductID != NULL ) {
        if(CThostFtdcQryRiskSettleProductStatusField_ProductID_length >= (Py_ssize_t)sizeof(data->ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is 80)", CThostFtdcQryRiskSettleProductStatusField_ProductID_length);
            return -1;
        }
        // memset(data->ProductID, 0, sizeof(data->ProductID));
        // memcpy(data->ProductID, CThostFtdcQryRiskSettleProductStatusField_ProductID, CThostFtdcQryRiskSettleProductStatusField_ProductID_length);
        strncpy(data->ProductID, CThostFtdcQryRiskSettleProductStatusField_ProductID, sizeof(data->ProductID));
        CThostFtdcQryRiskSettleProductStatusField_ProductID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryRiskSettleProductStatusFieldType_repr(PyObject *self) {

    PyCThostFtdcQryRiskSettleProductStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRiskSettleProductStatusFieldData>(self);
    CThostFtdcQryRiskSettleProductStatusField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y}"
        , "ProductID", data->ProductID//, (Py_ssize_t)sizeof(data->ProductID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryRiskSettleProductStatusField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryRiskSettleProductStatusField repr");
        return NULL;
    }

    return repr;
}


/// 产品代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryRiskSettleProductStatusFieldType_get_ProductID(PyObject *self, void *closure) {
    PyCThostFtdcQryRiskSettleProductStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRiskSettleProductStatusFieldData>(self);
    CThostFtdcQryRiskSettleProductStatusField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductID, (Py_ssize_t)sizeof(data->ProductID));
    return PyBytes_FromString(data->ProductID);
}

static int PyCThostFtdcQryRiskSettleProductStatusFieldType_set_ProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryRiskSettleProductStatusField::ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryRiskSettleProductStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRiskSettleProductStatusFieldData>(self);
    CThostFtdcQryRiskSettleProductStatusField *data = &(extra->data);
    // memset(data->ProductID, 0, sizeof(data->ProductID));
    // memcpy(data->ProductID, buf, len);
    strncpy(data->ProductID, buf, sizeof(data->ProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryRiskSettleProductStatusFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryRiskSettleProductStatusFieldType_getsets[] = {
    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ProductID",
    .get = PyCThostFtdcQryRiskSettleProductStatusFieldType_get_ProductID,
    .set = PyCThostFtdcQryRiskSettleProductStatusFieldType_set_ProductID,
    .doc = PyDoc_STR("产品代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryRiskSettleProductStatusFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryRiskSettleProductStatusField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算产品查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryRiskSettleProductStatusFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryRiskSettleProductStatusFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryRiskSettleProductStatusFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryRiskSettleProductStatusFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryRiskSettleProductStatusFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryRiskSettleProductStatusFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算产品查询")},
    {Py_tp_members, PyCThostFtdcQryRiskSettleProductStatusFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryRiskSettleProductStatusFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryRiskSettleProductStatusFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryRiskSettleProductStatusFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryRiskSettleProductStatusFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryRiskSettleProductStatusField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryRiskSettleProductStatusFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryRiskSettleProductStatusFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryRiskSettleProductStatusFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryRiskSettleProductStatusFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryRiskSettleProductStatusFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryRiskSettleProductStatusFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryRiskSettleProductStatusFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryRiskSettleProductStatusFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryRiskSettleProductStatusField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryRiskSettleProductStatusField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}