
#include "PyCThostFtdcQryCFMMCBrokerKeyField.h"

///查询保证金监管系统经纪公司密钥

static int PyCThostFtdcQryCFMMCBrokerKeyFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryCFMMCBrokerKeyField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryCFMMCBrokerKeyField_BrokerID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
        , &CThostFtdcQryCFMMCBrokerKeyField_BrokerID, &CThostFtdcQryCFMMCBrokerKeyField_BrokerID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryCFMMCBrokerKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCFMMCBrokerKeyFieldData>(self);
    CThostFtdcQryCFMMCBrokerKeyField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryCFMMCBrokerKeyField_BrokerID != NULL ) {
        if(CThostFtdcQryCFMMCBrokerKeyField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryCFMMCBrokerKeyField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryCFMMCBrokerKeyField_BrokerID, CThostFtdcQryCFMMCBrokerKeyField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryCFMMCBrokerKeyField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryCFMMCBrokerKeyField_BrokerID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryCFMMCBrokerKeyFieldType_repr(PyObject *self) {

    PyCThostFtdcQryCFMMCBrokerKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCFMMCBrokerKeyFieldData>(self);
    CThostFtdcQryCFMMCBrokerKeyField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryCFMMCBrokerKeyField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryCFMMCBrokerKeyField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryCFMMCBrokerKeyFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryCFMMCBrokerKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCFMMCBrokerKeyFieldData>(self);
    CThostFtdcQryCFMMCBrokerKeyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryCFMMCBrokerKeyFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryCFMMCBrokerKeyField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryCFMMCBrokerKeyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCFMMCBrokerKeyFieldData>(self);
    CThostFtdcQryCFMMCBrokerKeyField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryCFMMCBrokerKeyFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryCFMMCBrokerKeyFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryCFMMCBrokerKeyFieldType_get_BrokerID,
    .set = PyCThostFtdcQryCFMMCBrokerKeyFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryCFMMCBrokerKeyFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryCFMMCBrokerKeyField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询保证金监管系统经纪公司密钥")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryCFMMCBrokerKeyFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryCFMMCBrokerKeyFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryCFMMCBrokerKeyFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryCFMMCBrokerKeyFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryCFMMCBrokerKeyFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryCFMMCBrokerKeyFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询保证金监管系统经纪公司密钥")},
    {Py_tp_members, PyCThostFtdcQryCFMMCBrokerKeyFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryCFMMCBrokerKeyFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryCFMMCBrokerKeyFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryCFMMCBrokerKeyFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryCFMMCBrokerKeyFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryCFMMCBrokerKeyField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryCFMMCBrokerKeyFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryCFMMCBrokerKeyFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryCFMMCBrokerKeyFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryCFMMCBrokerKeyFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryCFMMCBrokerKeyFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryCFMMCBrokerKeyFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryCFMMCBrokerKeyFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryCFMMCBrokerKeyFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryCFMMCBrokerKeyField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryCFMMCBrokerKeyField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}