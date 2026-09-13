
#include "PyCThostFtdcInvestorInfoCommRecField.h"

///投资者申报费阶梯收取记录

static int PyCThostFtdcInvestorInfoCommRecFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "BrokerID", "InvestorID", "InstrumentID", "OrderCount", "OrderActionCount", "ForQuoteCnt", "InfoComm", "IsOptSeries", "ProductID", "InfoCnt", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcInvestorInfoCommRecField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcInvestorInfoCommRecField_ExchangeID_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInvestorInfoCommRecField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInvestorInfoCommRecField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInvestorInfoCommRecField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInvestorInfoCommRecField_InvestorID_length = 0;

    /// 商品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcInvestorInfoCommRecField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcInvestorInfoCommRecField_InstrumentID_length = 0;

    /// 报单总笔数
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcInvestorInfoCommRecField_OrderCount = 0;

    /// 撤单总笔数
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcInvestorInfoCommRecField_OrderActionCount = 0;

    /// 询价总次数
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcInvestorInfoCommRecField_ForQuoteCnt = 0;

    /// 申报费
    /// typedef double TThostFtdcMoneyType
    double CThostFtdcInvestorInfoCommRecField_InfoComm = 0.0;

    /// 是否期权系列
    /// typedef int TThostFtdcBoolType
    int CThostFtdcInvestorInfoCommRecField_IsOptSeries = 0;

    /// 品种代码
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcInvestorInfoCommRecField_ProductID = NULL;
    Py_ssize_t CThostFtdcInvestorInfoCommRecField_ProductID_length = 0;

    /// 信息量总量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcInvestorInfoCommRecField_InfoCnt = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#iiidiy#i", (char **)kwlist
        , &CThostFtdcInvestorInfoCommRecField_ExchangeID, &CThostFtdcInvestorInfoCommRecField_ExchangeID_length
        , &CThostFtdcInvestorInfoCommRecField_BrokerID, &CThostFtdcInvestorInfoCommRecField_BrokerID_length
        , &CThostFtdcInvestorInfoCommRecField_InvestorID, &CThostFtdcInvestorInfoCommRecField_InvestorID_length
        , &CThostFtdcInvestorInfoCommRecField_InstrumentID, &CThostFtdcInvestorInfoCommRecField_InstrumentID_length
        , &CThostFtdcInvestorInfoCommRecField_OrderCount
        , &CThostFtdcInvestorInfoCommRecField_OrderActionCount
        , &CThostFtdcInvestorInfoCommRecField_ForQuoteCnt
        , &CThostFtdcInvestorInfoCommRecField_InfoComm
        , &CThostFtdcInvestorInfoCommRecField_IsOptSeries
        , &CThostFtdcInvestorInfoCommRecField_ProductID, &CThostFtdcInvestorInfoCommRecField_ProductID_length
        , &CThostFtdcInvestorInfoCommRecField_InfoCnt
    )) {
        return -1;
    }

    PyCThostFtdcInvestorInfoCommRecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorInfoCommRecFieldData>(self);
    CThostFtdcInvestorInfoCommRecField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcInvestorInfoCommRecField_ExchangeID != NULL ) {
        if(CThostFtdcInvestorInfoCommRecField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcInvestorInfoCommRecField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcInvestorInfoCommRecField_ExchangeID, CThostFtdcInvestorInfoCommRecField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcInvestorInfoCommRecField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcInvestorInfoCommRecField_ExchangeID = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInvestorInfoCommRecField_BrokerID != NULL ) {
        if(CThostFtdcInvestorInfoCommRecField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInvestorInfoCommRecField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInvestorInfoCommRecField_BrokerID, CThostFtdcInvestorInfoCommRecField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInvestorInfoCommRecField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInvestorInfoCommRecField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInvestorInfoCommRecField_InvestorID != NULL ) {
        if(CThostFtdcInvestorInfoCommRecField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInvestorInfoCommRecField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInvestorInfoCommRecField_InvestorID, CThostFtdcInvestorInfoCommRecField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInvestorInfoCommRecField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInvestorInfoCommRecField_InvestorID = NULL;
    }

    /// 商品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcInvestorInfoCommRecField_InstrumentID != NULL ) {
        if(CThostFtdcInvestorInfoCommRecField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcInvestorInfoCommRecField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcInvestorInfoCommRecField_InstrumentID, CThostFtdcInvestorInfoCommRecField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcInvestorInfoCommRecField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcInvestorInfoCommRecField_InstrumentID = NULL;
    }

    /// 报单总笔数
    /// typedef int TThostFtdcVolumeType
    data->OrderCount = CThostFtdcInvestorInfoCommRecField_OrderCount;

    /// 撤单总笔数
    /// typedef int TThostFtdcVolumeType
    data->OrderActionCount = CThostFtdcInvestorInfoCommRecField_OrderActionCount;

    /// 询价总次数
    /// typedef int TThostFtdcVolumeType
    data->ForQuoteCnt = CThostFtdcInvestorInfoCommRecField_ForQuoteCnt;

    /// 申报费
    /// typedef double TThostFtdcMoneyType
    data->InfoComm = CThostFtdcInvestorInfoCommRecField_InfoComm;

    /// 是否期权系列
    /// typedef int TThostFtdcBoolType
    data->IsOptSeries = CThostFtdcInvestorInfoCommRecField_IsOptSeries;

    /// 品种代码
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcInvestorInfoCommRecField_ProductID != NULL ) {
        if(CThostFtdcInvestorInfoCommRecField_ProductID_length >= (Py_ssize_t)sizeof(data->ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is 40)", CThostFtdcInvestorInfoCommRecField_ProductID_length);
            return -1;
        }
        // memset(data->ProductID, 0, sizeof(data->ProductID));
        // memcpy(data->ProductID, CThostFtdcInvestorInfoCommRecField_ProductID, CThostFtdcInvestorInfoCommRecField_ProductID_length);
        strncpy(data->ProductID, CThostFtdcInvestorInfoCommRecField_ProductID, sizeof(data->ProductID));
        CThostFtdcInvestorInfoCommRecField_ProductID = NULL;
    }

    /// 信息量总量
    /// typedef int TThostFtdcVolumeType
    data->InfoCnt = CThostFtdcInvestorInfoCommRecField_InfoCnt;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInvestorInfoCommRecFieldType_repr(PyObject *self) {

    PyCThostFtdcInvestorInfoCommRecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorInfoCommRecFieldData>(self);
    CThostFtdcInvestorInfoCommRecField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:i,s:i,s:d,s:i,s:y,s:i}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "OrderCount", data->OrderCount
        , "OrderActionCount", data->OrderActionCount
        , "ForQuoteCnt", data->ForQuoteCnt
        , "InfoComm", data->InfoComm
        , "IsOptSeries", data->IsOptSeries
        , "ProductID", data->ProductID//, (Py_ssize_t)sizeof(data->ProductID)
        , "InfoCnt", data->InfoCnt
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorInfoCommRecField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorInfoCommRecField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcInvestorInfoCommRecFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorInfoCommRecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorInfoCommRecFieldData>(self);
    CThostFtdcInvestorInfoCommRecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcInvestorInfoCommRecFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorInfoCommRecField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorInfoCommRecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorInfoCommRecFieldData>(self);
    CThostFtdcInvestorInfoCommRecField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInvestorInfoCommRecFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorInfoCommRecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorInfoCommRecFieldData>(self);
    CThostFtdcInvestorInfoCommRecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInvestorInfoCommRecFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorInfoCommRecField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorInfoCommRecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorInfoCommRecFieldData>(self);
    CThostFtdcInvestorInfoCommRecField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInvestorInfoCommRecFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorInfoCommRecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorInfoCommRecFieldData>(self);
    CThostFtdcInvestorInfoCommRecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInvestorInfoCommRecFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorInfoCommRecField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorInfoCommRecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorInfoCommRecFieldData>(self);
    CThostFtdcInvestorInfoCommRecField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 商品代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcInvestorInfoCommRecFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorInfoCommRecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorInfoCommRecFieldData>(self);
    CThostFtdcInvestorInfoCommRecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcInvestorInfoCommRecFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorInfoCommRecField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorInfoCommRecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorInfoCommRecFieldData>(self);
    CThostFtdcInvestorInfoCommRecField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 品种代码
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcInvestorInfoCommRecFieldType_get_ProductID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorInfoCommRecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorInfoCommRecFieldData>(self);
    CThostFtdcInvestorInfoCommRecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductID, (Py_ssize_t)sizeof(data->ProductID));
    return PyBytes_FromString(data->ProductID);
}

