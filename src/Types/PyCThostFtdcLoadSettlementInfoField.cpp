
#include "PyCThostFtdcLoadSettlementInfoField.h"

///装载结算信息

static int PyCThostFtdcLoadSettlementInfoFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcLoadSettlementInfoField_BrokerID = NULL;
    Py_ssize_t CThostFtdcLoadSettlementInfoField_BrokerID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
        , &CThostFtdcLoadSettlementInfoField_BrokerID, &CThostFtdcLoadSettlementInfoField_BrokerID_length
    )) {
        return -1;
    }

    PyCThostFtdcLoadSettlementInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoadSettlementInfoFieldData>(self);
    CThostFtdcLoadSettlementInfoField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcLoadSettlementInfoField_BrokerID != NULL ) {
        if(CThostFtdcLoadSettlementInfoField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcLoadSettlementInfoField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcLoadSettlementInfoField_BrokerID, CThostFtdcLoadSettlementInfoField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcLoadSettlementInfoField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcLoadSettlementInfoField_BrokerID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcLoadSettlementInfoFieldType_repr(PyObject *self) {

    PyCThostFtdcLoadSettlementInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoadSettlementInfoFieldData>(self);
    CThostFtdcLoadSettlementInfoField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcLoadSettlementInfoField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcLoadSettlementInfoField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcLoadSettlementInfoFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcLoadSettlementInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoadSettlementInfoFieldData>(self);
    CThostFtdcLoadSettlementInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcLoadSettlementInfoFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLoadSettlementInfoField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLoadSettlementInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoadSettlementInfoFieldData>(self);
    CThostFtdcLoadSettlementInfoField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcLoadSettlementInfoFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcLoadSettlementInfoFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcLoadSettlementInfoFieldType_get_BrokerID,
    .set = PyCThostFtdcLoadSettlementInfoFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcLoadSettlementInfoFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcLoadSettlementInfoField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("装载结算信息")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcLoadSettlementInfoFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcLoadSettlementInfoFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcLoadSettlementInfoFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcLoadSettlementInfoFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcLoadSettlementInfoFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcLoadSettlementInfoFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("装载结算信息")},
    {Py_tp_members, PyCThostFtdcLoadSettlementInfoFieldType_members},
    {Py_tp_getset, PyCThostFtdcLoadSettlementInfoFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcLoadSettlementInfoFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcLoadSettlementInfoFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcLoadSettlementInfoFieldType_spec = {
    .name = "PyCTP.CThostFtdcLoadSettlementInfoField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcLoadSettlementInfoFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcLoadSettlementInfoFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcLoadSettlementInfoFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcLoadSettlementInfoFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcLoadSettlementInfoFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcLoadSettlementInfoFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcLoadSettlementInfoFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcLoadSettlementInfoFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcLoadSettlementInfoField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcLoadSettlementInfoField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}