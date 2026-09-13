
#include "PyCThostFtdcMMInstrumentCommissionRateField.h"

///做市商合约手续费率

static int PyCThostFtdcMMInstrumentCommissionRateFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "InvestorRange", "BrokerID", "InvestorID", "OpenRatioByMoney", "OpenRatioByVolume", "CloseRatioByMoney", "CloseRatioByVolume", "CloseTodayRatioByMoney", "CloseTodayRatioByVolume", "InstrumentID", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcMMInstrumentCommissionRateField_reserve1 = NULL;
    Py_ssize_t CThostFtdcMMInstrumentCommissionRateField_reserve1_length = 0;

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    char CThostFtdcMMInstrumentCommissionRateField_InvestorRange = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcMMInstrumentCommissionRateField_BrokerID = NULL;
    Py_ssize_t CThostFtdcMMInstrumentCommissionRateField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcMMInstrumentCommissionRateField_InvestorID = NULL;
    Py_ssize_t CThostFtdcMMInstrumentCommissionRateField_InvestorID_length = 0;

    /// 开仓手续费率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcMMInstrumentCommissionRateField_OpenRatioByMoney = 0.0;

    /// 开仓手续费
    /// typedef double TThostFtdcRatioType
    double CThostFtdcMMInstrumentCommissionRateField_OpenRatioByVolume = 0.0;

    /// 平仓手续费率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcMMInstrumentCommissionRateField_CloseRatioByMoney = 0.0;

    /// 平仓手续费
    /// typedef double TThostFtdcRatioType
    double CThostFtdcMMInstrumentCommissionRateField_CloseRatioByVolume = 0.0;

    /// 平今手续费率
    /// typedef double TThostFtdcRatioType
    double CThostFtdcMMInstrumentCommissionRateField_CloseTodayRatioByMoney = 0.0;

    /// 平今手续费
    /// typedef double TThostFtdcRatioType
    double CThostFtdcMMInstrumentCommissionRateField_CloseTodayRatioByVolume = 0.0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcMMInstrumentCommissionRateField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcMMInstrumentCommissionRateField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#ddddddy#", (char **)kwlist
        , &CThostFtdcMMInstrumentCommissionRateField_reserve1, &CThostFtdcMMInstrumentCommissionRateField_reserve1_length
        , &CThostFtdcMMInstrumentCommissionRateField_InvestorRange
        , &CThostFtdcMMInstrumentCommissionRateField_BrokerID, &CThostFtdcMMInstrumentCommissionRateField_BrokerID_length
        , &CThostFtdcMMInstrumentCommissionRateField_InvestorID, &CThostFtdcMMInstrumentCommissionRateField_InvestorID_length
        , &CThostFtdcMMInstrumentCommissionRateField_OpenRatioByMoney
        , &CThostFtdcMMInstrumentCommissionRateField_OpenRatioByVolume
        , &CThostFtdcMMInstrumentCommissionRateField_CloseRatioByMoney
        , &CThostFtdcMMInstrumentCommissionRateField_CloseRatioByVolume
        , &CThostFtdcMMInstrumentCommissionRateField_CloseTodayRatioByMoney
        , &CThostFtdcMMInstrumentCommissionRateField_CloseTodayRatioByVolume
        , &CThostFtdcMMInstrumentCommissionRateField_InstrumentID, &CThostFtdcMMInstrumentCommissionRateField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcMMInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMMInstrumentCommissionRateFieldData>(self);
    CThostFtdcMMInstrumentCommissionRateField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcMMInstrumentCommissionRateField_reserve1 != NULL ) {
        if(CThostFtdcMMInstrumentCommissionRateField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcMMInstrumentCommissionRateField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcMMInstrumentCommissionRateField_reserve1, CThostFtdcMMInstrumentCommissionRateField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcMMInstrumentCommissionRateField_reserve1, sizeof(data->reserve1));
        CThostFtdcMMInstrumentCommissionRateField_reserve1 = NULL;
    }

    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    data->InvestorRange = CThostFtdcMMInstrumentCommissionRateField_InvestorRange;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcMMInstrumentCommissionRateField_BrokerID != NULL ) {
        if(CThostFtdcMMInstrumentCommissionRateField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcMMInstrumentCommissionRateField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcMMInstrumentCommissionRateField_BrokerID, CThostFtdcMMInstrumentCommissionRateField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcMMInstrumentCommissionRateField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcMMInstrumentCommissionRateField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcMMInstrumentCommissionRateField_InvestorID != NULL ) {
        if(CThostFtdcMMInstrumentCommissionRateField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcMMInstrumentCommissionRateField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcMMInstrumentCommissionRateField_InvestorID, CThostFtdcMMInstrumentCommissionRateField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcMMInstrumentCommissionRateField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcMMInstrumentCommissionRateField_InvestorID = NULL;
    }

    /// 开仓手续费率
    /// typedef double TThostFtdcRatioType
    data->OpenRatioByMoney = CThostFtdcMMInstrumentCommissionRateField_OpenRatioByMoney;

    /// 开仓手续费
    /// typedef double TThostFtdcRatioType
    data->OpenRatioByVolume = CThostFtdcMMInstrumentCommissionRateField_OpenRatioByVolume;

    /// 平仓手续费率
    /// typedef double TThostFtdcRatioType
    data->CloseRatioByMoney = CThostFtdcMMInstrumentCommissionRateField_CloseRatioByMoney;

    /// 平仓手续费
    /// typedef double TThostFtdcRatioType
    data->CloseRatioByVolume = CThostFtdcMMInstrumentCommissionRateField_CloseRatioByVolume;

    /// 平今手续费率
    /// typedef double TThostFtdcRatioType
    data->CloseTodayRatioByMoney = CThostFtdcMMInstrumentCommissionRateField_CloseTodayRatioByMoney;

    /// 平今手续费
    /// typedef double TThostFtdcRatioType
    data->CloseTodayRatioByVolume = CThostFtdcMMInstrumentCommissionRateField_CloseTodayRatioByVolume;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcMMInstrumentCommissionRateField_InstrumentID != NULL ) {
        if(CThostFtdcMMInstrumentCommissionRateField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcMMInstrumentCommissionRateField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcMMInstrumentCommissionRateField_InstrumentID, CThostFtdcMMInstrumentCommissionRateField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcMMInstrumentCommissionRateField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcMMInstrumentCommissionRateField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcMMInstrumentCommissionRateFieldType_repr(PyObject *self) {

    PyCThostFtdcMMInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMMInstrumentCommissionRateFieldData>(self);
    CThostFtdcMMInstrumentCommissionRateField *data = &(extra->data);

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMMInstrumentCommissionRateField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMMInstrumentCommissionRateField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcMMInstrumentCommissionRateFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcMMInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMMInstrumentCommissionRateFieldData>(self);
    CThostFtdcMMInstrumentCommissionRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcMMInstrumentCommissionRateFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMMInstrumentCommissionRateField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMMInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMMInstrumentCommissionRateFieldData>(self);
    CThostFtdcMMInstrumentCommissionRateField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者范围
/// typedef char TThostFtdcInvestorRangeType
static PyObject *PyCThostFtdcMMInstrumentCommissionRateFieldType_get_InvestorRange(PyObject *self, void *closure) {
    PyCThostFtdcMMInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMMInstrumentCommissionRateFieldData>(self);
    CThostFtdcMMInstrumentCommissionRateField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->InvestorRange), 1);
}

static int PyCThostFtdcMMInstrumentCommissionRateFieldType_set_InvestorRange(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcMMInstrumentCommissionRateField::InvestorRange)) {
        PyErr_SetString(PyExc_ValueError, "InvestorRange must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMMInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMMInstrumentCommissionRateFieldData>(self);
    CThostFtdcMMInstrumentCommissionRateField *data = &(extra->data);
    data->InvestorRange = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcMMInstrumentCommissionRateFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcMMInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMMInstrumentCommissionRateFieldData>(self);
    CThostFtdcMMInstrumentCommissionRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcMMInstrumentCommissionRateFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMMInstrumentCommissionRateField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMMInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMMInstrumentCommissionRateFieldData>(self);
    CThostFtdcMMInstrumentCommissionRateField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcMMInstrumentCommissionRateFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcMMInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMMInstrumentCommissionRateFieldData>(self);
    CThostFtdcMMInstrumentCommissionRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcMMInstrumentCommissionRateFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMMInstrumentCommissionRateField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMMInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMMInstrumentCommissionRateFieldData>(self);
    CThostFtdcMMInstrumentCommissionRateField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcMMInstrumentCommissionRateFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcMMInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMMInstrumentCommissionRateFieldData>(self);
    CThostFtdcMMInstrumentCommissionRateField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcMMInstrumentCommissionRateFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMMInstrumentCommissionRateField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMMInstrumentCommissionRateFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMMInstrumentCommissionRateFieldData>(self);
    CThostFtdcMMInstrumentCommissionRateField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcMMInstrumentCommissionRateFieldType_members[] = {
    /// 开仓手续费率
    /// typedef double TThostFtdcRatioType
    {
        .name = "OpenRatioByMoney",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMMInstrumentCommissionRateFieldData, data.OpenRatioByMoney),
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
        .offset = offsetof(PyCThostFtdcMMInstrumentCommissionRateFieldData, data.OpenRatioByVolume),
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
        .offset = offsetof(PyCThostFtdcMMInstrumentCommissionRateFieldData, data.CloseRatioByMoney),
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
        .offset = offsetof(PyCThostFtdcMMInstrumentCommissionRateFieldData, data.CloseRatioByVolume),
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
        .offset = offsetof(PyCThostFtdcMMInstrumentCommissionRateFieldData, data.CloseTodayRatioByMoney),
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
        .offset = offsetof(PyCThostFtdcMMInstrumentCommissionRateFieldData, data.CloseTodayRatioByVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("平今手续费")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcMMInstrumentCommissionRateFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcMMInstrumentCommissionRateFieldType_get_reserve1,
    .set = PyCThostFtdcMMInstrumentCommissionRateFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 投资者范围
    /// typedef char TThostFtdcInvestorRangeType
    {
    .name = "InvestorRange",
    .get = PyCThostFtdcMMInstrumentCommissionRateFieldType_get_InvestorRange,
    .set = PyCThostFtdcMMInstrumentCommissionRateFieldType_set_InvestorRange,
    .doc = PyDoc_STR("投资者范围"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcMMInstrumentCommissionRateFieldType_get_BrokerID,
    .set = PyCThostFtdcMMInstrumentCommissionRateFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcMMInstrumentCommissionRateFieldType_get_InvestorID,
    .set = PyCThostFtdcMMInstrumentCommissionRateFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcMMInstrumentCommissionRateFieldType_get_InstrumentID,
    .set = PyCThostFtdcMMInstrumentCommissionRateFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcMMInstrumentCommissionRateFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcMMInstrumentCommissionRateField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("做市商合约手续费率")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcMMInstrumentCommissionRateFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcMMInstrumentCommissionRateFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcMMInstrumentCommissionRateFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcMMInstrumentCommissionRateFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcMMInstrumentCommissionRateFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcMMInstrumentCommissionRateFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("做市商合约手续费率")},
    {Py_tp_members, PyCThostFtdcMMInstrumentCommissionRateFieldType_members},
    {Py_tp_getset, PyCThostFtdcMMInstrumentCommissionRateFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcMMInstrumentCommissionRateFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcMMInstrumentCommissionRateFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcMMInstrumentCommissionRateFieldType_spec = {
    .name = "PyCTP.CThostFtdcMMInstrumentCommissionRateField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcMMInstrumentCommissionRateFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcMMInstrumentCommissionRateFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcMMInstrumentCommissionRateFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcMMInstrumentCommissionRateFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcMMInstrumentCommissionRateFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcMMInstrumentCommissionRateFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcMMInstrumentCommissionRateFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcMMInstrumentCommissionRateFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcMMInstrumentCommissionRateField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMMInstrumentCommissionRateField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}