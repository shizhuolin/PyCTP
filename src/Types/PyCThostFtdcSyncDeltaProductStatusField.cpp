
#include "PyCThostFtdcSyncDeltaProductStatusField.h"

///风险结算追平产品信息

static int PyCThostFtdcSyncDeltaProductStatusFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "SyncDeltaSequenceNo", "ExchangeID", "ProductID", "ProductStatus", NULL };


    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaProductStatusField_SyncDeltaSequenceNo = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcSyncDeltaProductStatusField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaProductStatusField_ExchangeID_length = 0;

    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncDeltaProductStatusField_ProductID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaProductStatusField_ProductID_length = 0;

    /// 是否允许交易
    /// typedef char TThostFtdcProductStatusType
    char CThostFtdcSyncDeltaProductStatusField_ProductStatus = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iy#y#c", (char **)kwlist
        , &CThostFtdcSyncDeltaProductStatusField_SyncDeltaSequenceNo
        , &CThostFtdcSyncDeltaProductStatusField_ExchangeID, &CThostFtdcSyncDeltaProductStatusField_ExchangeID_length
        , &CThostFtdcSyncDeltaProductStatusField_ProductID, &CThostFtdcSyncDeltaProductStatusField_ProductID_length
        , &CThostFtdcSyncDeltaProductStatusField_ProductStatus
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaProductStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaProductStatusFieldData>(self);
    CThostFtdcSyncDeltaProductStatusField *data = &(extra->data);


    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaProductStatusField_SyncDeltaSequenceNo;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcSyncDeltaProductStatusField_ExchangeID != NULL ) {
        if(CThostFtdcSyncDeltaProductStatusField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcSyncDeltaProductStatusField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcSyncDeltaProductStatusField_ExchangeID, CThostFtdcSyncDeltaProductStatusField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcSyncDeltaProductStatusField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcSyncDeltaProductStatusField_ExchangeID = NULL;
    }

    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncDeltaProductStatusField_ProductID != NULL ) {
        if(CThostFtdcSyncDeltaProductStatusField_ProductID_length >= (Py_ssize_t)sizeof(data->ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaProductStatusField_ProductID_length);
            return -1;
        }
        // memset(data->ProductID, 0, sizeof(data->ProductID));
        // memcpy(data->ProductID, CThostFtdcSyncDeltaProductStatusField_ProductID, CThostFtdcSyncDeltaProductStatusField_ProductID_length);
        strncpy(data->ProductID, CThostFtdcSyncDeltaProductStatusField_ProductID, sizeof(data->ProductID));
        CThostFtdcSyncDeltaProductStatusField_ProductID = NULL;
    }

    /// 是否允许交易
    /// typedef char TThostFtdcProductStatusType
    data->ProductStatus = CThostFtdcSyncDeltaProductStatusField_ProductStatus;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaProductStatusFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaProductStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaProductStatusFieldData>(self);
    CThostFtdcSyncDeltaProductStatusField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:i,s:y,s:y,s:c}"
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ProductID", data->ProductID//, (Py_ssize_t)sizeof(data->ProductID)
        , "ProductStatus", data->ProductStatus
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaProductStatusField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaProductStatusField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcSyncDeltaProductStatusFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaProductStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaProductStatusFieldData>(self);
    CThostFtdcSyncDeltaProductStatusField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcSyncDeltaProductStatusFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaProductStatusField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaProductStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaProductStatusFieldData>(self);
    CThostFtdcSyncDeltaProductStatusField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncDeltaProductStatusFieldType_get_ProductID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaProductStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaProductStatusFieldData>(self);
    CThostFtdcSyncDeltaProductStatusField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductID, (Py_ssize_t)sizeof(data->ProductID));
    return PyBytes_FromString(data->ProductID);
}

static int PyCThostFtdcSyncDeltaProductStatusFieldType_set_ProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaProductStatusField::ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaProductStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaProductStatusFieldData>(self);
    CThostFtdcSyncDeltaProductStatusField *data = &(extra->data);
    // memset(data->ProductID, 0, sizeof(data->ProductID));
    // memcpy(data->ProductID, buf, len);
    strncpy(data->ProductID, buf, sizeof(data->ProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 是否允许交易
/// typedef char TThostFtdcProductStatusType
static PyObject *PyCThostFtdcSyncDeltaProductStatusFieldType_get_ProductStatus(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaProductStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaProductStatusFieldData>(self);
    CThostFtdcSyncDeltaProductStatusField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ProductStatus), 1);
}

static int PyCThostFtdcSyncDeltaProductStatusFieldType_set_ProductStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaProductStatusField::ProductStatus)) {
        PyErr_SetString(PyExc_ValueError, "ProductStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaProductStatusFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaProductStatusFieldData>(self);
    CThostFtdcSyncDeltaProductStatusField *data = &(extra->data);
    data->ProductStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaProductStatusFieldType_members[] = {
    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "SyncDeltaSequenceNo",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaProductStatusFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaProductStatusFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcSyncDeltaProductStatusFieldType_get_ExchangeID,
    .set = PyCThostFtdcSyncDeltaProductStatusFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ProductID",
    .get = PyCThostFtdcSyncDeltaProductStatusFieldType_get_ProductID,
    .set = PyCThostFtdcSyncDeltaProductStatusFieldType_set_ProductID,
    .doc = PyDoc_STR("产品代码"),
    },
    /// 是否允许交易
    /// typedef char TThostFtdcProductStatusType
    {
    .name = "ProductStatus",
    .get = PyCThostFtdcSyncDeltaProductStatusFieldType_get_ProductStatus,
    .set = PyCThostFtdcSyncDeltaProductStatusFieldType_set_ProductStatus,
    .doc = PyDoc_STR("是否允许交易"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaProductStatusFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaProductStatusField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算追平产品信息")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaProductStatusFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaProductStatusFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaProductStatusFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaProductStatusFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaProductStatusFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaProductStatusFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算追平产品信息")},
    {Py_tp_members, PyCThostFtdcSyncDeltaProductStatusFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaProductStatusFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaProductStatusFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaProductStatusFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaProductStatusFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaProductStatusField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaProductStatusFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaProductStatusFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaProductStatusFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaProductStatusFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaProductStatusFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaProductStatusFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaProductStatusFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaProductStatusFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaProductStatusField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaProductStatusField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}