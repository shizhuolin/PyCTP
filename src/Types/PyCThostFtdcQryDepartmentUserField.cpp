
#include "PyCThostFtdcQryDepartmentUserField.h"

///查询操作员组织架构关系

static int PyCThostFtdcQryDepartmentUserFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryDepartmentUserField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryDepartmentUserField_BrokerID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
        , &CThostFtdcQryDepartmentUserField_BrokerID, &CThostFtdcQryDepartmentUserField_BrokerID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryDepartmentUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryDepartmentUserFieldData>(self);
    CThostFtdcQryDepartmentUserField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryDepartmentUserField_BrokerID != NULL ) {
        if(CThostFtdcQryDepartmentUserField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryDepartmentUserField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryDepartmentUserField_BrokerID, CThostFtdcQryDepartmentUserField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryDepartmentUserField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryDepartmentUserField_BrokerID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryDepartmentUserFieldType_repr(PyObject *self) {

    PyCThostFtdcQryDepartmentUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryDepartmentUserFieldData>(self);
    CThostFtdcQryDepartmentUserField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryDepartmentUserField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryDepartmentUserField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryDepartmentUserFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryDepartmentUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryDepartmentUserFieldData>(self);
    CThostFtdcQryDepartmentUserField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryDepartmentUserFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryDepartmentUserField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryDepartmentUserFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryDepartmentUserFieldData>(self);
    CThostFtdcQryDepartmentUserField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryDepartmentUserFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryDepartmentUserFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryDepartmentUserFieldType_get_BrokerID,
    .set = PyCThostFtdcQryDepartmentUserFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryDepartmentUserFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryDepartmentUserField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询操作员组织架构关系")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryDepartmentUserFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryDepartmentUserFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryDepartmentUserFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryDepartmentUserFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryDepartmentUserFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryDepartmentUserFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询操作员组织架构关系")},
    {Py_tp_members, PyCThostFtdcQryDepartmentUserFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryDepartmentUserFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryDepartmentUserFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryDepartmentUserFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryDepartmentUserFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryDepartmentUserField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryDepartmentUserFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryDepartmentUserFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryDepartmentUserFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryDepartmentUserFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryDepartmentUserFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryDepartmentUserFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryDepartmentUserFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryDepartmentUserFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryDepartmentUserField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryDepartmentUserField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}