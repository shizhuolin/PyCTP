
#include "PyCThostFtdcQryInvestorProductGroupMarginField.h"

///查询投资者品种/跨品种保证金

static int PyCThostFtdcQryInvestorProductGroupMarginFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "reserve1", "HedgeFlag", "ExchangeID", "InvestUnitID", "ProductGroupID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryInvestorProductGroupMarginField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryInvestorProductGroupMarginField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryInvestorProductGroupMarginField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryInvestorProductGroupMarginField_InvestorID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcQryInvestorProductGroupMarginField_reserve1 = NULL;
    Py_ssize_t CThostFtdcQryInvestorProductGroupMarginField_reserve1_length = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcQryInvestorProductGroupMarginField_HedgeFlag = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryInvestorProductGroupMarginField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryInvestorProductGroupMarginField_ExchangeID_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcQryInvestorProductGroupMarginField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcQryInvestorProductGroupMarginField_InvestUnitID_length = 0;

    /// 品种/跨品种标示
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryInvestorProductGroupMarginField_ProductGroupID = NULL;
    Py_ssize_t CThostFtdcQryInvestorProductGroupMarginField_ProductGroupID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#cy#y#y#", (char **)kwlist
        , &CThostFtdcQryInvestorProductGroupMarginField_BrokerID, &CThostFtdcQryInvestorProductGroupMarginField_BrokerID_length
        , &CThostFtdcQryInvestorProductGroupMarginField_InvestorID, &CThostFtdcQryInvestorProductGroupMarginField_InvestorID_length
        , &CThostFtdcQryInvestorProductGroupMarginField_reserve1, &CThostFtdcQryInvestorProductGroupMarginField_reserve1_length
        , &CThostFtdcQryInvestorProductGroupMarginField_HedgeFlag
        , &CThostFtdcQryInvestorProductGroupMarginField_ExchangeID, &CThostFtdcQryInvestorProductGroupMarginField_ExchangeID_length
        , &CThostFtdcQryInvestorProductGroupMarginField_InvestUnitID, &CThostFtdcQryInvestorProductGroupMarginField_InvestUnitID_length
        , &CThostFtdcQryInvestorProductGroupMarginField_ProductGroupID, &CThostFtdcQryInvestorProductGroupMarginField_ProductGroupID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryInvestorProductGroupMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProductGroupMarginFieldData>(self);
    CThostFtdcQryInvestorProductGroupMarginField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryInvestorProductGroupMarginField_BrokerID != NULL ) {
        if(CThostFtdcQryInvestorProductGroupMarginField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryInvestorProductGroupMarginField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryInvestorProductGroupMarginField_BrokerID, CThostFtdcQryInvestorProductGroupMarginField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryInvestorProductGroupMarginField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryInvestorProductGroupMarginField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryInvestorProductGroupMarginField_InvestorID != NULL ) {
        if(CThostFtdcQryInvestorProductGroupMarginField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryInvestorProductGroupMarginField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryInvestorProductGroupMarginField_InvestorID, CThostFtdcQryInvestorProductGroupMarginField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryInvestorProductGroupMarginField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryInvestorProductGroupMarginField_InvestorID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcQryInvestorProductGroupMarginField_reserve1 != NULL ) {
        if(CThostFtdcQryInvestorProductGroupMarginField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcQryInvestorProductGroupMarginField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcQryInvestorProductGroupMarginField_reserve1, CThostFtdcQryInvestorProductGroupMarginField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcQryInvestorProductGroupMarginField_reserve1, sizeof(data->reserve1));
        CThostFtdcQryInvestorProductGroupMarginField_reserve1 = NULL;
    }

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcQryInvestorProductGroupMarginField_HedgeFlag;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryInvestorProductGroupMarginField_ExchangeID != NULL ) {
        if(CThostFtdcQryInvestorProductGroupMarginField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryInvestorProductGroupMarginField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryInvestorProductGroupMarginField_ExchangeID, CThostFtdcQryInvestorProductGroupMarginField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryInvestorProductGroupMarginField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryInvestorProductGroupMarginField_ExchangeID = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcQryInvestorProductGroupMarginField_InvestUnitID != NULL ) {
        if(CThostFtdcQryInvestorProductGroupMarginField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcQryInvestorProductGroupMarginField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcQryInvestorProductGroupMarginField_InvestUnitID, CThostFtdcQryInvestorProductGroupMarginField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcQryInvestorProductGroupMarginField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcQryInvestorProductGroupMarginField_InvestUnitID = NULL;
    }

    /// 品种/跨品种标示
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryInvestorProductGroupMarginField_ProductGroupID != NULL ) {
        if(CThostFtdcQryInvestorProductGroupMarginField_ProductGroupID_length >= (Py_ssize_t)sizeof(data->ProductGroupID)) {
            PyErr_Format(PyExc_ValueError, "ProductGroupID too long: length=%zd (max allowed is 80)", CThostFtdcQryInvestorProductGroupMarginField_ProductGroupID_length);
            return -1;
        }
        // memset(data->ProductGroupID, 0, sizeof(data->ProductGroupID));
        // memcpy(data->ProductGroupID, CThostFtdcQryInvestorProductGroupMarginField_ProductGroupID, CThostFtdcQryInvestorProductGroupMarginField_ProductGroupID_length);
        strncpy(data->ProductGroupID, CThostFtdcQryInvestorProductGroupMarginField_ProductGroupID, sizeof(data->ProductGroupID));
        CThostFtdcQryInvestorProductGroupMarginField_ProductGroupID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryInvestorProductGroupMarginFieldType_repr(PyObject *self) {

    PyCThostFtdcQryInvestorProductGroupMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProductGroupMarginFieldData>(self);
    CThostFtdcQryInvestorProductGroupMarginField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:c,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "HedgeFlag", data->HedgeFlag
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "ProductGroupID", data->ProductGroupID//, (Py_ssize_t)sizeof(data->ProductGroupID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorProductGroupMarginField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorProductGroupMarginField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryInvestorProductGroupMarginFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorProductGroupMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProductGroupMarginFieldData>(self);
    CThostFtdcQryInvestorProductGroupMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryInvestorProductGroupMarginFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorProductGroupMarginField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorProductGroupMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProductGroupMarginFieldData>(self);
    CThostFtdcQryInvestorProductGroupMarginField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryInvestorProductGroupMarginFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorProductGroupMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProductGroupMarginFieldData>(self);
    CThostFtdcQryInvestorProductGroupMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryInvestorProductGroupMarginFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorProductGroupMarginField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorProductGroupMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProductGroupMarginFieldData>(self);
    CThostFtdcQryInvestorProductGroupMarginField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcQryInvestorProductGroupMarginFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorProductGroupMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProductGroupMarginFieldData>(self);
    CThostFtdcQryInvestorProductGroupMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcQryInvestorProductGroupMarginFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorProductGroupMarginField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorProductGroupMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProductGroupMarginFieldData>(self);
    CThostFtdcQryInvestorProductGroupMarginField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcQryInvestorProductGroupMarginFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorProductGroupMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProductGroupMarginFieldData>(self);
    CThostFtdcQryInvestorProductGroupMarginField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcQryInvestorProductGroupMarginFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcQryInvestorProductGroupMarginField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorProductGroupMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProductGroupMarginFieldData>(self);
    CThostFtdcQryInvestorProductGroupMarginField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryInvestorProductGroupMarginFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorProductGroupMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProductGroupMarginFieldData>(self);
    CThostFtdcQryInvestorProductGroupMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryInvestorProductGroupMarginFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorProductGroupMarginField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorProductGroupMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProductGroupMarginFieldData>(self);
    CThostFtdcQryInvestorProductGroupMarginField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcQryInvestorProductGroupMarginFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorProductGroupMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProductGroupMarginFieldData>(self);
    CThostFtdcQryInvestorProductGroupMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcQryInvestorProductGroupMarginFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorProductGroupMarginField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorProductGroupMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProductGroupMarginFieldData>(self);
    CThostFtdcQryInvestorProductGroupMarginField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 品种/跨品种标示
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryInvestorProductGroupMarginFieldType_get_ProductGroupID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorProductGroupMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProductGroupMarginFieldData>(self);
    CThostFtdcQryInvestorProductGroupMarginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductGroupID, (Py_ssize_t)sizeof(data->ProductGroupID));
    return PyBytes_FromString(data->ProductGroupID);
}

static int PyCThostFtdcQryInvestorProductGroupMarginFieldType_set_ProductGroupID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductGroupID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorProductGroupMarginField::ProductGroupID)) {
        PyErr_SetString(PyExc_ValueError, "ProductGroupID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorProductGroupMarginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProductGroupMarginFieldData>(self);
    CThostFtdcQryInvestorProductGroupMarginField *data = &(extra->data);
    // memset(data->ProductGroupID, 0, sizeof(data->ProductGroupID));
    // memcpy(data->ProductGroupID, buf, len);
    strncpy(data->ProductGroupID, buf, sizeof(data->ProductGroupID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryInvestorProductGroupMarginFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryInvestorProductGroupMarginFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryInvestorProductGroupMarginFieldType_get_BrokerID,
    .set = PyCThostFtdcQryInvestorProductGroupMarginFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryInvestorProductGroupMarginFieldType_get_InvestorID,
    .set = PyCThostFtdcQryInvestorProductGroupMarginFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcQryInvestorProductGroupMarginFieldType_get_reserve1,
    .set = PyCThostFtdcQryInvestorProductGroupMarginFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcQryInvestorProductGroupMarginFieldType_get_HedgeFlag,
    .set = PyCThostFtdcQryInvestorProductGroupMarginFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryInvestorProductGroupMarginFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryInvestorProductGroupMarginFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcQryInvestorProductGroupMarginFieldType_get_InvestUnitID,
    .set = PyCThostFtdcQryInvestorProductGroupMarginFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 品种/跨品种标示
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ProductGroupID",
    .get = PyCThostFtdcQryInvestorProductGroupMarginFieldType_get_ProductGroupID,
    .set = PyCThostFtdcQryInvestorProductGroupMarginFieldType_set_ProductGroupID,
    .doc = PyDoc_STR("品种/跨品种标示"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryInvestorProductGroupMarginFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryInvestorProductGroupMarginField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询投资者品种/跨品种保证金")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryInvestorProductGroupMarginFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryInvestorProductGroupMarginFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryInvestorProductGroupMarginFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryInvestorProductGroupMarginFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryInvestorProductGroupMarginFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryInvestorProductGroupMarginFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询投资者品种/跨品种保证金")},
    {Py_tp_members, PyCThostFtdcQryInvestorProductGroupMarginFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryInvestorProductGroupMarginFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryInvestorProductGroupMarginFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryInvestorProductGroupMarginFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryInvestorProductGroupMarginFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryInvestorProductGroupMarginField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryInvestorProductGroupMarginFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryInvestorProductGroupMarginFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryInvestorProductGroupMarginFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryInvestorProductGroupMarginFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryInvestorProductGroupMarginFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryInvestorProductGroupMarginFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryInvestorProductGroupMarginFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryInvestorProductGroupMarginFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryInvestorProductGroupMarginField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInvestorProductGroupMarginField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}