static int PyCThostFtdcInvestorInfoCommRecFieldType_set_ProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorInfoCommRecField::ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorInfoCommRecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorInfoCommRecFieldData>(self);
    CThostFtdcInvestorInfoCommRecField *data = &(extra->data);
    // memset(data->ProductID, 0, sizeof(data->ProductID));
    // memcpy(data->ProductID, buf, len);
    strncpy(data->ProductID, buf, sizeof(data->ProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInvestorInfoCommRecFieldType_members[] = {
    /// 报单总笔数
    /// typedef int TThostFtdcVolumeType
    {
        .name = "OrderCount",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorInfoCommRecFieldData, data.OrderCount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("报单总笔数")
    },
    /// 撤单总笔数
    /// typedef int TThostFtdcVolumeType
    {
        .name = "OrderActionCount",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorInfoCommRecFieldData, data.OrderActionCount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("撤单总笔数")
    },
    /// 询价总次数
    /// typedef int TThostFtdcVolumeType
    {
        .name = "ForQuoteCnt",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorInfoCommRecFieldData, data.ForQuoteCnt),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("询价总次数")
    },
    /// 申报费
    /// typedef double TThostFtdcMoneyType
    {
        .name = "InfoComm",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorInfoCommRecFieldData, data.InfoComm),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("申报费")
    },
    /// 是否期权系列
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsOptSeries",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorInfoCommRecFieldData, data.IsOptSeries),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否期权系列")
    },
    /// 信息量总量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "InfoCnt",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcInvestorInfoCommRecFieldData, data.InfoCnt),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("信息量总量")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInvestorInfoCommRecFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcInvestorInfoCommRecFieldType_get_ExchangeID,
    .set = PyCThostFtdcInvestorInfoCommRecFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInvestorInfoCommRecFieldType_get_BrokerID,
    .set = PyCThostFtdcInvestorInfoCommRecFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInvestorInfoCommRecFieldType_get_InvestorID,
    .set = PyCThostFtdcInvestorInfoCommRecFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 商品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcInvestorInfoCommRecFieldType_get_InstrumentID,
    .set = PyCThostFtdcInvestorInfoCommRecFieldType_set_InstrumentID,
    .doc = PyDoc_STR("商品代码"),
    },
    /// 品种代码
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "ProductID",
    .get = PyCThostFtdcInvestorInfoCommRecFieldType_get_ProductID,
    .set = PyCThostFtdcInvestorInfoCommRecFieldType_set_ProductID,
    .doc = PyDoc_STR("品种代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInvestorInfoCommRecFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInvestorInfoCommRecField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者申报费阶梯收取记录")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInvestorInfoCommRecFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInvestorInfoCommRecFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInvestorInfoCommRecFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInvestorInfoCommRecFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInvestorInfoCommRecFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInvestorInfoCommRecFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者申报费阶梯收取记录")},
    {Py_tp_members, PyCThostFtdcInvestorInfoCommRecFieldType_members},
    {Py_tp_getset, PyCThostFtdcInvestorInfoCommRecFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInvestorInfoCommRecFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInvestorInfoCommRecFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInvestorInfoCommRecFieldType_spec = {
    .name = "PyCTP.CThostFtdcInvestorInfoCommRecField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInvestorInfoCommRecFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInvestorInfoCommRecFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInvestorInfoCommRecFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInvestorInfoCommRecFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInvestorInfoCommRecFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInvestorInfoCommRecFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInvestorInfoCommRecFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInvestorInfoCommRecFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInvestorInfoCommRecField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorInfoCommRecField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}