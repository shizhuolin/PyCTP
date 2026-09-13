
#include "PyCThostFtdcQueryBrokerDepositField.h"

///查询经纪公司资金

static int PyCThostFtdcQueryBrokerDepositFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "ExchangeID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQueryBrokerDepositField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQueryBrokerDepositField_BrokerID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQueryBrokerDepositField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQueryBrokerDepositField_ExchangeID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
        , &CThostFtdcQueryBrokerDepositField_BrokerID, &CThostFtdcQueryBrokerDepositField_BrokerID_length
        , &CThostFtdcQueryBrokerDepositField_ExchangeID, &CThostFtdcQueryBrokerDepositField_ExchangeID_length
    )) {
        return -1;
    }

    PyCThostFtdcQueryBrokerDepositFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQueryBrokerDepositFieldData>(self);
    CThostFtdcQueryBrokerDepositField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQueryBrokerDepositField_BrokerID != NULL ) {
        if(CThostFtdcQueryBrokerDepositField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQueryBrokerDepositField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQueryBrokerDepositField_BrokerID, CThostFtdcQueryBrokerDepositField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQueryBrokerDepositField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQueryBrokerDepositField_BrokerID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQueryBrokerDepositField_ExchangeID != NULL ) {
        if(CThostFtdcQueryBrokerDepositField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQueryBrokerDepositField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQueryBrokerDepositField_ExchangeID, CThostFtdcQueryBrokerDepositField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQueryBrokerDepositField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQueryBrokerDepositField_ExchangeID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQueryBrokerDepositFieldType_repr(PyObject *self) {

    PyCThostFtdcQueryBrokerDepositFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQueryBrokerDepositFieldData>(self);
    CThostFtdcQueryBrokerDepositField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQueryBrokerDepositField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQueryBrokerDepositField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQueryBrokerDepositFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQueryBrokerDepositFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQueryBrokerDepositFieldData>(self);
    CThostFtdcQueryBrokerDepositField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQueryBrokerDepositFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQueryBrokerDepositField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQueryBrokerDepositFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQueryBrokerDepositFieldData>(self);
    CThostFtdcQueryBrokerDepositField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQueryBrokerDepositFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQueryBrokerDepositFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQueryBrokerDepositFieldData>(self);
    CThostFtdcQueryBrokerDepositField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQueryBrokerDepositFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQueryBrokerDepositField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQueryBrokerDepositFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQueryBrokerDepositFieldData>(self);
    CThostFtdcQueryBrokerDepositField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQueryBrokerDepositFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQueryBrokerDepositFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQueryBrokerDepositFieldType_get_BrokerID,
    .set = PyCThostFtdcQueryBrokerDepositFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQueryBrokerDepositFieldType_get_ExchangeID,
    .set = PyCThostFtdcQueryBrokerDepositFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQueryBrokerDepositFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQueryBrokerDepositField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询经纪公司资金")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQueryBrokerDepositFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQueryBrokerDepositFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQueryBrokerDepositFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQueryBrokerDepositFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQueryBrokerDepositFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQueryBrokerDepositFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询经纪公司资金")},
    {Py_tp_members, PyCThostFtdcQueryBrokerDepositFieldType_members},
    {Py_tp_getset, PyCThostFtdcQueryBrokerDepositFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQueryBrokerDepositFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQueryBrokerDepositFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQueryBrokerDepositFieldType_spec = {
    .name = "PyCTP.CThostFtdcQueryBrokerDepositField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQueryBrokerDepositFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQueryBrokerDepositFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQueryBrokerDepositFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQueryBrokerDepositFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQueryBrokerDepositFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQueryBrokerDepositFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQueryBrokerDepositFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQueryBrokerDepositFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQueryBrokerDepositField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQueryBrokerDepositField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}