
#include "PyCThostFtdcQryInvestorPositionCombineDetailField.h"

///查询组合持仓明细

static int PyCThostFtdcQryInvestorPositionCombineDetailFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "reserve1", "ExchangeID", "InvestUnitID", "CombInstrumentID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryInvestorPositionCombineDetailField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryInvestorPositionCombineDetailField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryInvestorPositionCombineDetailField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryInvestorPositionCombineDetailField_InvestorID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcQryInvestorPositionCombineDetailField_reserve1 = NULL;
    Py_ssize_t CThostFtdcQryInvestorPositionCombineDetailField_reserve1_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryInvestorPositionCombineDetailField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryInvestorPositionCombineDetailField_ExchangeID_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcQryInvestorPositionCombineDetailField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcQryInvestorPositionCombineDetailField_InvestUnitID_length = 0;

    /// 组合持仓合约编码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryInvestorPositionCombineDetailField_CombInstrumentID = NULL;
    Py_ssize_t CThostFtdcQryInvestorPositionCombineDetailField_CombInstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcQryInvestorPositionCombineDetailField_BrokerID, &CThostFtdcQryInvestorPositionCombineDetailField_BrokerID_length
        , &CThostFtdcQryInvestorPositionCombineDetailField_InvestorID, &CThostFtdcQryInvestorPositionCombineDetailField_InvestorID_length
        , &CThostFtdcQryInvestorPositionCombineDetailField_reserve1, &CThostFtdcQryInvestorPositionCombineDetailField_reserve1_length
        , &CThostFtdcQryInvestorPositionCombineDetailField_ExchangeID, &CThostFtdcQryInvestorPositionCombineDetailField_ExchangeID_length
        , &CThostFtdcQryInvestorPositionCombineDetailField_InvestUnitID, &CThostFtdcQryInvestorPositionCombineDetailField_InvestUnitID_length
        , &CThostFtdcQryInvestorPositionCombineDetailField_CombInstrumentID, &CThostFtdcQryInvestorPositionCombineDetailField_CombInstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcQryInvestorPositionCombineDetailField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryInvestorPositionCombineDetailField_BrokerID != NULL ) {
        if(CThostFtdcQryInvestorPositionCombineDetailField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryInvestorPositionCombineDetailField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryInvestorPositionCombineDetailField_BrokerID, CThostFtdcQryInvestorPositionCombineDetailField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryInvestorPositionCombineDetailField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryInvestorPositionCombineDetailField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryInvestorPositionCombineDetailField_InvestorID != NULL ) {
        if(CThostFtdcQryInvestorPositionCombineDetailField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryInvestorPositionCombineDetailField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryInvestorPositionCombineDetailField_InvestorID, CThostFtdcQryInvestorPositionCombineDetailField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryInvestorPositionCombineDetailField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryInvestorPositionCombineDetailField_InvestorID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcQryInvestorPositionCombineDetailField_reserve1 != NULL ) {
        if(CThostFtdcQryInvestorPositionCombineDetailField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcQryInvestorPositionCombineDetailField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcQryInvestorPositionCombineDetailField_reserve1, CThostFtdcQryInvestorPositionCombineDetailField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcQryInvestorPositionCombineDetailField_reserve1, sizeof(data->reserve1));
        CThostFtdcQryInvestorPositionCombineDetailField_reserve1 = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryInvestorPositionCombineDetailField_ExchangeID != NULL ) {
        if(CThostFtdcQryInvestorPositionCombineDetailField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryInvestorPositionCombineDetailField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryInvestorPositionCombineDetailField_ExchangeID, CThostFtdcQryInvestorPositionCombineDetailField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryInvestorPositionCombineDetailField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryInvestorPositionCombineDetailField_ExchangeID = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcQryInvestorPositionCombineDetailField_InvestUnitID != NULL ) {
        if(CThostFtdcQryInvestorPositionCombineDetailField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcQryInvestorPositionCombineDetailField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcQryInvestorPositionCombineDetailField_InvestUnitID, CThostFtdcQryInvestorPositionCombineDetailField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcQryInvestorPositionCombineDetailField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcQryInvestorPositionCombineDetailField_InvestUnitID = NULL;
    }

    /// 组合持仓合约编码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryInvestorPositionCombineDetailField_CombInstrumentID != NULL ) {
        if(CThostFtdcQryInvestorPositionCombineDetailField_CombInstrumentID_length >= (Py_ssize_t)sizeof(data->CombInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "CombInstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQryInvestorPositionCombineDetailField_CombInstrumentID_length);
            return -1;
        }
        // memset(data->CombInstrumentID, 0, sizeof(data->CombInstrumentID));
        // memcpy(data->CombInstrumentID, CThostFtdcQryInvestorPositionCombineDetailField_CombInstrumentID, CThostFtdcQryInvestorPositionCombineDetailField_CombInstrumentID_length);
        strncpy(data->CombInstrumentID, CThostFtdcQryInvestorPositionCombineDetailField_CombInstrumentID, sizeof(data->CombInstrumentID));
        CThostFtdcQryInvestorPositionCombineDetailField_CombInstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryInvestorPositionCombineDetailFieldType_repr(PyObject *self) {

    PyCThostFtdcQryInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcQryInvestorPositionCombineDetailField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "CombInstrumentID", data->CombInstrumentID//, (Py_ssize_t)sizeof(data->CombInstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorPositionCombineDetailField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorPositionCombineDetailField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryInvestorPositionCombineDetailFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcQryInvestorPositionCombineDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryInvestorPositionCombineDetailFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorPositionCombineDetailField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcQryInvestorPositionCombineDetailField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryInvestorPositionCombineDetailFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcQryInvestorPositionCombineDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryInvestorPositionCombineDetailFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorPositionCombineDetailField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcQryInvestorPositionCombineDetailField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcQryInvestorPositionCombineDetailFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcQryInvestorPositionCombineDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcQryInvestorPositionCombineDetailFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorPositionCombineDetailField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcQryInvestorPositionCombineDetailField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryInvestorPositionCombineDetailFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcQryInvestorPositionCombineDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryInvestorPositionCombineDetailFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorPositionCombineDetailField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcQryInvestorPositionCombineDetailField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcQryInvestorPositionCombineDetailFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcQryInvestorPositionCombineDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcQryInvestorPositionCombineDetailFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorPositionCombineDetailField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcQryInvestorPositionCombineDetailField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 组合持仓合约编码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryInvestorPositionCombineDetailFieldType_get_CombInstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcQryInvestorPositionCombineDetailField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombInstrumentID, (Py_ssize_t)sizeof(data->CombInstrumentID));
    return PyBytes_FromString(data->CombInstrumentID);
}

static int PyCThostFtdcQryInvestorPositionCombineDetailFieldType_set_CombInstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombInstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorPositionCombineDetailField::CombInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "CombInstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorPositionCombineDetailFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionCombineDetailFieldData>(self);
    CThostFtdcQryInvestorPositionCombineDetailField *data = &(extra->data);
    // memset(data->CombInstrumentID, 0, sizeof(data->CombInstrumentID));
    // memcpy(data->CombInstrumentID, buf, len);
    strncpy(data->CombInstrumentID, buf, sizeof(data->CombInstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryInvestorPositionCombineDetailFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryInvestorPositionCombineDetailFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryInvestorPositionCombineDetailFieldType_get_BrokerID,
    .set = PyCThostFtdcQryInvestorPositionCombineDetailFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryInvestorPositionCombineDetailFieldType_get_InvestorID,
    .set = PyCThostFtdcQryInvestorPositionCombineDetailFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcQryInvestorPositionCombineDetailFieldType_get_reserve1,
    .set = PyCThostFtdcQryInvestorPositionCombineDetailFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryInvestorPositionCombineDetailFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryInvestorPositionCombineDetailFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcQryInvestorPositionCombineDetailFieldType_get_InvestUnitID,
    .set = PyCThostFtdcQryInvestorPositionCombineDetailFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 组合持仓合约编码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "CombInstrumentID",
    .get = PyCThostFtdcQryInvestorPositionCombineDetailFieldType_get_CombInstrumentID,
    .set = PyCThostFtdcQryInvestorPositionCombineDetailFieldType_set_CombInstrumentID,
    .doc = PyDoc_STR("组合持仓合约编码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryInvestorPositionCombineDetailFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryInvestorPositionCombineDetailField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询组合持仓明细")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryInvestorPositionCombineDetailFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryInvestorPositionCombineDetailFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryInvestorPositionCombineDetailFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryInvestorPositionCombineDetailFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryInvestorPositionCombineDetailFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryInvestorPositionCombineDetailFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询组合持仓明细")},
    {Py_tp_members, PyCThostFtdcQryInvestorPositionCombineDetailFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryInvestorPositionCombineDetailFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryInvestorPositionCombineDetailFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryInvestorPositionCombineDetailFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryInvestorPositionCombineDetailFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryInvestorPositionCombineDetailField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryInvestorPositionCombineDetailFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryInvestorPositionCombineDetailFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryInvestorPositionCombineDetailFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryInvestorPositionCombineDetailFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryInvestorPositionCombineDetailFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryInvestorPositionCombineDetailFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryInvestorPositionCombineDetailFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryInvestorPositionCombineDetailFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryInvestorPositionCombineDetailField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInvestorPositionCombineDetailField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}