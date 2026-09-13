
#include "PyCThostFtdcQryAddrAppIDRelationField.h"

///服务地址和AppID的关系查询

static int PyCThostFtdcQryAddrAppIDRelationFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryAddrAppIDRelationField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryAddrAppIDRelationField_BrokerID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
        , &CThostFtdcQryAddrAppIDRelationField_BrokerID, &CThostFtdcQryAddrAppIDRelationField_BrokerID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryAddrAppIDRelationFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryAddrAppIDRelationFieldData>(self);
    CThostFtdcQryAddrAppIDRelationField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryAddrAppIDRelationField_BrokerID != NULL ) {
        if(CThostFtdcQryAddrAppIDRelationField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryAddrAppIDRelationField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryAddrAppIDRelationField_BrokerID, CThostFtdcQryAddrAppIDRelationField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryAddrAppIDRelationField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryAddrAppIDRelationField_BrokerID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryAddrAppIDRelationFieldType_repr(PyObject *self) {

    PyCThostFtdcQryAddrAppIDRelationFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryAddrAppIDRelationFieldData>(self);
    CThostFtdcQryAddrAppIDRelationField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryAddrAppIDRelationField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryAddrAppIDRelationField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryAddrAppIDRelationFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryAddrAppIDRelationFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryAddrAppIDRelationFieldData>(self);
    CThostFtdcQryAddrAppIDRelationField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryAddrAppIDRelationFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryAddrAppIDRelationField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryAddrAppIDRelationFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryAddrAppIDRelationFieldData>(self);
    CThostFtdcQryAddrAppIDRelationField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryAddrAppIDRelationFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryAddrAppIDRelationFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryAddrAppIDRelationFieldType_get_BrokerID,
    .set = PyCThostFtdcQryAddrAppIDRelationFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryAddrAppIDRelationFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryAddrAppIDRelationField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("服务地址和AppID的关系查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryAddrAppIDRelationFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryAddrAppIDRelationFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryAddrAppIDRelationFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryAddrAppIDRelationFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryAddrAppIDRelationFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryAddrAppIDRelationFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("服务地址和AppID的关系查询")},
    {Py_tp_members, PyCThostFtdcQryAddrAppIDRelationFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryAddrAppIDRelationFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryAddrAppIDRelationFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryAddrAppIDRelationFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryAddrAppIDRelationFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryAddrAppIDRelationField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryAddrAppIDRelationFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryAddrAppIDRelationFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryAddrAppIDRelationFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryAddrAppIDRelationFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryAddrAppIDRelationFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryAddrAppIDRelationFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryAddrAppIDRelationFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryAddrAppIDRelationFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryAddrAppIDRelationField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryAddrAppIDRelationField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}