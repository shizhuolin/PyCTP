
#include "PyCThostFtdcQryExchangeRateField.h"

///查询汇率

static int PyCThostFtdcQryExchangeRateFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "FromCurrencyID", "ToCurrencyID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryExchangeRateField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryExchangeRateField_BrokerID_length = 0;

    /// 源币种
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcQryExchangeRateField_FromCurrencyID = NULL;
    Py_ssize_t CThostFtdcQryExchangeRateField_FromCurrencyID_length = 0;

    /// 目标币种
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcQryExchangeRateField_ToCurrencyID = NULL;
    Py_ssize_t CThostFtdcQryExchangeRateField_ToCurrencyID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcQryExchangeRateField_BrokerID, &CThostFtdcQryExchangeRateField_BrokerID_length
        , &CThostFtdcQryExchangeRateField_FromCurrencyID, &CThostFtdcQryExchangeRateField_FromCurrencyID_length
        , &CThostFtdcQryExchangeRateField_ToCurrencyID, &CThostFtdcQryExchangeRateField_ToCurrencyID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryExchangeRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeRateFieldData>(self);
    CThostFtdcQryExchangeRateField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryExchangeRateField_BrokerID != NULL ) {
        if(CThostFtdcQryExchangeRateField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryExchangeRateField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryExchangeRateField_BrokerID, CThostFtdcQryExchangeRateField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryExchangeRateField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryExchangeRateField_BrokerID = NULL;
    }

    /// 源币种
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcQryExchangeRateField_FromCurrencyID != NULL ) {
        if(CThostFtdcQryExchangeRateField_FromCurrencyID_length >= (Py_ssize_t)sizeof(data->FromCurrencyID)) {
            PyErr_Format(PyExc_ValueError, "FromCurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcQryExchangeRateField_FromCurrencyID_length);
            return -1;
        }
        // memset(data->FromCurrencyID, 0, sizeof(data->FromCurrencyID));
        // memcpy(data->FromCurrencyID, CThostFtdcQryExchangeRateField_FromCurrencyID, CThostFtdcQryExchangeRateField_FromCurrencyID_length);
        strncpy(data->FromCurrencyID, CThostFtdcQryExchangeRateField_FromCurrencyID, sizeof(data->FromCurrencyID));
        CThostFtdcQryExchangeRateField_FromCurrencyID = NULL;
    }

    /// 目标币种
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcQryExchangeRateField_ToCurrencyID != NULL ) {
        if(CThostFtdcQryExchangeRateField_ToCurrencyID_length >= (Py_ssize_t)sizeof(data->ToCurrencyID)) {
            PyErr_Format(PyExc_ValueError, "ToCurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcQryExchangeRateField_ToCurrencyID_length);
            return -1;
        }
        // memset(data->ToCurrencyID, 0, sizeof(data->ToCurrencyID));
        // memcpy(data->ToCurrencyID, CThostFtdcQryExchangeRateField_ToCurrencyID, CThostFtdcQryExchangeRateField_ToCurrencyID_length);
        strncpy(data->ToCurrencyID, CThostFtdcQryExchangeRateField_ToCurrencyID, sizeof(data->ToCurrencyID));
        CThostFtdcQryExchangeRateField_ToCurrencyID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryExchangeRateFieldType_repr(PyObject *self) {

    PyCThostFtdcQryExchangeRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeRateFieldData>(self);
    CThostFtdcQryExchangeRateField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "FromCurrencyID", data->FromCurrencyID//, (Py_ssize_t)sizeof(data->FromCurrencyID)
        , "ToCurrencyID", data->ToCurrencyID//, (Py_ssize_t)sizeof(data->ToCurrencyID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExchangeRateField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExchangeRateField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryExchangeRateFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryExchangeRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeRateFieldData>(self);
    CThostFtdcQryExchangeRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryExchangeRateFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExchangeRateField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExchangeRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeRateFieldData>(self);
    CThostFtdcQryExchangeRateField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 源币种
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcQryExchangeRateFieldType_get_FromCurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcQryExchangeRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeRateFieldData>(self);
    CThostFtdcQryExchangeRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->FromCurrencyID, (Py_ssize_t)sizeof(data->FromCurrencyID));
    return PyBytes_FromString(data->FromCurrencyID);
}

static int PyCThostFtdcQryExchangeRateFieldType_set_FromCurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FromCurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExchangeRateField::FromCurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "FromCurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExchangeRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeRateFieldData>(self);
    CThostFtdcQryExchangeRateField *data = &(extra->data);
    // memset(data->FromCurrencyID, 0, sizeof(data->FromCurrencyID));
    // memcpy(data->FromCurrencyID, buf, len);
    strncpy(data->FromCurrencyID, buf, sizeof(data->FromCurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 目标币种
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcQryExchangeRateFieldType_get_ToCurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcQryExchangeRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeRateFieldData>(self);
    CThostFtdcQryExchangeRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ToCurrencyID, (Py_ssize_t)sizeof(data->ToCurrencyID));
    return PyBytes_FromString(data->ToCurrencyID);
}

static int PyCThostFtdcQryExchangeRateFieldType_set_ToCurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ToCurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExchangeRateField::ToCurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "ToCurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExchangeRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeRateFieldData>(self);
    CThostFtdcQryExchangeRateField *data = &(extra->data);
    // memset(data->ToCurrencyID, 0, sizeof(data->ToCurrencyID));
    // memcpy(data->ToCurrencyID, buf, len);
    strncpy(data->ToCurrencyID, buf, sizeof(data->ToCurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryExchangeRateFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryExchangeRateFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryExchangeRateFieldType_get_BrokerID,
    .set = PyCThostFtdcQryExchangeRateFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 源币种
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "FromCurrencyID",
    .get = PyCThostFtdcQryExchangeRateFieldType_get_FromCurrencyID,
    .set = PyCThostFtdcQryExchangeRateFieldType_set_FromCurrencyID,
    .doc = PyDoc_STR("源币种"),
    },
    /// 目标币种
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "ToCurrencyID",
    .get = PyCThostFtdcQryExchangeRateFieldType_get_ToCurrencyID,
    .set = PyCThostFtdcQryExchangeRateFieldType_set_ToCurrencyID,
    .doc = PyDoc_STR("目标币种"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryExchangeRateFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryExchangeRateField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询汇率")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryExchangeRateFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryExchangeRateFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryExchangeRateFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryExchangeRateFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryExchangeRateFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryExchangeRateFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询汇率")},
    {Py_tp_members, PyCThostFtdcQryExchangeRateFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryExchangeRateFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryExchangeRateFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryExchangeRateFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryExchangeRateFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryExchangeRateField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryExchangeRateFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryExchangeRateFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryExchangeRateFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryExchangeRateFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryExchangeRateFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryExchangeRateFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryExchangeRateFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryExchangeRateFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryExchangeRateField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryExchangeRateField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}