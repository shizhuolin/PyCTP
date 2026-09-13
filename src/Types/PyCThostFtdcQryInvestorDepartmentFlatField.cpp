
#include "PyCThostFtdcQryInvestorDepartmentFlatField.h"

///查询组织架构投资者对应关系

static int PyCThostFtdcQryInvestorDepartmentFlatFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryInvestorDepartmentFlatField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryInvestorDepartmentFlatField_BrokerID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
        , &CThostFtdcQryInvestorDepartmentFlatField_BrokerID, &CThostFtdcQryInvestorDepartmentFlatField_BrokerID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryInvestorDepartmentFlatFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorDepartmentFlatFieldData>(self);
    CThostFtdcQryInvestorDepartmentFlatField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryInvestorDepartmentFlatField_BrokerID != NULL ) {
        if(CThostFtdcQryInvestorDepartmentFlatField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryInvestorDepartmentFlatField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryInvestorDepartmentFlatField_BrokerID, CThostFtdcQryInvestorDepartmentFlatField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryInvestorDepartmentFlatField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryInvestorDepartmentFlatField_BrokerID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryInvestorDepartmentFlatFieldType_repr(PyObject *self) {

    PyCThostFtdcQryInvestorDepartmentFlatFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorDepartmentFlatFieldData>(self);
    CThostFtdcQryInvestorDepartmentFlatField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorDepartmentFlatField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorDepartmentFlatField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryInvestorDepartmentFlatFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorDepartmentFlatFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorDepartmentFlatFieldData>(self);
    CThostFtdcQryInvestorDepartmentFlatField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryInvestorDepartmentFlatFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorDepartmentFlatField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorDepartmentFlatFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorDepartmentFlatFieldData>(self);
    CThostFtdcQryInvestorDepartmentFlatField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryInvestorDepartmentFlatFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryInvestorDepartmentFlatFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryInvestorDepartmentFlatFieldType_get_BrokerID,
    .set = PyCThostFtdcQryInvestorDepartmentFlatFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryInvestorDepartmentFlatFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryInvestorDepartmentFlatField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询组织架构投资者对应关系")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryInvestorDepartmentFlatFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryInvestorDepartmentFlatFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryInvestorDepartmentFlatFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryInvestorDepartmentFlatFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryInvestorDepartmentFlatFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryInvestorDepartmentFlatFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询组织架构投资者对应关系")},
    {Py_tp_members, PyCThostFtdcQryInvestorDepartmentFlatFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryInvestorDepartmentFlatFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryInvestorDepartmentFlatFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryInvestorDepartmentFlatFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryInvestorDepartmentFlatFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryInvestorDepartmentFlatField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryInvestorDepartmentFlatFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryInvestorDepartmentFlatFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryInvestorDepartmentFlatFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryInvestorDepartmentFlatFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryInvestorDepartmentFlatFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryInvestorDepartmentFlatFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryInvestorDepartmentFlatFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryInvestorDepartmentFlatFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryInvestorDepartmentFlatField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInvestorDepartmentFlatField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}