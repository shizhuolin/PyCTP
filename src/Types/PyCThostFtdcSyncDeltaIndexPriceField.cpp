
#include "PyCThostFtdcSyncDeltaIndexPriceField.h"

///风险结算追平现货指数

static int PyCThostFtdcSyncDeltaIndexPriceFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InstrumentID", "ClosePrice", "ActionDirection", "SyncDeltaSequenceNo", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSyncDeltaIndexPriceField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaIndexPriceField_BrokerID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncDeltaIndexPriceField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcSyncDeltaIndexPriceField_InstrumentID_length = 0;

    /// 指数现货收盘价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcSyncDeltaIndexPriceField_ClosePrice = 0.0;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    char CThostFtdcSyncDeltaIndexPriceField_ActionDirection = 0;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcSyncDeltaIndexPriceField_SyncDeltaSequenceNo = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#dci", (char **)kwlist
        , &CThostFtdcSyncDeltaIndexPriceField_BrokerID, &CThostFtdcSyncDeltaIndexPriceField_BrokerID_length
        , &CThostFtdcSyncDeltaIndexPriceField_InstrumentID, &CThostFtdcSyncDeltaIndexPriceField_InstrumentID_length
        , &CThostFtdcSyncDeltaIndexPriceField_ClosePrice
        , &CThostFtdcSyncDeltaIndexPriceField_ActionDirection
        , &CThostFtdcSyncDeltaIndexPriceField_SyncDeltaSequenceNo
    )) {
        return -1;
    }

    PyCThostFtdcSyncDeltaIndexPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaIndexPriceFieldData>(self);
    CThostFtdcSyncDeltaIndexPriceField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSyncDeltaIndexPriceField_BrokerID != NULL ) {
        if(CThostFtdcSyncDeltaIndexPriceField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSyncDeltaIndexPriceField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSyncDeltaIndexPriceField_BrokerID, CThostFtdcSyncDeltaIndexPriceField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSyncDeltaIndexPriceField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSyncDeltaIndexPriceField_BrokerID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncDeltaIndexPriceField_InstrumentID != NULL ) {
        if(CThostFtdcSyncDeltaIndexPriceField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcSyncDeltaIndexPriceField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcSyncDeltaIndexPriceField_InstrumentID, CThostFtdcSyncDeltaIndexPriceField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcSyncDeltaIndexPriceField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcSyncDeltaIndexPriceField_InstrumentID = NULL;
    }

    /// 指数现货收盘价
    /// typedef double TThostFtdcPriceType
    data->ClosePrice = CThostFtdcSyncDeltaIndexPriceField_ClosePrice;

    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    data->ActionDirection = CThostFtdcSyncDeltaIndexPriceField_ActionDirection;

    /// 追平序号
    /// typedef int TThostFtdcSequenceNoType
    data->SyncDeltaSequenceNo = CThostFtdcSyncDeltaIndexPriceField_SyncDeltaSequenceNo;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncDeltaIndexPriceFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncDeltaIndexPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaIndexPriceFieldData>(self);
    CThostFtdcSyncDeltaIndexPriceField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:d,s:c,s:i}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "ClosePrice", data->ClosePrice
        , "ActionDirection", data->ActionDirection
        , "SyncDeltaSequenceNo", data->SyncDeltaSequenceNo
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaIndexPriceField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaIndexPriceField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSyncDeltaIndexPriceFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaIndexPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaIndexPriceFieldData>(self);
    CThostFtdcSyncDeltaIndexPriceField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSyncDeltaIndexPriceFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaIndexPriceField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaIndexPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaIndexPriceFieldData>(self);
    CThostFtdcSyncDeltaIndexPriceField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncDeltaIndexPriceFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaIndexPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaIndexPriceFieldData>(self);
    CThostFtdcSyncDeltaIndexPriceField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcSyncDeltaIndexPriceFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncDeltaIndexPriceField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaIndexPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaIndexPriceFieldData>(self);
    CThostFtdcSyncDeltaIndexPriceField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionDirectionType
static PyObject *PyCThostFtdcSyncDeltaIndexPriceFieldType_get_ActionDirection(PyObject *self, void *closure) {
    PyCThostFtdcSyncDeltaIndexPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaIndexPriceFieldData>(self);
    CThostFtdcSyncDeltaIndexPriceField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionDirection), 1);
}

static int PyCThostFtdcSyncDeltaIndexPriceFieldType_set_ActionDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncDeltaIndexPriceField::ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncDeltaIndexPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncDeltaIndexPriceFieldData>(self);
    CThostFtdcSyncDeltaIndexPriceField *data = &(extra->data);
    data->ActionDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncDeltaIndexPriceFieldType_members[] = {
    /// 指数现货收盘价
    /// typedef double TThostFtdcPriceType
    {
        .name = "ClosePrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncDeltaIndexPriceFieldData, data.ClosePrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("指数现货收盘价")
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
        .offset = offsetof(PyCThostFtdcSyncDeltaIndexPriceFieldData, data.SyncDeltaSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("追平序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncDeltaIndexPriceFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSyncDeltaIndexPriceFieldType_get_BrokerID,
    .set = PyCThostFtdcSyncDeltaIndexPriceFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcSyncDeltaIndexPriceFieldType_get_InstrumentID,
    .set = PyCThostFtdcSyncDeltaIndexPriceFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionDirectionType
    {
    .name = "ActionDirection",
    .get = PyCThostFtdcSyncDeltaIndexPriceFieldType_get_ActionDirection,
    .set = PyCThostFtdcSyncDeltaIndexPriceFieldType_set_ActionDirection,
    .doc = PyDoc_STR("操作标志"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncDeltaIndexPriceFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncDeltaIndexPriceField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风险结算追平现货指数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncDeltaIndexPriceFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncDeltaIndexPriceFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncDeltaIndexPriceFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncDeltaIndexPriceFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncDeltaIndexPriceFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncDeltaIndexPriceFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风险结算追平现货指数")},
    {Py_tp_members, PyCThostFtdcSyncDeltaIndexPriceFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncDeltaIndexPriceFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncDeltaIndexPriceFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncDeltaIndexPriceFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncDeltaIndexPriceFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncDeltaIndexPriceField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaIndexPriceFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncDeltaIndexPriceFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncDeltaIndexPriceFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncDeltaIndexPriceFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncDeltaIndexPriceFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncDeltaIndexPriceFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncDeltaIndexPriceFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncDeltaIndexPriceFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaIndexPriceField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaIndexPriceField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}