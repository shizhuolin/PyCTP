
#include "PyCThostFtdcQryNoticeField.h"

///查询客户通知

static int PyCThostFtdcQryNoticeFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryNoticeField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryNoticeField_BrokerID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
        , &CThostFtdcQryNoticeField_BrokerID, &CThostFtdcQryNoticeField_BrokerID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryNoticeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryNoticeFieldData>(self);
    CThostFtdcQryNoticeField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryNoticeField_BrokerID != NULL ) {
        if(CThostFtdcQryNoticeField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryNoticeField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryNoticeField_BrokerID, CThostFtdcQryNoticeField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryNoticeField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryNoticeField_BrokerID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryNoticeFieldType_repr(PyObject *self) {

    PyCThostFtdcQryNoticeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryNoticeFieldData>(self);
    CThostFtdcQryNoticeField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryNoticeField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryNoticeField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryNoticeFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryNoticeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryNoticeFieldData>(self);
    CThostFtdcQryNoticeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryNoticeFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryNoticeField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryNoticeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryNoticeFieldData>(self);
    CThostFtdcQryNoticeField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryNoticeFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryNoticeFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryNoticeFieldType_get_BrokerID,
    .set = PyCThostFtdcQryNoticeFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryNoticeFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryNoticeField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询客户通知")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryNoticeFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryNoticeFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryNoticeFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryNoticeFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryNoticeFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryNoticeFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询客户通知")},
    {Py_tp_members, PyCThostFtdcQryNoticeFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryNoticeFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryNoticeFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryNoticeFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryNoticeFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryNoticeField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryNoticeFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryNoticeFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryNoticeFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryNoticeFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryNoticeFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryNoticeFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryNoticeFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryNoticeFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryNoticeField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryNoticeField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}