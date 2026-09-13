
#include "PyCThostFtdcQryInvestorPositionField.h"

///查询投资者持仓

static int PyCThostFtdcQryInvestorPositionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "reserve1", "ExchangeID", "InvestUnitID", "InstrumentID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryInvestorPositionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryInvestorPositionField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryInvestorPositionField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryInvestorPositionField_InvestorID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcQryInvestorPositionField_reserve1 = NULL;
    Py_ssize_t CThostFtdcQryInvestorPositionField_reserve1_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryInvestorPositionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryInvestorPositionField_ExchangeID_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcQryInvestorPositionField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcQryInvestorPositionField_InvestUnitID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryInvestorPositionField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcQryInvestorPositionField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcQryInvestorPositionField_BrokerID, &CThostFtdcQryInvestorPositionField_BrokerID_length
        , &CThostFtdcQryInvestorPositionField_InvestorID, &CThostFtdcQryInvestorPositionField_InvestorID_length
        , &CThostFtdcQryInvestorPositionField_reserve1, &CThostFtdcQryInvestorPositionField_reserve1_length
        , &CThostFtdcQryInvestorPositionField_ExchangeID, &CThostFtdcQryInvestorPositionField_ExchangeID_length
        , &CThostFtdcQryInvestorPositionField_InvestUnitID, &CThostFtdcQryInvestorPositionField_InvestUnitID_length
        , &CThostFtdcQryInvestorPositionField_InstrumentID, &CThostFtdcQryInvestorPositionField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionFieldData>(self);
    CThostFtdcQryInvestorPositionField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryInvestorPositionField_BrokerID != NULL ) {
        if(CThostFtdcQryInvestorPositionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryInvestorPositionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryInvestorPositionField_BrokerID, CThostFtdcQryInvestorPositionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryInvestorPositionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryInvestorPositionField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryInvestorPositionField_InvestorID != NULL ) {
        if(CThostFtdcQryInvestorPositionField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryInvestorPositionField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryInvestorPositionField_InvestorID, CThostFtdcQryInvestorPositionField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryInvestorPositionField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryInvestorPositionField_InvestorID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcQryInvestorPositionField_reserve1 != NULL ) {
        if(CThostFtdcQryInvestorPositionField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcQryInvestorPositionField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcQryInvestorPositionField_reserve1, CThostFtdcQryInvestorPositionField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcQryInvestorPositionField_reserve1, sizeof(data->reserve1));
        CThostFtdcQryInvestorPositionField_reserve1 = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryInvestorPositionField_ExchangeID != NULL ) {
        if(CThostFtdcQryInvestorPositionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryInvestorPositionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryInvestorPositionField_ExchangeID, CThostFtdcQryInvestorPositionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryInvestorPositionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryInvestorPositionField_ExchangeID = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcQryInvestorPositionField_InvestUnitID != NULL ) {
        if(CThostFtdcQryInvestorPositionField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcQryInvestorPositionField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcQryInvestorPositionField_InvestUnitID, CThostFtdcQryInvestorPositionField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcQryInvestorPositionField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcQryInvestorPositionField_InvestUnitID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryInvestorPositionField_InstrumentID != NULL ) {
        if(CThostFtdcQryInvestorPositionField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQryInvestorPositionField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcQryInvestorPositionField_InstrumentID, CThostFtdcQryInvestorPositionField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcQryInvestorPositionField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcQryInvestorPositionField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryInvestorPositionFieldType_repr(PyObject *self) {

    PyCThostFtdcQryInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionFieldData>(self);
    CThostFtdcQryInvestorPositionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorPositionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorPositionField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryInvestorPositionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionFieldData>(self);
    CThostFtdcQryInvestorPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryInvestorPositionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorPositionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionFieldData>(self);
    CThostFtdcQryInvestorPositionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryInvestorPositionFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionFieldData>(self);
    CThostFtdcQryInvestorPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryInvestorPositionFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorPositionField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionFieldData>(self);
    CThostFtdcQryInvestorPositionField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcQryInvestorPositionFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionFieldData>(self);
    CThostFtdcQryInvestorPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcQryInvestorPositionFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorPositionField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionFieldData>(self);
    CThostFtdcQryInvestorPositionField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryInvestorPositionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionFieldData>(self);
    CThostFtdcQryInvestorPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryInvestorPositionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorPositionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionFieldData>(self);
    CThostFtdcQryInvestorPositionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcQryInvestorPositionFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionFieldData>(self);
    CThostFtdcQryInvestorPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcQryInvestorPositionFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorPositionField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionFieldData>(self);
    CThostFtdcQryInvestorPositionField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryInvestorPositionFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionFieldData>(self);
    CThostFtdcQryInvestorPositionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcQryInvestorPositionFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorPositionField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorPositionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionFieldData>(self);
    CThostFtdcQryInvestorPositionField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryInvestorPositionFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryInvestorPositionFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryInvestorPositionFieldType_get_BrokerID,
    .set = PyCThostFtdcQryInvestorPositionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryInvestorPositionFieldType_get_InvestorID,
    .set = PyCThostFtdcQryInvestorPositionFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcQryInvestorPositionFieldType_get_reserve1,
    .set = PyCThostFtdcQryInvestorPositionFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryInvestorPositionFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryInvestorPositionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcQryInvestorPositionFieldType_get_InvestUnitID,
    .set = PyCThostFtdcQryInvestorPositionFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcQryInvestorPositionFieldType_get_InstrumentID,
    .set = PyCThostFtdcQryInvestorPositionFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryInvestorPositionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryInvestorPositionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询投资者持仓")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryInvestorPositionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryInvestorPositionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryInvestorPositionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryInvestorPositionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryInvestorPositionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryInvestorPositionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询投资者持仓")},
    {Py_tp_members, PyCThostFtdcQryInvestorPositionFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryInvestorPositionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryInvestorPositionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryInvestorPositionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryInvestorPositionFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryInvestorPositionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryInvestorPositionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryInvestorPositionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryInvestorPositionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryInvestorPositionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryInvestorPositionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryInvestorPositionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryInvestorPositionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryInvestorPositionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryInvestorPositionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInvestorPositionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}