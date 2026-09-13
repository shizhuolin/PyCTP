
#include "PyCThostFtdcIndexPriceField.h"

///股指现货指数

static int PyCThostFtdcIndexPriceFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "reserve1", "ClosePrice", "InstrumentID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcIndexPriceField_BrokerID = NULL;
    Py_ssize_t CThostFtdcIndexPriceField_BrokerID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcIndexPriceField_reserve1 = NULL;
    Py_ssize_t CThostFtdcIndexPriceField_reserve1_length = 0;

    /// 指数现货收盘价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcIndexPriceField_ClosePrice = 0.0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcIndexPriceField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcIndexPriceField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#dy#", (char **)kwlist
        , &CThostFtdcIndexPriceField_BrokerID, &CThostFtdcIndexPriceField_BrokerID_length
        , &CThostFtdcIndexPriceField_reserve1, &CThostFtdcIndexPriceField_reserve1_length
        , &CThostFtdcIndexPriceField_ClosePrice
        , &CThostFtdcIndexPriceField_InstrumentID, &CThostFtdcIndexPriceField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcIndexPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcIndexPriceFieldData>(self);
    CThostFtdcIndexPriceField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcIndexPriceField_BrokerID != NULL ) {
        if(CThostFtdcIndexPriceField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcIndexPriceField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcIndexPriceField_BrokerID, CThostFtdcIndexPriceField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcIndexPriceField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcIndexPriceField_BrokerID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcIndexPriceField_reserve1 != NULL ) {
        if(CThostFtdcIndexPriceField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcIndexPriceField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcIndexPriceField_reserve1, CThostFtdcIndexPriceField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcIndexPriceField_reserve1, sizeof(data->reserve1));
        CThostFtdcIndexPriceField_reserve1 = NULL;
    }

    /// 指数现货收盘价
    /// typedef double TThostFtdcPriceType
    data->ClosePrice = CThostFtdcIndexPriceField_ClosePrice;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcIndexPriceField_InstrumentID != NULL ) {
        if(CThostFtdcIndexPriceField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcIndexPriceField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcIndexPriceField_InstrumentID, CThostFtdcIndexPriceField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcIndexPriceField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcIndexPriceField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcIndexPriceFieldType_repr(PyObject *self) {

    PyCThostFtdcIndexPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcIndexPriceFieldData>(self);
    CThostFtdcIndexPriceField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:d,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "ClosePrice", data->ClosePrice
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcIndexPriceField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcIndexPriceField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcIndexPriceFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcIndexPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcIndexPriceFieldData>(self);
    CThostFtdcIndexPriceField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcIndexPriceFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcIndexPriceField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcIndexPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcIndexPriceFieldData>(self);
    CThostFtdcIndexPriceField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcIndexPriceFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcIndexPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcIndexPriceFieldData>(self);
    CThostFtdcIndexPriceField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcIndexPriceFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcIndexPriceField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcIndexPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcIndexPriceFieldData>(self);
    CThostFtdcIndexPriceField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcIndexPriceFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcIndexPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcIndexPriceFieldData>(self);
    CThostFtdcIndexPriceField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcIndexPriceFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcIndexPriceField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcIndexPriceFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcIndexPriceFieldData>(self);
    CThostFtdcIndexPriceField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcIndexPriceFieldType_members[] = {
    /// 指数现货收盘价
    /// typedef double TThostFtdcPriceType
    {
        .name = "ClosePrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcIndexPriceFieldData, data.ClosePrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("指数现货收盘价")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcIndexPriceFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcIndexPriceFieldType_get_BrokerID,
    .set = PyCThostFtdcIndexPriceFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcIndexPriceFieldType_get_reserve1,
    .set = PyCThostFtdcIndexPriceFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcIndexPriceFieldType_get_InstrumentID,
    .set = PyCThostFtdcIndexPriceFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcIndexPriceFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcIndexPriceField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("股指现货指数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcIndexPriceFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcIndexPriceFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcIndexPriceFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcIndexPriceFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcIndexPriceFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcIndexPriceFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("股指现货指数")},
    {Py_tp_members, PyCThostFtdcIndexPriceFieldType_members},
    {Py_tp_getset, PyCThostFtdcIndexPriceFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcIndexPriceFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcIndexPriceFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcIndexPriceFieldType_spec = {
    .name = "PyCTP.CThostFtdcIndexPriceField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcIndexPriceFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcIndexPriceFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcIndexPriceFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcIndexPriceFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcIndexPriceFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcIndexPriceFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcIndexPriceFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcIndexPriceFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcIndexPriceField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcIndexPriceField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}