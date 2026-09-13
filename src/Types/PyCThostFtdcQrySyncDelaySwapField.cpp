
#include "PyCThostFtdcQrySyncDelaySwapField.h"

///查询延时换汇同步

static int PyCThostFtdcQrySyncDelaySwapFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "DelaySwapSeqNo", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQrySyncDelaySwapField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQrySyncDelaySwapField_BrokerID_length = 0;

    /// 延时换汇流水号
    /// typedef char TThostFtdcDepositSeqNoType[15]
    char *CThostFtdcQrySyncDelaySwapField_DelaySwapSeqNo = NULL;
    Py_ssize_t CThostFtdcQrySyncDelaySwapField_DelaySwapSeqNo_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
        , &CThostFtdcQrySyncDelaySwapField_BrokerID, &CThostFtdcQrySyncDelaySwapField_BrokerID_length
        , &CThostFtdcQrySyncDelaySwapField_DelaySwapSeqNo, &CThostFtdcQrySyncDelaySwapField_DelaySwapSeqNo_length
    )) {
        return -1;
    }

    PyCThostFtdcQrySyncDelaySwapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySyncDelaySwapFieldData>(self);
    CThostFtdcQrySyncDelaySwapField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQrySyncDelaySwapField_BrokerID != NULL ) {
        if(CThostFtdcQrySyncDelaySwapField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQrySyncDelaySwapField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQrySyncDelaySwapField_BrokerID, CThostFtdcQrySyncDelaySwapField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQrySyncDelaySwapField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQrySyncDelaySwapField_BrokerID = NULL;
    }

    /// 延时换汇流水号
    /// typedef char TThostFtdcDepositSeqNoType[15]
    if( CThostFtdcQrySyncDelaySwapField_DelaySwapSeqNo != NULL ) {
        if(CThostFtdcQrySyncDelaySwapField_DelaySwapSeqNo_length >= (Py_ssize_t)sizeof(data->DelaySwapSeqNo)) {
            PyErr_Format(PyExc_ValueError, "DelaySwapSeqNo too long: length=%zd (max allowed is 14)", CThostFtdcQrySyncDelaySwapField_DelaySwapSeqNo_length);
            return -1;
        }
        // memset(data->DelaySwapSeqNo, 0, sizeof(data->DelaySwapSeqNo));
        // memcpy(data->DelaySwapSeqNo, CThostFtdcQrySyncDelaySwapField_DelaySwapSeqNo, CThostFtdcQrySyncDelaySwapField_DelaySwapSeqNo_length);
        strncpy(data->DelaySwapSeqNo, CThostFtdcQrySyncDelaySwapField_DelaySwapSeqNo, sizeof(data->DelaySwapSeqNo));
        CThostFtdcQrySyncDelaySwapField_DelaySwapSeqNo = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQrySyncDelaySwapFieldType_repr(PyObject *self) {

    PyCThostFtdcQrySyncDelaySwapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySyncDelaySwapFieldData>(self);
    CThostFtdcQrySyncDelaySwapField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "DelaySwapSeqNo", data->DelaySwapSeqNo//, (Py_ssize_t)sizeof(data->DelaySwapSeqNo)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySyncDelaySwapField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySyncDelaySwapField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQrySyncDelaySwapFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQrySyncDelaySwapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySyncDelaySwapFieldData>(self);
    CThostFtdcQrySyncDelaySwapField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQrySyncDelaySwapFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySyncDelaySwapField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySyncDelaySwapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySyncDelaySwapFieldData>(self);
    CThostFtdcQrySyncDelaySwapField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 延时换汇流水号
/// typedef char TThostFtdcDepositSeqNoType[15]
static PyObject *PyCThostFtdcQrySyncDelaySwapFieldType_get_DelaySwapSeqNo(PyObject *self, void *closure) {
    PyCThostFtdcQrySyncDelaySwapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySyncDelaySwapFieldData>(self);
    CThostFtdcQrySyncDelaySwapField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->DelaySwapSeqNo, (Py_ssize_t)sizeof(data->DelaySwapSeqNo));
    return PyBytes_FromString(data->DelaySwapSeqNo);
}

static int PyCThostFtdcQrySyncDelaySwapFieldType_set_DelaySwapSeqNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DelaySwapSeqNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySyncDelaySwapField::DelaySwapSeqNo)) {
        PyErr_SetString(PyExc_ValueError, "DelaySwapSeqNo must be less than 14 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySyncDelaySwapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySyncDelaySwapFieldData>(self);
    CThostFtdcQrySyncDelaySwapField *data = &(extra->data);
    // memset(data->DelaySwapSeqNo, 0, sizeof(data->DelaySwapSeqNo));
    // memcpy(data->DelaySwapSeqNo, buf, len);
    strncpy(data->DelaySwapSeqNo, buf, sizeof(data->DelaySwapSeqNo));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQrySyncDelaySwapFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQrySyncDelaySwapFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQrySyncDelaySwapFieldType_get_BrokerID,
    .set = PyCThostFtdcQrySyncDelaySwapFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 延时换汇流水号
    /// typedef char TThostFtdcDepositSeqNoType[15]
    {
    .name = "DelaySwapSeqNo",
    .get = PyCThostFtdcQrySyncDelaySwapFieldType_get_DelaySwapSeqNo,
    .set = PyCThostFtdcQrySyncDelaySwapFieldType_set_DelaySwapSeqNo,
    .doc = PyDoc_STR("延时换汇流水号"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQrySyncDelaySwapFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQrySyncDelaySwapField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询延时换汇同步")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQrySyncDelaySwapFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQrySyncDelaySwapFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQrySyncDelaySwapFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQrySyncDelaySwapFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQrySyncDelaySwapFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQrySyncDelaySwapFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询延时换汇同步")},
    {Py_tp_members, PyCThostFtdcQrySyncDelaySwapFieldType_members},
    {Py_tp_getset, PyCThostFtdcQrySyncDelaySwapFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQrySyncDelaySwapFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQrySyncDelaySwapFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQrySyncDelaySwapFieldType_spec = {
    .name = "PyCTP.CThostFtdcQrySyncDelaySwapField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQrySyncDelaySwapFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQrySyncDelaySwapFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQrySyncDelaySwapFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQrySyncDelaySwapFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQrySyncDelaySwapFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQrySyncDelaySwapFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQrySyncDelaySwapFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQrySyncDelaySwapFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQrySyncDelaySwapField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySyncDelaySwapField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}