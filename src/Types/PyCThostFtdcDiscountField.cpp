
#include "PyCThostFtdcDiscountField.h"

///会员资金折扣

static int PyCThostFtdcDiscountFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorRange", "InvestorID", "Discount", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcDiscountField_BrokerID = NULL;
    Py_ssize_t CThostFtdcDiscountField_BrokerID_length = 0;

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    char CThostFtdcDiscountField_InvestorRange = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcDiscountField_InvestorID = NULL;
    Py_ssize_t CThostFtdcDiscountField_InvestorID_length = 0;

    /// 资金折扣比例
    /// typedef double TThostFtdcRatioType
    double CThostFtdcDiscountField_Discount = 0.0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#d", (char **)kwlist
        , &CThostFtdcDiscountField_BrokerID, &CThostFtdcDiscountField_BrokerID_length
        , &CThostFtdcDiscountField_InvestorRange
        , &CThostFtdcDiscountField_InvestorID, &CThostFtdcDiscountField_InvestorID_length
        , &CThostFtdcDiscountField_Discount
    )) {
        return -1;
    }

    PyCThostFtdcDiscountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDiscountFieldData>(self);
    CThostFtdcDiscountField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcDiscountField_BrokerID != NULL ) {
        if(CThostFtdcDiscountField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcDiscountField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcDiscountField_BrokerID, CThostFtdcDiscountField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcDiscountField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcDiscountField_BrokerID = NULL;
    }

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    data->InvestorRange = CThostFtdcDiscountField_InvestorRange;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcDiscountField_InvestorID != NULL ) {
        if(CThostFtdcDiscountField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcDiscountField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcDiscountField_InvestorID, CThostFtdcDiscountField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcDiscountField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcDiscountField_InvestorID = NULL;
    }

    /// 资金折扣比例
    /// typedef double TThostFtdcRatioType
    data->Discount = CThostFtdcDiscountField_Discount;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcDiscountFieldType_repr(PyObject *self) {

    PyCThostFtdcDiscountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDiscountFieldData>(self);
    CThostFtdcDiscountField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:c,s:y,s:d}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorRange", data->InvestorRange
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "Discount", data->Discount
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcDiscountField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcDiscountField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcDiscountFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcDiscountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDiscountFieldData>(self);
    CThostFtdcDiscountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcDiscountFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcDiscountField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcDiscountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDiscountFieldData>(self);
    CThostFtdcDiscountField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者范围
/// typedef char TThostFtdcInvestorRangeType
static PyObject *PyCThostFtdcDiscountFieldType_get_InvestorRange(PyObject *self, void *closure) {
    PyCThostFtdcDiscountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDiscountFieldData>(self);
    CThostFtdcDiscountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->InvestorRange), 1);
}

static int PyCThostFtdcDiscountFieldType_set_InvestorRange(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcDiscountField::InvestorRange)) {
        PyErr_SetString(PyExc_ValueError, "InvestorRange must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcDiscountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDiscountFieldData>(self);
    CThostFtdcDiscountField *data = &(extra->data);
    data->InvestorRange = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcDiscountFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcDiscountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDiscountFieldData>(self);
    CThostFtdcDiscountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcDiscountFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcDiscountField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcDiscountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcDiscountFieldData>(self);
    CThostFtdcDiscountField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcDiscountFieldType_members[] = {
    /// 资金折扣比例
    /// typedef double TThostFtdcRatioType
    {
        .name = "Discount",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcDiscountFieldData, data.Discount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("资金折扣比例")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcDiscountFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcDiscountFieldType_get_BrokerID,
    .set = PyCThostFtdcDiscountFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    {
    .name = "InvestorRange",
    .get = PyCThostFtdcDiscountFieldType_get_InvestorRange,
    .set = PyCThostFtdcDiscountFieldType_set_InvestorRange,
    .doc = PyDoc_STR("投资者范围"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcDiscountFieldType_get_InvestorID,
    .set = PyCThostFtdcDiscountFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcDiscountFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcDiscountField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("会员资金折扣")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcDiscountFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcDiscountFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcDiscountFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcDiscountFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcDiscountFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcDiscountFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("会员资金折扣")},
    {Py_tp_members, PyCThostFtdcDiscountFieldType_members},
    {Py_tp_getset, PyCThostFtdcDiscountFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcDiscountFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcDiscountFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcDiscountFieldType_spec = {
    .name = "PyCTP.CThostFtdcDiscountField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcDiscountFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcDiscountFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcDiscountFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcDiscountFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcDiscountFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcDiscountFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcDiscountFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcDiscountFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcDiscountField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcDiscountField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}