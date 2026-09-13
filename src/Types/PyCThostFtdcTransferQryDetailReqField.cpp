
#include "PyCThostFtdcTransferQryDetailReqField.h"

///查询银行交易明细请求，TradeCode=204999

static int PyCThostFtdcTransferQryDetailReqFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "FutureAccount", NULL };


    /// 期货资金账户
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcTransferQryDetailReqField_FutureAccount = NULL;
    Py_ssize_t CThostFtdcTransferQryDetailReqField_FutureAccount_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
        , &CThostFtdcTransferQryDetailReqField_FutureAccount, &CThostFtdcTransferQryDetailReqField_FutureAccount_length
    )) {
        return -1;
    }

    PyCThostFtdcTransferQryDetailReqFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryDetailReqFieldData>(self);
    CThostFtdcTransferQryDetailReqField *data = &(extra->data);


    /// 期货资金账户
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcTransferQryDetailReqField_FutureAccount != NULL ) {
        if(CThostFtdcTransferQryDetailReqField_FutureAccount_length >= (Py_ssize_t)sizeof(data->FutureAccount)) {
            PyErr_Format(PyExc_ValueError, "FutureAccount too long: length=%zd (max allowed is 12)", CThostFtdcTransferQryDetailReqField_FutureAccount_length);
            return -1;
        }
        // memset(data->FutureAccount, 0, sizeof(data->FutureAccount));
        // memcpy(data->FutureAccount, CThostFtdcTransferQryDetailReqField_FutureAccount, CThostFtdcTransferQryDetailReqField_FutureAccount_length);
        strncpy(data->FutureAccount, CThostFtdcTransferQryDetailReqField_FutureAccount, sizeof(data->FutureAccount));
        CThostFtdcTransferQryDetailReqField_FutureAccount = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcTransferQryDetailReqFieldType_repr(PyObject *self) {

    PyCThostFtdcTransferQryDetailReqFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryDetailReqFieldData>(self);
    CThostFtdcTransferQryDetailReqField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y}"
        , "FutureAccount", data->FutureAccount//, (Py_ssize_t)sizeof(data->FutureAccount)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferQryDetailReqField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferQryDetailReqField repr");
        return NULL;
    }

    return repr;
}


/// 期货资金账户
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcTransferQryDetailReqFieldType_get_FutureAccount(PyObject *self, void *closure) {
    PyCThostFtdcTransferQryDetailReqFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryDetailReqFieldData>(self);
    CThostFtdcTransferQryDetailReqField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->FutureAccount, (Py_ssize_t)sizeof(data->FutureAccount));
    return PyBytes_FromString(data->FutureAccount);
}

static int PyCThostFtdcTransferQryDetailReqFieldType_set_FutureAccount(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FutureAccount Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferQryDetailReqField::FutureAccount)) {
        PyErr_SetString(PyExc_ValueError, "FutureAccount must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferQryDetailReqFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferQryDetailReqFieldData>(self);
    CThostFtdcTransferQryDetailReqField *data = &(extra->data);
    // memset(data->FutureAccount, 0, sizeof(data->FutureAccount));
    // memcpy(data->FutureAccount, buf, len);
    strncpy(data->FutureAccount, buf, sizeof(data->FutureAccount));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcTransferQryDetailReqFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcTransferQryDetailReqFieldType_getsets[] = {
    /// 期货资金账户
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "FutureAccount",
    .get = PyCThostFtdcTransferQryDetailReqFieldType_get_FutureAccount,
    .set = PyCThostFtdcTransferQryDetailReqFieldType_set_FutureAccount,
    .doc = PyDoc_STR("期货资金账户"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcTransferQryDetailReqFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcTransferQryDetailReqField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询银行交易明细请求，TradeCode=204999")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcTransferQryDetailReqFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcTransferQryDetailReqFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcTransferQryDetailReqFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcTransferQryDetailReqFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcTransferQryDetailReqFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcTransferQryDetailReqFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询银行交易明细请求，TradeCode=204999")},
    {Py_tp_members, PyCThostFtdcTransferQryDetailReqFieldType_members},
    {Py_tp_getset, PyCThostFtdcTransferQryDetailReqFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcTransferQryDetailReqFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcTransferQryDetailReqFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcTransferQryDetailReqFieldType_spec = {
    .name = "PyCTP.CThostFtdcTransferQryDetailReqField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcTransferQryDetailReqFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcTransferQryDetailReqFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcTransferQryDetailReqFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcTransferQryDetailReqFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcTransferQryDetailReqFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcTransferQryDetailReqFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcTransferQryDetailReqFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcTransferQryDetailReqFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcTransferQryDetailReqField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTransferQryDetailReqField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}