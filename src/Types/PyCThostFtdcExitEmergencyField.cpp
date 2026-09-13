
#include "PyCThostFtdcExitEmergencyField.h"

///退出紧急状态参数

static int PyCThostFtdcExitEmergencyFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcExitEmergencyField_BrokerID = NULL;
    Py_ssize_t CThostFtdcExitEmergencyField_BrokerID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
        , &CThostFtdcExitEmergencyField_BrokerID, &CThostFtdcExitEmergencyField_BrokerID_length
    )) {
        return -1;
    }

    PyCThostFtdcExitEmergencyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExitEmergencyFieldData>(self);
    CThostFtdcExitEmergencyField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcExitEmergencyField_BrokerID != NULL ) {
        if(CThostFtdcExitEmergencyField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcExitEmergencyField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcExitEmergencyField_BrokerID, CThostFtdcExitEmergencyField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcExitEmergencyField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcExitEmergencyField_BrokerID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcExitEmergencyFieldType_repr(PyObject *self) {

    PyCThostFtdcExitEmergencyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExitEmergencyFieldData>(self);
    CThostFtdcExitEmergencyField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExitEmergencyField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExitEmergencyField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcExitEmergencyFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcExitEmergencyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExitEmergencyFieldData>(self);
    CThostFtdcExitEmergencyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcExitEmergencyFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExitEmergencyField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExitEmergencyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExitEmergencyFieldData>(self);
    CThostFtdcExitEmergencyField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcExitEmergencyFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcExitEmergencyFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcExitEmergencyFieldType_get_BrokerID,
    .set = PyCThostFtdcExitEmergencyFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcExitEmergencyFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcExitEmergencyField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("退出紧急状态参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcExitEmergencyFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcExitEmergencyFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcExitEmergencyFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcExitEmergencyFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcExitEmergencyFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcExitEmergencyFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("退出紧急状态参数")},
    {Py_tp_members, PyCThostFtdcExitEmergencyFieldType_members},
    {Py_tp_getset, PyCThostFtdcExitEmergencyFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcExitEmergencyFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcExitEmergencyFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcExitEmergencyFieldType_spec = {
    .name = "PyCTP.CThostFtdcExitEmergencyField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcExitEmergencyFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcExitEmergencyFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcExitEmergencyFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcExitEmergencyFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcExitEmergencyFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcExitEmergencyFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcExitEmergencyFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcExitEmergencyFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcExitEmergencyField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExitEmergencyField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}