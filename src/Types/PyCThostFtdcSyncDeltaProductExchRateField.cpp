
#include "PyCThostFtdcSyncDeltaProductExchRateField.h"

///风险结算追平交叉汇率

static int PyCThostFtdcSyncDeltaProductExchRateFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ProductID", "QuoteCurrencyID", "ExchangeRate", "ActionDirection", "SyncDeltaSequenceNo", NULL };


    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncDeltaProductExchRateField_ProductID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaProductExchRateField_ProductID_length = 0;

    /// 报价币种类型
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcSyncDeltaProductExchRateField_QuoteCurrencyID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaProductExchRateField_QuoteCurrencyID_length = 0;

    /// 汇率
    /// typedef double TThostFtdcExchangeRateType
    double CThostFtdcSyncDeltaProductExchRateField_ExchangeRate = 0.0;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    char CThostFtdcSyncDeltaProductExchRateField_ActionDirection = 0;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaProductExchRateField_SyncDeltaSequenceNo = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#dci", (char **)kwlist
        , &CThostFtdcSyncDeltaProductExchRateField_ProductID, &CThostFtdcSyncDeltaProductExchRateField_ProductID_length
        , &CThostFtdcSyncDeltaProductExchRateField_QuoteCurrencyID, &CThostFtdcSyncDeltaProductExchRateField_QuoteCurrencyID_length
        , &CThostFtdcSyncDeltaProductExchRateField_ExchangeRate
        , &CThostFtdcSyncDeltaProductExchRateField_ActionDirection
        , &CThostFtdcSyncDeltaProductExchRateField_SyncDeltaSequenceNo
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaProductExchRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaProductExchRateFieldData>(self);
    CThostFtdcSyncDeltaProductExchRateField *data = &(extra->data);


    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncDeltaProductExchRateField_ProductID != NULL ) {
        if(CThostFtdcSyncDeltaProductExchRateField_ProductID_length >= (Py_ssize_t)sizeof(data->ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaProductExchRateField_ProductID_length);
            return -1;
        }
        // memset(data->ProductID, 0, sizeof(data->ProductID));
        // memcpy(data->ProductID, CThostFtdcSyncDeltaProductExchRateField_ProductID, CThostFtdcSyncDeltaProductExchRateField_ProductID_length);
        strncpy(data->ProductID, CThostFtdcSyncDeltaProductExchRateField_ProductID, sizeof(data->ProductID));
        CThostFtdcSyncDeltaProductExchRateField_ProductID = NULL;
    }

    /// 报价币种类型
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcSyncDeltaProductExchRateField_QuoteCurrencyID != NULL ) {
        if(CThostFtdcSyncDeltaProductExchRateField_QuoteCurrencyID_length >= (Py_ssize_t)sizeof(data->QuoteCurrencyID)) {
            PyErr_Format(PyExc_ValueError, "QuoteCurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcSyncDeltaProductExchRateField_QuoteCurrencyID_length);
            return -1;
        }
        // memset(data->QuoteCurrencyID, 0, sizeof(data->QuoteCurrencyID));
        // memcpy(data->QuoteCurrencyID, CThostFtdcSyncDeltaProductExchRateField_QuoteCurrencyID, CThostFtdcSyncDeltaProductExchRateField_QuoteCurrencyID_length);
        strncpy(data->QuoteCurrencyID, CThostFtdcSyncDeltaProductExchRateField_QuoteCurrencyID, sizeof(data->QuoteCurrencyID));
        CThostFtdcSyncDeltaProductExchRateField_QuoteCurrencyID = NULL;
    }

    /// 汇率
    /// typedef double TThostFtdcExchangeRateType
    data->ExchangeRate = CThostFtdcSyncDeltaProductExchRateField_ExchangeRate;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    data->ActionDirection = CThostFtdcSyncDeltaProductExchRateField_ActionDirection;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaProductExchRateField_SyncDeltaSequenceNo;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaProductExchRateFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaProductExchRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaProductExchRateFieldData>(self);
    CThostFtdcSyncDeltaProductExchRateField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:d,s:c,s:i}"
        , "ProductID", data->ProductID//, (Py_ssize_t)sizeof(data->ProductID)
        , "QuoteCurrencyID", data->QuoteCurrencyID//, (Py_ssize_t)sizeof(data->QuoteCurrencyID)
        , "ExchangeRate", data->ExchangeRate
        , "ActionDirection", data->ActionDirection
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaProductExchRateField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaProductExchRateField repr");
        return NULL;
    }

    return repr;
}


