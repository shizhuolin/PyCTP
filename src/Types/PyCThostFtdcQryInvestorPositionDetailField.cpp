
#include "PyCThostFtdcQryInvestorPositionDetailField.h"

///查询投资者持仓明细

static int PyCThostFtdcQryInvestorPositionDetailFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "reserve1", "ExchangeID", "InvestUnitID", "InstrumentID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryInvestorPositionDetailField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryInvestorPositionDetailField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryInvestorPositionDetailField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryInvestorPositionDetailField_InvestorID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcQryInvestorPositionDetailField_reserve1 = NULL;
    Py_ssize_t CThostFtdcQryInvestorPositionDetailField_reserve1_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryInvestorPositionDetailField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryInvestorPositionDetailField_ExchangeID_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcQryInvestorPositionDetailField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcQryInvestorPositionDetailField_InvestUnitID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryInvestorPositionDetailField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcQryInvestorPositionDetailField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcQryInvestorPositionDetailField_BrokerID, &CThostFtdcQryInvestorPositionDetailField_BrokerID_length
        , &CThostFtdcQryInvestorPositionDetailField_InvestorID, &CThostFtdcQryInvestorPositionDetailField_InvestorID_length
        , &CThostFtdcQryInvestorPositionDetailField_reserve1, &CThostFtdcQryInvestorPositionDetailField_reserve1_length
        , &CThostFtdcQryInvestorPositionDetailField_ExchangeID, &CThostFtdcQryInvestorPositionDetailField_ExchangeID_length
        , &CThostFtdcQryInvestorPositionDetailField_InvestUnitID, &CThostFtdcQryInvestorPositionDetailField_InvestUnitID_length
        , &CThostFtdcQryInvestorPositionDetailField_InstrumentID, &CThostFtdcQryInvestorPositionDetailField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionDetailFieldData>(self);
    CThostFtdcQryInvestorPositionDetailField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryInvestorPositionDetailField_BrokerID != NULL ) {
        if(CThostFtdcQryInvestorPositionDetailField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryInvestorPositionDetailField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryInvestorPositionDetailField_BrokerID, CThostFtdcQryInvestorPositionDetailField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryInvestorPositionDetailField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryInvestorPositionDetailField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryInvestorPositionDetailField_InvestorID != NULL ) {
        if(CThostFtdcQryInvestorPositionDetailField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryInvestorPositionDetailField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryInvestorPositionDetailField_InvestorID, CThostFtdcQryInvestorPositionDetailField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryInvestorPositionDetailField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryInvestorPositionDetailField_InvestorID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcQryInvestorPositionDetailField_reserve1 != NULL ) {
        if(CThostFtdcQryInvestorPositionDetailField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcQryInvestorPositionDetailField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcQryInvestorPositionDetailField_reserve1, CThostFtdcQryInvestorPositionDetailField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcQryInvestorPositionDetailField_reserve1, sizeof(data->reserve1));
        CThostFtdcQryInvestorPositionDetailField_reserve1 = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryInvestorPositionDetailField_ExchangeID != NULL ) {
        if(CThostFtdcQryInvestorPositionDetailField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryInvestorPositionDetailField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryInvestorPositionDetailField_ExchangeID, CThostFtdcQryInvestorPositionDetailField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryInvestorPositionDetailField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryInvestorPositionDetailField_ExchangeID = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcQryInvestorPositionDetailField_InvestUnitID != NULL ) {
        if(CThostFtdcQryInvestorPositionDetailField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcQryInvestorPositionDetailField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcQryInvestorPositionDetailField_InvestUnitID, CThostFtdcQryInvestorPositionDetailField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcQryInvestorPositionDetailField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcQryInvestorPositionDetailField_InvestUnitID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryInvestorPositionDetailField_InstrumentID != NULL ) {
        if(CThostFtdcQryInvestorPositionDetailField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQryInvestorPositionDetailField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcQryInvestorPositionDetailField_InstrumentID, CThostFtdcQryInvestorPositionDetailField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcQryInvestorPositionDetailField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcQryInvestorPositionDetailField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryInvestorPositionDetailFieldType_repr(PyObject *self) {

    PyCThostFtdcQryInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionDetailFieldData>(self);
    CThostFtdcQryInvestorPositionDetailField *data = &(extra->data);

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorPositionDetailField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorPositionDetailField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryInvestorPositionDetailFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionDetailFieldData>(self);
    CThostFtdcQryInvestorPositionDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryInvestorPositionDetailFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorPositionDetailField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionDetailFieldData>(self);
    CThostFtdcQryInvestorPositionDetailField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryInvestorPositionDetailFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionDetailFieldData>(self);
    CThostFtdcQryInvestorPositionDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryInvestorPositionDetailFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorPositionDetailField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionDetailFieldData>(self);
    CThostFtdcQryInvestorPositionDetailField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcQryInvestorPositionDetailFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionDetailFieldData>(self);
    CThostFtdcQryInvestorPositionDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcQryInvestorPositionDetailFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorPositionDetailField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionDetailFieldData>(self);
    CThostFtdcQryInvestorPositionDetailField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryInvestorPositionDetailFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionDetailFieldData>(self);
    CThostFtdcQryInvestorPositionDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryInvestorPositionDetailFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorPositionDetailField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionDetailFieldData>(self);
    CThostFtdcQryInvestorPositionDetailField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcQryInvestorPositionDetailFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionDetailFieldData>(self);
    CThostFtdcQryInvestorPositionDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcQryInvestorPositionDetailFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorPositionDetailField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionDetailFieldData>(self);
    CThostFtdcQryInvestorPositionDetailField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryInvestorPositionDetailFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionDetailFieldData>(self);
    CThostFtdcQryInvestorPositionDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcQryInvestorPositionDetailFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorPositionDetailField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorPositionDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionDetailFieldData>(self);
    CThostFtdcQryInvestorPositionDetailField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryInvestorPositionDetailFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryInvestorPositionDetailFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryInvestorPositionDetailFieldType_get_BrokerID,
    .set = PyCThostFtdcQryInvestorPositionDetailFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryInvestorPositionDetailFieldType_get_InvestorID,
    .set = PyCThostFtdcQryInvestorPositionDetailFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcQryInvestorPositionDetailFieldType_get_reserve1,
    .set = PyCThostFtdcQryInvestorPositionDetailFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryInvestorPositionDetailFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryInvestorPositionDetailFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcQryInvestorPositionDetailFieldType_get_InvestUnitID,
    .set = PyCThostFtdcQryInvestorPositionDetailFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcQryInvestorPositionDetailFieldType_get_InstrumentID,
    .set = PyCThostFtdcQryInvestorPositionDetailFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryInvestorPositionDetailFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryInvestorPositionDetailField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询投资者持仓明细")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryInvestorPositionDetailFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryInvestorPositionDetailFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryInvestorPositionDetailFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryInvestorPositionDetailFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryInvestorPositionDetailFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryInvestorPositionDetailFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询投资者持仓明细")},
    {Py_tp_members, PyCThostFtdcQryInvestorPositionDetailFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryInvestorPositionDetailFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryInvestorPositionDetailFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryInvestorPositionDetailFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryInvestorPositionDetailFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryInvestorPositionDetailField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryInvestorPositionDetailFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryInvestorPositionDetailFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryInvestorPositionDetailFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryInvestorPositionDetailFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryInvestorPositionDetailFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryInvestorPositionDetailFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryInvestorPositionDetailFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryInvestorPositionDetailFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryInvestorPositionDetailField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInvestorPositionDetailField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}