
#include "PyCThostFtdcQryLocalAddrConfigField.h"

///内网地址配置查询

static int PyCThostFtdcQryLocalAddrConfigFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryLocalAddrConfigField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryLocalAddrConfigField_BrokerID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
        , &CThostFtdcQryLocalAddrConfigField_BrokerID, &CThostFtdcQryLocalAddrConfigField_BrokerID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryLocalAddrConfigFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryLocalAddrConfigFieldData>(self);
    CThostFtdcQryLocalAddrConfigField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryLocalAddrConfigField_BrokerID != NULL ) {
        if(CThostFtdcQryLocalAddrConfigField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryLocalAddrConfigField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryLocalAddrConfigField_BrokerID, CThostFtdcQryLocalAddrConfigField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryLocalAddrConfigField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryLocalAddrConfigField_BrokerID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryLocalAddrConfigFieldType_repr(PyObject *self) {

    PyCThostFtdcQryLocalAddrConfigFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryLocalAddrConfigFieldData>(self);
    CThostFtdcQryLocalAddrConfigField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryLocalAddrConfigField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryLocalAddrConfigField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryLocalAddrConfigFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryLocalAddrConfigFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryLocalAddrConfigFieldData>(self);
    CThostFtdcQryLocalAddrConfigField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryLocalAddrConfigFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryLocalAddrConfigField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryLocalAddrConfigFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryLocalAddrConfigFieldData>(self);
    CThostFtdcQryLocalAddrConfigField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryLocalAddrConfigFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryLocalAddrConfigFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryLocalAddrConfigFieldType_get_BrokerID,
    .set = PyCThostFtdcQryLocalAddrConfigFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryLocalAddrConfigFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryLocalAddrConfigField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("内网地址配置查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryLocalAddrConfigFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryLocalAddrConfigFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryLocalAddrConfigFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryLocalAddrConfigFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryLocalAddrConfigFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryLocalAddrConfigFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("内网地址配置查询")},
    {Py_tp_members, PyCThostFtdcQryLocalAddrConfigFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryLocalAddrConfigFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryLocalAddrConfigFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryLocalAddrConfigFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryLocalAddrConfigFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryLocalAddrConfigField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryLocalAddrConfigFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryLocalAddrConfigFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryLocalAddrConfigFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryLocalAddrConfigFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryLocalAddrConfigFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryLocalAddrConfigFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryLocalAddrConfigFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryLocalAddrConfigFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryLocalAddrConfigField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryLocalAddrConfigField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}