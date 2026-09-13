
#include "PyCThostFtdcQryInstrumentMarginRateField.h"

///查询合约保证金率

static int PyCThostFtdcQryInstrumentMarginRateFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "reserve1", "HedgeFlag", "ExchangeID", "InvestUnitID", "InstrumentID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryInstrumentMarginRateField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryInstrumentMarginRateField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryInstrumentMarginRateField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryInstrumentMarginRateField_InvestorID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcQryInstrumentMarginRateField_reserve1 = NULL;
    Py_ssize_t CThostFtdcQryInstrumentMarginRateField_reserve1_length = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcQryInstrumentMarginRateField_HedgeFlag = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryInstrumentMarginRateField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryInstrumentMarginRateField_ExchangeID_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcQryInstrumentMarginRateField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcQryInstrumentMarginRateField_InvestUnitID_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryInstrumentMarginRateField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcQryInstrumentMarginRateField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#cy#y#y#", (char **)kwlist
        , &CThostFtdcQryInstrumentMarginRateField_BrokerID, &CThostFtdcQryInstrumentMarginRateField_BrokerID_length
        , &CThostFtdcQryInstrumentMarginRateField_InvestorID, &CThostFtdcQryInstrumentMarginRateField_InvestorID_length
        , &CThostFtdcQryInstrumentMarginRateField_reserve1, &CThostFtdcQryInstrumentMarginRateField_reserve1_length
        , &CThostFtdcQryInstrumentMarginRateField_HedgeFlag
        , &CThostFtdcQryInstrumentMarginRateField_ExchangeID, &CThostFtdcQryInstrumentMarginRateField_ExchangeID_length
        , &CThostFtdcQryInstrumentMarginRateField_InvestUnitID, &CThostFtdcQryInstrumentMarginRateField_InvestUnitID_length
        , &CThostFtdcQryInstrumentMarginRateField_InstrumentID, &CThostFtdcQryInstrumentMarginRateField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentMarginRateFieldData>(self);
    CThostFtdcQryInstrumentMarginRateField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryInstrumentMarginRateField_BrokerID != NULL ) {
        if(CThostFtdcQryInstrumentMarginRateField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryInstrumentMarginRateField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryInstrumentMarginRateField_BrokerID, CThostFtdcQryInstrumentMarginRateField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryInstrumentMarginRateField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryInstrumentMarginRateField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryInstrumentMarginRateField_InvestorID != NULL ) {
        if(CThostFtdcQryInstrumentMarginRateField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryInstrumentMarginRateField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryInstrumentMarginRateField_InvestorID, CThostFtdcQryInstrumentMarginRateField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryInstrumentMarginRateField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryInstrumentMarginRateField_InvestorID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcQryInstrumentMarginRateField_reserve1 != NULL ) {
        if(CThostFtdcQryInstrumentMarginRateField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcQryInstrumentMarginRateField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcQryInstrumentMarginRateField_reserve1, CThostFtdcQryInstrumentMarginRateField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcQryInstrumentMarginRateField_reserve1, sizeof(data->reserve1));
        CThostFtdcQryInstrumentMarginRateField_reserve1 = NULL;
    }

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcQryInstrumentMarginRateField_HedgeFlag;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryInstrumentMarginRateField_ExchangeID != NULL ) {
        if(CThostFtdcQryInstrumentMarginRateField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryInstrumentMarginRateField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryInstrumentMarginRateField_ExchangeID, CThostFtdcQryInstrumentMarginRateField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryInstrumentMarginRateField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryInstrumentMarginRateField_ExchangeID = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcQryInstrumentMarginRateField_InvestUnitID != NULL ) {
        if(CThostFtdcQryInstrumentMarginRateField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcQryInstrumentMarginRateField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcQryInstrumentMarginRateField_InvestUnitID, CThostFtdcQryInstrumentMarginRateField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcQryInstrumentMarginRateField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcQryInstrumentMarginRateField_InvestUnitID = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryInstrumentMarginRateField_InstrumentID != NULL ) {
        if(CThostFtdcQryInstrumentMarginRateField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQryInstrumentMarginRateField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcQryInstrumentMarginRateField_InstrumentID, CThostFtdcQryInstrumentMarginRateField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcQryInstrumentMarginRateField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcQryInstrumentMarginRateField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryInstrumentMarginRateFieldType_repr(PyObject *self) {

    PyCThostFtdcQryInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentMarginRateFieldData>(self);
    CThostFtdcQryInstrumentMarginRateField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:c,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "HedgeFlag", data->HedgeFlag
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInstrumentMarginRateField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInstrumentMarginRateField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryInstrumentMarginRateFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentMarginRateFieldData>(self);
    CThostFtdcQryInstrumentMarginRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryInstrumentMarginRateFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInstrumentMarginRateField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentMarginRateFieldData>(self);
    CThostFtdcQryInstrumentMarginRateField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryInstrumentMarginRateFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentMarginRateFieldData>(self);
    CThostFtdcQryInstrumentMarginRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryInstrumentMarginRateFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInstrumentMarginRateField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentMarginRateFieldData>(self);
    CThostFtdcQryInstrumentMarginRateField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcQryInstrumentMarginRateFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcQryInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentMarginRateFieldData>(self);
    CThostFtdcQryInstrumentMarginRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcQryInstrumentMarginRateFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInstrumentMarginRateField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentMarginRateFieldData>(self);
    CThostFtdcQryInstrumentMarginRateField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcQryInstrumentMarginRateFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcQryInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentMarginRateFieldData>(self);
    CThostFtdcQryInstrumentMarginRateField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcQryInstrumentMarginRateFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcQryInstrumentMarginRateField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentMarginRateFieldData>(self);
    CThostFtdcQryInstrumentMarginRateField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryInstrumentMarginRateFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentMarginRateFieldData>(self);
    CThostFtdcQryInstrumentMarginRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryInstrumentMarginRateFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInstrumentMarginRateField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentMarginRateFieldData>(self);
    CThostFtdcQryInstrumentMarginRateField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcQryInstrumentMarginRateFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcQryInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentMarginRateFieldData>(self);
    CThostFtdcQryInstrumentMarginRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcQryInstrumentMarginRateFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInstrumentMarginRateField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentMarginRateFieldData>(self);
    CThostFtdcQryInstrumentMarginRateField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryInstrumentMarginRateFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQryInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentMarginRateFieldData>(self);
    CThostFtdcQryInstrumentMarginRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcQryInstrumentMarginRateFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInstrumentMarginRateField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInstrumentMarginRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentMarginRateFieldData>(self);
    CThostFtdcQryInstrumentMarginRateField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryInstrumentMarginRateFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryInstrumentMarginRateFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryInstrumentMarginRateFieldType_get_BrokerID,
    .set = PyCThostFtdcQryInstrumentMarginRateFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryInstrumentMarginRateFieldType_get_InvestorID,
    .set = PyCThostFtdcQryInstrumentMarginRateFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcQryInstrumentMarginRateFieldType_get_reserve1,
    .set = PyCThostFtdcQryInstrumentMarginRateFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcQryInstrumentMarginRateFieldType_get_HedgeFlag,
    .set = PyCThostFtdcQryInstrumentMarginRateFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryInstrumentMarginRateFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryInstrumentMarginRateFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcQryInstrumentMarginRateFieldType_get_InvestUnitID,
    .set = PyCThostFtdcQryInstrumentMarginRateFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcQryInstrumentMarginRateFieldType_get_InstrumentID,
    .set = PyCThostFtdcQryInstrumentMarginRateFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryInstrumentMarginRateFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryInstrumentMarginRateField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询合约保证金率")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryInstrumentMarginRateFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryInstrumentMarginRateFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryInstrumentMarginRateFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryInstrumentMarginRateFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryInstrumentMarginRateFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryInstrumentMarginRateFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询合约保证金率")},
    {Py_tp_members, PyCThostFtdcQryInstrumentMarginRateFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryInstrumentMarginRateFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryInstrumentMarginRateFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryInstrumentMarginRateFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryInstrumentMarginRateFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryInstrumentMarginRateField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryInstrumentMarginRateFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryInstrumentMarginRateFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryInstrumentMarginRateFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryInstrumentMarginRateFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryInstrumentMarginRateFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryInstrumentMarginRateFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryInstrumentMarginRateFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryInstrumentMarginRateFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryInstrumentMarginRateField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInstrumentMarginRateField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}