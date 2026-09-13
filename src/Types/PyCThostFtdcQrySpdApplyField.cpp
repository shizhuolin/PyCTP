
#include "PyCThostFtdcQrySpdApplyField.h"

///套利套保申请查询

static int PyCThostFtdcQrySpdApplyFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "ExchangeID", "OrderSysID", "FirstLegInstrumentID", "SecondLegInstrumentID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQrySpdApplyField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQrySpdApplyField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQrySpdApplyField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQrySpdApplyField_InvestorID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQrySpdApplyField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQrySpdApplyField_ExchangeID_length = 0;

    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcQrySpdApplyField_OrderSysID = NULL;
    Py_ssize_t CThostFtdcQrySpdApplyField_OrderSysID_length = 0;

    /// 第一腿合约编码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcQrySpdApplyField_FirstLegInstrumentID = NULL;
    Py_ssize_t CThostFtdcQrySpdApplyField_FirstLegInstrumentID_length = 0;

    /// 第二腿合约编码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcQrySpdApplyField_SecondLegInstrumentID = NULL;
    Py_ssize_t CThostFtdcQrySpdApplyField_SecondLegInstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcQrySpdApplyField_BrokerID, &CThostFtdcQrySpdApplyField_BrokerID_length
        , &CThostFtdcQrySpdApplyField_InvestorID, &CThostFtdcQrySpdApplyField_InvestorID_length
        , &CThostFtdcQrySpdApplyField_ExchangeID, &CThostFtdcQrySpdApplyField_ExchangeID_length
        , &CThostFtdcQrySpdApplyField_OrderSysID, &CThostFtdcQrySpdApplyField_OrderSysID_length
        , &CThostFtdcQrySpdApplyField_FirstLegInstrumentID, &CThostFtdcQrySpdApplyField_FirstLegInstrumentID_length
        , &CThostFtdcQrySpdApplyField_SecondLegInstrumentID, &CThostFtdcQrySpdApplyField_SecondLegInstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcQrySpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySpdApplyFieldData>(self);
    CThostFtdcQrySpdApplyField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQrySpdApplyField_BrokerID != NULL ) {
        if(CThostFtdcQrySpdApplyField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQrySpdApplyField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQrySpdApplyField_BrokerID, CThostFtdcQrySpdApplyField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQrySpdApplyField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQrySpdApplyField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQrySpdApplyField_InvestorID != NULL ) {
        if(CThostFtdcQrySpdApplyField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQrySpdApplyField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQrySpdApplyField_InvestorID, CThostFtdcQrySpdApplyField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQrySpdApplyField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQrySpdApplyField_InvestorID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQrySpdApplyField_ExchangeID != NULL ) {
        if(CThostFtdcQrySpdApplyField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQrySpdApplyField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQrySpdApplyField_ExchangeID, CThostFtdcQrySpdApplyField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQrySpdApplyField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQrySpdApplyField_ExchangeID = NULL;
    }

    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcQrySpdApplyField_OrderSysID != NULL ) {
        if(CThostFtdcQrySpdApplyField_OrderSysID_length >= (Py_ssize_t)sizeof(data->OrderSysID)) {
            PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is 20)", CThostFtdcQrySpdApplyField_OrderSysID_length);
            return -1;
        }
        // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
        // memcpy(data->OrderSysID, CThostFtdcQrySpdApplyField_OrderSysID, CThostFtdcQrySpdApplyField_OrderSysID_length);
        strncpy(data->OrderSysID, CThostFtdcQrySpdApplyField_OrderSysID, sizeof(data->OrderSysID));
        CThostFtdcQrySpdApplyField_OrderSysID = NULL;
    }

    /// 第一腿合约编码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcQrySpdApplyField_FirstLegInstrumentID != NULL ) {
        if(CThostFtdcQrySpdApplyField_FirstLegInstrumentID_length >= (Py_ssize_t)sizeof(data->FirstLegInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "FirstLegInstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQrySpdApplyField_FirstLegInstrumentID_length);
            return -1;
        }
        // memset(data->FirstLegInstrumentID, 0, sizeof(data->FirstLegInstrumentID));
        // memcpy(data->FirstLegInstrumentID, CThostFtdcQrySpdApplyField_FirstLegInstrumentID, CThostFtdcQrySpdApplyField_FirstLegInstrumentID_length);
        strncpy(data->FirstLegInstrumentID, CThostFtdcQrySpdApplyField_FirstLegInstrumentID, sizeof(data->FirstLegInstrumentID));
        CThostFtdcQrySpdApplyField_FirstLegInstrumentID = NULL;
    }

    /// 第二腿合约编码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcQrySpdApplyField_SecondLegInstrumentID != NULL ) {
        if(CThostFtdcQrySpdApplyField_SecondLegInstrumentID_length >= (Py_ssize_t)sizeof(data->SecondLegInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "SecondLegInstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQrySpdApplyField_SecondLegInstrumentID_length);
            return -1;
        }
        // memset(data->SecondLegInstrumentID, 0, sizeof(data->SecondLegInstrumentID));
        // memcpy(data->SecondLegInstrumentID, CThostFtdcQrySpdApplyField_SecondLegInstrumentID, CThostFtdcQrySpdApplyField_SecondLegInstrumentID_length);
        strncpy(data->SecondLegInstrumentID, CThostFtdcQrySpdApplyField_SecondLegInstrumentID, sizeof(data->SecondLegInstrumentID));
        CThostFtdcQrySpdApplyField_SecondLegInstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQrySpdApplyFieldType_repr(PyObject *self) {

    PyCThostFtdcQrySpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySpdApplyFieldData>(self);
    CThostFtdcQrySpdApplyField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "OrderSysID", data->OrderSysID//, (Py_ssize_t)sizeof(data->OrderSysID)
        , "FirstLegInstrumentID", data->FirstLegInstrumentID//, (Py_ssize_t)sizeof(data->FirstLegInstrumentID)
        , "SecondLegInstrumentID", data->SecondLegInstrumentID//, (Py_ssize_t)sizeof(data->SecondLegInstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySpdApplyField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySpdApplyField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQrySpdApplyFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQrySpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySpdApplyFieldData>(self);
    CThostFtdcQrySpdApplyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQrySpdApplyFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySpdApplyField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySpdApplyFieldData>(self);
    CThostFtdcQrySpdApplyField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQrySpdApplyFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQrySpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySpdApplyFieldData>(self);
    CThostFtdcQrySpdApplyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQrySpdApplyFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySpdApplyField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySpdApplyFieldData>(self);
    CThostFtdcQrySpdApplyField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQrySpdApplyFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQrySpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySpdApplyFieldData>(self);
    CThostFtdcQrySpdApplyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQrySpdApplyFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySpdApplyField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySpdApplyFieldData>(self);
    CThostFtdcQrySpdApplyField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcQrySpdApplyFieldType_get_OrderSysID(PyObject *self, void *closure) {
    PyCThostFtdcQrySpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySpdApplyFieldData>(self);
    CThostFtdcQrySpdApplyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderSysID, (Py_ssize_t)sizeof(data->OrderSysID));
    return PyBytes_FromString(data->OrderSysID);
}

static int PyCThostFtdcQrySpdApplyFieldType_set_OrderSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySpdApplyField::OrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "OrderSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySpdApplyFieldData>(self);
    CThostFtdcQrySpdApplyField *data = &(extra->data);
    // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
    // memcpy(data->OrderSysID, buf, len);
    strncpy(data->OrderSysID, buf, sizeof(data->OrderSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 第一腿合约编码
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcQrySpdApplyFieldType_get_FirstLegInstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQrySpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySpdApplyFieldData>(self);
    CThostFtdcQrySpdApplyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->FirstLegInstrumentID, (Py_ssize_t)sizeof(data->FirstLegInstrumentID));
    return PyBytes_FromString(data->FirstLegInstrumentID);
}

static int PyCThostFtdcQrySpdApplyFieldType_set_FirstLegInstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FirstLegInstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySpdApplyField::FirstLegInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "FirstLegInstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySpdApplyFieldData>(self);
    CThostFtdcQrySpdApplyField *data = &(extra->data);
    // memset(data->FirstLegInstrumentID, 0, sizeof(data->FirstLegInstrumentID));
    // memcpy(data->FirstLegInstrumentID, buf, len);
    strncpy(data->FirstLegInstrumentID, buf, sizeof(data->FirstLegInstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 第二腿合约编码
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcQrySpdApplyFieldType_get_SecondLegInstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQrySpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySpdApplyFieldData>(self);
    CThostFtdcQrySpdApplyField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->SecondLegInstrumentID, (Py_ssize_t)sizeof(data->SecondLegInstrumentID));
    return PyBytes_FromString(data->SecondLegInstrumentID);
}

static int PyCThostFtdcQrySpdApplyFieldType_set_SecondLegInstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SecondLegInstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySpdApplyField::SecondLegInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "SecondLegInstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySpdApplyFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySpdApplyFieldData>(self);
    CThostFtdcQrySpdApplyField *data = &(extra->data);
    // memset(data->SecondLegInstrumentID, 0, sizeof(data->SecondLegInstrumentID));
    // memcpy(data->SecondLegInstrumentID, buf, len);
    strncpy(data->SecondLegInstrumentID, buf, sizeof(data->SecondLegInstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQrySpdApplyFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQrySpdApplyFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQrySpdApplyFieldType_get_BrokerID,
    .set = PyCThostFtdcQrySpdApplyFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQrySpdApplyFieldType_get_InvestorID,
    .set = PyCThostFtdcQrySpdApplyFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQrySpdApplyFieldType_get_ExchangeID,
    .set = PyCThostFtdcQrySpdApplyFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "OrderSysID",
    .get = PyCThostFtdcQrySpdApplyFieldType_get_OrderSysID,
    .set = PyCThostFtdcQrySpdApplyFieldType_set_OrderSysID,
    .doc = PyDoc_STR("报单编号"),
    },
    /// 第一腿合约编码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "FirstLegInstrumentID",
    .get = PyCThostFtdcQrySpdApplyFieldType_get_FirstLegInstrumentID,
    .set = PyCThostFtdcQrySpdApplyFieldType_set_FirstLegInstrumentID,
    .doc = PyDoc_STR("第一腿合约编码"),
    },
    /// 第二腿合约编码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "SecondLegInstrumentID",
    .get = PyCThostFtdcQrySpdApplyFieldType_get_SecondLegInstrumentID,
    .set = PyCThostFtdcQrySpdApplyFieldType_set_SecondLegInstrumentID,
    .doc = PyDoc_STR("第二腿合约编码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQrySpdApplyFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQrySpdApplyField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("套利套保申请查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQrySpdApplyFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQrySpdApplyFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQrySpdApplyFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQrySpdApplyFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQrySpdApplyFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQrySpdApplyFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("套利套保申请查询")},
    {Py_tp_members, PyCThostFtdcQrySpdApplyFieldType_members},
    {Py_tp_getset, PyCThostFtdcQrySpdApplyFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQrySpdApplyFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQrySpdApplyFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQrySpdApplyFieldType_spec = {
    .name = "PyCTP.CThostFtdcQrySpdApplyField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQrySpdApplyFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQrySpdApplyFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQrySpdApplyFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQrySpdApplyFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQrySpdApplyFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQrySpdApplyFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQrySpdApplyFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQrySpdApplyFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQrySpdApplyField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySpdApplyField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}