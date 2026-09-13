
#include "PyCThostFtdcQryIpAddrParamField.h"

///服务地址参数查询

static int PyCThostFtdcQryIpAddrParamFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryIpAddrParamField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryIpAddrParamField_BrokerID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
        , &CThostFtdcQryIpAddrParamField_BrokerID, &CThostFtdcQryIpAddrParamField_BrokerID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryIpAddrParamFieldData>(self);
    CThostFtdcQryIpAddrParamField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryIpAddrParamField_BrokerID != NULL ) {
        if(CThostFtdcQryIpAddrParamField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryIpAddrParamField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryIpAddrParamField_BrokerID, CThostFtdcQryIpAddrParamField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryIpAddrParamField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryIpAddrParamField_BrokerID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryIpAddrParamFieldType_repr(PyObject *self) {

    PyCThostFtdcQryIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryIpAddrParamFieldData>(self);
    CThostFtdcQryIpAddrParamField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryIpAddrParamField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryIpAddrParamField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryIpAddrParamFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryIpAddrParamFieldData>(self);
    CThostFtdcQryIpAddrParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryIpAddrParamFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryIpAddrParamField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryIpAddrParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryIpAddrParamFieldData>(self);
    CThostFtdcQryIpAddrParamField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryIpAddrParamFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryIpAddrParamFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryIpAddrParamFieldType_get_BrokerID,
    .set = PyCThostFtdcQryIpAddrParamFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryIpAddrParamFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryIpAddrParamField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("服务地址参数查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryIpAddrParamFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryIpAddrParamFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryIpAddrParamFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryIpAddrParamFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryIpAddrParamFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryIpAddrParamFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("服务地址参数查询")},
    {Py_tp_members, PyCThostFtdcQryIpAddrParamFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryIpAddrParamFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryIpAddrParamFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryIpAddrParamFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryIpAddrParamFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryIpAddrParamField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryIpAddrParamFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryIpAddrParamFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryIpAddrParamFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryIpAddrParamFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryIpAddrParamFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryIpAddrParamFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryIpAddrParamFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryIpAddrParamFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryIpAddrParamField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryIpAddrParamField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}