
#include "PyCThostFtdcQrySyncFundMortgageField.h"

///查询货币质押流水

static int PyCThostFtdcQrySyncFundMortgageFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "MortgageSeqNo", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQrySyncFundMortgageField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQrySyncFundMortgageField_BrokerID_length = 0;

    /// 货币质押流水号
    /// typedef char TThostFtdcDepositSeqNoType[15]
    char *CThostFtdcQrySyncFundMortgageField_MortgageSeqNo = NULL;
    Py_ssize_t CThostFtdcQrySyncFundMortgageField_MortgageSeqNo_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
        , &CThostFtdcQrySyncFundMortgageField_BrokerID, &CThostFtdcQrySyncFundMortgageField_BrokerID_length
        , &CThostFtdcQrySyncFundMortgageField_MortgageSeqNo, &CThostFtdcQrySyncFundMortgageField_MortgageSeqNo_length
    )) {
        return -1;
    }

    PyCThostFtdcQrySyncFundMortgageFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySyncFundMortgageFieldData>(self);
    CThostFtdcQrySyncFundMortgageField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQrySyncFundMortgageField_BrokerID != NULL ) {
        if(CThostFtdcQrySyncFundMortgageField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQrySyncFundMortgageField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQrySyncFundMortgageField_BrokerID, CThostFtdcQrySyncFundMortgageField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQrySyncFundMortgageField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQrySyncFundMortgageField_BrokerID = NULL;
    }

    /// 货币质押流水号
    /// typedef char TThostFtdcDepositSeqNoType[15]
    if( CThostFtdcQrySyncFundMortgageField_MortgageSeqNo != NULL ) {
        if(CThostFtdcQrySyncFundMortgageField_MortgageSeqNo_length >= (Py_ssize_t)sizeof(data->MortgageSeqNo)) {
            PyErr_Format(PyExc_ValueError, "MortgageSeqNo too long: length=%zd (max allowed is 14)", CThostFtdcQrySyncFundMortgageField_MortgageSeqNo_length);
            return -1;
        }
        // memset(data->MortgageSeqNo, 0, sizeof(data->MortgageSeqNo));
        // memcpy(data->MortgageSeqNo, CThostFtdcQrySyncFundMortgageField_MortgageSeqNo, CThostFtdcQrySyncFundMortgageField_MortgageSeqNo_length);
        strncpy(data->MortgageSeqNo, CThostFtdcQrySyncFundMortgageField_MortgageSeqNo, sizeof(data->MortgageSeqNo));
        CThostFtdcQrySyncFundMortgageField_MortgageSeqNo = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQrySyncFundMortgageFieldType_repr(PyObject *self) {

    PyCThostFtdcQrySyncFundMortgageFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySyncFundMortgageFieldData>(self);
    CThostFtdcQrySyncFundMortgageField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "MortgageSeqNo", data->MortgageSeqNo//, (Py_ssize_t)sizeof(data->MortgageSeqNo)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySyncFundMortgageField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySyncFundMortgageField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQrySyncFundMortgageFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQrySyncFundMortgageFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySyncFundMortgageFieldData>(self);
    CThostFtdcQrySyncFundMortgageField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQrySyncFundMortgageFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySyncFundMortgageField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySyncFundMortgageFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySyncFundMortgageFieldData>(self);
    CThostFtdcQrySyncFundMortgageField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 货币质押流水号
/// typedef char TThostFtdcDepositSeqNoType[15]
static PyObject *PyCThostFtdcQrySyncFundMortgageFieldType_get_MortgageSeqNo(PyObject *self, void *closure) {
    PyCThostFtdcQrySyncFundMortgageFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySyncFundMortgageFieldData>(self);
    CThostFtdcQrySyncFundMortgageField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MortgageSeqNo, (Py_ssize_t)sizeof(data->MortgageSeqNo));
    return PyBytes_FromString(data->MortgageSeqNo);
}

static int PyCThostFtdcQrySyncFundMortgageFieldType_set_MortgageSeqNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MortgageSeqNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySyncFundMortgageField::MortgageSeqNo)) {
        PyErr_SetString(PyExc_ValueError, "MortgageSeqNo must be less than 14 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySyncFundMortgageFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySyncFundMortgageFieldData>(self);
    CThostFtdcQrySyncFundMortgageField *data = &(extra->data);
    // memset(data->MortgageSeqNo, 0, sizeof(data->MortgageSeqNo));
    // memcpy(data->MortgageSeqNo, buf, len);
    strncpy(data->MortgageSeqNo, buf, sizeof(data->MortgageSeqNo));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQrySyncFundMortgageFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQrySyncFundMortgageFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQrySyncFundMortgageFieldType_get_BrokerID,
    .set = PyCThostFtdcQrySyncFundMortgageFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 货币质押流水号
    /// typedef char TThostFtdcDepositSeqNoType[15]
    {
    .name = "MortgageSeqNo",
    .get = PyCThostFtdcQrySyncFundMortgageFieldType_get_MortgageSeqNo,
    .set = PyCThostFtdcQrySyncFundMortgageFieldType_set_MortgageSeqNo,
    .doc = PyDoc_STR("货币质押流水号"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQrySyncFundMortgageFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQrySyncFundMortgageField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询货币质押流水")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQrySyncFundMortgageFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQrySyncFundMortgageFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQrySyncFundMortgageFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQrySyncFundMortgageFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQrySyncFundMortgageFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQrySyncFundMortgageFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询货币质押流水")},
    {Py_tp_members, PyCThostFtdcQrySyncFundMortgageFieldType_members},
    {Py_tp_getset, PyCThostFtdcQrySyncFundMortgageFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQrySyncFundMortgageFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQrySyncFundMortgageFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQrySyncFundMortgageFieldType_spec = {
    .name = "PyCTP.CThostFtdcQrySyncFundMortgageField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQrySyncFundMortgageFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQrySyncFundMortgageFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQrySyncFundMortgageFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQrySyncFundMortgageFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQrySyncFundMortgageFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQrySyncFundMortgageFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQrySyncFundMortgageFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQrySyncFundMortgageFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQrySyncFundMortgageField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySyncFundMortgageField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}