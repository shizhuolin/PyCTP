
#include "PyCThostFtdcBrokerSyncField.h"

///经纪公司同步

static int PyCThostFtdcBrokerSyncFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcBrokerSyncField_BrokerID = NULL;
    Py_ssize_t CThostFtdcBrokerSyncField_BrokerID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
        , &CThostFtdcBrokerSyncField_BrokerID, &CThostFtdcBrokerSyncField_BrokerID_length
    )) {
        return -1;
    }

    PyCThostFtdcBrokerSyncFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerSyncFieldData>(self);
    CThostFtdcBrokerSyncField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcBrokerSyncField_BrokerID != NULL ) {
        if(CThostFtdcBrokerSyncField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcBrokerSyncField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcBrokerSyncField_BrokerID, CThostFtdcBrokerSyncField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcBrokerSyncField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcBrokerSyncField_BrokerID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcBrokerSyncFieldType_repr(PyObject *self) {

    PyCThostFtdcBrokerSyncFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerSyncFieldData>(self);
    CThostFtdcBrokerSyncField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerSyncField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerSyncField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcBrokerSyncFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcBrokerSyncFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerSyncFieldData>(self);
    CThostFtdcBrokerSyncField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcBrokerSyncFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerSyncField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerSyncFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerSyncFieldData>(self);
    CThostFtdcBrokerSyncField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcBrokerSyncFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcBrokerSyncFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcBrokerSyncFieldType_get_BrokerID,
    .set = PyCThostFtdcBrokerSyncFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcBrokerSyncFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcBrokerSyncField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("经纪公司同步")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcBrokerSyncFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcBrokerSyncFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcBrokerSyncFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcBrokerSyncFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcBrokerSyncFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcBrokerSyncFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("经纪公司同步")},
    {Py_tp_members, PyCThostFtdcBrokerSyncFieldType_members},
    {Py_tp_getset, PyCThostFtdcBrokerSyncFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcBrokerSyncFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcBrokerSyncFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcBrokerSyncFieldType_spec = {
    .name = "PyCTP.CThostFtdcBrokerSyncField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcBrokerSyncFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcBrokerSyncFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcBrokerSyncFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcBrokerSyncFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcBrokerSyncFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcBrokerSyncFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcBrokerSyncFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcBrokerSyncFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcBrokerSyncField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcBrokerSyncField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}