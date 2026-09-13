
#include "PyCThostFtdcQryTraderAssignField.h"

///席位与交易中心对应关系维护查询

static int PyCThostFtdcQryTraderAssignFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TraderID", NULL };


    /// 交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcQryTraderAssignField_TraderID = NULL;
    Py_ssize_t CThostFtdcQryTraderAssignField_TraderID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
        , &CThostFtdcQryTraderAssignField_TraderID, &CThostFtdcQryTraderAssignField_TraderID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryTraderAssignFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTraderAssignFieldData>(self);
    CThostFtdcQryTraderAssignField *data = &(extra->data);


    /// 交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcQryTraderAssignField_TraderID != NULL ) {
        if(CThostFtdcQryTraderAssignField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcQryTraderAssignField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcQryTraderAssignField_TraderID, CThostFtdcQryTraderAssignField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcQryTraderAssignField_TraderID, sizeof(data->TraderID));
        CThostFtdcQryTraderAssignField_TraderID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryTraderAssignFieldType_repr(PyObject *self) {

    PyCThostFtdcQryTraderAssignFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTraderAssignFieldData>(self);
    CThostFtdcQryTraderAssignField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y}"
        , "TraderID", data->TraderID//, (Py_ssize_t)sizeof(data->TraderID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryTraderAssignField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryTraderAssignField repr");
        return NULL;
    }

    return repr;
}


/// 交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcQryTraderAssignFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcQryTraderAssignFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTraderAssignFieldData>(self);
    CThostFtdcQryTraderAssignField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcQryTraderAssignFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryTraderAssignField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTraderAssignFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTraderAssignFieldData>(self);
    CThostFtdcQryTraderAssignField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryTraderAssignFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryTraderAssignFieldType_getsets[] = {
    /// 交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcQryTraderAssignFieldType_get_TraderID,
    .set = PyCThostFtdcQryTraderAssignFieldType_set_TraderID,
    .doc = PyDoc_STR("交易员代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryTraderAssignFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryTraderAssignField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("席位与交易中心对应关系维护查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryTraderAssignFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryTraderAssignFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryTraderAssignFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryTraderAssignFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryTraderAssignFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryTraderAssignFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("席位与交易中心对应关系维护查询")},
    {Py_tp_members, PyCThostFtdcQryTraderAssignFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryTraderAssignFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryTraderAssignFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryTraderAssignFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryTraderAssignFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryTraderAssignField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryTraderAssignFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryTraderAssignFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryTraderAssignFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryTraderAssignFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryTraderAssignFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryTraderAssignFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryTraderAssignFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryTraderAssignFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryTraderAssignField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryTraderAssignField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}