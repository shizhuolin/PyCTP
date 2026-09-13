
#include "PyCThostFtdcQryInvestorGroupField.h"

///查询投资者组

static int PyCThostFtdcQryInvestorGroupFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryInvestorGroupField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryInvestorGroupField_BrokerID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
        , &CThostFtdcQryInvestorGroupField_BrokerID, &CThostFtdcQryInvestorGroupField_BrokerID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryInvestorGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorGroupFieldData>(self);
    CThostFtdcQryInvestorGroupField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryInvestorGroupField_BrokerID != NULL ) {
        if(CThostFtdcQryInvestorGroupField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryInvestorGroupField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryInvestorGroupField_BrokerID, CThostFtdcQryInvestorGroupField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryInvestorGroupField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryInvestorGroupField_BrokerID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryInvestorGroupFieldType_repr(PyObject *self) {

    PyCThostFtdcQryInvestorGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorGroupFieldData>(self);
    CThostFtdcQryInvestorGroupField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorGroupField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorGroupField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryInvestorGroupFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorGroupFieldData>(self);
    CThostFtdcQryInvestorGroupField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryInvestorGroupFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorGroupField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorGroupFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorGroupFieldData>(self);
    CThostFtdcQryInvestorGroupField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryInvestorGroupFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryInvestorGroupFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryInvestorGroupFieldType_get_BrokerID,
    .set = PyCThostFtdcQryInvestorGroupFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryInvestorGroupFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryInvestorGroupField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询投资者组")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryInvestorGroupFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryInvestorGroupFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryInvestorGroupFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryInvestorGroupFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryInvestorGroupFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryInvestorGroupFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询投资者组")},
    {Py_tp_members, PyCThostFtdcQryInvestorGroupFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryInvestorGroupFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryInvestorGroupFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryInvestorGroupFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryInvestorGroupFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryInvestorGroupField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryInvestorGroupFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryInvestorGroupFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryInvestorGroupFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryInvestorGroupFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryInvestorGroupFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryInvestorGroupFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryInvestorGroupFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryInvestorGroupFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryInvestorGroupField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInvestorGroupField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}