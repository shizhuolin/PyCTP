
#include "PyCThostFtdcQryBrokerField.h"

///查询经纪公司

static int PyCThostFtdcQryBrokerFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryBrokerField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryBrokerField_BrokerID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
        , &CThostFtdcQryBrokerField_BrokerID, &CThostFtdcQryBrokerField_BrokerID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryBrokerFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerFieldData>(self);
    CThostFtdcQryBrokerField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryBrokerField_BrokerID != NULL ) {
        if(CThostFtdcQryBrokerField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryBrokerField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryBrokerField_BrokerID, CThostFtdcQryBrokerField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryBrokerField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryBrokerField_BrokerID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryBrokerFieldType_repr(PyObject *self) {

    PyCThostFtdcQryBrokerFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerFieldData>(self);
    CThostFtdcQryBrokerField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryBrokerField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryBrokerField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryBrokerFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryBrokerFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerFieldData>(self);
    CThostFtdcQryBrokerField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryBrokerFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryBrokerField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryBrokerFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerFieldData>(self);
    CThostFtdcQryBrokerField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryBrokerFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryBrokerFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryBrokerFieldType_get_BrokerID,
    .set = PyCThostFtdcQryBrokerFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryBrokerFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryBrokerField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询经纪公司")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryBrokerFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryBrokerFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryBrokerFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryBrokerFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryBrokerFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryBrokerFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询经纪公司")},
    {Py_tp_members, PyCThostFtdcQryBrokerFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryBrokerFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryBrokerFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryBrokerFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryBrokerFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryBrokerField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryBrokerFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryBrokerFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryBrokerFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryBrokerFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryBrokerFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryBrokerFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryBrokerFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryBrokerFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryBrokerField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryBrokerField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}