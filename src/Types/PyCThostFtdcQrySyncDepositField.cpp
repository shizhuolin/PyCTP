
#include "PyCThostFtdcQrySyncDepositField.h"

///查询出入金流水

static int PyCThostFtdcQrySyncDepositFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "DepositSeqNo", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQrySyncDepositField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQrySyncDepositField_BrokerID_length = 0;

    /// 出入金流水号
    /// typedef char TThostFtdcDepositSeqNoType[15]
    char *CThostFtdcQrySyncDepositField_DepositSeqNo = NULL;
    Py_ssize_t CThostFtdcQrySyncDepositField_DepositSeqNo_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
        , &CThostFtdcQrySyncDepositField_BrokerID, &CThostFtdcQrySyncDepositField_BrokerID_length
        , &CThostFtdcQrySyncDepositField_DepositSeqNo, &CThostFtdcQrySyncDepositField_DepositSeqNo_length
    )) {
        return -1;
    }

    PyCThostFtdcQrySyncDepositFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySyncDepositFieldData>(self);
    CThostFtdcQrySyncDepositField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQrySyncDepositField_BrokerID != NULL ) {
        if(CThostFtdcQrySyncDepositField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQrySyncDepositField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQrySyncDepositField_BrokerID, CThostFtdcQrySyncDepositField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQrySyncDepositField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQrySyncDepositField_BrokerID = NULL;
    }

    /// 出入金流水号
    /// typedef char TThostFtdcDepositSeqNoType[15]
    if( CThostFtdcQrySyncDepositField_DepositSeqNo != NULL ) {
        if(CThostFtdcQrySyncDepositField_DepositSeqNo_length >= (Py_ssize_t)sizeof(data->DepositSeqNo)) {
            PyErr_Format(PyExc_ValueError, "DepositSeqNo too long: length=%zd (max allowed is 14)", CThostFtdcQrySyncDepositField_DepositSeqNo_length);
            return -1;
        }
        // memset(data->DepositSeqNo, 0, sizeof(data->DepositSeqNo));
        // memcpy(data->DepositSeqNo, CThostFtdcQrySyncDepositField_DepositSeqNo, CThostFtdcQrySyncDepositField_DepositSeqNo_length);
        strncpy(data->DepositSeqNo, CThostFtdcQrySyncDepositField_DepositSeqNo, sizeof(data->DepositSeqNo));
        CThostFtdcQrySyncDepositField_DepositSeqNo = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQrySyncDepositFieldType_repr(PyObject *self) {

    PyCThostFtdcQrySyncDepositFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySyncDepositFieldData>(self);
    CThostFtdcQrySyncDepositField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "DepositSeqNo", data->DepositSeqNo//, (Py_ssize_t)sizeof(data->DepositSeqNo)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySyncDepositField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySyncDepositField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQrySyncDepositFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQrySyncDepositFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySyncDepositFieldData>(self);
    CThostFtdcQrySyncDepositField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQrySyncDepositFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySyncDepositField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySyncDepositFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySyncDepositFieldData>(self);
    CThostFtdcQrySyncDepositField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 出入金流水号
/// typedef char TThostFtdcDepositSeqNoType[15]
static PyObject *PyCThostFtdcQrySyncDepositFieldType_get_DepositSeqNo(PyObject *self, void *closure) {
    PyCThostFtdcQrySyncDepositFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySyncDepositFieldData>(self);
    CThostFtdcQrySyncDepositField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->DepositSeqNo, (Py_ssize_t)sizeof(data->DepositSeqNo));
    return PyBytes_FromString(data->DepositSeqNo);
}

static int PyCThostFtdcQrySyncDepositFieldType_set_DepositSeqNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DepositSeqNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySyncDepositField::DepositSeqNo)) {
        PyErr_SetString(PyExc_ValueError, "DepositSeqNo must be less than 14 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySyncDepositFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySyncDepositFieldData>(self);
    CThostFtdcQrySyncDepositField *data = &(extra->data);
    // memset(data->DepositSeqNo, 0, sizeof(data->DepositSeqNo));
    // memcpy(data->DepositSeqNo, buf, len);
    strncpy(data->DepositSeqNo, buf, sizeof(data->DepositSeqNo));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQrySyncDepositFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQrySyncDepositFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQrySyncDepositFieldType_get_BrokerID,
    .set = PyCThostFtdcQrySyncDepositFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 出入金流水号
    /// typedef char TThostFtdcDepositSeqNoType[15]
    {
    .name = "DepositSeqNo",
    .get = PyCThostFtdcQrySyncDepositFieldType_get_DepositSeqNo,
    .set = PyCThostFtdcQrySyncDepositFieldType_set_DepositSeqNo,
    .doc = PyDoc_STR("出入金流水号"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQrySyncDepositFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQrySyncDepositField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询出入金流水")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQrySyncDepositFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQrySyncDepositFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQrySyncDepositFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQrySyncDepositFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQrySyncDepositFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQrySyncDepositFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询出入金流水")},
    {Py_tp_members, PyCThostFtdcQrySyncDepositFieldType_members},
    {Py_tp_getset, PyCThostFtdcQrySyncDepositFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQrySyncDepositFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQrySyncDepositFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQrySyncDepositFieldType_spec = {
    .name = "PyCTP.CThostFtdcQrySyncDepositField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQrySyncDepositFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQrySyncDepositFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQrySyncDepositFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQrySyncDepositFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQrySyncDepositFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQrySyncDepositFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQrySyncDepositFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQrySyncDepositFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQrySyncDepositField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySyncDepositField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}