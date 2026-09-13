
#include "PyCThostFtdcRiskSettleProductStatusField.h"

///风险品种

static int PyCThostFtdcRiskSettleProductStatusFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "ProductID", "ProductStatus", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcRiskSettleProductStatusField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcRiskSettleProductStatusField_ExchangeID_length = 0;

    /// 产品编号
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcRiskSettleProductStatusField_ProductID = NULL;
    Py_ssize_t CThostFtdcRiskSettleProductStatusField_ProductID_length = 0;

    /// 产品结算状态
    /// typedef char TThostFtdcProductStatusType
    char CThostFtdcRiskSettleProductStatusField_ProductStatus = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#c", (char **)kwlist
        , &CThostFtdcRiskSettleProductStatusField_ExchangeID, &CThostFtdcRiskSettleProductStatusField_ExchangeID_length
        , &CThostFtdcRiskSettleProductStatusField_ProductID, &CThostFtdcRiskSettleProductStatusField_ProductID_length
        , &CThostFtdcRiskSettleProductStatusField_ProductStatus
    )) {
        return -1;
    }

    PyCThostFtdcRiskSettleProductStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskSettleProductStatusFieldData>(self);
    CThostFtdcRiskSettleProductStatusField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcRiskSettleProductStatusField_ExchangeID != NULL ) {
        if(CThostFtdcRiskSettleProductStatusField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcRiskSettleProductStatusField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcRiskSettleProductStatusField_ExchangeID, CThostFtdcRiskSettleProductStatusField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcRiskSettleProductStatusField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcRiskSettleProductStatusField_ExchangeID = NULL;
    }

    /// 产品编号
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcRiskSettleProductStatusField_ProductID != NULL ) {
        if(CThostFtdcRiskSettleProductStatusField_ProductID_length >= (Py_ssize_t)sizeof(data->ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is 80)", CThostFtdcRiskSettleProductStatusField_ProductID_length);
            return -1;
        }
        // memset(data->ProductID, 0, sizeof(data->ProductID));
        // memcpy(data->ProductID, CThostFtdcRiskSettleProductStatusField_ProductID, CThostFtdcRiskSettleProductStatusField_ProductID_length);
        strncpy(data->ProductID, CThostFtdcRiskSettleProductStatusField_ProductID, sizeof(data->ProductID));
        CThostFtdcRiskSettleProductStatusField_ProductID = NULL;
    }

    /// 产品结算状态
    /// typedef char TThostFtdcProductStatusType
    data->ProductStatus = CThostFtdcRiskSettleProductStatusField_ProductStatus;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcRiskSettleProductStatusFieldType_repr(PyObject *self) {

    PyCThostFtdcRiskSettleProductStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskSettleProductStatusFieldData>(self);
    CThostFtdcRiskSettleProductStatusField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:c}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ProductID", data->ProductID//, (Py_ssize_t)sizeof(data->ProductID)
        , "ProductStatus", data->ProductStatus
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRiskSettleProductStatusField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRiskSettleProductStatusField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcRiskSettleProductStatusFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcRiskSettleProductStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskSettleProductStatusFieldData>(self);
    CThostFtdcRiskSettleProductStatusField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcRiskSettleProductStatusFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRiskSettleProductStatusField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRiskSettleProductStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskSettleProductStatusFieldData>(self);
    CThostFtdcRiskSettleProductStatusField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品编号
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcRiskSettleProductStatusFieldType_get_ProductID(PyObject *self, void *closure) {
    PyCThostFtdcRiskSettleProductStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskSettleProductStatusFieldData>(self);
    CThostFtdcRiskSettleProductStatusField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductID, (Py_ssize_t)sizeof(data->ProductID));
    return PyBytes_FromString(data->ProductID);
}

static int PyCThostFtdcRiskSettleProductStatusFieldType_set_ProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRiskSettleProductStatusField::ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRiskSettleProductStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskSettleProductStatusFieldData>(self);
    CThostFtdcRiskSettleProductStatusField *data = &(extra->data);
    // memset(data->ProductID, 0, sizeof(data->ProductID));
    // memcpy(data->ProductID, buf, len);
    strncpy(data->ProductID, buf, sizeof(data->ProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品结算状态
/// typedef char TThostFtdcProductStatusType
static PyObject *PyCThostFtdcRiskSettleProductStatusFieldType_get_ProductStatus(PyObject *self, void *closure) {
    PyCThostFtdcRiskSettleProductStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskSettleProductStatusFieldData>(self);
    CThostFtdcRiskSettleProductStatusField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ProductStatus), 1);
}

static int PyCThostFtdcRiskSettleProductStatusFieldType_set_ProductStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRiskSettleProductStatusField::ProductStatus)) {
        PyErr_SetString(PyExc_ValueError, "ProductStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRiskSettleProductStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskSettleProductStatusFieldData>(self);
    CThostFtdcRiskSettleProductStatusField *data = &(extra->data);
    data->ProductStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcRiskSettleProductStatusFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcRiskSettleProductStatusFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcRiskSettleProductStatusFieldType_get_ExchangeID,
    .set = PyCThostFtdcRiskSettleProductStatusFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 产品编号
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ProductID",
    .get = PyCThostFtdcRiskSettleProductStatusFieldType_get_ProductID,
    .set = PyCThostFtdcRiskSettleProductStatusFieldType_set_ProductID,
    .doc = PyDoc_STR("产品编号"),
    },
    /// 产品结算状态
    /// typedef char TThostFtdcProductStatusType
    {
    .name = "ProductStatus",
    .get = PyCThostFtdcRiskSettleProductStatusFieldType_get_ProductStatus,
    .set = PyCThostFtdcRiskSettleProductStatusFieldType_set_ProductStatus,
    .doc = PyDoc_STR("产品结算状态"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcRiskSettleProductStatusFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcRiskSettleProductStatusField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险品种")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcRiskSettleProductStatusFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcRiskSettleProductStatusFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcRiskSettleProductStatusFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcRiskSettleProductStatusFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcRiskSettleProductStatusFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcRiskSettleProductStatusFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险品种")},
    {Py_tp_members, PyCThostFtdcRiskSettleProductStatusFieldType_members},
    {Py_tp_getset, PyCThostFtdcRiskSettleProductStatusFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcRiskSettleProductStatusFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcRiskSettleProductStatusFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcRiskSettleProductStatusFieldType_spec = {
    .name = "PyCTP.CThostFtdcRiskSettleProductStatusField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcRiskSettleProductStatusFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcRiskSettleProductStatusFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcRiskSettleProductStatusFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcRiskSettleProductStatusFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcRiskSettleProductStatusFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcRiskSettleProductStatusFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcRiskSettleProductStatusFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcRiskSettleProductStatusFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcRiskSettleProductStatusField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRiskSettleProductStatusField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}