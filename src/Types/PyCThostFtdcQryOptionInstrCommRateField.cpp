
#include "PyCThostFtdcQryOptionInstrCommRateField.h"

///期权手续费率查询

static int PyCThostFtdcQryOptionInstrCommRateFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "reserve1", "ExchangeID", "InvestUnitID", "InstrumentID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryOptionInstrCommRateField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryOptionInstrCommRateField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryOptionInstrCommRateField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryOptionInstrCommRateField_InvestorID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcQryOptionInstrCommRateField_reserve1 = NULL;
    Py_ssize_t CThostFtdcQryOptionInstrCommRateField_reserve1_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryOptionInstrCommRateField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryOptionInstrCommRateField_ExchangeID_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcQryOptionInstrCommRateField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcQryOptionInstrCommRateField_InvestUnitID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryOptionInstrCommRateField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcQryOptionInstrCommRateField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcQryOptionInstrCommRateField_BrokerID, &CThostFtdcQryOptionInstrCommRateField_BrokerID_length
        , &CThostFtdcQryOptionInstrCommRateField_InvestorID, &CThostFtdcQryOptionInstrCommRateField_InvestorID_length
        , &CThostFtdcQryOptionInstrCommRateField_reserve1, &CThostFtdcQryOptionInstrCommRateField_reserve1_length
        , &CThostFtdcQryOptionInstrCommRateField_ExchangeID, &CThostFtdcQryOptionInstrCommRateField_ExchangeID_length
        , &CThostFtdcQryOptionInstrCommRateField_InvestUnitID, &CThostFtdcQryOptionInstrCommRateField_InvestUnitID_length
        , &CThostFtdcQryOptionInstrCommRateField_InstrumentID, &CThostFtdcQryOptionInstrCommRateField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrCommRateFieldData>(self);
    CThostFtdcQryOptionInstrCommRateField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryOptionInstrCommRateField_BrokerID != NULL ) {
        if(CThostFtdcQryOptionInstrCommRateField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryOptionInstrCommRateField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryOptionInstrCommRateField_BrokerID, CThostFtdcQryOptionInstrCommRateField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryOptionInstrCommRateField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryOptionInstrCommRateField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryOptionInstrCommRateField_InvestorID != NULL ) {
        if(CThostFtdcQryOptionInstrCommRateField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryOptionInstrCommRateField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryOptionInstrCommRateField_InvestorID, CThostFtdcQryOptionInstrCommRateField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryOptionInstrCommRateField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryOptionInstrCommRateField_InvestorID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcQryOptionInstrCommRateField_reserve1 != NULL ) {
        if(CThostFtdcQryOptionInstrCommRateField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcQryOptionInstrCommRateField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcQryOptionInstrCommRateField_reserve1, CThostFtdcQryOptionInstrCommRateField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcQryOptionInstrCommRateField_reserve1, sizeof(data->reserve1));
        CThostFtdcQryOptionInstrCommRateField_reserve1 = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryOptionInstrCommRateField_ExchangeID != NULL ) {
        if(CThostFtdcQryOptionInstrCommRateField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryOptionInstrCommRateField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryOptionInstrCommRateField_ExchangeID, CThostFtdcQryOptionInstrCommRateField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryOptionInstrCommRateField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryOptionInstrCommRateField_ExchangeID = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcQryOptionInstrCommRateField_InvestUnitID != NULL ) {
        if(CThostFtdcQryOptionInstrCommRateField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcQryOptionInstrCommRateField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcQryOptionInstrCommRateField_InvestUnitID, CThostFtdcQryOptionInstrCommRateField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcQryOptionInstrCommRateField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcQryOptionInstrCommRateField_InvestUnitID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryOptionInstrCommRateField_InstrumentID != NULL ) {
        if(CThostFtdcQryOptionInstrCommRateField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQryOptionInstrCommRateField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcQryOptionInstrCommRateField_InstrumentID, CThostFtdcQryOptionInstrCommRateField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcQryOptionInstrCommRateField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcQryOptionInstrCommRateField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryOptionInstrCommRateFieldType_repr(PyObject *self) {

    PyCThostFtdcQryOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrCommRateFieldData>(self);
    CThostFtdcQryOptionInstrCommRateField *data = &(extra->data);

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryOptionInstrCommRateField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryOptionInstrCommRateField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryOptionInstrCommRateFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrCommRateFieldData>(self);
    CThostFtdcQryOptionInstrCommRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryOptionInstrCommRateFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOptionInstrCommRateField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrCommRateFieldData>(self);
    CThostFtdcQryOptionInstrCommRateField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryOptionInstrCommRateFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrCommRateFieldData>(self);
    CThostFtdcQryOptionInstrCommRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryOptionInstrCommRateFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOptionInstrCommRateField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrCommRateFieldData>(self);
    CThostFtdcQryOptionInstrCommRateField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcQryOptionInstrCommRateFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcQryOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrCommRateFieldData>(self);
    CThostFtdcQryOptionInstrCommRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcQryOptionInstrCommRateFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOptionInstrCommRateField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrCommRateFieldData>(self);
    CThostFtdcQryOptionInstrCommRateField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryOptionInstrCommRateFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrCommRateFieldData>(self);
    CThostFtdcQryOptionInstrCommRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryOptionInstrCommRateFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOptionInstrCommRateField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrCommRateFieldData>(self);
    CThostFtdcQryOptionInstrCommRateField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcQryOptionInstrCommRateFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcQryOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrCommRateFieldData>(self);
    CThostFtdcQryOptionInstrCommRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcQryOptionInstrCommRateFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOptionInstrCommRateField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrCommRateFieldData>(self);
    CThostFtdcQryOptionInstrCommRateField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryOptionInstrCommRateFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQryOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrCommRateFieldData>(self);
    CThostFtdcQryOptionInstrCommRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcQryOptionInstrCommRateFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryOptionInstrCommRateField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrCommRateFieldData>(self);
    CThostFtdcQryOptionInstrCommRateField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryOptionInstrCommRateFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryOptionInstrCommRateFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryOptionInstrCommRateFieldType_get_BrokerID,
    .set = PyCThostFtdcQryOptionInstrCommRateFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryOptionInstrCommRateFieldType_get_InvestorID,
    .set = PyCThostFtdcQryOptionInstrCommRateFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcQryOptionInstrCommRateFieldType_get_reserve1,
    .set = PyCThostFtdcQryOptionInstrCommRateFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryOptionInstrCommRateFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryOptionInstrCommRateFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcQryOptionInstrCommRateFieldType_get_InvestUnitID,
    .set = PyCThostFtdcQryOptionInstrCommRateFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcQryOptionInstrCommRateFieldType_get_InstrumentID,
    .set = PyCThostFtdcQryOptionInstrCommRateFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryOptionInstrCommRateFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryOptionInstrCommRateField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("期权手续费率查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryOptionInstrCommRateFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryOptionInstrCommRateFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryOptionInstrCommRateFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryOptionInstrCommRateFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryOptionInstrCommRateFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryOptionInstrCommRateFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("期权手续费率查询")},
    {Py_tp_members, PyCThostFtdcQryOptionInstrCommRateFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryOptionInstrCommRateFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryOptionInstrCommRateFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryOptionInstrCommRateFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryOptionInstrCommRateFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryOptionInstrCommRateField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryOptionInstrCommRateFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryOptionInstrCommRateFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryOptionInstrCommRateFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryOptionInstrCommRateFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryOptionInstrCommRateFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryOptionInstrCommRateFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryOptionInstrCommRateFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryOptionInstrCommRateFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryOptionInstrCommRateField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryOptionInstrCommRateField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}