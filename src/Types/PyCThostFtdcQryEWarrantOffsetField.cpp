
#include "PyCThostFtdcQryEWarrantOffsetField.h"

///查询仓单折抵信息

static int PyCThostFtdcQryEWarrantOffsetFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "ExchangeID", "reserve1", "InvestUnitID", "InstrumentID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryEWarrantOffsetField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryEWarrantOffsetField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryEWarrantOffsetField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryEWarrantOffsetField_InvestorID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryEWarrantOffsetField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryEWarrantOffsetField_ExchangeID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcQryEWarrantOffsetField_reserve1 = NULL;
    Py_ssize_t CThostFtdcQryEWarrantOffsetField_reserve1_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcQryEWarrantOffsetField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcQryEWarrantOffsetField_InvestUnitID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryEWarrantOffsetField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcQryEWarrantOffsetField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcQryEWarrantOffsetField_BrokerID, &CThostFtdcQryEWarrantOffsetField_BrokerID_length
        , &CThostFtdcQryEWarrantOffsetField_InvestorID, &CThostFtdcQryEWarrantOffsetField_InvestorID_length
        , &CThostFtdcQryEWarrantOffsetField_ExchangeID, &CThostFtdcQryEWarrantOffsetField_ExchangeID_length
        , &CThostFtdcQryEWarrantOffsetField_reserve1, &CThostFtdcQryEWarrantOffsetField_reserve1_length
        , &CThostFtdcQryEWarrantOffsetField_InvestUnitID, &CThostFtdcQryEWarrantOffsetField_InvestUnitID_length
        , &CThostFtdcQryEWarrantOffsetField_InstrumentID, &CThostFtdcQryEWarrantOffsetField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryEWarrantOffsetFieldData>(self);
    CThostFtdcQryEWarrantOffsetField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryEWarrantOffsetField_BrokerID != NULL ) {
        if(CThostFtdcQryEWarrantOffsetField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryEWarrantOffsetField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryEWarrantOffsetField_BrokerID, CThostFtdcQryEWarrantOffsetField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryEWarrantOffsetField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryEWarrantOffsetField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryEWarrantOffsetField_InvestorID != NULL ) {
        if(CThostFtdcQryEWarrantOffsetField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryEWarrantOffsetField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryEWarrantOffsetField_InvestorID, CThostFtdcQryEWarrantOffsetField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryEWarrantOffsetField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryEWarrantOffsetField_InvestorID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryEWarrantOffsetField_ExchangeID != NULL ) {
        if(CThostFtdcQryEWarrantOffsetField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryEWarrantOffsetField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryEWarrantOffsetField_ExchangeID, CThostFtdcQryEWarrantOffsetField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryEWarrantOffsetField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryEWarrantOffsetField_ExchangeID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcQryEWarrantOffsetField_reserve1 != NULL ) {
        if(CThostFtdcQryEWarrantOffsetField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcQryEWarrantOffsetField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcQryEWarrantOffsetField_reserve1, CThostFtdcQryEWarrantOffsetField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcQryEWarrantOffsetField_reserve1, sizeof(data->reserve1));
        CThostFtdcQryEWarrantOffsetField_reserve1 = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcQryEWarrantOffsetField_InvestUnitID != NULL ) {
        if(CThostFtdcQryEWarrantOffsetField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcQryEWarrantOffsetField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcQryEWarrantOffsetField_InvestUnitID, CThostFtdcQryEWarrantOffsetField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcQryEWarrantOffsetField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcQryEWarrantOffsetField_InvestUnitID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryEWarrantOffsetField_InstrumentID != NULL ) {
        if(CThostFtdcQryEWarrantOffsetField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQryEWarrantOffsetField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcQryEWarrantOffsetField_InstrumentID, CThostFtdcQryEWarrantOffsetField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcQryEWarrantOffsetField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcQryEWarrantOffsetField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryEWarrantOffsetFieldType_repr(PyObject *self) {

    PyCThostFtdcQryEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryEWarrantOffsetFieldData>(self);
    CThostFtdcQryEWarrantOffsetField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryEWarrantOffsetField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryEWarrantOffsetField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryEWarrantOffsetFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryEWarrantOffsetFieldData>(self);
    CThostFtdcQryEWarrantOffsetField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryEWarrantOffsetFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryEWarrantOffsetField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryEWarrantOffsetFieldData>(self);
    CThostFtdcQryEWarrantOffsetField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryEWarrantOffsetFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryEWarrantOffsetFieldData>(self);
    CThostFtdcQryEWarrantOffsetField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryEWarrantOffsetFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryEWarrantOffsetField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryEWarrantOffsetFieldData>(self);
    CThostFtdcQryEWarrantOffsetField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryEWarrantOffsetFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryEWarrantOffsetFieldData>(self);
    CThostFtdcQryEWarrantOffsetField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryEWarrantOffsetFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryEWarrantOffsetField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryEWarrantOffsetFieldData>(self);
    CThostFtdcQryEWarrantOffsetField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcQryEWarrantOffsetFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcQryEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryEWarrantOffsetFieldData>(self);
    CThostFtdcQryEWarrantOffsetField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcQryEWarrantOffsetFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryEWarrantOffsetField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryEWarrantOffsetFieldData>(self);
    CThostFtdcQryEWarrantOffsetField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcQryEWarrantOffsetFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcQryEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryEWarrantOffsetFieldData>(self);
    CThostFtdcQryEWarrantOffsetField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcQryEWarrantOffsetFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryEWarrantOffsetField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryEWarrantOffsetFieldData>(self);
    CThostFtdcQryEWarrantOffsetField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryEWarrantOffsetFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQryEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryEWarrantOffsetFieldData>(self);
    CThostFtdcQryEWarrantOffsetField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcQryEWarrantOffsetFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryEWarrantOffsetField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryEWarrantOffsetFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryEWarrantOffsetFieldData>(self);
    CThostFtdcQryEWarrantOffsetField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryEWarrantOffsetFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryEWarrantOffsetFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryEWarrantOffsetFieldType_get_BrokerID,
    .set = PyCThostFtdcQryEWarrantOffsetFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryEWarrantOffsetFieldType_get_InvestorID,
    .set = PyCThostFtdcQryEWarrantOffsetFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryEWarrantOffsetFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryEWarrantOffsetFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcQryEWarrantOffsetFieldType_get_reserve1,
    .set = PyCThostFtdcQryEWarrantOffsetFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcQryEWarrantOffsetFieldType_get_InvestUnitID,
    .set = PyCThostFtdcQryEWarrantOffsetFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcQryEWarrantOffsetFieldType_get_InstrumentID,
    .set = PyCThostFtdcQryEWarrantOffsetFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryEWarrantOffsetFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryEWarrantOffsetField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询仓单折抵信息")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryEWarrantOffsetFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryEWarrantOffsetFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryEWarrantOffsetFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryEWarrantOffsetFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryEWarrantOffsetFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryEWarrantOffsetFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询仓单折抵信息")},
    {Py_tp_members, PyCThostFtdcQryEWarrantOffsetFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryEWarrantOffsetFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryEWarrantOffsetFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryEWarrantOffsetFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryEWarrantOffsetFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryEWarrantOffsetField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryEWarrantOffsetFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryEWarrantOffsetFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryEWarrantOffsetFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryEWarrantOffsetFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryEWarrantOffsetFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryEWarrantOffsetFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryEWarrantOffsetFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryEWarrantOffsetFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryEWarrantOffsetField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryEWarrantOffsetField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}