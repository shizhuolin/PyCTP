
#include "PyCThostFtdcMMOptionInstrCommRateField.h"

///当前做市商期权合约手续费的详细内容

static int PyCThostFtdcMMOptionInstrCommRateFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "InvestorRange", "BrokerID", "InvestorID", "OpenRatioByMoney", "OpenRatioByVolume", "CloseRatioByMoney", "CloseRatioByVolume", "CloseTodayRatioByMoney", "CloseTodayRatioByVolume", "StrikeRatioByMoney", "StrikeRatioByVolume", "InstrumentID", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcMMOptionInstrCommRateField_reserve1 = NULL;
    Py_ssize_t CThostFtdcMMOptionInstrCommRateField_reserve1_length = 0;

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    char CThostFtdcMMOptionInstrCommRateField_InvestorRange = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcMMOptionInstrCommRateField_BrokerID = NULL;
    Py_ssize_t CThostFtdcMMOptionInstrCommRateField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcMMOptionInstrCommRateField_InvestorID = NULL;
    Py_ssize_t CThostFtdcMMOptionInstrCommRateField_InvestorID_length = 0;

    /// 开仓手续费率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcMMOptionInstrCommRateField_OpenRatioByMoney = 0.0;

    /// 开仓手续费
    /// typedef double TThostFtdcRatioType
    double CThostFtdcMMOptionInstrCommRateField_OpenRatioByVolume = 0.0;

    /// 平仓手续费率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcMMOptionInstrCommRateField_CloseRatioByMoney = 0.0;

    /// 平仓手续费
    /// typedef double TThostFtdcRatioType
    double CThostFtdcMMOptionInstrCommRateField_CloseRatioByVolume = 0.0;

    /// 平今手续费率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcMMOptionInstrCommRateField_CloseTodayRatioByMoney = 0.0;

    /// 平今手续费
    /// typedef double TThostFtdcRatioType
    double CThostFtdcMMOptionInstrCommRateField_CloseTodayRatioByVolume = 0.0;

    /// 执行手续费率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcMMOptionInstrCommRateField_StrikeRatioByMoney = 0.0;

    /// 执行手续费
    /// typedef double TThostFtdcRatioType
    double CThostFtdcMMOptionInstrCommRateField_StrikeRatioByVolume = 0.0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcMMOptionInstrCommRateField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcMMOptionInstrCommRateField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#ddddddddy#", (char **)kwlist
        , &CThostFtdcMMOptionInstrCommRateField_reserve1, &CThostFtdcMMOptionInstrCommRateField_reserve1_length
        , &CThostFtdcMMOptionInstrCommRateField_InvestorRange
        , &CThostFtdcMMOptionInstrCommRateField_BrokerID, &CThostFtdcMMOptionInstrCommRateField_BrokerID_length
        , &CThostFtdcMMOptionInstrCommRateField_InvestorID, &CThostFtdcMMOptionInstrCommRateField_InvestorID_length
        , &CThostFtdcMMOptionInstrCommRateField_OpenRatioByMoney
        , &CThostFtdcMMOptionInstrCommRateField_OpenRatioByVolume
        , &CThostFtdcMMOptionInstrCommRateField_CloseRatioByMoney
        , &CThostFtdcMMOptionInstrCommRateField_CloseRatioByVolume
        , &CThostFtdcMMOptionInstrCommRateField_CloseTodayRatioByMoney
        , &CThostFtdcMMOptionInstrCommRateField_CloseTodayRatioByVolume
        , &CThostFtdcMMOptionInstrCommRateField_StrikeRatioByMoney
        , &CThostFtdcMMOptionInstrCommRateField_StrikeRatioByVolume
        , &CThostFtdcMMOptionInstrCommRateField_InstrumentID, &CThostFtdcMMOptionInstrCommRateField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcMMOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMMOptionInstrCommRateFieldData>(self);
    CThostFtdcMMOptionInstrCommRateField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcMMOptionInstrCommRateField_reserve1 != NULL ) {
        if(CThostFtdcMMOptionInstrCommRateField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcMMOptionInstrCommRateField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcMMOptionInstrCommRateField_reserve1, CThostFtdcMMOptionInstrCommRateField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcMMOptionInstrCommRateField_reserve1, sizeof(data->reserve1));
        CThostFtdcMMOptionInstrCommRateField_reserve1 = NULL;
    }

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    data->InvestorRange = CThostFtdcMMOptionInstrCommRateField_InvestorRange;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcMMOptionInstrCommRateField_BrokerID != NULL ) {
        if(CThostFtdcMMOptionInstrCommRateField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcMMOptionInstrCommRateField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcMMOptionInstrCommRateField_BrokerID, CThostFtdcMMOptionInstrCommRateField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcMMOptionInstrCommRateField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcMMOptionInstrCommRateField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcMMOptionInstrCommRateField_InvestorID != NULL ) {
        if(CThostFtdcMMOptionInstrCommRateField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcMMOptionInstrCommRateField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcMMOptionInstrCommRateField_InvestorID, CThostFtdcMMOptionInstrCommRateField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcMMOptionInstrCommRateField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcMMOptionInstrCommRateField_InvestorID = NULL;
    }

    /// 开仓手续费率
    /// typedef double TThostFtdcRatioType
    data->OpenRatioByMoney = CThostFtdcMMOptionInstrCommRateField_OpenRatioByMoney;

    /// 开仓手续费
    /// typedef double TThostFtdcRatioType
    data->OpenRatioByVolume = CThostFtdcMMOptionInstrCommRateField_OpenRatioByVolume;

    /// 平仓手续费率
    /// typedef double TThostFtdcRatioType
    data->CloseRatioByMoney = CThostFtdcMMOptionInstrCommRateField_CloseRatioByMoney;

    /// 平仓手续费
    /// typedef double TThostFtdcRatioType
    data->CloseRatioByVolume = CThostFtdcMMOptionInstrCommRateField_CloseRatioByVolume;

    /// 平今手续费率
    /// typedef double TThostFtdcRatioType
    data->CloseTodayRatioByMoney = CThostFtdcMMOptionInstrCommRateField_CloseTodayRatioByMoney;

    /// 平今手续费
    /// typedef double TThostFtdcRatioType
    data->CloseTodayRatioByVolume = CThostFtdcMMOptionInstrCommRateField_CloseTodayRatioByVolume;

    /// 执行手续费率
    /// typedef double TThostFtdcRatioType
    data->StrikeRatioByMoney = CThostFtdcMMOptionInstrCommRateField_StrikeRatioByMoney;

    /// 执行手续费
    /// typedef double TThostFtdcRatioType
    data->StrikeRatioByVolume = CThostFtdcMMOptionInstrCommRateField_StrikeRatioByVolume;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcMMOptionInstrCommRateField_InstrumentID != NULL ) {
        if(CThostFtdcMMOptionInstrCommRateField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcMMOptionInstrCommRateField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcMMOptionInstrCommRateField_InstrumentID, CThostFtdcMMOptionInstrCommRateField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcMMOptionInstrCommRateField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcMMOptionInstrCommRateField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcMMOptionInstrCommRateFieldType_repr(PyObject *self) {

    PyCThostFtdcMMOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMMOptionInstrCommRateFieldData>(self);
    CThostFtdcMMOptionInstrCommRateField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:c,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:y}"
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "InvestorRange", data->InvestorRange
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "OpenRatioByMoney", data->OpenRatioByMoney
        , "OpenRatioByVolume", data->OpenRatioByVolume
        , "CloseRatioByMoney", data->CloseRatioByMoney
        , "CloseRatioByVolume", data->CloseRatioByVolume
        , "CloseTodayRatioByMoney", data->CloseTodayRatioByMoney
        , "CloseTodayRatioByVolume", data->CloseTodayRatioByVolume
        , "StrikeRatioByMoney", data->StrikeRatioByMoney
        , "StrikeRatioByVolume", data->StrikeRatioByVolume
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMMOptionInstrCommRateField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMMOptionInstrCommRateField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcMMOptionInstrCommRateFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcMMOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMMOptionInstrCommRateFieldData>(self);
    CThostFtdcMMOptionInstrCommRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcMMOptionInstrCommRateFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMMOptionInstrCommRateField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMMOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMMOptionInstrCommRateFieldData>(self);
    CThostFtdcMMOptionInstrCommRateField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者范围
/// typedef char TThostFtdcInvestorRangeType
static PyObject *PyCThostFtdcMMOptionInstrCommRateFieldType_get_InvestorRange(PyObject *self, void *closure) {
    PyCThostFtdcMMOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMMOptionInstrCommRateFieldData>(self);
    CThostFtdcMMOptionInstrCommRateField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->InvestorRange), 1);
}

static int PyCThostFtdcMMOptionInstrCommRateFieldType_set_InvestorRange(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcMMOptionInstrCommRateField::InvestorRange)) {
        PyErr_SetString(PyExc_ValueError, "InvestorRange must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMMOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMMOptionInstrCommRateFieldData>(self);
    CThostFtdcMMOptionInstrCommRateField *data = &(extra->data);
    data->InvestorRange = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcMMOptionInstrCommRateFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcMMOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMMOptionInstrCommRateFieldData>(self);
    CThostFtdcMMOptionInstrCommRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcMMOptionInstrCommRateFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMMOptionInstrCommRateField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMMOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMMOptionInstrCommRateFieldData>(self);
    CThostFtdcMMOptionInstrCommRateField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcMMOptionInstrCommRateFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcMMOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMMOptionInstrCommRateFieldData>(self);
    CThostFtdcMMOptionInstrCommRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcMMOptionInstrCommRateFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMMOptionInstrCommRateField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMMOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMMOptionInstrCommRateFieldData>(self);
    CThostFtdcMMOptionInstrCommRateField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcMMOptionInstrCommRateFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcMMOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMMOptionInstrCommRateFieldData>(self);
    CThostFtdcMMOptionInstrCommRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcMMOptionInstrCommRateFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMMOptionInstrCommRateField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMMOptionInstrCommRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMMOptionInstrCommRateFieldData>(self);
    CThostFtdcMMOptionInstrCommRateField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcMMOptionInstrCommRateFieldType_members[] = {
    /// 开仓手续费率
    /// typedef double TThostFtdcRatioType
    {
        .name = "OpenRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMMOptionInstrCommRateFieldData, data.OpenRatioByMoney),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("开仓手续费率")
    },
    /// 开仓手续费
    /// typedef double TThostFtdcRatioType
    {
        .name = "OpenRatioByVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMMOptionInstrCommRateFieldData, data.OpenRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("开仓手续费")
    },
    /// 平仓手续费率
    /// typedef double TThostFtdcRatioType
    {
        .name = "CloseRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMMOptionInstrCommRateFieldData, data.CloseRatioByMoney),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("平仓手续费率")
    },
    /// 平仓手续费
    /// typedef double TThostFtdcRatioType
    {
        .name = "CloseRatioByVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMMOptionInstrCommRateFieldData, data.CloseRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("平仓手续费")
    },
    /// 平今手续费率
    /// typedef double TThostFtdcRatioType
    {
        .name = "CloseTodayRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMMOptionInstrCommRateFieldData, data.CloseTodayRatioByMoney),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("平今手续费率")
    },
    /// 平今手续费
    /// typedef double TThostFtdcRatioType
    {
        .name = "CloseTodayRatioByVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMMOptionInstrCommRateFieldData, data.CloseTodayRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("平今手续费")
    },
    /// 执行手续费率
    /// typedef double TThostFtdcRatioType
    {
        .name = "StrikeRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMMOptionInstrCommRateFieldData, data.StrikeRatioByMoney),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("执行手续费率")
    },
    /// 执行手续费
    /// typedef double TThostFtdcRatioType
    {
        .name = "StrikeRatioByVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMMOptionInstrCommRateFieldData, data.StrikeRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("执行手续费")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcMMOptionInstrCommRateFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcMMOptionInstrCommRateFieldType_get_reserve1,
    .set = PyCThostFtdcMMOptionInstrCommRateFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    {
    .name = "InvestorRange",
    .get = PyCThostFtdcMMOptionInstrCommRateFieldType_get_InvestorRange,
    .set = PyCThostFtdcMMOptionInstrCommRateFieldType_set_InvestorRange,
    .doc = PyDoc_STR("投资者范围"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcMMOptionInstrCommRateFieldType_get_BrokerID,
    .set = PyCThostFtdcMMOptionInstrCommRateFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcMMOptionInstrCommRateFieldType_get_InvestorID,
    .set = PyCThostFtdcMMOptionInstrCommRateFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcMMOptionInstrCommRateFieldType_get_InstrumentID,
    .set = PyCThostFtdcMMOptionInstrCommRateFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcMMOptionInstrCommRateFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcMMOptionInstrCommRateField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("当前做市商期权合约手续费的详细内容")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcMMOptionInstrCommRateFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcMMOptionInstrCommRateFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcMMOptionInstrCommRateFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcMMOptionInstrCommRateFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcMMOptionInstrCommRateFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcMMOptionInstrCommRateFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("当前做市商期权合约手续费的详细内容")},
    {Py_tp_members, PyCThostFtdcMMOptionInstrCommRateFieldType_members},
    {Py_tp_getset, PyCThostFtdcMMOptionInstrCommRateFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcMMOptionInstrCommRateFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcMMOptionInstrCommRateFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcMMOptionInstrCommRateFieldType_spec = {
    .name = "PyCTP.CThostFtdcMMOptionInstrCommRateField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcMMOptionInstrCommRateFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcMMOptionInstrCommRateFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcMMOptionInstrCommRateFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcMMOptionInstrCommRateFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcMMOptionInstrCommRateFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcMMOptionInstrCommRateFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcMMOptionInstrCommRateFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcMMOptionInstrCommRateFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcMMOptionInstrCommRateField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMMOptionInstrCommRateField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}