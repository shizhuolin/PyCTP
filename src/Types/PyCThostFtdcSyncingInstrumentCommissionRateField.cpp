
#include "PyCThostFtdcSyncingInstrumentCommissionRateField.h"

///正在同步中的合约手续费率

static int PyCThostFtdcSyncingInstrumentCommissionRateFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "InvestorRange", "BrokerID", "InvestorID", "OpenRatioByMoney", "OpenRatioByVolume", "CloseRatioByMoney", "CloseRatioByVolume", "CloseTodayRatioByMoney", "CloseTodayRatioByVolume", "InstrumentID", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcSyncingInstrumentCommissionRateField_reserve1 = NULL;
    Py_ssize_t CThostFtdcSyncingInstrumentCommissionRateField_reserve1_length = 0;

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    char CThostFtdcSyncingInstrumentCommissionRateField_InvestorRange = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSyncingInstrumentCommissionRateField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSyncingInstrumentCommissionRateField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcSyncingInstrumentCommissionRateField_InvestorID = NULL;
    Py_ssize_t CThostFtdcSyncingInstrumentCommissionRateField_InvestorID_length = 0;

    /// 开仓手续费率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncingInstrumentCommissionRateField_OpenRatioByMoney = 0.0;

    /// 开仓手续费
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncingInstrumentCommissionRateField_OpenRatioByVolume = 0.0;

    /// 平仓手续费率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncingInstrumentCommissionRateField_CloseRatioByMoney = 0.0;

    /// 平仓手续费
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncingInstrumentCommissionRateField_CloseRatioByVolume = 0.0;

    /// 平今手续费率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncingInstrumentCommissionRateField_CloseTodayRatioByMoney = 0.0;

    /// 平今手续费
    /// typedef double TThostFtdcRatioType
    double CThostFtdcSyncingInstrumentCommissionRateField_CloseTodayRatioByVolume = 0.0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSyncingInstrumentCommissionRateField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcSyncingInstrumentCommissionRateField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#ddddddy#", (char **)kwlist
        , &CThostFtdcSyncingInstrumentCommissionRateField_reserve1, &CThostFtdcSyncingInstrumentCommissionRateField_reserve1_length
        , &CThostFtdcSyncingInstrumentCommissionRateField_InvestorRange
        , &CThostFtdcSyncingInstrumentCommissionRateField_BrokerID, &CThostFtdcSyncingInstrumentCommissionRateField_BrokerID_length
        , &CThostFtdcSyncingInstrumentCommissionRateField_InvestorID, &CThostFtdcSyncingInstrumentCommissionRateField_InvestorID_length
        , &CThostFtdcSyncingInstrumentCommissionRateField_OpenRatioByMoney
        , &CThostFtdcSyncingInstrumentCommissionRateField_OpenRatioByVolume
        , &CThostFtdcSyncingInstrumentCommissionRateField_CloseRatioByMoney
        , &CThostFtdcSyncingInstrumentCommissionRateField_CloseRatioByVolume
        , &CThostFtdcSyncingInstrumentCommissionRateField_CloseTodayRatioByMoney
        , &CThostFtdcSyncingInstrumentCommissionRateField_CloseTodayRatioByVolume
        , &CThostFtdcSyncingInstrumentCommissionRateField_InstrumentID, &CThostFtdcSyncingInstrumentCommissionRateField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcSyncingInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentCommissionRateFieldData>(self);
    CThostFtdcSyncingInstrumentCommissionRateField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcSyncingInstrumentCommissionRateField_reserve1 != NULL ) {
        if(CThostFtdcSyncingInstrumentCommissionRateField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcSyncingInstrumentCommissionRateField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcSyncingInstrumentCommissionRateField_reserve1, CThostFtdcSyncingInstrumentCommissionRateField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcSyncingInstrumentCommissionRateField_reserve1, sizeof(data->reserve1));
        CThostFtdcSyncingInstrumentCommissionRateField_reserve1 = NULL;
    }

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    data->InvestorRange = CThostFtdcSyncingInstrumentCommissionRateField_InvestorRange;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSyncingInstrumentCommissionRateField_BrokerID != NULL ) {
        if(CThostFtdcSyncingInstrumentCommissionRateField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSyncingInstrumentCommissionRateField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSyncingInstrumentCommissionRateField_BrokerID, CThostFtdcSyncingInstrumentCommissionRateField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSyncingInstrumentCommissionRateField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSyncingInstrumentCommissionRateField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcSyncingInstrumentCommissionRateField_InvestorID != NULL ) {
        if(CThostFtdcSyncingInstrumentCommissionRateField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcSyncingInstrumentCommissionRateField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcSyncingInstrumentCommissionRateField_InvestorID, CThostFtdcSyncingInstrumentCommissionRateField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcSyncingInstrumentCommissionRateField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcSyncingInstrumentCommissionRateField_InvestorID = NULL;
    }

    /// 开仓手续费率
    /// typedef double TThostFtdcRatioType
    data->OpenRatioByMoney = CThostFtdcSyncingInstrumentCommissionRateField_OpenRatioByMoney;

    /// 开仓手续费
    /// typedef double TThostFtdcRatioType
    data->OpenRatioByVolume = CThostFtdcSyncingInstrumentCommissionRateField_OpenRatioByVolume;

    /// 平仓手续费率
    /// typedef double TThostFtdcRatioType
    data->CloseRatioByMoney = CThostFtdcSyncingInstrumentCommissionRateField_CloseRatioByMoney;

    /// 平仓手续费
    /// typedef double TThostFtdcRatioType
    data->CloseRatioByVolume = CThostFtdcSyncingInstrumentCommissionRateField_CloseRatioByVolume;

    /// 平今手续费率
    /// typedef double TThostFtdcRatioType
    data->CloseTodayRatioByMoney = CThostFtdcSyncingInstrumentCommissionRateField_CloseTodayRatioByMoney;

    /// 平今手续费
    /// typedef double TThostFtdcRatioType
    data->CloseTodayRatioByVolume = CThostFtdcSyncingInstrumentCommissionRateField_CloseTodayRatioByVolume;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSyncingInstrumentCommissionRateField_InstrumentID != NULL ) {
        if(CThostFtdcSyncingInstrumentCommissionRateField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcSyncingInstrumentCommissionRateField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcSyncingInstrumentCommissionRateField_InstrumentID, CThostFtdcSyncingInstrumentCommissionRateField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcSyncingInstrumentCommissionRateField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcSyncingInstrumentCommissionRateField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSyncingInstrumentCommissionRateFieldType_repr(PyObject *self) {

    PyCThostFtdcSyncingInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentCommissionRateFieldData>(self);
    CThostFtdcSyncingInstrumentCommissionRateField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:c,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:y}"
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
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncingInstrumentCommissionRateField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncingInstrumentCommissionRateField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcSyncingInstrumentCommissionRateFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentCommissionRateFieldData>(self);
    CThostFtdcSyncingInstrumentCommissionRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcSyncingInstrumentCommissionRateFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingInstrumentCommissionRateField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentCommissionRateFieldData>(self);
    CThostFtdcSyncingInstrumentCommissionRateField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者范围
/// typedef char TThostFtdcInvestorRangeType
static PyObject *PyCThostFtdcSyncingInstrumentCommissionRateFieldType_get_InvestorRange(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentCommissionRateFieldData>(self);
    CThostFtdcSyncingInstrumentCommissionRateField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->InvestorRange), 1);
}

static int PyCThostFtdcSyncingInstrumentCommissionRateFieldType_set_InvestorRange(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcSyncingInstrumentCommissionRateField::InvestorRange)) {
        PyErr_SetString(PyExc_ValueError, "InvestorRange must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentCommissionRateFieldData>(self);
    CThostFtdcSyncingInstrumentCommissionRateField *data = &(extra->data);
    data->InvestorRange = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSyncingInstrumentCommissionRateFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentCommissionRateFieldData>(self);
    CThostFtdcSyncingInstrumentCommissionRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSyncingInstrumentCommissionRateFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingInstrumentCommissionRateField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentCommissionRateFieldData>(self);
    CThostFtdcSyncingInstrumentCommissionRateField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcSyncingInstrumentCommissionRateFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentCommissionRateFieldData>(self);
    CThostFtdcSyncingInstrumentCommissionRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcSyncingInstrumentCommissionRateFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingInstrumentCommissionRateField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentCommissionRateFieldData>(self);
    CThostFtdcSyncingInstrumentCommissionRateField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSyncingInstrumentCommissionRateFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcSyncingInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentCommissionRateFieldData>(self);
    CThostFtdcSyncingInstrumentCommissionRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcSyncingInstrumentCommissionRateFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSyncingInstrumentCommissionRateField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSyncingInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSyncingInstrumentCommissionRateFieldData>(self);
    CThostFtdcSyncingInstrumentCommissionRateField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSyncingInstrumentCommissionRateFieldType_members[] = {
    /// 开仓手续费率
    /// typedef double TThostFtdcRatioType
    {
        .name = "OpenRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSyncingInstrumentCommissionRateFieldData, data.OpenRatioByMoney),
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
        .offset = offsetof(PyCThostFtdcSyncingInstrumentCommissionRateFieldData, data.OpenRatioByVolume),
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
        .offset = offsetof(PyCThostFtdcSyncingInstrumentCommissionRateFieldData, data.CloseRatioByMoney),
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
        .offset = offsetof(PyCThostFtdcSyncingInstrumentCommissionRateFieldData, data.CloseRatioByVolume),
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
        .offset = offsetof(PyCThostFtdcSyncingInstrumentCommissionRateFieldData, data.CloseTodayRatioByMoney),
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
        .offset = offsetof(PyCThostFtdcSyncingInstrumentCommissionRateFieldData, data.CloseTodayRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("平今手续费")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSyncingInstrumentCommissionRateFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcSyncingInstrumentCommissionRateFieldType_get_reserve1,
    .set = PyCThostFtdcSyncingInstrumentCommissionRateFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    {
    .name = "InvestorRange",
    .get = PyCThostFtdcSyncingInstrumentCommissionRateFieldType_get_InvestorRange,
    .set = PyCThostFtdcSyncingInstrumentCommissionRateFieldType_set_InvestorRange,
    .doc = PyDoc_STR("投资者范围"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSyncingInstrumentCommissionRateFieldType_get_BrokerID,
    .set = PyCThostFtdcSyncingInstrumentCommissionRateFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcSyncingInstrumentCommissionRateFieldType_get_InvestorID,
    .set = PyCThostFtdcSyncingInstrumentCommissionRateFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcSyncingInstrumentCommissionRateFieldType_get_InstrumentID,
    .set = PyCThostFtdcSyncingInstrumentCommissionRateFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSyncingInstrumentCommissionRateFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSyncingInstrumentCommissionRateField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("正在同步中的合约手续费率")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSyncingInstrumentCommissionRateFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSyncingInstrumentCommissionRateFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSyncingInstrumentCommissionRateFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSyncingInstrumentCommissionRateFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSyncingInstrumentCommissionRateFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSyncingInstrumentCommissionRateFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("正在同步中的合约手续费率")},
    {Py_tp_members, PyCThostFtdcSyncingInstrumentCommissionRateFieldType_members},
    {Py_tp_getset, PyCThostFtdcSyncingInstrumentCommissionRateFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSyncingInstrumentCommissionRateFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSyncingInstrumentCommissionRateFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSyncingInstrumentCommissionRateFieldType_spec = {
    .name = "PyCTP.CThostFtdcSyncingInstrumentCommissionRateField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSyncingInstrumentCommissionRateFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSyncingInstrumentCommissionRateFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSyncingInstrumentCommissionRateFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSyncingInstrumentCommissionRateFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSyncingInstrumentCommissionRateFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSyncingInstrumentCommissionRateFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSyncingInstrumentCommissionRateFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSyncingInstrumentCommissionRateFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSyncingInstrumentCommissionRateField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncingInstrumentCommissionRateField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}