/// 产品代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncDeltaProductExchRateFieldType_get_ProductID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaProductExchRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaProductExchRateFieldData>(self);
    CThostFtdcSyncDeltaProductExchRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductID, (Py_ssize_t)sizeof(data->ProductID));
    return PyBytes_FromString(data->ProductID);
}

static int PyCThostFtdcSyncDeltaProductExchRateFieldType_set_ProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaProductExchRateField::ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaProductExchRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaProductExchRateFieldData>(self);
    CThostFtdcSyncDeltaProductExchRateField *data = &(extra->data);
    // memset(data->ProductID, 0, sizeof(data->ProductID));
    // memcpy(data->ProductID, buf, len);
    strncpy(data->ProductID, buf, sizeof(data->ProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报价币种类型
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcSyncDeltaProductExchRateFieldType_get_QuoteCurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaProductExchRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaProductExchRateFieldData>(self);
    CThostFtdcSyncDeltaProductExchRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->QuoteCurrencyID, (Py_ssize_t)sizeof(data->QuoteCurrencyID));
    return PyBytes_FromString(data->QuoteCurrencyID);
}

static int PyCThostFtdcSyncDeltaProductExchRateFieldType_set_QuoteCurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "QuoteCurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaProductExchRateField::QuoteCurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "QuoteCurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaProductExchRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaProductExchRateFieldData>(self);
    CThostFtdcSyncDeltaProductExchRateField *data = &(extra->data);
    // memset(data->QuoteCurrencyID, 0, sizeof(data->QuoteCurrencyID));
    // memcpy(data->QuoteCurrencyID, buf, len);
    strncpy(data->QuoteCurrencyID, buf, sizeof(data->QuoteCurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionDirectionType
static PyObject *PyCThostFtdcSyncDeltaProductExchRateFieldType_get_ActionDirection(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaProductExchRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaProductExchRateFieldData>(self);
    CThostFtdcSyncDeltaProductExchRateField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionDirection), 1);
}

static int PyCThostFtdcSyncDeltaProductExchRateFieldType_set_ActionDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaProductExchRateField::ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaProductExchRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaProductExchRateFieldData>(self);
    CThostFtdcSyncDeltaProductExchRateField *data = &(extra->data);
    data->ActionDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaProductExchRateFieldType_members[] = {
    /// 汇率
    /// typedef double TThostFtdcExchangeRateType
    {
        .name = "ExchangeRate",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaProductExchRateFieldData, data.ExchangeRate),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("汇率")
    },
    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "SyncDeltaSequenceNo",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaProductExchRateFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaProductExchRateFieldType_getsets[] = {
    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ProductID",
    .get = PyCThostFtdcSyncDeltaProductExchRateFieldType_get_ProductID,
    .set = PyCThostFtdcSyncDeltaProductExchRateFieldType_set_ProductID,
    .doc = PyDoc_STR("产品代码"),
    },
    /// 报价币种类型
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "QuoteCurrencyID",
    .get = PyCThostFtdcSyncDeltaProductExchRateFieldType_get_QuoteCurrencyID,
    .set = PyCThostFtdcSyncDeltaProductExchRateFieldType_set_QuoteCurrencyID,
    .doc = PyDoc_STR("报价币种类型"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    {
    .name = "ActionDirection",
    .get = PyCThostFtdcSyncDeltaProductExchRateFieldType_get_ActionDirection,
    .set = PyCThostFtdcSyncDeltaProductExchRateFieldType_set_ActionDirection,
    .doc = PyDoc_STR("操作标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaProductExchRateFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaProductExchRateField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算追平交叉汇率")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaProductExchRateFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaProductExchRateFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaProductExchRateFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaProductExchRateFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaProductExchRateFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaProductExchRateFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算追平交叉汇率")},
    {Py_tp_members, PyCThostFtdcSyncDeltaProductExchRateFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaProductExchRateFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaProductExchRateFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaProductExchRateFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaProductExchRateFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaProductExchRateField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaProductExchRateFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaProductExchRateFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaProductExchRateFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaProductExchRateFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaProductExchRateFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaProductExchRateFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaProductExchRateFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaProductExchRateFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaProductExchRateField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaProductExchRateField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}